/*
 * XREFs of MmProcessWorkingSetControl @ 0x140A4A36C
 * Callers:
 *     VmpPauseResumeNotify @ 0x14078FE78 (VmpPauseResumeNotify.c)
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1403D8D10 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiEmptyWorkingSet @ 0x1403D931C (MiEmptyWorkingSet.c)
 *     MiLogWsEmptyControl @ 0x1404AE0C0 (MiLogWsEmptyControl.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PsSwapProcessWorkingSet @ 0x140764C54 (PsSwapProcessWorkingSet.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     SmStoreCompressionStop @ 0x140A4A624 (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x140A4A778 (SmStoreCompressionStart.c)
 */

__int64 __fastcall MmProcessWorkingSetControl(
        ULONG_PTR BugCheckParameter1,
        __int64 *a2,
        unsigned int a3,
        KPROCESSOR_MODE a4)
{
  __int64 result; // rax
  _KPROCESS *v7; // rsi
  unsigned int v8; // r12d
  unsigned int v9; // ebx
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // [rsp+40h] [rbp-98h]
  unsigned int v13; // [rsp+48h] [rbp-90h]
  PVOID Object[2]; // [rsp+50h] [rbp-88h] BYREF
  _OWORD v15[3]; // [rsp+60h] [rbp-78h] BYREF

  Object[1] = (PVOID)BugCheckParameter1;
  Object[0] = 0LL;
  memset(v15, 0, sizeof(v15));
  if ( a3 < 0xC )
    return 3221225476LL;
  v12 = *a2;
  v13 = *((_DWORD *)a2 + 2);
  if ( (unsigned int)*a2 != 3 )
    return 3221225561LL;
  if ( HIDWORD(v12) >= 2 )
    return 3221225485LL;
  if ( !HIDWORD(v12) && !SeSinglePrivilegeCheck(SeDebugPrivilege, a4) )
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
    v7 = (_KPROCESS *)Object[0];
    if ( KeGetCurrentThread()->ApcState.Process == Object[0] )
    {
      LODWORD(Object[0]) = 0;
    }
    else
    {
      LODWORD(Object[0]) = 1;
      KiStackAttachProcess(v7, 0, (__int64)v15);
    }
    if ( HIDWORD(v12) )
    {
      if ( (v13 & 0xFFFFFFC0) == 0 )
      {
        if ( (v13 & 1) != ((v13 & 2) == 0)
          && ((v13 & 8) == 0 || (v13 & 2) != 0)
          && ((v13 & 0x10) == 0 || (v13 & 8) != 0) )
        {
          MiLogWsEmptyControl((__int64)&v7[2].ReadyListHead.Blink);
          v8 = (v13 >> 3) & 4;
          if ( (v13 & 1) != 0 )
          {
            if ( (v13 & 8) != 0 )
              SmStoreCompressionStart();
            v9 = MiEmptyWorkingSetPrivatePagesByVa((__int64)&v7[2].ReadyListHead.Blink, v8);
            if ( (v13 & 8) != 0 )
              SmStoreCompressionStop((v13 & 0x10) != 0);
            goto LABEL_18;
          }
          v11 = v8 | 1;
          if ( (v13 & 4) == 0 )
            v11 = v8;
          v10 = MiEmptyWorkingSet((__int64)&v7[2].ReadyListHead.Blink, v11);
          goto LABEL_39;
        }
        v9 = -1073741637;
LABEL_18:
        if ( LODWORD(Object[0]) )
          KiUnstackDetachProcess((__int64)v15, 0LL);
        ObfDereferenceObjectWithTag(v7, 0x73576D4Du);
        return v9;
      }
    }
    else if ( (v13 & 0xFFFFFFFE) == 0 )
    {
      v10 = PsSwapProcessWorkingSet(v7, (v13 & 1) == 0);
LABEL_39:
      v9 = v10;
      goto LABEL_18;
    }
    v9 = -1073741811;
    goto LABEL_18;
  }
  return result;
}
