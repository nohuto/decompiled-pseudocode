/*
 * XREFs of _dynamic_atexit_destructor_for__Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_readyEvent__ @ 0x180044630
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000E7B4 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?InternalClose@?$HandleT@UEventTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x18003AE80 (-InternalClose@-$HandleT@UEventTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microso.c)
 */

char dynamic_atexit_destructor_for__Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_readyEvent__()
{
  void **v0; // rax
  signed int LastError; // eax

  v0 = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::EventTraits>::`vftable';
  Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_readyEvent = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::EventTraits>::`vftable';
  if ( qword_180059168 )
  {
    LOBYTE(v0) = Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::EventTraits>::InternalClose((__int64)&Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_readyEvent);
    if ( !(_BYTE)v0 )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)LastError);
      __debugbreak();
    }
    qword_180059168 = 0LL;
  }
  return (char)v0;
}
