/*
 * XREFs of DpiFdoMessageInterruptRoutine @ 0x140012510
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DpiFdoMessageInterruptRoutine(__int64 a1, __int64 a2, __int64 a3)
{
  struct DXGTHREAD *v3; // rbx
  unsigned int v4; // esi
  int v6; // r14d
  __int64 v7; // rdi
  struct DXGTHREAD *Current; // rax
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int8 v11; // si
  __int64 v12; // r8

  v3 = 0LL;
  v4 = a3;
  v6 = -1;
  v7 = qword_14015E4B0 & 2;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v6 = 4014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 4014);
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    Current = DXGTHREAD::GetCurrent();
    v3 = Current;
    if ( Current )
    {
      if ( *((int *)Current + 13) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 201;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_ProfilerEntryCount >= 0", 201LL, 0LL, 0LL, 0LL, 0LL);
      }
      v9 = *((_DWORD *)v3 + 13);
      if ( !v9 )
        *((_DWORD *)v3 + 14) = 4014;
      *((_DWORD *)v3 + 13) = v9 + 1;
    }
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(a2 + 64) + 40LL) + 184LL))(
          *(_QWORD *)(*(_QWORD *)(a2 + 64) + 48LL),
          v4);
  if ( v3 )
  {
    if ( *((int *)v3 + 13) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 211;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_ProfilerEntryCount > 0", 211LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*((_DWORD *)v3 + 13))-- == 1 )
      *((_DWORD *)v3 + 14) = -1;
  }
  if ( v7 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v12, v6);
  return v11;
}
