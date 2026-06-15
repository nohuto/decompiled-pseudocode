/*
 * XREFs of ?GetIids@SendCommandAsyncOperation@Devices@Media@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x140078FD0
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@V?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@6@@Details@WRL@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x140079050 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IAsyncOperation.c)
 * Callees:
 *     ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@V?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x140078330 (-FillArrayWithIid@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceS.c)
 */

__int64 __fastcall Windows::Media::Devices::SendCommandAsyncOperation::GetIids(
        Windows::Media::Devices::SendCommandAsyncOperation *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax
  __int64 v7; // rcx
  struct _GUID *v8; // r8
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    v10 = 1;
    *v6 = GUID_2e1f3d72_a58d_5b0a_b42d_3660c04cfeeb;
    Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>::FillArrayWithIid(
      v7,
      &v10,
      (__int64)v6);
    *a2 = 3;
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
