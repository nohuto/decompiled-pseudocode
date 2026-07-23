/*
 * XREFs of HalpBlkAddVirtualMapping @ 0x140C14AF0
 * Callers:
 *     HalpBlkAllocateAndShadowMemory @ 0x140C14C34 (HalpBlkAllocateAndShadowMemory.c)
 *     HalpBlkAllocateShadowCode @ 0x140C14DC4 (HalpBlkAllocateShadowCode.c)
 *     HalpBlkInitializeVirtualAddressSpace @ 0x140C14FAC (HalpBlkInitializeVirtualAddressSpace.c)
 * Callees:
 *     HalpRemapVirtualAddress64 @ 0x14047C7B8 (HalpRemapVirtualAddress64.c)
 *     HalpBlkAllocatePageTablePage @ 0x140C14D30 (HalpBlkAllocatePageTablePage.c)
 */

__int64 __fastcall HalpBlkAddVirtualMapping(__int64 PageTablePage, __int64 a2, unsigned __int64 a3, int a4, int a5)
{
  unsigned int v5; // edi
  char v10; // bp
  int i; // r15d
  unsigned __int64 v12; // rax
  __int64 v13; // r11
  unsigned __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx

  v5 = 0;
  v10 = 39;
  for ( i = 4; ; --i )
  {
    v12 = HalpRemapVirtualAddress64(HalpBlkPageTableVaWindow, PageTablePage, 0);
    v14 = v12;
    if ( !v12 )
      return (unsigned int)-1073741801;
    v15 = (a3 >> v10) & 0x1FF;
    if ( i == (_DWORD)v13 )
      break;
    v16 = *(_QWORD *)(v12 + 8 * v15);
    if ( ((unsigned __int8)v16 & (unsigned __int8)v13) != 0 )
    {
      PageTablePage = v16 & 0xFFFFFFFFFF000LL;
    }
    else
    {
      PageTablePage = HalpBlkAllocatePageTablePage(0LL);
      if ( !PageTablePage )
        return (unsigned int)-1073741801;
      v17 = 0LL;
      v18 = 1LL;
      v19 = 2LL;
      do
      {
        v17 |= v18++;
        --v19;
      }
      while ( v19 );
      *(_QWORD *)(v14 + 8 * v15) = PageTablePage ^ (PageTablePage ^ v17) & 0xFFF0000000000FFFuLL;
    }
    v10 -= 9;
  }
  if ( a5 == 4 || (v20 = v13, a5 == 64) )
    v20 = 3LL;
  if ( ((a5 - 32) & 0xFFFFFFDF) != 0 )
    v20 |= 0x8000000000000000uLL;
  if ( a4 != (_DWORD)v13 )
    v20 |= 0x18uLL;
  *(_QWORD *)(v12 + 8 * v15) = v20 | a2 & 0xFFFFFFFFFF000LL;
  return v5;
}
