/*
 * XREFs of HalpExtInitExtensions @ 0x140BFE11C
 * Callers:
 *     HalpHalExtInitSystem @ 0x140B3D060 (HalpHalExtInitSystem.c)
 * Callees:
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     HalpAcpiGetTable @ 0x1404130F8 (HalpAcpiGetTable.c)
 *     HalpMmAllocateMemoryInternal @ 0x1405404A0 (HalpMmAllocateMemoryInternal.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall HalpExtInitExtensions(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // edi
  _QWORD **v4; // rcx
  _QWORD *v5; // rax
  unsigned int v6; // edi
  void *MemoryInternal; // rax
  int v8; // r14d
  _QWORD *v9; // rax
  _QWORD *v10; // rdi

  v1 = 0;
  HalpExtLoaderBlock = a1;
  v3 = 0;
  v4 = (_QWORD **)(*(_QWORD *)(a1 + 240) + 2584LL);
  HalpExtHandleCount = 0;
  v5 = *v4;
  if ( *v4 != v4 )
  {
    do
    {
      v5 = (_QWORD *)*v5;
      ++v3;
    }
    while ( v5 != v4 );
    HalpExtHandleCount = v3;
  }
  if ( v3 )
  {
    v6 = v3 << 6;
    MemoryInternal = (void *)HalpMmAllocateMemoryInternal(v6, 1u);
    HalpExtHandleArray = (__int64)MemoryInternal;
    if ( MemoryInternal )
    {
      memset_0(MemoryInternal, 0, v6);
      if ( HalpAcpiGetTable(a1, 1414681411, 0, 0) )
      {
        v8 = 0;
        v9 = (_QWORD *)(*(_QWORD *)(a1 + 240) + 2584LL);
        v10 = (_QWORD *)*v9;
        if ( (_QWORD *)*v9 != v9 )
        {
          do
          {
            if ( *((int *)v10 + 10) >= 0 )
              guard_dispatch_icall_no_overrides(0LL);
            else
              DbgPrintEx(
                0x65u,
                0,
                "HAL Extension %s failed load, status=0x%x\n",
                (const char *)v10[6],
                *((_DWORD *)v10 + 10));
            ++v8;
            v10 = (_QWORD *)*v10;
          }
          while ( v10 != (_QWORD *)(*(_QWORD *)(a1 + 240) + 2584LL) );
        }
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v1;
}
