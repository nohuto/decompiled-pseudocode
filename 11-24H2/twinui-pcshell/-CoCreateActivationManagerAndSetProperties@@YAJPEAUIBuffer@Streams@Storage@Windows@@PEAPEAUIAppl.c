/*
 * XREFs of ?CoCreateActivationManagerAndSetProperties@@YAJPEAUIBuffer@Streams@Storage@Windows@@PEAPEAUIApplicationActivationManagerPriv@@@Z @ 0x18003A8A0
 * Callers:
 *     ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___ @ 0x18003A388 (ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetActivationPropertySet@@YAJPEAUIUnknown@@PEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x18003A28C (-SetActivationPropertySet@@YAJPEAUIUnknown@@PEAUIBuffer@Streams@Storage@Windows@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CoCreateActivationManagerAndSetProperties(
        struct Windows::Storage::Streams::IBuffer *a1,
        struct IApplicationActivationManagerPriv **a2)
{
  int Instance; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  struct IApplicationActivationManagerPriv *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown *ppv; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  Instance = CoCreateInstance(
               &CLSID_ApplicationActivationManager,
               0LL,
               0x401u,
               &GUID_54e4c428_d1d4_47d4_ade6_46c829114a7d,
               (LPVOID *)&ppv);
  v5 = Instance;
  if ( Instance < 0 )
  {
    v6 = 51LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_10;
  }
  if ( a1 )
  {
    Instance = SetActivationPropertySet(ppv, a1);
    v5 = Instance;
    if ( Instance < 0 )
    {
      v6 = 55LL;
      goto LABEL_6;
    }
  }
  v7 = (struct IApplicationActivationManagerPriv *)ppv;
  if ( ppv )
  {
    ((void (__fastcall *)(struct IUnknown *))ppv->lpVtbl->AddRef)(ppv);
    v7 = (struct IApplicationActivationManagerPriv *)ppv;
  }
  *a2 = v7;
  v5 = 0;
LABEL_10:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  return v5;
}
