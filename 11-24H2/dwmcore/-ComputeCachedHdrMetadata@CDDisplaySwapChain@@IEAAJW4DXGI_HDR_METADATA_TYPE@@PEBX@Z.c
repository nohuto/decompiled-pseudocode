/*
 * XREFs of ?ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x1801F2DC0
 * Callers:
 *     ?SetPerPresentDisplayScanoutOptions@CDDisplaySwapChain@@IEAAJPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IPEAUIDisplayScanout@Core@Display@Devices@Windows@@_NW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x180066B38 (-SetPerPresentDisplayScanoutOptions@CDDisplaySwapChain@@IEAAJPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18021509C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ?CreateHdrMetadata@CDDisplayManager@@QEAAJW4DXGI_HDR_METADATA_TYPE@@PEBXPEAPEAUIDisplayHdrMetadata@Core@Display@Devices@Windows@@@Z @ 0x18024B838 (-CreateHdrMetadata@CDDisplayManager@@QEAAJW4DXGI_HDR_METADATA_TYPE@@PEBXPEAPEAUIDisplayHdrMetada.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     memcmp_0 @ 0x1802DF6C8 (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplaySwapChain::ComputeCachedHdrMetadata(
        CDDisplaySwapChain *this,
        enum DXGI_HDR_METADATA_TYPE a2,
        _OWORD *a3)
{
  unsigned int v3; // ebp
  enum DXGI_HDR_METADATA_TYPE v5; // edi
  char *v8; // rbx
  CDDisplayManager *v9; // rcx
  int HdrMetadata; // eax
  __int64 v11; // rbp
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // r14
  __int64 v16; // rcx

  v3 = 0;
  v5 = a2;
  if ( a2 == *((_DWORD *)this + 140) )
  {
    if ( !a3 )
      return v3;
    if ( a2 != DXGI_HDR_METADATA_TYPE_HDR10 )
      return v3;
    v8 = (char *)this + 568;
    if ( !memcmp_0(*((const void **)this + 71), a3, 0x1CuLL) )
      return v3;
LABEL_16:
    v11 = *((_QWORD *)v8 + 1);
    v12 = *(_QWORD *)v8;
    v13 = v11 - *(_QWORD *)v8;
    if ( v13 > 0x1C )
    {
      v14 = v12 + 28;
LABEL_22:
      *((_QWORD *)v8 + 1) = v14;
      goto LABEL_23;
    }
    if ( v13 < 0x1C )
    {
      if ( (unsigned __int64)(*((_QWORD *)v8 + 2) - v12) >= 0x1C )
      {
        v15 = 28 - v13;
        memset_0(*((void **)v8 + 1), 0, 28 - v13);
        v14 = v15 + v11;
        goto LABEL_22;
      }
      std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(v8, 28LL);
    }
LABEL_23:
    v16 = *(_QWORD *)v8;
    *(_OWORD *)v16 = *a3;
    *(_QWORD *)(v16 + 16) = *((_QWORD *)a3 + 2);
    *(_DWORD *)(v16 + 24) = *((_DWORD *)a3 + 6);
    goto LABEL_6;
  }
  v8 = (char *)this + 568;
  if ( a2 == DXGI_HDR_METADATA_TYPE_NONE )
  {
    if ( *((_QWORD *)this + 71) != *((_QWORD *)this + 72) )
      *((_QWORD *)this + 72) = *(_QWORD *)v8;
    goto LABEL_6;
  }
  if ( a2 == DXGI_HDR_METADATA_TYPE_HDR10 )
  {
    if ( a3 )
      goto LABEL_16;
    v5 = DXGI_HDR_METADATA_TYPE_NONE;
  }
LABEL_6:
  *((_DWORD *)this + 140) = v5;
  v9 = (CDDisplayManager *)*((_QWORD *)this + 74);
  *((_QWORD *)this + 74) = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(CDDisplayManager *))(*(_QWORD *)v9 + 16LL))(v9);
  HdrMetadata = CDDisplayManager::CreateHdrMetadata(
                  v9,
                  v5,
                  a3,
                  (struct Windows::Devices::Display::Core::IDisplayHdrMetadata **)this + 74);
  v3 = HdrMetadata;
  if ( HdrMetadata < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, HdrMetadata, 0x335u, 0LL);
  return v3;
}
