/*
 * XREFs of ?CreateHdrMetadata@CDDisplayManager@@QEAAJW4DXGI_HDR_METADATA_TYPE@@PEBXPEAPEAUIDisplayHdrMetadata@Core@Display@Devices@Windows@@@Z @ 0x18024B838
 * Callers:
 *     ?ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x1801F2DC0 (-ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplayManager::CreateHdrMetadata(
        CDDisplayManager *this,
        enum DXGI_HDR_METADATA_TYPE a2,
        _QWORD *a3,
        struct Windows::Devices::Display::Core::IDisplayHdrMetadata **a4)
{
  struct Windows::Devices::Display::Core::IDisplayHdrMetadata *v4; // r10
  unsigned int v5; // ebx
  int v7; // edx
  __int64 v8; // xmm1_8
  __int64 (__fastcall *v9)(__int64, __int128 *, struct Windows::Devices::Display::Core::IDisplayHdrMetadata **); // r9
  int v10; // eax
  struct Windows::Devices::Display::Core::IDisplayHdrMetadata *v11; // rcx
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]
  int v15; // [rsp+48h] [rbp-10h]
  struct Windows::Devices::Display::Core::IDisplayHdrMetadata *v16; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = 0;
  v16 = 0LL;
  if ( a2 )
  {
    v7 = a2 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
      {
        v5 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x1FAu, 0LL);
LABEL_7:
        v11 = v16;
        goto LABEL_10;
      }
    }
    else
    {
      v8 = a3[2];
      v13 = *(_OWORD *)a3;
      v14 = v8;
      v9 = *(__int64 (__fastcall **)(__int64, __int128 *, struct Windows::Devices::Display::Core::IDisplayHdrMetadata **))(*(_QWORD *)qword_1803FAB90 + 56LL);
      v15 = *((_DWORD *)a3 + 6);
      v10 = v9(qword_1803FAB90, &v13, &v16);
      v5 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x1F3u, 0LL);
        goto LABEL_7;
      }
      v4 = v16;
    }
  }
  v11 = 0LL;
  *a4 = v4;
  v16 = 0LL;
LABEL_10:
  if ( v11 )
    (*(void (__fastcall **)(struct Windows::Devices::Display::Core::IDisplayHdrMetadata *))(*(_QWORD *)v11 + 16LL))(v11);
  return v5;
}
