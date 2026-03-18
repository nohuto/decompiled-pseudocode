/*
 * XREFs of IovpCallDriverWithStackBuffer @ 0x140B82950
 * Callers:
 *     IovCallDriver @ 0x140BA7D40 (IovCallDriver.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopfCallDriver @ 0x1403741A0 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x14049F664 (IopPerfCallDriver.c)
 *     VfBugCheckNoStackUsage @ 0x140611F88 (VfBugCheckNoStackUsage.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     IovpValidateDeviceObject @ 0x140B82C20 (IovpValidateDeviceObject.c)
 *     VfAfterCallDriver @ 0x140B8DA94 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x140B8DC68 (VfBeforeCallDriver.c)
 */

__int64 __fastcall IovpCallDriverWithStackBuffer(PVOID Object, ULONG_PTR a2, __int64 a3)
{
  bool v6; // zf
  KIRQL v7; // al
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // eax
  unsigned int v12; // [rsp+20h] [rbp-89h] BYREF
  _BYTE v13[157]; // [rsp+28h] [rbp-81h] BYREF
  KIRQL v14; // [rsp+C5h] [rbp+1Ch]
  PVOID v15; // [rsp+C8h] [rbp+1Fh]
  ULONG_PTR v16; // [rsp+D0h] [rbp+27h]
  __int64 v17; // [rsp+D8h] [rbp+2Fh]

  memset_0(v13, 0, 0xC0uLL);
  v6 = *(_WORD *)a2 == 6;
  v15 = Object;
  v16 = a2;
  v17 = a3;
  if ( !v6 && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
    BugCheckParameter1 = 3LL;
    qword_140FFCA40 = a2;
    goto LABEL_7;
  }
  if ( !(unsigned __int8)IovpValidateDeviceObject(Object) && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
    BugCheckParameter1 = 4LL;
    qword_140FFCA40 = (ULONG_PTR)Object;
LABEL_7:
    *(_QWORD *)&VfBugcheckTmpData = 201LL;
    *(_OWORD *)&xmmword_140FFCA48 = 0LL;
    v14 = v7;
    VfBugCheckNoStackUsage();
  }
  v8 = *(_QWORD *)(a2 + 184);
  if ( !*(_BYTE *)(v8 - 72) )
  {
    v9 = *(_QWORD *)(v8 - 24);
    if ( v9 )
    {
      if ( (*(_DWORD *)(v9 + 80) & 0x204000) == 0x204000 && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
      {
        v14 = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
        *(&xmmword_140FFCA48 + 1) = *(_QWORD *)(v8 - 24);
        *(_QWORD *)&VfBugcheckTmpData = 201LL;
        BugCheckParameter1 = 15LL;
        qword_140FFCA40 = (ULONG_PTR)Object;
        xmmword_140FFCA48 = a2;
        VfBugCheckNoStackUsage();
      }
    }
  }
  VfBeforeCallDriver(Object, a2, v13);
  if ( (IopFunctionPointerMask & 2) != 0 )
    v10 = IopPerfCallDriver(Object, a2);
  else
    v10 = IopfCallDriver((__int64)Object, a2);
  v12 = v10;
  VfAfterCallDriver(v13, &v12);
  return v12;
}
