/*
 * XREFs of DpiFdoLineInterruptRoutine @ 0x140033DA0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

char __fastcall DpiFdoLineInterruptRoutine(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  struct DXGTHREAD *v4; // rbx
  __int64 v6; // rdi
  struct DXGTHREAD *Current; // rax
  int v8; // eax
  __int64 v9; // rcx
  char v10; // bp
  __int64 v11; // r8

  v3 = -1;
  v4 = 0LL;
  v6 = qword_14015E4B0 & 2;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v3 = 4014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 4014);
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    Current = DXGTHREAD::GetCurrent();
    v4 = Current;
    if ( Current )
    {
      if ( *((int *)Current + 13) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 201;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_ProfilerEntryCount >= 0", 201LL, 0LL, 0LL, 0LL, 0LL);
      }
      v8 = *((_DWORD *)v4 + 13);
      if ( !v8 )
        *((_DWORD *)v4 + 14) = 4014;
      *((_DWORD *)v4 + 13) = v8 + 1;
    }
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(a2 + 64) + 40LL) + 184LL))(
          *(_QWORD *)(*(_QWORD *)(a2 + 64) + 48LL),
          0LL);
  if ( v4 )
  {
    if ( *((int *)v4 + 13) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 211;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_ProfilerEntryCount > 0", 211LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*((_DWORD *)v4 + 13))-- == 1 )
      *((_DWORD *)v4 + 14) = -1;
  }
  if ( v6 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit, v11, v3);
  return v10;
}
