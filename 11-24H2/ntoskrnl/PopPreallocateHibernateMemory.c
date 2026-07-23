/*
 * XREFs of PopPreallocateHibernateMemory @ 0x140750D6C
 * Callers:
 *     PopEnableHiberFile @ 0x140AAE8C0 (PopEnableHiberFile.c)
 * Callees:
 *     MmGetHighestPhysicalPage @ 0x1404684E4 (MmGetHighestPhysicalPage.c)
 *     Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline @ 0x1405D0A68 (Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline.c)
 *     HvlAllocateHibernateResources @ 0x14070CFE4 (HvlAllocateHibernateResources.c)
 *     MmObtainChargesToLockPagedPool @ 0x1407EDCD0 (MmObtainChargesToLockPagedPool.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 PopPreallocateHibernateMemory()
{
  unsigned __int64 HighestPhysicalPage; // rax
  __int64 v1; // rcx
  unsigned int v2; // r8d
  unsigned __int64 v3; // rdi
  unsigned int v4; // edx
  __int64 v5; // rax
  unsigned int v6; // eax
  __int64 v7; // r13
  unsigned int v8; // eax
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 result; // rax
  ULONG_PTR v13; // rsi
  __int64 Pool2; // rax
  char *v15; // rbx
  __int64 v16; // [rsp+30h] [rbp-88h]
  _QWORD v17[16]; // [rsp+38h] [rbp-80h]
  __int64 v18; // [rsp+C0h] [rbp+8h]
  __int64 v19; // [rsp+C8h] [rbp+10h]

  if ( dword_140EFEE10 == 2 )
    v16 = 102400LL;
  HighestPhysicalPage = MmGetHighestPhysicalPage(0);
  v3 = (HighestPhysicalPage + 32) & 0xFFFFFFFFFFFFFFE0uLL;
  if ( v3 < HighestPhysicalPage || v3 > 0xFFFFFFFF )
    return 3221225626LL;
  v4 = (unsigned int)v3 >> 3;
  do
  {
    v5 = v2;
    v2 += v4;
    v17[v1++] = v5;
  }
  while ( v1 < 2 );
  v18 = v2;
  v6 = (v2 + v4 + 7) & 0xFFFFFFF8;
  v19 = v6;
  v7 = (v6 + 247) & 0xFFFFFFF8;
  v8 = ((v6 + 247) & 0xFFFFFFF8)
     + ((unsigned int)Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline() != 0 ? 2096 : 176);
  if ( dword_140EFEE10 == 2 )
  {
    v9 = v8;
    v8 += 56;
  }
  else
  {
    v9 = v17[5];
  }
  v10 = v8;
  v11 = (v8 + 175) & 0xFFFFFFF8;
  result = HvlAllocateHibernateResources(1, 256);
  if ( (int)result >= 0 )
  {
    v13 = ((((_DWORD)v11 + 4159) & 0xFFFFF000) + 0x3FFF) & 0xFFFFF000;
    Pool2 = ExAllocatePool2(0x100uLL, v13, 0x72626968u);
    v15 = (char *)Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    if ( !(unsigned int)MmObtainChargesToLockPagedPool(Pool2, v13) )
    {
      ExFreePoolWithTag(v15, 0x72626968u);
      return 3221225626LL;
    }
    qword_140F0BBE0 = (__int64)v15;
    Length = ((((_DWORD)v11 + 4159) & 0xFFFFF000) + 0x3FFF) & 0xFFFFF000;
    qword_140F0BBD0 = v15;
    qword_140F0BBE8 = (__int64)(v15 + 4096);
    if ( dword_140EFEE10 == 2 )
      qword_140F0BC48 = (__int64)&v15[v16];
    else
      qword_140F0BC48 = 0LL;
    *((_QWORD *)&xmmword_140F0BBF0 + 1) = &v15[v17[0]];
    *((_QWORD *)&xmmword_140F0BC00 + 1) = &v15[v18];
    LODWORD(xmmword_140F0BBF0) = v3;
    LODWORD(xmmword_140F0BC10) = v3;
    *((_QWORD *)&xmmword_140F0BC10 + 1) = &v15[v17[1]];
    LODWORD(xmmword_140F0BC00) = v3;
    qword_140F0BC20 = (__int64)&v15[v19];
    if ( dword_140EFEE10 == 2 )
      qword_140F0BC50 = (__int64)&v15[v9];
    else
      qword_140F0BC50 = 0LL;
    qword_140F0BC28 = &v15[v11];
    qword_140F0BC30 = &v15[((_DWORD)v11 + 4159) & 0xFFFFF000];
    qword_140F0BC38 = &v15[v10];
    qword_140F0BC40 = (__int64)&v15[v7];
    return 0LL;
  }
  return result;
}
