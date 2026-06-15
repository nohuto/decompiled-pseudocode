/*
 * XREFs of CreateAudioMediaType_Unsafe @ 0x1800A6ED8
 * Callers:
 *     ?IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0001@@PEAUIAudioMediaType@@1PEAPEAU3@@Z @ 0x180025100 (-IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0009_.c)
 *     ?GetFormat@CAPOWrapperClient@@UEAAJIPEAPEAUIAudioMediaType@@@Z @ 0x1800ABF70 (-GetFormat@CAPOWrapperClient@@UEAAJIPEAPEAUIAudioMediaType@@@Z.c)
 *     ?GetPreferredInputFormat@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z @ 0x1800AC1C0 (-GetPreferredInputFormat@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z.c)
 *     ?GetPreferredOutputFormat@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z @ 0x1800AC350 (-GetPreferredOutputFormat@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z.c)
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x1800A6574 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 */

__int64 __fastcall CreateAudioMediaType_Unsafe(
        const struct tWAVEFORMATEX *a1,
        unsigned int a2,
        struct IAudioMediaType **a3)
{
  return CAudioMediaType::Create(a1, a2, a3, 0.0, 1);
}
