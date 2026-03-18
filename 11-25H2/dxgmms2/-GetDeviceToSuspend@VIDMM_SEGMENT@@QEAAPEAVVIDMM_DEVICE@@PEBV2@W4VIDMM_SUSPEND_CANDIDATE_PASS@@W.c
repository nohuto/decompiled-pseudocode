/*
 * XREFs of ?GetDeviceToSuspend@VIDMM_SEGMENT@@QEAAPEAVVIDMM_DEVICE@@PEBV2@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAPEAV2@@Z @ 0x140111564
 * Callers:
 *     VidMmSuspendDevices @ 0x1400DF9D0 (VidMmSuspendDevices.c)
 * Callees:
 *     ?CanSuspendThisDevice@VIDMM_DEVICE@@QEAA_NPEBV1@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@@Z @ 0x1400DF8E0 (-CanSuspendThisDevice@VIDMM_DEVICE@@QEAA_NPEBV1@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_P.c)
 *     ?IsResumedRecently@VIDMM_DEVICE@@QEBA_NXZ @ 0x14010595C (-IsResumedRecently@VIDMM_DEVICE@@QEBA_NXZ.c)
 *     ?IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z @ 0x1401064AC (-IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z.c)
 */

VIDMM_DEVICE *__fastcall VIDMM_SEGMENT::GetDeviceToSuspend(
        __int64 a1,
        _QWORD *a2,
        int a3,
        unsigned __int8 a4,
        struct VIDMM_DEVICE **a5)
{
  _QWORD *v5; // rbp
  _QWORD *v6; // rsi
  _QWORD *v8; // rbx
  _QWORD *v9; // rdi
  _QWORD *v10; // r15
  _QWORD *v11; // r14
  VIDMM_DEVICE *v12; // rdi
  VIDMM_DEVICE *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rcx

  v5 = (_QWORD *)(a1 + 192);
  v6 = *(_QWORD **)(a1 + 192);
  while ( 1 )
  {
    v8 = v6;
    if ( v6 == v5 )
      break;
    v9 = v6 - 3;
    v6 = (_QWORD *)*v6;
    if ( !(unsigned __int8)PsIsSystemProcess(*(_QWORD *)*v9) && (*(_BYTE *)(*(_QWORD *)(*v9 + 32LL) + 408LL) & 1) == 0 )
    {
      v10 = v9 + 5;
      v11 = (_QWORD *)v9[5];
      while ( v11 != v10 )
      {
        v12 = (VIDMM_DEVICE *)v11[4];
        v11 = (_QWORD *)*v11;
        if ( VIDMM_DEVICE::CanSuspendThisDevice(v12, a2, a3, a4) )
        {
          if ( !VIDMM_DEVICE::IsResumedRecently(v12) )
          {
            if ( g_IsInternalReleaseOrDbg )
            {
              *(_QWORD *)(WdLogNewEntry5_WdTrace(v13) + 24) = v12;
              WdLogGlobalForLineNumber = 6747;
            }
            v15 = *v8;
            if ( *(_QWORD **)(*v8 + 8LL) != v8
              || (v16 = (_QWORD *)v8[1], (_QWORD *)*v16 != v8)
              || (*v16 = v15, *(_QWORD *)(v15 + 8) = v16, v17 = *(_QWORD **)(a1 + 200), *v17 != a1 + 192) )
            {
              __fastfail(3u);
            }
            *v8 = a1 + 192;
            v8[1] = v17;
            *v17 = v8;
            *(_QWORD *)(a1 + 200) = v8;
            return v12;
          }
          if ( VIDMM_DEVICE::IsBetterYieldCandidate(v13, *a5) )
          {
            if ( g_IsInternalReleaseOrDbg )
            {
              *(_QWORD *)(WdLogNewEntry5_WdTrace(v14) + 24) = v12;
              WdLogGlobalForLineNumber = 6763;
            }
            *a5 = v12;
          }
        }
      }
    }
  }
  return 0LL;
}
