/*
 * XREFs of ?FrameUpdate@CHolographicClient@@UEAAJIII@Z @ 0x1802DDB60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z @ 0x180139730 (--4-$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z.c)
 *     ?ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z @ 0x1802DAE70 (-ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z.c)
 *     ?DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z @ 0x1802DB0AC (-DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z.c)
 *     ?ProcessExclusiveSurfaceUpdate@CHolographicExclusiveView@@AEAA_NIPEAUEXCLUSIVE_SURFACE_UPDATE@@@Z @ 0x1802DB324 (-ProcessExclusiveSurfaceUpdate@CHolographicExclusiveView@@AEAA_NIPEAUEXCLUSIVE_SURFACE_UPDATE@@@.c)
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_28c328954791820f868badd95a7a324d___ @ 0x1802DD3A0 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_28c328954791820f868badd95a7a324d___.c)
 *     ?DoTextureUpdates@CHolographicClient@@AEAAXXZ @ 0x1802DD890 (-DoTextureUpdates@CHolographicClient@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHolographicClient::FrameUpdate(CHolographicClient *this, unsigned int a2, DWORD a3, int a4)
{
  struct CHolographicClient *v4; // rbp
  int v9; // ebx
  char *v10; // r14
  __int64 v11; // rcx
  __int64 i; // rdx
  CHolographicExclusiveView *v13; // rdi
  void *v14; // rcx
  char v15; // di
  CHolographicExclusiveView *v16; // rcx
  __int128 v18; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+30h] [rbp-38h]
  CHolographicClient *v20; // [rsp+70h] [rbp+8h] BYREF

  v4 = (CHolographicClient *)((char *)this - 16);
  v20 = (CHolographicClient *)((char *)this - 16);
  v9 = 0;
  CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_28c328954791820f868badd95a7a324d___(
    *((_QWORD *)this + 31),
    &v20);
  v10 = (char *)this + 184;
  v11 = *((_QWORD *)this + 23);
  if ( v11 )
  {
    if ( *(_DWORD *)(v11 + 80) == a4 )
      goto LABEL_14;
    if ( !*(_BYTE *)(v11 + 91) )
      CHolographicExclusiveView::DeactivateView((CHolographicExclusiveView *)v11, v4);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 23);
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 20); i = (unsigned int)(i + 1) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 7) + 8 * i) + 80LL) == a4 )
    {
      _mm_lfence();
      v13 = *(CHolographicExclusiveView **)(*((_QWORD *)this + 7) + 8 * i);
      if ( v13 && (*((_BYTE *)v13 + 91) || CHolographicExclusiveView::ActivateView(v13, v4)) )
        Microsoft::WRL::ComPtr<CVisual>::operator=((__int64 *)this + 23, (__int64)v13);
      break;
    }
  }
LABEL_14:
  if ( *(_QWORD *)v10 && !*(_BYTE *)(*(_QWORD *)v10 + 91LL) )
  {
    v14 = (void *)*((_QWORD *)this + 30);
    v18 = 0LL;
    v19 = 0LL;
    v15 = 0;
    v9 = WaitForSingleObject(v14, a3);
    if ( v9 )
    {
      if ( v9 > 0 )
      {
        v9 = (unsigned __int16)v9 | 0x80070000;
        goto LABEL_25;
      }
    }
    else
    {
      v16 = (CHolographicExclusiveView *)*((_QWORD *)this + 23);
      if ( *((_BYTE *)v16 + 88) )
        v15 = CHolographicExclusiveView::ProcessExclusiveSurfaceUpdate(v16, a2, (struct EXCLUSIVE_SURFACE_UPDATE *)&v18);
      if ( v15 )
        (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 1) + 112LL))(*((_QWORD *)this + 1), &v18);
    }
    if ( !v9 )
      v9 = v15 == 0;
  }
LABEL_25:
  CHolographicClient::DoTextureUpdates(v4);
  return (unsigned int)v9;
}
