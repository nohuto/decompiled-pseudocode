/*
 * XREFs of ?clear_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18014B8B4
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18000E560 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x180010960 (-GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800D2B10 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18014C600 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18014BD30 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18014BED0 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 */

_DWORD *__fastcall detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  _DWORD *v3; // rbp
  _DWORD *result; // rax
  __int64 v6; // r8
  unsigned __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  CDrawListCache **v13; // rdi
  __int64 v14; // rbx
  CDrawListCache *v15; // rax
  CDrawListCache *v16; // rcx
  __int64 v17; // rsi
  _DWORD *i; // rbx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v6 = *a1;
  v8 = (a1[1] - *a1) >> 4;
  v9 = a2 + a3;
  if ( a2 + a3 > v8 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
LABEL_23:
    if ( a2 )
      goto LABEL_9;
    goto LABEL_7;
  }
  v3 = (_DWORD *)(v6 + 16 * v8);
  if ( v9 == v8 )
    goto LABEL_15;
  if ( !a2 )
    goto LABEL_7;
  if ( !v6 )
    goto LABEL_9;
  if ( a2 < 0 )
    goto LABEL_23;
  if ( v8 < a2 )
    goto LABEL_9;
LABEL_7:
  v10 = v6 + 16 * v9;
  v11 = ((__int64)v3 - v10) >> 4;
  if ( v11 < 0 )
  {
    if ( a2 < (unsigned __int64)-v11 )
      goto LABEL_9;
    goto LABEL_10;
  }
  if ( v11 > 0 && v8 - a2 < v11 )
LABEL_9:
    _invalid_parameter_noinfo_noreturn();
LABEL_10:
  v12 = 16 * a2;
  v13 = (CDrawListCache **)(v6 + v12 + 8);
  v14 = v10 - v12 - v6;
  while ( 1 )
  {
    result = (_DWORD *)((char *)v13 + v14 - 8);
    if ( result == v3 )
      break;
    *((_DWORD *)v13 - 2) = *result;
    *((_DWORD *)v13 - 1) = *(_DWORD *)((char *)v13 + v14 - 4);
    v15 = *(CDrawListCache **)((char *)v13 + v14);
    *(CDrawListCache **)((char *)v13 + v14) = 0LL;
    v16 = *v13;
    *v13 = v15;
    if ( v16 )
      CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v16);
    v13 += 2;
  }
LABEL_15:
  v17 = 16 * a3;
  for ( i = &v3[v17 / 0xFFFFFFFFFFFFFFFCuLL]; i != v3; i += 4 )
    result = (_DWORD *)wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(i + 2);
  a1[1] -= v17;
  return result;
}
