/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x14003BF64
 * Callers:
 *     ??$InvokeDelegates@V_lambda_9d7fead59395791ab94fec2ef4162c73_@@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_9d7fead59395791ab94fec2ef4162c73_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x140075DF8 (--$InvokeDelegates@V_lambda_9d7fead59395791ab94fec2ef4162c73_@@U-$ITypedEventHandler@PEAVAudioDe.c)
 *     ?remove_ModuleNotificationReceived@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x14007EB20 (-remove_ModuleNotificationReceived@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJUEventR.c)
 * Callees:
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x14001A094 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140022540 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x14003C130 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v2; // rbp
  __int64 v5; // rdi
  volatile int *v6; // rdx
  _QWORD *Ptr; // rax
  struct IUnknown **v8; // rcx
  Microsoft::WRL::Details::EventTargetArray *v9; // rbx
  bool v10; // r12
  __int64 v11; // r13
  __int64 v12; // r13
  int v13; // ebx
  struct IUnknown **v14; // r15
  void **v15; // rbp
  __int64 v17; // rcx
  Microsoft::WRL::Details::EventTargetArray *v18; // rax
  char v19; // [rsp+20h] [rbp-48h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+80h] [rbp+18h] BYREF

  v2 = a1 + 2;
  v5 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  if ( !a1->Ptr )
  {
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    return 0LL;
  }
  v8 = (struct IUnknown **)Ptr[2];
  v9 = 0LL;
  v10 = 0;
  v11 = Ptr[3] - (_QWORD)v8;
  v20 = 0LL;
  v12 = (v11 >> 3) - 1;
  v21 = v12;
  if ( !v12 )
  {
    v10 = *v8 == a2;
    goto LABEL_19;
  }
  v13 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
          &v20,
          &v21);
  if ( v13 >= 0 )
  {
    v9 = v20;
    v14 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
    if ( v14 == *((struct IUnknown ***)a1->Ptr + 3) )
    {
LABEL_26:
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
    v15 = (void **)*((_QWORD *)a1->Ptr + 4);
    do
    {
      if ( v10 || a2 != *v14 )
      {
        if ( !v12 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v9, *v14, *v15++);
        --v12;
      }
      else
      {
        v10 = 1;
      }
      ++v14;
    }
    while ( v14 != *((struct IUnknown ***)a1->Ptr + 3) );
    v2 = a1 + 2;
LABEL_19:
    if ( v10 )
    {
      AcquireSRWLockExclusive(a1 + 1);
      if ( &v19 != (char *)a1 )
      {
        v5 = (__int64)a1->Ptr;
        a1->Ptr = 0LL;
      }
      v17 = (__int64)a1->Ptr;
      v18 = v9;
      v9 = 0LL;
      a1->Ptr = v18;
      if ( v17 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v17, v6);
      if ( a1 != (RTL_SRWLOCK *)-8LL )
        ReleaseSRWLockExclusive(a1 + 1);
    }
    goto LABEL_26;
  }
  if ( v20 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
      (__int64)v20,
      v6);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return (unsigned int)v13;
}
