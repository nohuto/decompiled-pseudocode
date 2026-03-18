/*
 * XREFs of HalpExtInitExtensions @ 0x140C0F11C
 * Callers:
 *     HalpHalExtInitSystem @ 0x140B4D060 (HalpHalExtInitSystem.c)
 * Callees:
 *     DbgPrintEx @ 0x1402CB2F0 (DbgPrintEx.c)
 *     HalpAcpiGetTable @ 0x140478488 (HalpAcpiGetTable.c)
 *     HalpMmAllocateMemoryInternal @ 0x140542CD0 (HalpMmAllocateMemoryInternal.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall HalpExtInitExtensions(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // edi
  _QWORD **v4; // rcx
  _QWORD *v5; // rax
  unsigned int v6; // edi
  void *MemoryInternal; // rax
  __int64 v8; // r9
  __int64 Table; // r13
  unsigned int v10; // r14d
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  __int64 v13; // r15
  __int64 v14; // r8
  unsigned __int64 v15; // rsi
  __int64 **i; // r15
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  HalpExtLoaderBlock = a1;
  v18 = 0LL;
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
      Table = HalpAcpiGetTable(a1, 1414681411, 0LL, 0LL);
      if ( Table )
      {
        v10 = 0;
        v11 = (_QWORD *)(*(_QWORD *)(a1 + 240) + 2584LL);
        v12 = (_QWORD *)*v11;
        if ( (_QWORD *)*v11 != v11 )
        {
          do
          {
            if ( *((int *)v12 + 10) >= 0 )
            {
              v13 = v12[2];
              v18 = 0LL;
              if ( (int)guard_dispatch_icall_no_overrides(0LL, &v18, &HalpExtensionImports, v8) >= 0 && v18 )
              {
                v15 = HalpExtHandleArray + ((unsigned __int64)v10 << 6);
                *(_QWORD *)(v15 + 8) = *(_QWORD *)(v13 + 56);
                *(_QWORD *)(v15 + 16) = v18;
                *(_DWORD *)(v15 + 24) = 0;
                *(_QWORD *)(v15 + 48) = *(_QWORD *)(v13 + 48);
                *(_DWORD *)(v15 + 56) = *(_DWORD *)(v13 + 64);
                *(_BYTE *)v15 = 1;
                *(_QWORD *)(v15 + 40) = v15 + 32;
                *(_QWORD *)(v15 + 32) = v15 + 32;
                for ( i = (__int64 **)v12[3]; i != v12 + 3; i = (__int64 **)*i )
                  guard_dispatch_icall_no_overrides(v10, Table + *((unsigned int *)i + 4), v14, v8);
                *(_BYTE *)v15 = 0;
              }
            }
            else
            {
              DbgPrintEx(
                0x65u,
                0,
                "HAL Extension %s failed load, status=0x%x\n",
                (const char *)v12[6],
                *((_DWORD *)v12 + 10));
            }
            ++v10;
            v12 = (_QWORD *)*v12;
          }
          while ( v12 != (_QWORD *)(*(_QWORD *)(a1 + 240) + 2584LL) );
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
