/*
 * XREFs of ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x18008ECDC
 * Callers:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x180051CD8 (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?Initialize@ButtonProcessor@@IEAAJXZ @ 0x180084ACC (-Initialize@ButtonProcessor@@IEAAJXZ.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180179368 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     ?Initialize@MouseProcessor@@IEAAJXZ @ 0x180191FC8 (-Initialize@MouseProcessor@@IEAAJXZ.c)
 *     ?Initialize@EdgeGestureMetrics@@SAXXZ @ 0x1801A3560 (-Initialize@EdgeGestureMetrics@@SAXXZ.c)
 * Callees:
 *     ?Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z @ 0x18000D1B4 (-Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C070 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall RegistryWatcher::Create(
        HKEY a1,
        const unsigned __int16 *a2,
        HKEY a3,
        void (*a4)(void *, HKEY),
        struct RegistryWatcher **a5)
{
  struct RegistryWatcher **v8; // rsi
  HKEY *v10; // rax
  HKEY v11; // rdx
  HKEY *v12; // rbx
  unsigned int v13; // edi
  __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // eax
  int v17; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HKEY *v19; // [rsp+40h] [rbp+8h] BYREF

  v19 = 0LL;
  v8 = a5;
  if ( !a5 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\registrywatcher\\lib\\registrywatcher.cpp",
      (const char *)0x80070057LL,
      v17);
    return 2147942487LL;
  }
  v10 = (HKEY *)RefCountedObject::operator new(0x38uLL);
  v12 = v10;
  a5 = (struct RegistryWatcher **)v10;
  if ( v10 )
  {
    *v10 = (HKEY)&RefCountedObject::`vftable';
    *((_DWORD *)v10 + 2) = 1;
    *v10 = (HKEY)&RegistryWatcher::`vftable';
    v10[2] = 0LL;
    v10[5] = a3;
    v10[6] = (HKEY)a4;
  }
  else
  {
    v12 = 0LL;
  }
  v19 = v12;
  if ( v12 )
  {
    v16 = RegistryWatcher::Initialize(v12, v11, a2);
    v13 = v16;
    if ( v16 >= 0 )
    {
      v19 = 0LL;
      *v8 = (struct RegistryWatcher *)v12;
      v13 = 0;
      goto LABEL_12;
    }
    v14 = (unsigned int)v16;
    v15 = 111LL;
  }
  else
  {
    v13 = -2147024882;
    v14 = 2147942414LL;
    v15 = 108LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\registrywatcher\\lib\\registrywatcher.cpp",
    (const char *)v14,
    v17);
LABEL_12:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
  return v13;
}
