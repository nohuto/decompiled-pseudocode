/*
 * XREFs of ?SendCommandAsync@AudioDeviceModule@Devices@Media@Windows@@UEAAJPEAUIBuffer@Streams@Storage@4@PEAPEAU?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@4@@Z @ 0x14007F4B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@V?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@6@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@V?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@6@@123@AEBU_GUID@@PEAPEAX@Z @ 0x140077198 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IAsyncOperatio.c)
 *     ??$MakeAndInitialize@VSendCommandAsyncOperation@Devices@Media@Windows@@V1234@PEAVAudioDeviceModule@234@AEAPEAUIBuffer@Streams@Storage@4@@Details@WRL@Microsoft@@YAJPEAPEAVSendCommandAsyncOperation@Devices@Media@Windows@@$$QEAPEAVAudioDeviceModule@456@AEAPEAUIBuffer@Streams@Storage@6@@Z @ 0x140078670 (--$MakeAndInitialize@VSendCommandAsyncOperation@Devices@Media@Windows@@V1234@PEAVAudioDeviceModu.c)
 *     ??1?$com_ptr_t@VSendCommandAsyncOperation@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140079290 (--1-$com_ptr_t@VSendCommandAsyncOperation@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Media::Devices::AudioDeviceModule::SendCommandAsync(
        struct Windows::Media::Devices::AudioDeviceModule *a1,
        struct Windows::Storage::Streams::IBuffer *a2,
        __int64 *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned __int64 v6; // r9
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  Windows::Media::Devices::SendCommandAsyncOperation *v11; // [rsp+20h] [rbp-10h] BYREF
  struct Windows::Media::Devices::AudioDeviceModule *v12; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  struct Windows::Storage::Streams::IBuffer *v14; // [rsp+48h] [rbp+18h] BYREF
  __int64 v15; // [rsp+58h] [rbp+28h] BYREF

  v14 = a2;
  v11 = 0LL;
  v15 = 0LL;
  if ( !a2 )
  {
    v4 = -2147024809;
    v5 = 445LL;
LABEL_5:
    v6 = v4;
    goto LABEL_6;
  }
  if ( !a3 )
  {
    v4 = -2147467261;
    v5 = 446LL;
    goto LABEL_5;
  }
  *a3 = 0LL;
  v12 = a1;
  v7 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::SendCommandAsyncOperation,Windows::Media::Devices::SendCommandAsyncOperation,Windows::Media::Devices::AudioDeviceModule *,Windows::Storage::Streams::IBuffer * &>(
         &v11,
         &v12,
         &v14);
  v4 = v7;
  if ( v7 >= 0 )
  {
    v8 = Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>,Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>>(
           (__int64)v11,
           &GUID_2e1f3d72_a58d_5b0a_b42d_3660c04cfeeb,
           &v15);
    v4 = v8;
    if ( v8 >= 0 )
    {
      v9 = v15;
      v15 = 0LL;
      *a3 = v9;
      v4 = 0;
      goto LABEL_12;
    }
    v6 = (unsigned int)v8;
    v5 = 451LL;
  }
  else
  {
    v6 = (unsigned int)v7;
    v5 = 450LL;
  }
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
    (const char *)v6);
LABEL_12:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v15);
  wil::com_ptr_t<Windows::Media::Devices::SendCommandAsyncOperation,wil::err_returncode_policy>::~com_ptr_t<Windows::Media::Devices::SendCommandAsyncOperation,wil::err_returncode_policy>((__int64 *)&v11);
  return v4;
}
