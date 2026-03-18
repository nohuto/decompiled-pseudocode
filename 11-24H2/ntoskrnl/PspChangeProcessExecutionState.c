/*
 * XREFs of PspChangeProcessExecutionState @ 0x140AD16D4
 * Callers:
 *     PspExecuteJobFreezeThawCallback @ 0x140483210 (PspExecuteJobFreezeThawCallback.c)
 *     PsSwapProcessWorkingSet @ 0x140774624 (PsSwapProcessWorkingSet.c)
 *     PspInsertThread @ 0x1408A59BC (PspInsertThread.c)
 *     PspRemoveProcessFromJobChain @ 0x1408A9078 (PspRemoveProcessFromJobChain.c)
 *     PspAssignProcessToJob @ 0x140A173D0 (PspAssignProcessToJob.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x1403025D0 (PsGetSessionIdEx.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     MmOutSwapWorkingSet @ 0x140404630 (MmOutSwapWorkingSet.c)
 *     MmInSwapWorkingSet @ 0x140404E48 (MmInSwapWorkingSet.c)
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     PsThawMultiProcess @ 0x1404EEE60 (PsThawMultiProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PsFreezeProcess @ 0x14093A750 (PsFreezeProcess.c)
 *     PsInvokeWin32Callout @ 0x1409BADD0 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PspChangeProcessExecutionState(PEPROCESS Process)
{
  unsigned int v1; // r12d
  char v2; // r13
  unsigned __int32 i; // eax
  unsigned __int32 v5; // r14d
  unsigned __int32 v6; // ecx
  char v7; // r15
  unsigned __int8 v8; // bl
  char v9; // bl
  char v10; // di
  int v11; // eax
  unsigned __int32 j; // eax
  unsigned __int32 v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  signed __int32 v18; // [rsp+28h] [rbp-49h]
  signed __int32 v19; // [rsp+2Ch] [rbp-45h]
  char v20; // [rsp+30h] [rbp-41h]
  int SessionId; // [rsp+34h] [rbp-3Dh] BYREF
  int v22; // [rsp+38h] [rbp-39h] BYREF
  __int128 v23; // [rsp+40h] [rbp-31h] BYREF
  PEPROCESS v24; // [rsp+50h] [rbp-21h]
  __int128 v25; // [rsp+58h] [rbp-19h] BYREF
  PEPROCESS v26; // [rsp+68h] [rbp-9h]
  _OWORD v27[3]; // [rsp+70h] [rbp-1h] BYREF

  memset(v27, 0, sizeof(v27));
  v20 = 0;
  v1 = 0;
  v2 = 0;
  _m_prefetchw(&Process[4].Padding[3]);
  for ( i = Process[4].Padding[3]; (i & 1) == 0; i = v18 )
  {
    v5 = HIBYTE(i);
    v6 = HIWORD(i);
    if ( HIBYTE(i) == BYTE2(i) )
      break;
    v18 = _InterlockedCompareExchange((volatile signed __int32 *)&Process[4].Padding[3], i | 1, i);
    if ( v18 == i )
    {
LABEL_7:
      v7 = 0;
      v8 = v6 ^ v5;
      if ( !v2 )
      {
        KiStackAttachProcess(Process, 0, (__int64)v27);
        v2 = 1;
      }
      if ( (v8 & 2) != 0 )
      {
        if ( (v5 & 2) != 0 )
          v7 = 1;
        else
          MmInSwapWorkingSet(Process);
      }
      if ( (v8 & 4) != 0 && (v5 & 4) == 0 )
      {
        SessionId = 0;
        LODWORD(v24) = 0;
        v23 = 0LL;
        if ( Process[1].Padding[2] )
        {
          SessionId = PsGetSessionIdEx((__int64)Process);
          *((_QWORD *)&v23 + 1) = 0LL;
          v24 = Process;
          PsInvokeWin32Callout(44, &v23, 0, (__int64)&SessionId);
        }
      }
      if ( (v8 & 1) != 0 )
      {
        v20 = 1;
        if ( (v5 & 1) != 0 )
          PsFreezeProcess((__int64)Process, 1);
        else
          PsThawMultiProcess((__int64)Process, 1, 1u);
      }
      if ( ((unsigned __int8)v5 & v8 & 4) != 0 )
      {
        v22 = 0;
        LODWORD(v26) = 0;
        v25 = 0LL;
        if ( Process[1].Padding[2] )
        {
          v22 = PsGetSessionIdEx((__int64)Process);
          *((_QWORD *)&v25 + 1) = 0LL;
          v26 = Process;
          PsInvokeWin32Callout(43, &v25, 0, (__int64)&v22);
        }
      }
      v9 = v5;
      v10 = v5;
      if ( v7 )
      {
        v11 = MmOutSwapWorkingSet(Process, PspOutSwapSharedPages != 0);
        if ( v11 < 0 )
        {
          if ( v11 == -1073741671 )
            v1 = -1073741671;
          v9 = v5 & 0xFD;
        }
      }
      _m_prefetchw(&Process[4].Padding[3]);
      for ( j = Process[4].Padding[3]; ; j = v18 )
      {
        v19 = j;
        v13 = HIBYTE(j);
        LOBYTE(v5) = v13;
        if ( (_BYTE)v13 != v10 && (_BYTE)v13 != v9 )
        {
          LOBYTE(v6) = v9;
          goto LABEL_7;
        }
        BYTE2(v18) = v9;
        LOWORD(v18) = v18 & 0xFFFE;
        HIBYTE(v18) = v9;
        v18 = _InterlockedCompareExchange((volatile signed __int32 *)&Process[4].Padding[3], v18, v19);
        if ( v18 == v19 )
          break;
      }
      KiUnstackDetachProcess((__int64)v27, 0);
      if ( v20 && ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspMmcssExtensionHost) )
      {
        guard_dispatch_icall_no_overrides(Process, v14, v15, v16);
        ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspMmcssExtensionHost);
      }
      return v1;
    }
  }
  return v1;
}
