/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x140035160
 * Callers:
 *     ??1CPrivateAPO@@UEAA@XZ @ 0x14000D018 (--1CPrivateAPO@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIInspectable@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x14006B3D0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIInspectable@@@WRL@Microsoft@@UEAAPE.c)
 *     ??1?$SimpleVectorIterator@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@UEAA@XZ @ 0x140076D34 (--1-$SimpleVectorIterator@UEventRegistrationToken@@V-$Vector@UEventRegistrationToken@@UEventRegi.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140035190 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  result = (unsigned __int64)v1 >> 63;
  if ( v1 < 0 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(2 * v1);
  return result;
}
