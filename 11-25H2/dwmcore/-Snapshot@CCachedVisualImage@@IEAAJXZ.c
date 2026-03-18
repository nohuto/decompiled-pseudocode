/*
 * XREFs of ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x1801BD88C
 * Callers:
 *     ?PerformQueuedRenderSnapshots@CComposition@@QEAAJXZ @ 0x1801BD7B4 (-PerformQueuedRenderSnapshots@CComposition@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x18003EB34 (-GetPrimaryAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?GetRenderTargetInfo@CCachedTarget@CCachedVisualImage@@QEBA?AVRenderTargetInfo@@XZ @ 0x180144390 (-GetRenderTargetInfo@CCachedTarget@CCachedVisualImage@@QEBA-AVRenderTargetInfo@@XZ.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801470F0 (-EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z @ 0x1801BDB20 (-RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z.c)
 *     ?IsHDR@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x1801BDE10 (-IsHDR@CCachedTarget@CCachedVisualImage@@QEBA_NXZ.c)
 *     ?erase@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801F8274 (-erase@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?IsHardwareProtected@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x1802985C0 (-IsHardwareProtected@CCachedTarget@CCachedVisualImage@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedVisualImage::Snapshot(CCachedVisualImage *this)
{
  CDisplayManager *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // xmm1_8
  int v7; // eax
  ULONGLONG Ptr; // rdi
  struct D2D_SIZE_U *v9; // rax
  struct D2D_SIZE_U v10; // rdx
  char *v11; // rax
  char v12; // r13
  __int64 *v13; // rbx
  char v14; // r12
  CCachedVisualImage::CCachedTarget *v16; // r15
  __int64 v17; // rcx
  __int128 v18; // [rsp+30h] [rbp-50h] BYREF
  __int64 v19; // [rsp+40h] [rbp-40h]
  _BYTE v20[24]; // [rsp+48h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+60h] [rbp-20h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 56LL))(*((_QWORD *)this + 3)) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &VISUALTREEREMOTING_SKIP_RENDER_ON_SERVER,
        v3,
        1u,
        &v21);
    *((_BYTE *)this + 2057) = 1;
    *((_QWORD *)this + 256) = *(_QWORD *)(*(__int64 (__fastcall **)(char *, struct _EVENT_DATA_DESCRIPTOR *))(*((_QWORD *)this + 10) + 32LL))(
                                           (char *)this + 80,
                                           &v21);
  }
  else
  {
    CDisplayManager::GetPrimaryAdapterLuid(v2, &v18);
    *((_QWORD *)&v18 + 1) = 0xFFFFFFFFLL;
    v19 = 0LL;
    v4 = **((_QWORD **)g_pComposition + 77);
    if ( v4 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, struct _EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)(v4 + 8) + 24LL))(
             v4 + 8,
             &v21);
      v6 = *(_QWORD *)(v5 + 16);
      v18 = *(_OWORD *)v5;
      v19 = v6;
    }
    v21.Ptr = 0LL;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((CGlobalDrawingContext **)&v21);
    v7 = CCachedVisualImage::EnsureRenderTargetBitmap(
           (struct D2D_SIZE_U *)this,
           (const struct RenderTargetInfo *)&v18,
           (struct IRenderTargetBitmap **)&v21);
    Ptr = v21.Ptr;
    if ( v7 >= 0 )
    {
      v9 = (struct D2D_SIZE_U *)(*(__int64 (__fastcall **)(ULONGLONG, struct _EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)(v21.Ptr + 8) + 32LL))(
                                  v21.Ptr + 8,
                                  &v21);
      v10 = *v9;
      *((struct D2D_SIZE_U *)this + 256) = *v9;
      CCachedVisualImage::RemoveInvalidTargets(this, v10);
      v11 = (char *)this + 184;
      v12 = 0;
      v13 = (__int64 *)*((_QWORD *)this + 23);
      v14 = 0;
      while ( 1 )
      {
        if ( v13 == *((__int64 **)this + 24) )
        {
          if ( !v12 )
          {
            if ( v14 )
            {
              v17 = *((_QWORD *)g_pComposition + 77);
              if ( *(_BYTE *)(v17 + 751) )
              {
                LODWORD(v19) = *(_DWORD *)(v17 + 732);
                v21.Ptr = 0LL;
                wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((CGlobalDrawingContext **)&v21);
                CCachedVisualImage::EnsureRenderTargetBitmap(
                  (struct D2D_SIZE_U *)this,
                  (const struct RenderTargetInfo *)&v18,
                  (struct IRenderTargetBitmap **)&v21);
                wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
              }
            }
          }
          *((_BYTE *)this + 2057) = 1;
          goto LABEL_10;
        }
        v16 = (CCachedVisualImage::CCachedTarget *)*v13;
        if ( *(_QWORD *)(*v13 + 8) != Ptr )
        {
          if ( *((_BYTE *)v16 + 56) )
            goto LABEL_31;
          if ( ((*(_DWORD *)(CCachedVisualImage::CCachedTarget::GetRenderTargetInfo(*v13, (__int64)v20) + 8) + 3) & 0xFFFFFFFD) == 0
            && !CCachedVisualImage::CCachedTarget::IsHardwareProtected(v16)
            && !CCachedVisualImage::CCachedTarget::IsHDR(v16) )
          {
            break;
          }
        }
        if ( CCachedVisualImage::CCachedTarget::IsHDR(v16) )
        {
          v12 = 1;
        }
        else if ( *((_BYTE *)v16 + 57) )
        {
          v14 = 1;
        }
        ++v13;
LABEL_24:
        v11 = (char *)this + 184;
      }
      v11 = (char *)this + 184;
LABEL_31:
      v13 = *(__int64 **)std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::erase(v11, &v21, v13);
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
