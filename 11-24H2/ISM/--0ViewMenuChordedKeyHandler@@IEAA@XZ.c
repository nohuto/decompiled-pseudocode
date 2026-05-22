/*
 * XREFs of ??0ViewMenuChordedKeyHandler@@IEAA@XZ @ 0x18017DCF8
 * Callers:
 *     ?Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z0AEBV23@PEAPEAV1@@Z @ 0x18017E26C (-Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

ViewMenuChordedKeyHandler *__fastcall ViewMenuChordedKeyHandler::ViewMenuChordedKeyHandler(
        ViewMenuChordedKeyHandler *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  ViewMenuChordedKeyHandler *result; // rax

  *(_QWORD *)this = &RefCountedObject::`vftable';
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &ViewMenuChordedKeyHandler::`vftable';
  v2 = (__int64 *)((char *)this + 24);
  *v2 = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 4) = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v2);
  *((_QWORD *)this + 5) = 0LL;
  v3 = *((_QWORD *)this + 6);
  if ( v3 != *((_QWORD *)this + 7) )
    *((_QWORD *)this + 7) = v3;
  *(_WORD *)((char *)this + 73) = 0;
  result = this;
  *((_BYTE *)this + 72) = 0;
  return result;
}
