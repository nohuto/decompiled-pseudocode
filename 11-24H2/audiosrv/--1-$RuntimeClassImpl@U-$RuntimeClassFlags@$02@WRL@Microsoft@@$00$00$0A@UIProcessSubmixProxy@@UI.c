/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProcessSubmixProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18001932C
 * Callers:
 *     ??1CProcessSubmixProxy@@MEAA@XZ @ 0x18001876C (--1CProcessSubmixProxy@@MEAA@XZ.c)
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x180057F0C (--1CSaDeviceProxy@@MEAA@XZ.c)
 *     ??1CAudioSessionStore@@EEAA@XZ @ 0x18005DD7C (--1CAudioSessionStore@@EEAA@XZ.c)
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UISaDeviceProxy@@UIInspectable@@@WRL@Microsoft@@UEAA@XZ @ 0x180072C4C (--1-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UISaDeviceProxy@@UIInspectable@@@WRL@M.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIInspectable@@UIPropertyStore@@UIAudioSessionStore@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800F4790 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIInspectable@@UIPropertyStore@@UIAud.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019360 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IProcessSubmixProxy,IInspectable>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IProcessSubmixProxy,IInspectable>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  result = (unsigned __int64)v1 >> 63;
  if ( v1 < 0 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(2 * v1);
  return result;
}
