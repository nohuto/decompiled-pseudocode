/*
 * XREFs of ?s_CreateInstance@CAppViewManager@@SAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x1802AC028
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x18009F930 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$MakeAndInitialize@VCAppViewManager@@V1@AEAPEAUIImmersiveApplicationManagerInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVCAppViewManager@@AEAPEAUIImmersiveApplicationManagerInternal@@@Z @ 0x1802AC0B4 (--$MakeAndInitialize@VCAppViewManager@@V1@AEAPEAUIImmersiveApplicationManagerInternal@@@Details@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppViewManager::s_CreateInstance(
        struct IImmersiveApplicationManagerInternal *a1,
        const struct _GUID *a2,
        void **a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  struct IImmersiveApplicationManagerInternal *v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 (__fastcall ***v8)(_QWORD, GUID *, void **); // [rsp+38h] [rbp+10h] BYREF

  v7 = a1;
  *a3 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<CAppViewManager,CAppViewManager,IImmersiveApplicationManagerInternal * &>(
         &v8,
         &v7);
  if ( v4 >= 0 )
    v4 = (**v8)(v8, &GUID_f89b0985_7620_4f91_ad6d_a2ab45c0ffee, a3);
  v5 = (__int64)v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return (unsigned int)v4;
}
