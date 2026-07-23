/*
 * XREFs of PoRegisterForEffectivePowerModeNotifications @ 0x14074F3F0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     ExSubscribeWnfStateChange @ 0x140A12490 (ExSubscribeWnfStateChange.c)
 *     ExUnsubscribeWnfStateChange @ 0x140A5D360 (ExUnsubscribeWnfStateChange.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PoRegisterForEffectivePowerModeNotifications(int a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  __int64 Pool2; // rax
  _DWORD *v10; // rdi
  unsigned int v11; // esi
  signed __int64 *v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // rbp
  __int64 v16; // [rsp+30h] [rbp-28h] BYREF

  v16 = 0LL;
  if ( (unsigned int)(a1 - 1) <= 1 && a2 && a4 )
  {
    Pool2 = ExAllocatePool2(0x100uLL, 0x58uLL, 0x74655350u);
    v10 = (_DWORD *)Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 48) = 0LL;
      v12 = (signed __int64 *)(Pool2 + 40);
      *(_QWORD *)(Pool2 + 40) = 0LL;
      PopAcquireRwLockExclusive((unsigned __int64 *)(Pool2 + 40));
      v10[4] = -1;
      *((_QWORD *)v10 + 1) = a5;
      *v10 = a1;
      *((_QWORD *)v10 + 10) = a3;
      v10[8] = -1122885;
      *((_QWORD *)v10 + 7) = a2;
      v13 = ExSubscribeWnfStateChange(
              (unsigned int)&v16,
              (unsigned int)&WNF_PO_EFFECTIVE_POWER_MODE,
              1,
              0,
              (__int64)PopWnfEffectivePowerModeCallback,
              (__int64)v10);
      v14 = v16;
      *((_QWORD *)v10 + 3) = v16;
      v11 = v13;
      *a4 = v10;
      PopReleaseRwLock(v12);
      if ( v11 )
      {
        if ( v14 )
          ExUnsubscribeWnfStateChange(v14);
        ExFreePoolWithTag(v10, 0x74655350u);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v11;
}
