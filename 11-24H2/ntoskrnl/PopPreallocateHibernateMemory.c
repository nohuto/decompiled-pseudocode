/*
 * XREFs of PopPreallocateHibernateMemory @ 0x140752A4C
 * Callers:
 *     PopEnableHiberFile @ 0x140AB3950 (PopEnableHiberFile.c)
 * Callees:
 *     MmGetHighestPhysicalPage @ 0x14046DA3C (MmGetHighestPhysicalPage.c)
 *     Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline @ 0x1405D3348 (Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline.c)
 *     HvlAllocateHibernateResources @ 0x14070F454 (HvlAllocateHibernateResources.c)
 *     MmObtainChargesToLockPagedPool @ 0x1407ED700 (MmObtainChargesToLockPagedPool.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  __int64 Pool2; // rax
  char *v14; // rbx
  __int64 v15; // [rsp+30h] [rbp-88h]
  _QWORD v16[16]; // [rsp+38h] [rbp-80h]
  __int64 v17; // [rsp+C0h] [rbp+8h]
  __int64 v18; // [rsp+C8h] [rbp+10h]

  if ( dword_140EFEAF0 == 2 )
    v15 = 102400LL;
  HighestPhysicalPage = MmGetHighestPhysicalPage(0);
  v3 = (HighestPhysicalPage + 32) & 0xFFFFFFFFFFFFFFE0uLL;
  if ( v3 < HighestPhysicalPage || v3 > 0xFFFFFFFF )
    return 3221225626LL;
  v4 = (unsigned int)v3 >> 3;
  do
  {
    v5 = v2;
    v2 += v4;
    v16[v1++] = v5;
  }
  while ( v1 < 2 );
  v17 = v2;
  v6 = (v2 + v4 + 7) & 0xFFFFFFF8;
  v18 = v6;
  v7 = (v6 + 247) & 0xFFFFFFF8;
  v8 = ((v6 + 247) & 0xFFFFFFF8)
     + ((unsigned int)Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline() != 0 ? 2096 : 176);
  if ( dword_140EFEAF0 == 2 )
  {
    v9 = v8;
    v8 += 56;
  }
  else
  {
    v9 = v16[5];
  }
  v10 = v8;
  v11 = (v8 + 175) & 0xFFFFFFF8;
  result = HvlAllocateHibernateResources(1, 256);
  if ( (int)result >= 0 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v14 = (char *)Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    if ( !(unsigned int)MmObtainChargesToLockPagedPool(
                          Pool2,
                          ((((_DWORD)v11 + 4159) & 0xFFFFF000) + 0x3FFF) & 0xFFFFF000) )
    {
      ExFreePoolWithTag(v14, 0x72626968u);
      return 3221225626LL;
    }
    qword_140F0ADA0 = (__int64)v14;
    Length = ((((_DWORD)v11 + 4159) & 0xFFFFF000) + 0x3FFF) & 0xFFFFF000;
    qword_140F0AD90 = v14;
    qword_140F0ADA8 = (__int64)(v14 + 4096);
    if ( dword_140EFEAF0 == 2 )
      qword_140F0AE08 = (__int64)&v14[v15];
    else
      qword_140F0AE08 = 0LL;
    *((_QWORD *)&xmmword_140F0ADB0 + 1) = &v14[v16[0]];
    *((_QWORD *)&xmmword_140F0ADC0 + 1) = &v14[v17];
    LODWORD(xmmword_140F0ADB0) = v3;
    LODWORD(xmmword_140F0ADD0) = v3;
    *((_QWORD *)&xmmword_140F0ADD0 + 1) = &v14[v16[1]];
    LODWORD(xmmword_140F0ADC0) = v3;
    qword_140F0ADE0 = (__int64)&v14[v18];
    if ( dword_140EFEAF0 == 2 )
      qword_140F0AE10 = (__int64)&v14[v9];
    else
      qword_140F0AE10 = 0LL;
    qword_140F0ADE8 = &v14[v11];
    qword_140F0ADF0 = &v14[((_DWORD)v11 + 4159) & 0xFFFFF000];
    qword_140F0ADF8 = &v14[v10];
    qword_140F0AE00 = (__int64)&v14[v7];
    return 0LL;
  }
  return result;
}
