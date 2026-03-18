/*
 * XREFs of ?GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z @ 0x18001DF00
 * Callers:
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18002668C (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18012B970 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x180169268 (-EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x18001E0A0 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ?GetTargetResource@?$CWeakReference@VCVisual@@@@QEBAPEAVCVisual@@XZ @ 0x18001E0B0 (-GetTargetResource@-$CWeakReference@VCVisual@@@@QEBAPEAVCVisual@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

const struct CVisual *__fastcall CVisual::GetTransformParent(CVisual *this, CVisual **a2, bool *a3)
{
  __int64 v3; // rdi
  _DWORD *v6; // r8
  __int64 v7; // rax
  _BYTE *v8; // rdx
  __int64 i; // rcx
  __int64 **v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 (*v13)(void); // rax
  _QWORD *v14; // rdi
  __int64 TargetResource; // rax
  __int64 **v16; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  _BYTE *v20; // rdx
  __int64 j; // rcx
  __int64 ****v22; // rdx
  __int64 ***v23; // rdx
  __int64 **k; // rcx

  v3 = 0LL;
  if ( this == a2[9] )
    return (const struct CVisual *)v3;
  v6 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v6 & 0x2000000) != 0 )
  {
    v7 = (unsigned int)v6[1];
    v8 = v6 + 2;
    for ( i = 0LL; (unsigned int)i < (unsigned int)v7; ++v8 )
    {
      if ( *v8 == 7 )
        break;
      i = (unsigned int)(i + 1);
    }
    v10 = (unsigned int)i >= (unsigned int)v7
        ? 0LL
        : (__int64 **)((char *)v6 + 8 * i - (((_BYTE)v7 + 15) & 7) + v7 + 15);
    v11 = *v10;
    if ( v11 )
    {
      v12 = *v11;
      v13 = *(__int64 (**)(void))(*(_QWORD *)*v11 + 184LL);
      if ( (char *)v13 != (char *)CVisualReferenceController::GetVisualNoRef )
      {
        TargetResource = v13();
        goto LABEL_11;
      }
      v14 = (_QWORD *)(v12 + 80);
      if ( (unsigned __int8)wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>(v12 + 80, 0LL) )
      {
        TargetResource = CWeakReference<CVisual>::GetTargetResource(*v14);
LABEL_11:
        v3 = TargetResource;
        goto LABEL_12;
      }
      v3 = 0LL;
    }
  }
LABEL_12:
  if ( (*((unsigned __int8 (__fastcall **)(CVisual **))*a2 + 23))(a2) )
  {
    v16 = (__int64 **)((char *)this + 328);
LABEL_14:
    if ( v16 && *((_BYTE *)v16 + 12) )
      return (const struct CVisual *)v3;
  }
  else
  {
    v18 = *((_QWORD *)this + 29);
    if ( *(int *)v18 < 0 )
    {
      v19 = *(unsigned int *)(v18 + 4);
      v20 = (_BYTE *)(v18 + 8);
      for ( j = 0LL; (unsigned int)j < (unsigned int)v19; ++v20 )
      {
        if ( *v20 == 1 )
          break;
        j = (unsigned int)(j + 1);
      }
      v22 = (unsigned int)j >= (unsigned int)v19
          ? 0LL
          : (__int64 ****)(v18 + 8 * j - (((_BYTE)v19 + 15) & 7) + v19 + 15);
      v23 = *v22;
      if ( v23 )
      {
        for ( k = *v23; k != (__int64 **)v23; k = (__int64 **)*k )
        {
          v16 = k - 43;
          if ( k[4] == (__int64 *)a2 )
            goto LABEL_14;
        }
      }
    }
  }
  return 0LL;
}
