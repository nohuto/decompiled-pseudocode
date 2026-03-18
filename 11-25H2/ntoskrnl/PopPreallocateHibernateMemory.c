/*
 * XREFs of PopPreallocateHibernateMemory @ 0x14074697C
 * Callers:
 *     PopEnableHiberFile @ 0x140AAE964 (PopEnableHiberFile.c)
 * Callees:
 *     MmGetHighestPhysicalPage @ 0x14046F044 (MmGetHighestPhysicalPage.c)
 *     HvlAllocateHibernateResources @ 0x140703574 (HvlAllocateHibernateResources.c)
 *     MmObtainChargesToLockPagedPool @ 0x1407DD860 (MmObtainChargesToLockPagedPool.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 PopPreallocateHibernateMemory()
{
  unsigned __int64 HighestPhysicalPage; // rax
  __int64 v1; // rcx
  unsigned int v2; // r8d
  unsigned __int64 v3; // rdi
  unsigned int v4; // edx
  __int64 v5; // rax
  __int64 v6; // r15
  unsigned int v7; // eax
  __int64 v8; // r14
  __int64 v9; // r12
  unsigned int v10; // eax
  __int64 v11; // rbp
  unsigned int v12; // esi
  __int64 v13; // r13
  __int64 result; // rax
  ULONG_PTR v15; // rsi
  __int64 Pool2; // rax
  char *v17; // rbx
  __int64 v18; // [rsp+30h] [rbp-88h]
  _QWORD v19[16]; // [rsp+38h] [rbp-80h]
  __int64 v20; // [rsp+C0h] [rbp+8h]
  __int64 v21; // [rsp+C8h] [rbp+10h]

  if ( dword_140EFE810 == 2 )
    v18 = 102400LL;
  HighestPhysicalPage = MmGetHighestPhysicalPage(0);
  v3 = (HighestPhysicalPage + 32) & 0xFFFFFFFFFFFFFFE0uLL;
  if ( v3 < HighestPhysicalPage || v3 > 0xFFFFFFFF )
    return 3221225626LL;
  v4 = (unsigned int)v3 >> 3;
  do
  {
    v5 = v2;
    v2 += v4;
    v19[v1++] = v5;
  }
  while ( v1 < 2 );
  v20 = v2;
  v21 = (v2 + v4 + 7) & 0xFFFFFFF8;
  v6 = ((_DWORD)v21 + 247) & 0xFFFFFFF8;
  v7 = v6 + 176;
  if ( dword_140EFE810 == 2 )
  {
    v8 = (unsigned int)(v6 + 176);
    v7 = v6 + 232;
  }
  else
  {
    v8 = v19[5];
  }
  v9 = v7;
  v10 = (v7 + 175) & 0xFFFFFFF8;
  v11 = v10;
  v12 = (v10 + 4159) & 0xFFFFF000;
  v13 = v12;
  result = HvlAllocateHibernateResources(1, 256);
  if ( (int)result >= 0 )
  {
    v15 = (v12 + 0x3FFF) & 0xFFFFF000;
    Pool2 = ExAllocatePool2(0x100uLL);
    v17 = (char *)Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    if ( !(unsigned int)MmObtainChargesToLockPagedPool(Pool2, v15) )
    {
      ExFreePoolWithTag(v17, 0x72626968u);
      return 3221225626LL;
    }
    qword_140F0ADC0 = (__int64)v17;
    Length = v15;
    qword_140F0ADB0 = v17;
    qword_140F0ADC8 = (__int64)(v17 + 4096);
    if ( dword_140EFE810 == 2 )
      qword_140F0AE28 = (__int64)&v17[v18];
    else
      qword_140F0AE28 = 0LL;
    *((_QWORD *)&xmmword_140F0ADD0 + 1) = &v17[v19[0]];
    *((_QWORD *)&xmmword_140F0ADE0 + 1) = &v17[v20];
    LODWORD(xmmword_140F0ADD0) = v3;
    LODWORD(xmmword_140F0ADF0) = v3;
    *((_QWORD *)&xmmword_140F0ADF0 + 1) = &v17[v19[1]];
    LODWORD(xmmword_140F0ADE0) = v3;
    qword_140F0AE00 = (__int64)&v17[v21];
    if ( dword_140EFE810 == 2 )
      qword_140F0AE30 = (__int64)&v17[v8];
    else
      qword_140F0AE30 = 0LL;
    qword_140F0AE08 = &v17[v11];
    qword_140F0AE10 = &v17[v13];
    qword_140F0AE18 = &v17[v9];
    qword_140F0AE20 = (__int64)&v17[v6];
    return 0LL;
  }
  return result;
}
