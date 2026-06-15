/*
 * XREFs of ?RuntimeClassInitialize@CHybridPropertyStore@@QEAAJPEAUIMMDevice@@IPEBU_tagpropertykey@@@Z @ 0x180149D9C
 * Callers:
 *     ??$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpropertykey@@@Details@WRL@Microsoft@@YAJPEAPEAUIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpropertykey@@@Z @ 0x180149820 (--$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Emplace_back_with_unused_capacity@UAudioEffectState@CProcessingModeParameters@@@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@AEAAAEAUAudioEffectState@CProcessingModeParameters@@$$QEAU23@@Z @ 0x1800C7FBC (--$_Emplace_back_with_unused_capacity@UAudioEffectState@CProcessingModeParameters@@@-$vector@UAu.c)
 *     ??$_Emplace_reallocate@AEBU_tagpropertykey@@@?$vector@U_tagpropertykey@@V?$allocator@U_tagpropertykey@@@std@@@std@@AEAAPEAU_tagpropertykey@@QEAU2@AEBU2@@Z @ 0x180149954 (--$_Emplace_reallocate@AEBU_tagpropertykey@@@-$vector@U_tagpropertykey@@V-$allocator@U_tagproper.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHybridPropertyStore::RuntimeClassInitialize(
        CHybridPropertyStore *this,
        struct IMMDevice *a2,
        unsigned int a3,
        const struct _tagpropertykey *a4)
{
  HRESULT v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // rdx
  HRESULT (__stdcall *OpenPropertyStore)(IMMDevice *, DWORD, IPropertyStore **); // rdi
  char *v13; // rcx
  _BYTE *v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = PSCreateMemoryPropertyStore(&GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99, (void **)this + 3);
  v9 = 0LL;
  if ( v8 < 0 )
  {
    v10 = 57LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\hybridpropertystore.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  OpenPropertyStore = a2->lpVtbl->OpenPropertyStore;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 2);
  v8 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, char *))OpenPropertyStore)(a2, 0LL, (char *)this + 16);
  if ( v8 < 0 )
  {
    v10 = 60LL;
    goto LABEL_3;
  }
  while ( (unsigned int)v9 < a3 )
  {
    v13 = (char *)this + 32;
    v14 = (_BYTE *)*((_QWORD *)this + 5);
    if ( v14 == *((_BYTE **)this + 6) )
    {
      try
      {
        std::vector<_tagpropertykey>::_Emplace_reallocate<_tagpropertykey const &>((__int64)v13, v14, (__int64)&a4[v9]);
      }
      catch ( std::bad_alloc )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x48,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\hybridpropertystore.cpp",
          (const char *)0x8007000ELL);
        return 2147942414LL;
      }
    }
    else
    {
      std::vector<CProcessingModeParameters::AudioEffectState>::_Emplace_back_with_unused_capacity<CProcessingModeParameters::AudioEffectState>(
        (__int64)v13,
        (__int64)&a4[v9]);
    }
    v9 = (unsigned int)(v9 + 1);
  }
  return 0LL;
}
