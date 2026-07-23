/*
 * XREFs of HalpExtInitExtensions @ 0x140C1111C
 * Callers:
 *     HalpHalExtInitSystem @ 0x140B4F0A0 (HalpHalExtInitSystem.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     HalpAcpiGetTable @ 0x14045F918 (HalpAcpiGetTable.c)
 *     HalpMmAllocateMemoryInternal @ 0x140540620 (HalpMmAllocateMemoryInternal.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpExtInitExtensions(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // edi
  _QWORD **v4; // rcx
  _QWORD *v5; // rax
  unsigned int v6; // edi
  void *MemoryInternal; // rax
  __int64 Table; // r13
  unsigned int v9; // r14d
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  __int64 v12; // r15
  unsigned __int64 v13; // rsi
  __int64 **i; // r15
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  HalpExtLoaderBlock = a1;
  v16 = 0LL;
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
      Table = HalpAcpiGetTable(a1, 1414681411, 0, 0);
      if ( Table )
      {
        v9 = 0;
        v10 = (_QWORD *)(*(_QWORD *)(a1 + 240) + 2584LL);
        v11 = (_QWORD *)*v10;
        if ( (_QWORD *)*v10 != v10 )
        {
          do
          {
            if ( *((int *)v11 + 10) >= 0 )
            {
              v12 = v11[2];
              v16 = 0LL;
              if ( (int)guard_dispatch_icall_no_overrides(0LL, &v16) >= 0 && v16 )
              {
                v13 = HalpExtHandleArray + ((unsigned __int64)v9 << 6);
                *(_QWORD *)(v13 + 8) = *(_QWORD *)(v12 + 56);
                *(_QWORD *)(v13 + 16) = v16;
                *(_DWORD *)(v13 + 24) = 0;
                *(_QWORD *)(v13 + 48) = *(_QWORD *)(v12 + 48);
                *(_DWORD *)(v13 + 56) = *(_DWORD *)(v12 + 64);
                *(_BYTE *)v13 = 1;
                *(_QWORD *)(v13 + 40) = v13 + 32;
                *(_QWORD *)(v13 + 32) = v13 + 32;
                for ( i = (__int64 **)v11[3]; i != v11 + 3; i = (__int64 **)*i )
                  guard_dispatch_icall_no_overrides(v9, Table + *((unsigned int *)i + 4));
                *(_BYTE *)v13 = 0;
              }
            }
            else
            {
              DbgPrintEx(
                0x65u,
                0,
                "HAL Extension %s failed load, status=0x%x\n",
                (const char *)v11[6],
                *((_DWORD *)v11 + 10));
            }
            ++v9;
            v11 = (_QWORD *)*v11;
          }
          while ( v11 != (_QWORD *)(*(_QWORD *)(a1 + 240) + 2584LL) );
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
