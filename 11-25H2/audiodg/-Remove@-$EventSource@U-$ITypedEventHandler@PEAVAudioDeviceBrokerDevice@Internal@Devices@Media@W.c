/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x14003C084
 * Callers:
 *     ?remove_ModuleNotificationReceived@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x14003C040 (-remove_ModuleNotificationReceived@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJ.c)
 *     ??$InvokeDelegates@V_lambda_0024b6ff9a14fcf65a4c3da593d931bf_@@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_0024b6ff9a14fcf65a4c3da593d931bf_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x140078000 (--$InvokeDelegates@V_lambda_0024b6ff9a14fcf65a4c3da593d931bf_@@U-$ITypedEventHandler@PEAVAudioDe.c)
 * Callees:
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x14001A394 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140022840 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x14003C430 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        __int64 a1,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v2; // rbp
  __int64 v5; // rdi
  volatile int *v6; // rdx
  __int64 v7; // rax
  struct IUnknown **v8; // rcx
  Microsoft::WRL::Details::EventTargetArray *v9; // rbx
  bool v10; // r12
  __int64 v11; // r13
  __int64 v12; // r13
  int v14; // ebx
  struct IUnknown **v15; // r15
  void **v16; // rbp
  __int64 v17; // rcx
  Microsoft::WRL::Details::EventTargetArray *v18; // rax
  char v19; // [rsp+20h] [rbp-48h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+80h] [rbp+18h] BYREF

  v2 = (RTL_SRWLOCK *)(a1 + 16);
  v5 = 0LL;
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 16));
  v7 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
  {
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    return 0LL;
  }
  v8 = *(struct IUnknown ***)(v7 + 16);
  v9 = 0LL;
  v10 = 0;
  v11 = *(_QWORD *)(v7 + 24) - (_QWORD)v8;
  v20 = 0LL;
  v12 = (v11 >> 3) - 1;
  v21 = v12;
  if ( !v12 )
  {
    v10 = *v8 == a2;
LABEL_4:
    if ( v10 )
    {
      AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
      if ( &v19 != (char *)a1 )
      {
        v5 = *(_QWORD *)a1;
        *(_QWORD *)a1 = 0LL;
      }
      v17 = *(_QWORD *)a1;
      v18 = v9;
      v9 = 0LL;
      *(_QWORD *)a1 = v18;
      if ( v17 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v17, v6);
      if ( a1 != -8 )
        ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 8));
    }
LABEL_5:
    if ( v9 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        (__int64)v9,
        v6);
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v5, v6);
    return 0LL;
  }
  v14 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
          &v20,
          &v21);
  if ( v14 >= 0 )
  {
    v9 = v20;
    v15 = *(struct IUnknown ***)(*(_QWORD *)a1 + 16LL);
    if ( v15 != *(struct IUnknown ***)(*(_QWORD *)a1 + 24LL) )
    {
      v16 = *(void ***)(*(_QWORD *)a1 + 32LL);
      while ( 1 )
      {
        if ( v10 || a2 != *v15 )
        {
          if ( !v12 )
          {
LABEL_19:
            v2 = (RTL_SRWLOCK *)(a1 + 16);
            goto LABEL_4;
          }
          Microsoft::WRL::Details::EventTargetArray::AddTail(v9, *v15, *v16++);
          --v12;
        }
        else
        {
          v10 = 1;
        }
        if ( ++v15 == *(struct IUnknown ***)(*(_QWORD *)a1 + 24LL) )
          goto LABEL_19;
      }
    }
    goto LABEL_5;
  }
  if ( v20 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
      (__int64)v20,
      v6);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return (unsigned int)v14;
}
