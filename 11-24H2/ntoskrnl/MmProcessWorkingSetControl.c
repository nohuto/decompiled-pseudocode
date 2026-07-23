/*
 * XREFs of MmProcessWorkingSetControl @ 0x140A434A4
 * Callers:
 *     VmpPauseResumeNotify @ 0x14079F348 (VmpPauseResumeNotify.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1403C752C (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiEmptyWorkingSet @ 0x1403C9014 (MiEmptyWorkingSet.c)
 *     MiLogWsEmptyControl @ 0x1404A993C (MiLogWsEmptyControl.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PsSwapProcessWorkingSet @ 0x140774844 (PsSwapProcessWorkingSet.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     SmStoreCompressionStop @ 0x140A4375C (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x140A438B0 (SmStoreCompressionStart.c)
 */

__int64 __fastcall MmProcessWorkingSetControl(
        ULONG_PTR BugCheckParameter1,
        __int64 *a2,
        unsigned int a3,
        KPROCESSOR_MODE a4)
{
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  _KPROCESS *v9; // rsi
  unsigned int v10; // r12d
  unsigned int v11; // ebx
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // [rsp+40h] [rbp-98h]
  unsigned int v15; // [rsp+48h] [rbp-90h]
  PVOID Object[2]; // [rsp+50h] [rbp-88h] BYREF
  _OWORD v17[3]; // [rsp+60h] [rbp-78h] BYREF

  Object[1] = (PVOID)BugCheckParameter1;
  Object[0] = 0LL;
  memset(v17, 0, sizeof(v17));
  if ( a3 < 0xC )
    return 3221225476LL;
  v14 = *a2;
  v15 = *((_DWORD *)a2 + 2);
  if ( (unsigned int)*a2 != 3 )
    return 3221225561LL;
  if ( HIDWORD(v14) >= 2 )
    return 3221225485LL;
  if ( !HIDWORD(v14) && !SeSinglePrivilegeCheck(SeDebugPrivilege, a4) )
    return 3221225569LL;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             0x2000,
             (__int64)PsProcessType,
             a4,
             0x73576D4Du,
             Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v9 = (_KPROCESS *)Object[0];
    if ( KeGetCurrentThread()->ApcState.Process == Object[0] )
    {
      LODWORD(Object[0]) = 0;
    }
    else
    {
      LODWORD(Object[0]) = 1;
      KiStackAttachProcess(v9, 0, (__int64)v17);
    }
    if ( HIDWORD(v14) )
    {
      if ( (v15 & 0xFFFFFFC0) == 0 )
      {
        if ( (v15 & 1) != ((v15 & 2) == 0)
          && ((v15 & 8) == 0 || (v15 & 2) != 0)
          && ((v15 & 0x10) == 0 || (v15 & 8) != 0) )
        {
          MiLogWsEmptyControl((__int64)&v9[2].ReadyListHead.Blink);
          v10 = (v15 >> 3) & 4;
          if ( (v15 & 1) != 0 )
          {
            if ( (v15 & 8) != 0 )
              SmStoreCompressionStart();
            v11 = MiEmptyWorkingSetPrivatePagesByVa((__int64)&v9[2].ReadyListHead.Blink, v10);
            if ( (v15 & 8) != 0 )
              SmStoreCompressionStop((v15 & 0x10) != 0);
            goto LABEL_18;
          }
          v13 = v10 | 1;
          if ( (v15 & 4) == 0 )
            v13 = v10;
          v12 = MiEmptyWorkingSet((__int64)&v9[2].ReadyListHead.Blink, v13);
          goto LABEL_39;
        }
        v11 = -1073741637;
LABEL_18:
        if ( LODWORD(Object[0]) )
          KiUnstackDetachProcess((__int64)v17, 0, v7, v8);
        ObfDereferenceObjectWithTag(v9, 0x73576D4Du);
        return v11;
      }
    }
    else if ( (v15 & 0xFFFFFFFE) == 0 )
    {
      v12 = PsSwapProcessWorkingSet(v9, (v15 & 1) == 0);
LABEL_39:
      v11 = v12;
      goto LABEL_18;
    }
    v11 = -1073741811;
    goto LABEL_18;
  }
  return result;
}
