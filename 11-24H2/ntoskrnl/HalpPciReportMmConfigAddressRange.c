/*
 * XREFs of HalpPciReportMmConfigAddressRange @ 0x140C1522C
 * Callers:
 *     HalpPciInitSystem @ 0x140B4F480 (HalpPciInitSystem.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     ArbDeleteMmConfigRange @ 0x140C1767C (ArbDeleteMmConfigRange.c)
 *     ArbInitializeMmConfigRange @ 0x140C1778C (ArbInitializeMmConfigRange.c)
 */

__int64 HalpPciReportMmConfigAddressRange()
{
  int v0; // ebx
  unsigned int v1; // ebx
  _DWORD *Pool2; // rax
  void *v3; // rdi
  unsigned int v5; // ecx
  _QWORD *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r9
  unsigned __int64 v9; // rcx
  unsigned int v10; // ebx

  ArbDeleteMmConfigRange();
  v0 = 1;
  if ( (unsigned int)HalpPciMcfgTableCount > 1 )
    v0 = HalpPciMcfgTableCount;
  v1 = 32 * (v0 - 1) + 72;
  Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL, v1, 0x506C6148uLL);
  v3 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v5 = HalpPciMcfgTableCount;
  *Pool2 = v1;
  Pool2[7] = 1;
  Pool2[9] = v5;
  if ( v5 )
  {
    v6 = Pool2 + 14;
    v7 = HalpPciMcfgTable + 44;
    v8 = v5;
    do
    {
      *((_BYTE *)v6 - 15) = 3;
      *v6 = *(_QWORD *)v7 + ((unsigned __int64)*(unsigned __int8 *)(v7 + 10) << 20);
      v6 += 4;
      v9 = *(_QWORD *)v7 + ((unsigned __int64)*(unsigned __int8 *)(v7 + 11) << 20) + 0xFFFFF;
      v7 += 16LL;
      *(v6 - 3) = v9;
      --v8;
    }
    while ( v8 );
  }
  v10 = ArbInitializeMmConfigRange(Pool2);
  ExFreePoolWithTag(v3, 0);
  return v10;
}
