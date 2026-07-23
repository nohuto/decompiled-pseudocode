/*
 * XREFs of IovCallDriver @ 0x140BA9D40
 * Callers:
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IofCallDriverSpecifyReturn @ 0x1404999F0 (IofCallDriverSpecifyReturn.c)
 * Callees:
 *     IopfCallDriver @ 0x14025CA60 (IopfCallDriver.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x1402E4C00 (ExFreeToNPagedLookasideList.c)
 *     IopPerfCallDriver @ 0x14049A4AC (IopPerfCallDriver.c)
 *     VfBugCheckNoStackUsage @ 0x140610548 (VfBugCheckNoStackUsage.c)
 *     IovpCallDriverNoIrpTracking @ 0x140B84908 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x140B84950 (IovpCallDriverWithStackBuffer.c)
 *     IovpValidateDeviceObject @ 0x140B84C20 (IovpValidateDeviceObject.c)
 *     VfAfterCallDriver @ 0x140B8FA94 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x140B8FC68 (VfBeforeCallDriver.c)
 *     VfIrpAllocateCallDriverData @ 0x140B8FEA0 (VfIrpAllocateCallDriverData.c)
 */

__int64 __fastcall IovCallDriver(PVOID Object, ULONG_PTR a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // di
  ULONG_PTR v8; // rax
  PVOID v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  PVOID Entry; // [rsp+58h] [rbp+20h] BYREF

  Entry = 0LL;
  if ( (IovpEnabledInThePast || (MmVerifierData & 0x20) != 0)
    && (ViVerifyAllDrivers == 1 || (*(_DWORD *)(a2 + 16) & 0x40000000) != 0) )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 2u && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
    {
      KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
      v8 = CurrentIrql;
      BugCheckParameter1 = 16LL;
      goto LABEL_21;
    }
    if ( !(unsigned int)VfIrpAllocateCallDriverData(a2, &Entry) )
      return IovpCallDriverWithStackBuffer(Object, a2, a3);
    v9 = Entry;
    if ( !Entry )
      return IovpCallDriverNoIrpTracking(Object, a2);
    *((_QWORD *)Entry + 20) = Object;
    *((_QWORD *)v9 + 21) = a2;
    *((_QWORD *)v9 + 22) = a3;
    if ( **((_WORD **)v9 + 21) != 6 && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
    {
      *((_BYTE *)v9 + 157) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
      v8 = *((_QWORD *)v9 + 21);
      BugCheckParameter1 = 3LL;
      goto LABEL_21;
    }
    if ( !IovpValidateDeviceObject((__int64)Object) && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
    {
      *((_BYTE *)v9 + 157) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
      v8 = *((_QWORD *)v9 + 20);
      BugCheckParameter1 = 4LL;
LABEL_21:
      *(_QWORD *)&VfBugcheckTmpData = 201LL;
      *(_OWORD *)&xmmword_140FFDA48 = 0LL;
      qword_140FFDA40 = v8;
      VfBugCheckNoStackUsage();
    }
    v10 = *(_QWORD *)(a2 + 184);
    if ( !*(_BYTE *)(v10 - 72) )
    {
      v11 = *(_QWORD *)(v10 - 24);
      if ( v11 )
      {
        if ( (*(_DWORD *)(v11 + 80) & 0x204000) == 0x204000 && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
        {
          *((_BYTE *)v9 + 157) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
          qword_140FFDA40 = *((_QWORD *)v9 + 20);
          xmmword_140FFDA48 = *((_QWORD *)v9 + 21);
          *(&xmmword_140FFDA48 + 1) = *(_QWORD *)(v10 - 24);
          *(_QWORD *)&VfBugcheckTmpData = 201LL;
          BugCheckParameter1 = 15LL;
          VfBugCheckNoStackUsage();
        }
      }
    }
    VfBeforeCallDriver((__int64)Object, a2, (__int64)v9);
    if ( (IopFunctionPointerMask & 2) != 0 )
      v12 = IopPerfCallDriver(Object, a2);
    else
      v12 = IopfCallDriver((__int64)Object, a2);
    *((_DWORD *)v9 + 46) = v12;
    VfAfterCallDriver((__int64)v9, (int *)v9 + 46);
    v13 = *((_DWORD *)v9 + 46);
    ExFreeToNPagedLookasideList(&ViIrpCallDriverDataList, v9);
    return v13;
  }
  else if ( (IopFunctionPointerMask & 2) != 0 )
  {
    return IopPerfCallDriver(Object, a2);
  }
  else
  {
    return IopfCallDriver((__int64)Object, a2);
  }
}
