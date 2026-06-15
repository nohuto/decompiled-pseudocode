/*
 * XREFs of ?QueryInterface@CAPOWrapperClient@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180083520
 * Callers:
 *     ?QueryInterface@CAPOWrapperClient@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFD10 (-QueryInterface@CAPOWrapperClient@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFD20 (-QueryInterface@CAPOWrapperClient@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFD30 (-QueryInterface@CAPOWrapperClient@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFD40 (-QueryInterface@CAPOWrapperClient@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFD50 (-QueryInterface@CAPOWrapperClient@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFD60 (-QueryInterface@CAPOWrapperClient@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFD70 (-QueryInterface@CAPOWrapperClient@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFD80 (-QueryInterface@CAPOWrapperClient@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFD90 (-QueryInterface@CAPOWrapperClient@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAPOWrapperClient::QueryInterface(CAPOWrapperClient *this, const struct _GUID *a2, void **a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data4;
  if ( v3 || *((_DWORD *)this + 26) )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_25385759_3236_4101_a943_25693dfb5d2d.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_25385759_3236_4101_a943_25693dfb5d2d.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_25385759_3236_4101_a943_25693dfb5d2d.Data4;
    if ( v4 || *((_DWORD *)this + 27) )
    {
      v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_f235855f_f06d_45b3_a63f_ee4b71509dc2.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f235855f_f06d_45b3_a63f_ee4b71509dc2.Data1 )
        v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_f235855f_f06d_45b3_a63f_ee4b71509dc2.Data4;
      if ( v5 || *((_DWORD *)this + 28) )
      {
        v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_69e1f79f_6eae_4517_be9f_13aa90e30014.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_69e1f79f_6eae_4517_be9f_13aa90e30014.Data1 )
          v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_69e1f79f_6eae_4517_be9f_13aa90e30014.Data4;
        if ( v6 || *((_DWORD *)this + 29) )
        {
          v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097.Data1;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097.Data1 )
            v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097.Data4;
          if ( v7 || *((_DWORD *)this + 30) )
          {
            v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_51cbd3c4_f1f3_4d2f_a0e1_7e9c4dd0feb3.Data1;
            if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_51cbd3c4_f1f3_4d2f_a0e1_7e9c4dd0feb3.Data1 )
              v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_51cbd3c4_f1f3_4d2f_a0e1_7e9c4dd0feb3.Data4;
            if ( v8 || *((_DWORD *)this + 31) )
            {
              v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17.Data1;
              if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17.Data1 )
                v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17.Data4;
              if ( v9 || *((_DWORD *)this + 32) )
                return Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAudioSystemEffects3,IApoAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IApoAcousticEchoCancellation,IApoAcousticEchoCancellation2,IAudioProcessingObjectPreferredFormatSupport,IAudioSystemEffectsCustomFormats>>(
                         this,
                         a2,
                         a3,
                         0LL);
            }
          }
        }
      }
    }
  }
  *a3 = 0LL;
  return 2147500034LL;
}
