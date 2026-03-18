/*
 * XREFs of ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1401163A8
 * Callers:
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x140114C7C (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x14003E6B0 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z @ 0x1401165E0 (-vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z.c)
 *     xxxAddFontResourceW @ 0x1401166E0 (xxxAddFontResourceW.c)
 *     ExchangeW32ThreadLock @ 0x140117394 (ExchangeW32ThreadLock.c)
 *     ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x140265444 (-RtlStringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall xxxbEnumerateRegistryFontsInternal(HANDLE KeyHandle)
{
  ULONG v2; // r14d
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  struct tagTHREADINFO *v7; // rax
  ULONG v8; // esi
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int16 v12; // bx
  WCHAR *v13; // rbx
  __int64 v14; // rax
  void *v15; // rbx
  ULONG ResultLength; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v17[3]; // [rsp+38h] [rbp-51h] BYREF
  _BYTE v18[4]; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int16 v19[4]; // [rsp+A0h] [rbp+17h] BYREF
  wchar_t v20; // [rsp+A8h] [rbp+1Fh]

  memset_0(v18, 0, 0x48uLL);
  v2 = 1074;
  *(_QWORD *)v19 = *(_QWORD *)L".FON";
  v20 = aFon[4];
  ResultLength = 0;
  result = Win32AllocPoolZInit(1074LL, 1919972181LL);
  v6 = result;
  if ( result )
  {
    v7 = PtiCurrent(v5, v4);
    v8 = 0;
    v17[0] = *((_QWORD *)v7 + 48);
    *((_QWORD *)v7 + 48) = v17;
    v17[2] = Win32FreePool;
    v17[1] = v6;
    while ( 1 )
    {
      v9 = ZwEnumerateValueKey(KeyHandle, v8, KeyValueFullInformation, (PVOID)v6, v2 - 10, &ResultLength);
      if ( v9 != -2147483643 && v9 != -1073741789
        || (ResultLength += 10, v14 = Win32AllocPoolZInit(ResultLength, 1919972181LL), (v15 = (void *)v14) != 0LL)
        && (ExchangeW32ThreadLock(v14, v17),
            v2 = ResultLength,
            v6 = (__int64)v15,
            v9 = ZwEnumerateValueKey(KeyHandle, v8, KeyValueFullInformation, v15, ResultLength - 10, &ResultLength),
            v9 != -2147483643)
        && v9 != -1073741789 )
      {
        if ( v9 < 0 )
        {
          PopAndFreeW32ThreadLock((__int64)v17, v10);
          return 1LL;
        }
        if ( *(_DWORD *)(v6 + 4) == 1 )
        {
          v11 = (unsigned __int64)*(unsigned int *)(v6 + 16) >> 1;
          v12 = *(_WORD *)(v6 + 2 * v11 + 20);
          *(_WORD *)(v6 + 2 * v11 + 20) = 0;
          vCheckMMInstance((unsigned __int16 *)(v6 + 20), (struct tagDESIGNVECTOR *)v18);
          *(_WORD *)(v6 + 2 * ((unsigned __int64)*(unsigned int *)(v6 + 16) >> 1) + 20) = v12;
          v13 = (WCHAR *)(v6 + *(unsigned int *)(v6 + 8));
          if ( wcschr(v13, 0x2Eu) )
            xxxAddFontResourceW(v13);
          else
            RtlStringCchCatW(v13, (unsigned __int64)(v2 - *(_DWORD *)(v6 + 8)) >> 1, v19);
        }
      }
      ++v8;
    }
  }
  return result;
}
