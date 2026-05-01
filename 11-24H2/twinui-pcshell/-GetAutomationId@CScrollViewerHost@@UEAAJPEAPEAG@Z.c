/*
 * XREFs of ?GetAutomationId@CScrollViewerHost@@UEAAJPEAPEAG@Z @ 0x1804CA4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180016930 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall CScrollViewerHost::GetAutomationId(CScrollViewerHost *this, unsigned __int16 **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  unsigned __int16 *v6; // rax
  unsigned __int16 *v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  if ( (*((_BYTE *)this + 392) & 4) == 0 )
    return 2147500033LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v3 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (__int64)&v7,
         (__int64)L"TaskSwitchingWindow",
         0xFFFFFFFFFFFFFFFFuLL);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = v7;
    v7 = 0LL;
    v9 = 0LL;
    v8 = 0LL;
    *a2 = v6;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v7);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\scrollviewerhostelement.cpp",
      (const char *)(unsigned int)v3);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v7);
    return v4;
  }
}
