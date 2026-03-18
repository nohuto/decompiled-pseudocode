/*
 * XREFs of ExpWnfPopulateStateData @ 0x140837C4C
 * Callers:
 *     ExpWnfCreateNameInstance @ 0x140837E90 (ExpWnfCreateNameInstance.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1406A66F0 (ZwQueryValueKey.c)
 *     ExpCrossVmWnfPull @ 0x1407C560C (ExpCrossVmWnfPull.c)
 *     ExpWnfComposeValueName @ 0x14085AF60 (ExpWnfComposeValueName.c)
 *     ExpWnfAcquirePermanentDataStoreHandle @ 0x140A62208 (ExpWnfAcquirePermanentDataStoreHandle.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpWnfPopulateStateData(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  ULONG i; // r14d
  unsigned int *Pool2; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // edi
  unsigned int v10; // eax
  NTSTATUS v11; // eax
  __int64 v12; // r15
  unsigned int v13; // eax
  ULONG Length; // [rsp+30h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-19h] BYREF
  __int64 v17; // [rsp+58h] [rbp-1h] BYREF
  char v18; // [rsp+60h] [rbp+7h] BYREF

  v3 = *(_QWORD *)(a1 + 40);
  Length = 0;
  KeyHandle = 0LL;
  ValueName = 0LL;
  if ( ((v3 >> 6) & 0xF) == 5 )
  {
    v17 = v3 ^ 0x41C64E6DA3BC0074LL;
    result = ExpCrossVmWnfPull((__int64)&v17, a2, a1);
    if ( (_DWORD)result != -1073741822 )
    {
      if ( (int)result < 0 )
        return result;
      return 0LL;
    }
  }
  if ( *(_QWORD *)(a1 + 88) || !*(_QWORD *)(a1 + 104) )
    return 0LL;
  for ( i = *(_DWORD *)(a1 + 56); ; i = Length - 16 )
  {
    Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return 3221225626LL;
    v7 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)&ValueName.Length = 2228224LL;
    ValueName.Buffer = (wchar_t *)&v18;
    ExpWnfComposeValueName(v7, &ValueName);
    v8 = *(_QWORD *)(a1 + 104);
    Length = i + 16;
    v9 = ExpWnfAcquirePermanentDataStoreHandle(v8, &KeyHandle);
    if ( v9 >= 0 )
    {
      v11 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Pool2, Length, &Length);
      v12 = *(_QWORD *)(a1 + 104);
      v9 = v11;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 8), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v12 + 8));
      KeAbPostRelease(v12 + 8);
    }
    if ( v9 == -1073741772 )
    {
      *(_OWORD *)Pool2 = 0LL;
LABEL_11:
      *(_WORD *)Pool2 = 2308;
      *((_WORD *)Pool2 + 1) = 16;
      v10 = Pool2[3];
      Pool2[1] = i;
      *(_DWORD *)(a1 + 96) = v10;
      *(_QWORD *)(a1 + 88) = Pool2;
      return 0LL;
    }
    if ( v9 != -1073741789 )
      break;
    ExFreePoolWithTag(Pool2, 0x20666E57u);
  }
  if ( v9 >= 0 )
  {
    if ( Pool2[1] == 3 )
    {
      v13 = Pool2[2];
      if ( v13 >= 4 )
      {
        Pool2[2] = v13 - 4;
        goto LABEL_11;
      }
    }
    v9 = -1073741823;
  }
  ExFreePoolWithTag(Pool2, 0x20666E57u);
  return (unsigned int)v9;
}
