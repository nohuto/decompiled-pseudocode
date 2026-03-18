/*
 * XREFs of ??$_Emplace_reallocate@AEBUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@?$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@AEAAPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU23@AEBU23@@Z @ 0x1800FE950
 * Callers:
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x1800C4784 (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0DXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAA@AEBU01@@Z @ 0x1800FE810 (--0DXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAA@AEBU01@@Z.c)
 *     ??$_Uninitialized_move@PEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@YAPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU12@0PEAU12@AEAV?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@0@@Z @ 0x1800FE858 (--$_Uninitialized_move@PEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V-$allocator.c)
 *     ?_Change_array@?$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@AEAAXQEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@_K1@Z @ 0x1800FE8BC (-_Change_array@-$vector@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@V-$allocator@U.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800FED34 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 */

CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *__fastcall std::vector<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>::_Emplace_reallocate<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair const &>(
        __int64 a1,
        __int64 *a2,
        const struct CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *a3)
{
  __int64 v4; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *v13; // rdi
  CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *v14; // r14
  __int64 *v15; // rdx
  CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *v16; // r8
  __int64 *v17; // rcx

  v4 = 0xAAAAAAAAAAAAAAALL;
  v7 = ((__int64)a2 - *(_QWORD *)a1) / 24;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  if ( v8 == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector too long");
  v9 = v8 + 1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0xAAAAAAAAAAAAAAALL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v9;
  }
  size_of = std::_Get_size_of_n<24>(v4);
  v13 = (CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *)((char *)v13 + 24 * v7);
  CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair::DXGIResourceRenderTargetBitmapPair(v14, a3);
  v15 = *(__int64 **)(a1 + 8);
  v16 = v13;
  v17 = *(__int64 **)a1;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *>(v17, a2, v13);
    v15 = *(__int64 **)(a1 + 8);
    v16 = (CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *)((char *)v14 + 24);
    v17 = a2;
  }
  std::_Uninitialized_move<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *>(v17, v15, v16);
  std::vector<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>::_Change_array(
    (CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair **)a1,
    v13,
    v9,
    v4);
  return v14;
}
