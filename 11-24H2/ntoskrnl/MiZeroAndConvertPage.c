/*
 * XREFs of MiZeroAndConvertPage @ 0x1403F8F1C
 * Callers:
 *     MiAllocateLargeZeroPages @ 0x14026F2E8 (MiAllocateLargeZeroPages.c)
 *     MiZeroChainWorker @ 0x140314138 (MiZeroChainWorker.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x140393A14 (MiInitializeMdlOneNodeBatchPages.c)
 * Callees:
 *     MiZeroPhysicalPage @ 0x14024B990 (MiZeroPhysicalPage.c)
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiZeroLargePage @ 0x140312ABC (MiZeroLargePage.c)
 *     MiPfnBestZeroAttribute @ 0x1403F90A0 (MiPfnBestZeroAttribute.c)
 */

char __fastcall MiZeroAndConvertPage(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v9; // r12
  BOOL v10; // ecx
  int v11; // edx
  unsigned __int64 v12; // rax
  BOOL v13; // ebp
  unsigned int v14; // eax

  v9 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
  if ( (HIWORD(*(_DWORD *)(a2 + 32)) & 0xC0) == 0xC0 )
  {
    v14 = MiPfnBestZeroAttribute(a2, a4);
    MiChangePageAttribute(a2, v14);
  }
  v10 = (a5 & 1) != 0 || (a5 & 2) != 0 && (*(_QWORD *)(a2 + 16) & 0x3E0LL) != 0;
  v11 = (unsigned __int8)BYTE2(*(_DWORD *)(a2 + 32)) >> 6;
  LOBYTE(v12) = v11 != a4;
  v13 = v11 != a4;
  if ( v10 )
  {
    if ( v11 != a4 && (unsigned int)MiPfnBestZeroAttribute(a2, a4) == a4 )
    {
      MiChangePageAttribute(a2, a4);
      v13 = 0;
    }
    if ( a3 == 3 )
      MiZeroPhysicalPage(a1, v9, (a5 >> 2) & 2, a4);
    else
      MiZeroLargePage(a1, a2, a3, a4, (a5 >> 3) & 1);
    v12 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
    *(_QWORD *)(a2 + 16) = v12;
  }
  if ( v13 )
    LOBYTE(v12) = MiChangePageAttribute(a2, a4);
  return v12;
}
