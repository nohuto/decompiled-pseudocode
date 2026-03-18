/*
 * XREFs of ?Get@?$CCachedData@UtagRECT@@$0BA@@@QEAAPEAUtagRECT@@K@Z @ 0x14004152C
 * Callers:
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402F72C8 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall CCachedData<tagRECT,16>::Get(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rdi
  __int64 result; // rax
  void *v5; // rcx
  unsigned __int64 v6; // rax

  v2 = a2;
  if ( a2 <= 0x10 )
    return a1;
  v5 = *(void **)(a1 + 256);
  if ( a2 <= *(_DWORD *)(a1 + 264) )
    return (__int64)v5;
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5);
  v6 = 16 * v2;
  if ( !is_mul_ok(v2, 0x10uLL) )
    v6 = -1LL;
  result = operator new[](v6, 0x4B677844u, 256LL);
  *(_QWORD *)(a1 + 256) = result;
  *(_DWORD *)(a1 + 264) = result != 0 ? v2 : 0;
  return result;
}
