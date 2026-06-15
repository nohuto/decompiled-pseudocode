/*
 * XREFs of ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x18002FF8C
 * Callers:
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x18002F8A0 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x18002FB80 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180015CA0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002BB00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 *     ??$Make@VCSharedNotificationData@CDuckingNotification@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCSharedNotificationData@CDuckingNotification@@@12@XZ @ 0x18002DFA4 (--$Make@VCSharedNotificationData@CDuckingNotification@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@.c)
 */

__int64 __fastcall CDuckingNotification::Init(
        CDuckingNotification *this,
        int a2,
        const unsigned __int16 *a3,
        __int64 a4)
{
  __int64 *v6; // rax
  __int64 v7; // r9
  volatile int *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned __int64 v12; // r8
  const char *v13; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  *((_DWORD *)this + 2) = a2;
  *(_QWORD *)this = a4;
  v6 = Microsoft::WRL::Details::Make<CDuckingNotification::CSharedNotificationData,>(&v15);
  v8 = (volatile int *)*v6;
  *v6 = 0LL;
  v9 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = v8;
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(
      v9,
      v8);
  v10 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(
      v10,
      v8);
  }
  if ( !*((_QWORD *)this + 6) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15E,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  if ( a3 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a3[v12] );
    try
    {
      std::wstring::assign((char *)this + 16, (__int64)a3, v12, v7);
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x167,
                             (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
                             v13);
    }
  }
  return 0LL;
}
