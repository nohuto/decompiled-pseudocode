/*
 * XREFs of ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x1400193CC
 * Callers:
 *     ?Add@?$GitEventSourceSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@Internal@Windows@@QEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x140019164 (-Add@-$GitEventSourceSupportsAgile@U-$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@.c)
 * Callees:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x14001955C (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x14001A094 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140022540 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2,
        void *a3,
        struct IUnknown **a4)
{
  RTL_SRWLOCK *v4; // rdi
  _QWORD *Ptr; // rcx
  __int64 v10; // rcx
  int v11; // esi
  _QWORD *v12; // rax
  Microsoft::WRL::Details::EventTargetArray *v13; // r14
  _QWORD *v14; // rsi
  RTL_SRWLOCK v15; // rcx
  void **v17; // r15
  struct IUnknown **i; // rsi
  char v19; // [rsp+20h] [rbp-48h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+88h] [rbp+20h] BYREF

  *a4 = 0LL;
  v4 = a1 + 2;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  v20 = 0LL;
  if ( Ptr )
    v10 = ((__int64)(Ptr[3] - Ptr[2]) >> 3) + 1;
  else
    v10 = 1LL;
  v21 = v10;
  v11 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v20,
          &v21);
  if ( v11 < 0 )
  {
    if ( v20 )
      ((void (*)(void))Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release)();
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    return (unsigned int)v11;
  }
  else
  {
    v12 = a1->Ptr;
    v13 = v20;
    if ( a1->Ptr )
    {
      v17 = (void **)v12[4];
      for ( i = (struct IUnknown **)v12[2]; i != (struct IUnknown **)v12[3]; ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v13, *i, *v17);
        v12 = a1->Ptr;
        ++v17;
      }
    }
    *a4 = a2;
    Microsoft::WRL::Details::EventTargetArray::AddTail(v13, a2, a3);
    AcquireSRWLockExclusive(a1 + 1);
    v14 = 0LL;
    if ( &v19 != (char *)a1 )
    {
      v14 = a1->Ptr;
      a1->Ptr = 0LL;
    }
    v15.Ptr = a1->Ptr;
    a1->Ptr = v13;
    if ( v15.Ptr )
      ((void (*)(void))Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release)();
    if ( a1 != (RTL_SRWLOCK *)-8LL )
      ReleaseSRWLockExclusive(a1 + 1);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    if ( v14 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v14);
    return 0LL;
  }
}
