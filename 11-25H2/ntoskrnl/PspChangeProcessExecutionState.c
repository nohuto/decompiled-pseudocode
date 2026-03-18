/*
 * XREFs of PspChangeProcessExecutionState @ 0x140AC7CBC
 * Callers:
 *     PspExecuteJobFreezeThawCallback @ 0x140482460 (PspExecuteJobFreezeThawCallback.c)
 *     PsSwapProcessWorkingSet @ 0x140764C54 (PsSwapProcessWorkingSet.c)
 *     PspRemoveProcessFromJobChain @ 0x1408E09E4 (PspRemoveProcessFromJobChain.c)
 *     PspInsertThread @ 0x1408F1D7C (PspInsertThread.c)
 *     PspAssignProcessToJob @ 0x140A0E960 (PspAssignProcessToJob.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     PspDetachSession @ 0x1403D6470 (PspDetachSession.c)
 *     MmOutSwapWorkingSet @ 0x1403D8E1C (MmOutSwapWorkingSet.c)
 *     ExGetExtensionTable @ 0x14042C694 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1404516B0 (ExReleaseExtensionTable.c)
 *     MmInSwapWorkingSet @ 0x140454FFC (MmInSwapWorkingSet.c)
 *     PsThawMultiProcess @ 0x1404EBCE4 (PsThawMultiProcess.c)
 *     Feature_Servicing_Mm_SessionRef__private_IsEnabledNoReportingNoInline @ 0x1405D9F84 (Feature_Servicing_Mm_SessionRef__private_IsEnabledNoReportingNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PsInvokeWin32Callout @ 0x140961150 (PsInvokeWin32Callout.c)
 *     PsFreezeProcess @ 0x140AC7BE0 (PsFreezeProcess.c)
 *     PspAttachSession @ 0x140AC8888 (PspAttachSession.c)
 */

__int64 __fastcall PspChangeProcessExecutionState(PEPROCESS Process)
{
  unsigned int v1; // r13d
  char v2; // r12
  unsigned __int32 v4; // eax
  unsigned __int16 v5; // r8
  unsigned __int32 v6; // r14d
  unsigned __int32 v7; // ecx
  char v8; // r15
  unsigned __int8 v9; // bl
  unsigned int SessionId; // eax
  char v11; // bl
  char v12; // di
  int v13; // eax
  unsigned __int32 i; // eax
  unsigned __int32 v15; // eax
  signed __int32 v17; // [rsp+28h] [rbp-89h]
  signed __int32 v18; // [rsp+2Ch] [rbp-85h]
  char v19; // [rsp+30h] [rbp-81h]
  int v20; // [rsp+34h] [rbp-7Dh] BYREF
  int v21; // [rsp+38h] [rbp-79h] BYREF
  __int64 v22; // [rsp+40h] [rbp-71h] BYREF
  __int128 v23; // [rsp+48h] [rbp-69h] BYREF
  PEPROCESS v24; // [rsp+58h] [rbp-59h]
  __int128 v25; // [rsp+60h] [rbp-51h] BYREF
  PEPROCESS v26; // [rsp+70h] [rbp-41h]
  _OWORD v27[3]; // [rsp+78h] [rbp-39h] BYREF
  _OWORD v28[3]; // [rsp+A8h] [rbp-9h] BYREF

  v19 = 0;
  memset(v28, 0, sizeof(v28));
  v1 = 0;
  v2 = 0;
  v22 = 0LL;
  memset(v27, 0, sizeof(v27));
  _m_prefetchw(&Process[4].Padding[3]);
  v4 = Process[4].Padding[3];
  v5 = (unsigned __int8)v22 + 1;
  while ( ((unsigned __int8)v4 & (unsigned __int8)v5) == 0 )
  {
    v6 = HIBYTE(v4);
    v7 = HIWORD(v4);
    if ( HIBYTE(v4) == BYTE2(v4) )
      break;
    v17 = _InterlockedCompareExchange((volatile signed __int32 *)&Process[4].Padding[3], v5 | v4, v4);
    if ( v17 == v4 )
    {
LABEL_7:
      v8 = 0;
      v9 = v7 ^ v6;
      if ( !v2 )
      {
        KiStackAttachProcess(Process, 0, (__int64)v28);
        if ( !(unsigned int)Feature_Servicing_Mm_SessionRef__private_IsEnabledNoReportingNoInline() )
        {
          SessionId = PsGetSessionIdEx((__int64)Process);
          if ( SessionId != -1 )
            PspAttachSession(SessionId, v27, &v22);
        }
        LOBYTE(v5) = 1;
        v2 = 1;
      }
      if ( (v9 & 2) != 0 )
      {
        if ( (v6 & 2) != 0 )
          v8 = v5;
        else
          MmInSwapWorkingSet(Process);
      }
      if ( (v9 & 4) != 0 && (v6 & 4) == 0 )
      {
        v20 = 0;
        LODWORD(v24) = 0;
        v23 = 0LL;
        if ( Process[1].Padding[2] )
        {
          v20 = PsGetSessionIdEx((__int64)Process);
          *((_QWORD *)&v23 + 1) = 0LL;
          v24 = Process;
          PsInvokeWin32Callout(44, &v23, 0, (__int64)&v20);
        }
      }
      if ( (v9 & 1) != 0 )
      {
        v19 = 1;
        if ( (v6 & 1) != 0 )
          PsFreezeProcess((__int64)Process, 1);
        else
          PsThawMultiProcess((__int64)Process, 1, 1u);
      }
      if ( ((unsigned __int8)v6 & v9 & 4) != 0 )
      {
        v21 = 0;
        LODWORD(v26) = 0;
        v25 = 0LL;
        if ( Process[1].Padding[2] )
        {
          v21 = PsGetSessionIdEx((__int64)Process);
          *((_QWORD *)&v25 + 1) = 0LL;
          v26 = Process;
          PsInvokeWin32Callout(43, &v25, 0, (__int64)&v21);
        }
      }
      v11 = v6;
      v12 = v6;
      if ( v8 )
      {
        v13 = MmOutSwapWorkingSet(Process, PspOutSwapSharedPages != 0);
        if ( v13 < 0 )
        {
          if ( v13 == -1073741671 )
            v1 = -1073741671;
          v11 = v6 & 0xFD;
        }
      }
      _m_prefetchw(&Process[4].Padding[3]);
      for ( i = Process[4].Padding[3]; ; i = v17 )
      {
        v18 = i;
        v15 = HIBYTE(i);
        LOBYTE(v6) = v15;
        if ( (_BYTE)v15 != v12 && (_BYTE)v15 != v11 )
        {
          LOBYTE(v7) = v11;
          LOBYTE(v5) = 1;
          goto LABEL_7;
        }
        BYTE2(v17) = v11;
        LOWORD(v17) = v17 & 0xFFFE;
        HIBYTE(v17) = v11;
        v17 = _InterlockedCompareExchange((volatile signed __int32 *)&Process[4].Padding[3], v17, v18);
        if ( v17 == v18 )
          break;
      }
      if ( !(unsigned int)Feature_Servicing_Mm_SessionRef__private_IsEnabledNoReportingNoInline() && v22 )
        PspDetachSession(v22, (__int64)v27);
      KiUnstackDetachProcess((__int64)v28, 0LL);
      if ( v19 && ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspMmcssExtensionHost) )
      {
        guard_dispatch_icall_no_overrides(Process);
        ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspMmcssExtensionHost);
      }
      return v1;
    }
    v4 = v17;
  }
  return v1;
}
