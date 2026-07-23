/*
 * XREFs of PspChangeProcessExecutionState @ 0x140ACFA40
 * Callers:
 *     PspExecuteJobFreezeThawCallback @ 0x14047E350 (PspExecuteJobFreezeThawCallback.c)
 *     PsSwapProcessWorkingSet @ 0x140774844 (PsSwapProcessWorkingSet.c)
 *     PspInsertThread @ 0x1408FBFD4 (PspInsertThread.c)
 *     PspRemoveProcessFromJobChain @ 0x1408FF2D8 (PspRemoveProcessFromJobChain.c)
 *     PspAssignProcessToJob @ 0x140A105B0 (PspAssignProcessToJob.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     ExGetExtensionTable @ 0x140398F94 (ExGetExtensionTable.c)
 *     MmInSwapWorkingSet @ 0x1403C6A50 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1403C6F10 (MmOutSwapWorkingSet.c)
 *     ExReleaseExtensionTable @ 0x1404450F0 (ExReleaseExtensionTable.c)
 *     PsThawMultiProcess @ 0x1404E6564 (PsThawMultiProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PsInvokeWin32Callout @ 0x1409A1420 (PsInvokeWin32Callout.c)
 *     PsFreezeProcess @ 0x140ACF964 (PsFreezeProcess.c)
 */

__int64 __fastcall PspChangeProcessExecutionState(PEPROCESS Process, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r12d
  char v5; // r13
  unsigned __int32 v7; // eax
  __int64 v8; // r8
  unsigned __int32 v9; // r14d
  unsigned __int32 v10; // ecx
  char v11; // r15
  unsigned __int8 v12; // bl
  char v13; // bl
  char v14; // di
  int v15; // eax
  unsigned __int32 i; // eax
  unsigned __int32 v17; // eax
  __int64 v18; // rdx
  signed __int32 v20; // [rsp+28h] [rbp-49h]
  signed __int32 v21; // [rsp+2Ch] [rbp-45h]
  char v22; // [rsp+30h] [rbp-41h]
  int SessionId; // [rsp+34h] [rbp-3Dh] BYREF
  int v24; // [rsp+38h] [rbp-39h] BYREF
  __int128 v25; // [rsp+40h] [rbp-31h] BYREF
  PEPROCESS v26; // [rsp+50h] [rbp-21h]
  __int128 v27; // [rsp+58h] [rbp-19h] BYREF
  PEPROCESS v28; // [rsp+68h] [rbp-9h]
  _OWORD v29[3]; // [rsp+70h] [rbp-1h] BYREF

  memset(v29, 0, sizeof(v29));
  v22 = 0;
  v4 = 0;
  v5 = 0;
  _m_prefetchw(&Process[4].Padding[3]);
  v7 = Process[4].Padding[3];
  v8 = 1LL;
  while ( (v7 & 1) == 0 )
  {
    v9 = HIBYTE(v7);
    v10 = HIWORD(v7);
    if ( HIBYTE(v7) == BYTE2(v7) )
      break;
    v20 = _InterlockedCompareExchange((volatile signed __int32 *)&Process[4].Padding[3], v7 | 1, v7);
    if ( v20 == v7 )
    {
LABEL_7:
      v11 = 0;
      v12 = v10 ^ v9;
      if ( !v5 )
      {
        KiStackAttachProcess(Process, 0, (__int64)v29);
        v8 = 1LL;
        v5 = 1;
      }
      if ( (v12 & 2) != 0 )
      {
        if ( (v9 & 2) != 0 )
          v11 = 1;
        else
          MmInSwapWorkingSet(Process);
      }
      if ( (v12 & 4) != 0 && (v9 & 4) == 0 )
      {
        SessionId = 0;
        LODWORD(v26) = 0;
        v25 = 0LL;
        if ( Process[1].Padding[2] )
        {
          SessionId = PsGetSessionIdEx((__int64)Process);
          *((_QWORD *)&v25 + 1) = 0LL;
          v26 = Process;
          PsInvokeWin32Callout(44, &v25, 0, (__int64)&SessionId);
        }
      }
      if ( (v12 & 1) != 0 )
      {
        v22 = 1;
        if ( (v9 & 1) != 0 )
          PsFreezeProcess((__int64)Process, 1);
        else
          PsThawMultiProcess((__int64)Process, 1, 1u);
      }
      if ( ((unsigned __int8)v9 & v12 & 4) != 0 )
      {
        v24 = 0;
        LODWORD(v28) = 0;
        v27 = 0LL;
        if ( Process[1].Padding[2] )
        {
          v24 = PsGetSessionIdEx((__int64)Process);
          *((_QWORD *)&v27 + 1) = 0LL;
          v28 = Process;
          PsInvokeWin32Callout(43, &v27, 0, (__int64)&v24);
        }
      }
      v13 = v9;
      v14 = v9;
      if ( v11 )
      {
        v15 = MmOutSwapWorkingSet(Process, PspOutSwapSharedPages != 0);
        if ( v15 < 0 )
        {
          if ( v15 == -1073741671 )
            v4 = -1073741671;
          v13 = v9 & 0xFD;
        }
      }
      _m_prefetchw(&Process[4].Padding[3]);
      for ( i = Process[4].Padding[3]; ; i = v20 )
      {
        v21 = i;
        v17 = HIBYTE(i);
        LOBYTE(v9) = v17;
        if ( (_BYTE)v17 != v14 && (_BYTE)v17 != v13 )
        {
          LOBYTE(v10) = v13;
          v8 = 1LL;
          goto LABEL_7;
        }
        BYTE2(v20) = v13;
        LOWORD(v20) = v20 & 0xFFFE;
        HIBYTE(v20) = v13;
        v20 = _InterlockedCompareExchange((volatile signed __int32 *)&Process[4].Padding[3], v20, v21);
        if ( v20 == v21 )
          break;
      }
      KiUnstackDetachProcess((__int64)v29, 0, v8, a4);
      if ( v22 && ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspMmcssExtensionHost) )
      {
        guard_dispatch_icall_no_overrides(Process, v18);
        ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspMmcssExtensionHost);
      }
      return v4;
    }
    v7 = v20;
  }
  return v4;
}
