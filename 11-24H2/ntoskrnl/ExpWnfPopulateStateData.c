/*
 * XREFs of ExpWnfPopulateStateData @ 0x140835B5C
 * Callers:
 *     ExpWnfCreateNameInstance @ 0x140835DA0 (ExpWnfCreateNameInstance.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     ExpCrossVmWnfPull @ 0x1407C5A6C (ExpCrossVmWnfPull.c)
 *     ExpWnfComposeValueName @ 0x1408339CC (ExpWnfComposeValueName.c)
 *     ExpWnfAcquirePermanentDataStoreHandle @ 0x140A5AB08 (ExpWnfAcquirePermanentDataStoreHandle.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpWnfPopulateStateData(__int64 a1)
{
  unsigned __int64 v2; // rcx
  __int64 result; // rax
  ULONG i; // r14d
  unsigned int *Pool2; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // edi
  unsigned int v9; // eax
  NTSTATUS v10; // eax
  __int64 v11; // r15
  unsigned int v12; // eax
  ULONG Length; // [rsp+30h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-19h] BYREF
  __int64 v16; // [rsp+58h] [rbp-1h] BYREF
  char v17; // [rsp+60h] [rbp+7h] BYREF

  v2 = *(_QWORD *)(a1 + 40);
  Length = 0;
  KeyHandle = 0LL;
  ValueName = 0LL;
  if ( ((v2 >> 6) & 0xF) == 5 )
  {
    v16 = v2 ^ 0x41C64E6DA3BC0074LL;
    result = ExpCrossVmWnfPull((__int64)&v16);
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
    Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL, i + 16, 0x20666E57u);
    if ( !Pool2 )
      return 3221225626LL;
    v6 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)&ValueName.Length = 2228224LL;
    ValueName.Buffer = (wchar_t *)&v17;
    ExpWnfComposeValueName(v6, &ValueName);
    v7 = *(_QWORD *)(a1 + 104);
    Length = i + 16;
    v8 = ExpWnfAcquirePermanentDataStoreHandle(v7, &KeyHandle);
    if ( v8 >= 0 )
    {
      v10 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Pool2, Length, &Length);
      v11 = *(_QWORD *)(a1 + 104);
      v8 = v10;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 8), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v11 + 8));
      KeAbPostRelease(v11 + 8);
    }
    if ( v8 == -1073741772 )
    {
      *(_OWORD *)Pool2 = 0LL;
LABEL_11:
      *(_WORD *)Pool2 = 2308;
      *((_WORD *)Pool2 + 1) = 16;
      v9 = Pool2[3];
      Pool2[1] = i;
      *(_DWORD *)(a1 + 96) = v9;
      *(_QWORD *)(a1 + 88) = Pool2;
      return 0LL;
    }
    if ( v8 != -1073741789 )
      break;
    ExFreePoolWithTag(Pool2, 0x20666E57u);
  }
  if ( v8 >= 0 )
  {
    if ( Pool2[1] == 3 )
    {
      v12 = Pool2[2];
      if ( v12 >= 4 )
      {
        Pool2[2] = v12 - 4;
        goto LABEL_11;
      }
    }
    v8 = -1073741823;
  }
  ExFreePoolWithTag(Pool2, 0x20666E57u);
  return (unsigned int)v8;
}
