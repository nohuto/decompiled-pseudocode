/*
 * XREFs of ?TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z @ 0x1800AA280
 * Callers:
 *     ?Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z @ 0x1800A9E2C (-Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A0D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18003D630 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800712D0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800AA3B8 (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 */

__int64 __fastcall ShellMRTHelper::Common::TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri(
        ShellMRTHelper::Common *this,
        _QWORD *a2,
        unsigned __int16 **a3)
{
  PCWSTR StringRawBuffer; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  unsigned int i; // ebx
  int v9; // eax
  int v10; // edi
  __int64 v12; // rax
  __int64 v13; // [rsp+20h] [rbp-20h] BYREF
  __int64 v14; // [rsp+28h] [rbp-18h]
  __int64 v15; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  UINT32 length; // [rsp+78h] [rbp+38h] BYREF
  int v18; // [rsp+80h] [rbp+40h] BYREF

  *a2 = 0LL;
  length = 0;
  StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)this, &length);
  if ( length <= 0xC || StringRawBuffer[12] == 47 )
    return 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (__int64)&v13,
         (char *)L"ms-resource:",
         length + 3);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 195LL;
    goto LABEL_12;
  }
  for ( i = 0; i < 3; ++i )
  {
    v18 = 47;
    v9 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(&v13, &v18, 1LL);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC7,
        (__int64)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\tiles\\ShellMRTHelper.Common.h",
        (const char *)(unsigned int)v9);
      v6 = v10;
      goto LABEL_13;
    }
  }
  v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
         &v13,
         StringRawBuffer + 12,
         length - 12);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v12 = v13;
    v13 = 0LL;
    v15 = 0LL;
    v14 = 0LL;
    *a2 = v12;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v13);
    return 0LL;
  }
  v7 = 202LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\tiles\\ShellMRTHelper.Common.h",
    (const char *)(unsigned int)v5);
LABEL_13:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v13);
  return v6;
}
