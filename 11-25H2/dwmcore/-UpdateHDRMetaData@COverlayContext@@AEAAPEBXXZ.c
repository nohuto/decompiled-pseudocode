/*
 * XREFs of ?UpdateHDRMetaData@COverlayContext@@AEAAPEBXXZ @ 0x1801E0A30
 * Callers:
 *     ?PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAIPEA_N@Z @ 0x1801BFBDC (-PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 * Callees:
 *     ?GetHDR10MetaData@CGlobalCompositionSurfaceInfo@@UEBA_NPEAUDXGI_HDR_METADATA_HDR10@@@Z @ 0x1801E0BF0 (-GetHDR10MetaData@CGlobalCompositionSurfaceInfo@@UEBA_NPEAUDXGI_HDR_METADATA_HDR10@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1802E8968 (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

const void *__fastcall COverlayContext::UpdateHDRMetaData(COverlayContext *this)
{
  int v1; // esi
  char v2; // di
  int v3; // r14d
  unsigned int v5; // ebp
  __int64 v6; // rcx
  const void *result; // rax
  CGlobalCompositionSurfaceInfo *v8; // rcx
  bool (__fastcall *v9)(CGlobalCompositionSurfaceInfo *__hidden, struct DXGI_HDR_METADATA_HDR10 *); // rax
  bool HDR10MetaData; // al
  __int128 v11; // [rsp+20h] [rbp-88h]
  struct DXGI_HDR_METADATA_HDR10 Buf2; // [rsp+30h] [rbp-78h] BYREF
  struct DXGI_HDR_METADATA_HDR10 Buf1; // [rsp+50h] [rbp-58h] BYREF

  v1 = 0;
  v2 = 0;
  v3 = 0;
  v11 = 0LL;
  v5 = 0;
  memset(&Buf1, 0, sizeof(Buf1));
  while ( 1 )
  {
    v6 = *((_QWORD *)this + 1617);
    if ( v5 >= 0x8F5C28F5C28F5C29uLL * ((*((_QWORD *)this + 1618) - v6) >> 4) )
      break;
    v8 = *(CGlobalCompositionSurfaceInfo **)(400LL * v5 + v6 + 16);
    memset(&Buf2, 0, sizeof(Buf2));
    v9 = *(bool (__fastcall **)(CGlobalCompositionSurfaceInfo *__hidden, struct DXGI_HDR_METADATA_HDR10 *))(*(_QWORD *)v8 + 432LL);
    if ( v9 == CGlobalCompositionSurfaceInfo::GetHDR10MetaData )
      HDR10MetaData = CGlobalCompositionSurfaceInfo::GetHDR10MetaData(v8, &Buf2);
    else
      HDR10MetaData = v9(v8, &Buf2);
    if ( HDR10MetaData )
    {
      if ( v2 && memcmp_0(&Buf1, &Buf2, 0x1CuLL) )
        goto LABEL_4;
      v1 = *(_DWORD *)&Buf2.MaxContentLightLevel;
      v3 = 1;
      Buf1 = Buf2;
      v2 = 1;
      v11 = *(_OWORD *)Buf2.RedPrimary;
    }
    ++v5;
  }
  if ( !v2 )
  {
LABEL_4:
    *((_DWORD *)this + 2) = 0;
    result = 0LL;
    *(_OWORD *)((char *)this + 12) = 0LL;
    *(_QWORD *)((char *)this + 28) = 0LL;
    *((_DWORD *)this + 9) = 0;
    return result;
  }
  if ( *((_DWORD *)this + 2) == v3 && !memcmp_0(&Buf1, (char *)this + 12, 0x1CuLL) )
    return 0LL;
  result = (char *)this + 12;
  *((_DWORD *)this + 2) = v3;
  *(_OWORD *)((char *)this + 12) = v11;
  *(_QWORD *)((char *)this + 28) = *(_QWORD *)&Buf1.MaxMasteringLuminance;
  *((_DWORD *)this + 9) = v1;
  return result;
}
