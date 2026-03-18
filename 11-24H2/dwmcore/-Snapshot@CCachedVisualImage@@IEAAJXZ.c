/*
 * XREFs of ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x1801AE0BC
 * Callers:
 *     ?PerformQueuedRenderSnapshots@CComposition@@QEAAJXZ @ 0x1801ADFE4 (-PerformQueuedRenderSnapshots@CComposition@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ?GetRenderTargetInfo@CCachedTarget@CCachedVisualImage@@QEBA?AVRenderTargetInfo@@XZ @ 0x180108750 (-GetRenderTargetInfo@CCachedTarget@CCachedVisualImage@@QEBA-AVRenderTargetInfo@@XZ.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18010B4B0 (-EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x180155944 (-GetPrimaryAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z @ 0x1801AE350 (-RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z.c)
 *     ?IsHDR@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x1801AE640 (-IsHDR@CCachedTarget@CCachedVisualImage@@QEBA_NXZ.c)
 *     ?erase@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801EACF4 (-erase@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?IsHardwareProtected@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x18028D150 (-IsHardwareProtected@CCachedTarget@CCachedVisualImage@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedVisualImage::Snapshot(CCachedVisualImage *this)
{
  CDisplayManager *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // xmm1_8
  int v9; // eax
  ULONGLONG Ptr; // rdi
  struct D2D_SIZE_U *v11; // rax
  struct D2D_SIZE_U v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  char *v15; // rax
  char v16; // r13
  __int64 *v17; // rbx
  char v18; // r12
  CCachedVisualImage::CCachedTarget *v20; // r15
  __int64 v21; // rcx
  __int128 v22; // [rsp+30h] [rbp-50h] BYREF
  __int64 v23; // [rsp+40h] [rbp-40h]
  _BYTE v24[24]; // [rsp+48h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+60h] [rbp-20h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 56LL))(*((_QWORD *)this + 3)) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &VISUALTREEREMOTING_SKIP_RENDER_ON_SERVER,
        v3,
        1u,
        &v25);
    *((_BYTE *)this + 2057) = 1;
    *((_QWORD *)this + 256) = *(_QWORD *)(*(__int64 (__fastcall **)(char *, struct _EVENT_DATA_DESCRIPTOR *))(*((_QWORD *)this + 10) + 32LL))(
                                           (char *)this + 80,
                                           &v25);
  }
  else
  {
    CDisplayManager::GetPrimaryAdapterLuid(v2, &v22);
    *((_QWORD *)&v22 + 1) = 0xFFFFFFFFLL;
    v23 = 0LL;
    v6 = **((_QWORD **)g_pComposition + 77);
    if ( v6 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, struct _EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)(v6 + 8) + 24LL))(
             v6 + 8,
             &v25);
      v8 = *(_QWORD *)(v7 + 16);
      v22 = *(_OWORD *)v7;
      v23 = v8;
    }
    v25.Ptr = 0LL;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((CGlobalDrawingContext **)&v25, v4, v5);
    v9 = CCachedVisualImage::EnsureRenderTargetBitmap(
           (struct D2D_SIZE_U *)this,
           (const struct RenderTargetInfo *)&v22,
           (struct IRenderTargetBitmap **)&v25);
    Ptr = v25.Ptr;
    if ( v9 >= 0 )
    {
      v11 = (struct D2D_SIZE_U *)(*(__int64 (__fastcall **)(ULONGLONG, struct _EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)(v25.Ptr + 8) + 32LL))(
                                   v25.Ptr + 8,
                                   &v25);
      v12 = *v11;
      *((struct D2D_SIZE_U *)this + 256) = *v11;
      CCachedVisualImage::RemoveInvalidTargets(this, v12);
      v15 = (char *)this + 184;
      v16 = 0;
      v17 = (__int64 *)*((_QWORD *)this + 23);
      v18 = 0;
      while ( 1 )
      {
        if ( v17 == *((__int64 **)this + 24) )
        {
          if ( !v16 )
          {
            if ( v18 )
            {
              v21 = *((_QWORD *)g_pComposition + 77);
              if ( *(_BYTE *)(v21 + 751) )
              {
                LODWORD(v23) = *(_DWORD *)(v21 + 732);
                v25.Ptr = 0LL;
                wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(
                  (CGlobalDrawingContext **)&v25,
                  v13,
                  v14);
                CCachedVisualImage::EnsureRenderTargetBitmap(
                  (struct D2D_SIZE_U *)this,
                  (const struct RenderTargetInfo *)&v22,
                  (struct IRenderTargetBitmap **)&v25);
                wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
              }
            }
          }
          *((_BYTE *)this + 2057) = 1;
          goto LABEL_10;
        }
        v20 = (CCachedVisualImage::CCachedTarget *)*v17;
        if ( *(_QWORD *)(*v17 + 8) != Ptr )
        {
          if ( *((_BYTE *)v20 + 56) )
            goto LABEL_31;
          if ( ((*(_DWORD *)(CCachedVisualImage::CCachedTarget::GetRenderTargetInfo(*v17, (__int64)v24) + 8) + 3) & 0xFFFFFFFD) == 0
            && !CCachedVisualImage::CCachedTarget::IsHardwareProtected(v20)
            && !CCachedVisualImage::CCachedTarget::IsHDR(v20) )
          {
            break;
          }
        }
        if ( CCachedVisualImage::CCachedTarget::IsHDR(v20) )
        {
          v16 = 1;
        }
        else if ( *((_BYTE *)v20 + 57) )
        {
          v18 = 1;
        }
        ++v17;
LABEL_24:
        v15 = (char *)this + 184;
      }
      v15 = (char *)this + 184;
LABEL_31:
      v17 = *(__int64 **)std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::erase(v15, &v25, v17);
      goto LABEL_24;
    }
LABEL_10:
    if ( Ptr )
      (*(void (__fastcall **)(ULONGLONG))(*(_QWORD *)Ptr + 16LL))(Ptr);
  }
  if ( *((_BYTE *)this + 2057) )
  {
    (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)this + 72LL))(this);
    (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)this + 224LL))(this);
  }
  else
  {
    *((_BYTE *)this + 2056) = 1;
  }
  return 0LL;
}
