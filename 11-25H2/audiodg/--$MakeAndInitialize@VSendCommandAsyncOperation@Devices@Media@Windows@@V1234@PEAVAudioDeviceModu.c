/*
 * XREFs of ??$MakeAndInitialize@VSendCommandAsyncOperation@Devices@Media@Windows@@V1234@PEAVAudioDeviceModule@234@AEAPEAUIBuffer@Streams@Storage@4@@Details@WRL@Microsoft@@YAJPEAPEAVSendCommandAsyncOperation@Devices@Media@Windows@@$$QEAPEAVAudioDeviceModule@456@AEAPEAUIBuffer@Streams@Storage@6@@Z @ 0x140078670
 * Callers:
 *     ?SendCommandAsync@AudioDeviceModule@Devices@Media@Windows@@UEAAJPEAUIBuffer@Streams@Storage@4@PEAPEAU?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@4@@Z @ 0x14007F4B0 (-SendCommandAsync@AudioDeviceModule@Devices@Media@Windows@@UEAAJPEAUIBuffer@Streams@Storage@4@PE.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x140019FC0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14005562C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0SendCommandAsyncOperation@Devices@Media@Windows@@QEAA@XZ @ 0x140078F48 (--0SendCommandAsyncOperation@Devices@Media@Windows@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@V?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14007E490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IAsyncOperation.c)
 *     ?RuntimeClassInitialize@SendCommandAsyncOperation@Devices@Media@Windows@@QEAAJPEAVAudioDeviceModule@234@PEAUIBuffer@Streams@Storage@4@@Z @ 0x14007EE74 (-RuntimeClassInitialize@SendCommandAsyncOperation@Devices@Media@Windows@@QEAAJPEAVAudioDeviceMod.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::SendCommandAsyncOperation,Windows::Media::Devices::SendCommandAsyncOperation,Windows::Media::Devices::AudioDeviceModule *,Windows::Storage::Streams::IBuffer * &>(
        Windows::Media::Devices::SendCommandAsyncOperation **a1,
        struct Windows::Media::Devices::AudioDeviceModule **a2,
        struct Windows::Storage::Streams::IBuffer **a3)
{
  void *v6; // rax
  int v7; // esi
  Windows::Media::Devices::SendCommandAsyncOperation *v8; // rax
  struct Windows::Storage::Streams::IBuffer *v9; // r8
  struct Windows::Media::Devices::AudioDeviceModule *v10; // rdx
  Windows::Media::Devices::SendCommandAsyncOperation *v11; // rbx
  volatile int *v12; // rdx
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  void *v16; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = operator new(0xC8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v6;
  if ( v6 )
  {
    v8 = (Windows::Media::Devices::SendCommandAsyncOperation *)Windows::Media::Devices::SendCommandAsyncOperation::SendCommandAsyncOperation((Windows::Media::Devices::SendCommandAsyncOperation *)v6);
    v9 = *a3;
    v10 = *a2;
    v11 = v8;
    v16 = 0LL;
    v7 = Windows::Media::Devices::SendCommandAsyncOperation::RuntimeClassInitialize(v8, v10, v9);
    if ( v7 >= 0 )
    {
      if ( v11 )
      {
        v13 = *((_QWORD *)v11 + 20);
        while ( v13 >= 0 )
        {
          if ( (_DWORD)v13 != 0x7FFFFFFF )
          {
            v14 = v13;
            v13 = _InterlockedCompareExchange64((volatile signed __int64 *)v11 + 20, v13 + 1, v13);
            if ( v14 != v13 )
              continue;
          }
          goto LABEL_13;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v13 + 16), v12);
LABEL_13:
        *a1 = v11;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>,Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>::Release(v11);
      }
      else
      {
        *a1 = 0LL;
      }
      v7 = 0;
    }
    else if ( v11 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>,Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>::Release(v11);
    }
  }
  else
  {
    v7 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v16);
  return (unsigned int)v7;
}
