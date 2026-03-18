/*
 * XREFs of ?Get@?$CCachedData@U_D3DKMT_MOVE_RECT@@$03@@QEAAPEAU_D3DKMT_MOVE_RECT@@K@Z @ 0x140047D68
 * Callers:
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x14037FEA4 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall CCachedData<_D3DKMT_MOVE_RECT,4>::Get(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rdi
  __int64 result; // rax
  void *v5; // rcx
  __int64 v6; // r9
  unsigned __int64 v7; // rax

  v2 = a2;
  if ( a2 <= 4 )
    return a1;
  v5 = *(void **)(a1 + 96);
  if ( a2 <= *(_DWORD *)(a1 + 104) )
    return (__int64)v5;
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5);
  v7 = 24 * v2;
  if ( !is_mul_ok(v2, 0x18uLL) )
    v7 = -1LL;
  result = operator new[](v7, 0x4B677844u, 256LL, v6);
  *(_QWORD *)(a1 + 96) = result;
  *(_DWORD *)(a1 + 104) = result != 0 ? v2 : 0;
  return result;
}
