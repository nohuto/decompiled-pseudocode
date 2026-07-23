/*
 * XREFs of RtlpMuiRegGetInstalledLanguageInfoByIndex @ 0x1801479F0
 * Callers:
 *     RtlpGetDefaultLanguageBaseOrParent @ 0x18013DF48 (RtlpGetDefaultLanguageBaseOrParent.c)
 * Callees:
 *     RtlLCIDToCultureName @ 0x180016340 (RtlLCIDToCultureName.c)
 *     RtlStringCchCopyW @ 0x1800E71D0 (RtlStringCchCopyW.c)
 *     RtlpMuiRegGetString @ 0x180147D28 (RtlpMuiRegGetString.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpMuiRegGetInstalledLanguageInfoByIndex(
        __int64 a1,
        __int16 a2,
        LCID *a3,
        _WORD *a4,
        unsigned int a5,
        _DWORD *a6)
{
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rdx
  LCID v12; // ecx
  _UNICODE_STRING String; // [rsp+20h] [rbp-E8h] BYREF
  char v14; // [rsp+30h] [rbp-D8h] BYREF

  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  if ( !a1 || !a3 || !a4 || !a5 || !a6 )
    return 3221225485LL;
  v7 = *(_QWORD *)(a1 + 24);
  if ( !v7 )
    return 3221226021LL;
  v8 = *(_QWORD *)(v7 + 16);
  if ( !v8 || a2 < 0 || a2 >= (unsigned int)*(unsigned __int16 *)(v7 + 6) )
    return 3221226021LL;
  v9 = 28LL * a2;
  *a3 = *(unsigned __int16 *)(v9 + v8 + 4);
  *a6 = *(unsigned __int16 *)(v9 + v8);
  v10 = *(unsigned __int16 *)(v9 + v8 + 6);
  if ( (__int16)v10 > 0 )
    return RtlpMuiRegGetString(a1, v10, a4, a5);
  v12 = *a3;
  String.Buffer = (wchar_t *)&v14;
  *(_DWORD *)&String.Length = 11141120;
  if ( RtlLCIDToCultureName(v12, &String) )
    return RtlStringCchCopyW(a4, a5, (__int64)String.Buffer);
  else
    return 3221226021LL;
}
