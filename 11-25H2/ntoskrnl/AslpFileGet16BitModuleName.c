/*
 * XREFs of AslpFileGet16BitModuleName @ 0x1407FCF78
 * Callers:
 *     AslpFileGetHeaderAttributesNE @ 0x1407FDE80 (AslpFileGetHeaderAttributesNE.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     AslStringAnsiToUnicode @ 0x1407F8824 (AslStringAnsiToUnicode.c)
 *     AslpFileQuery16BitModuleName @ 0x1407FFC28 (AslpFileQuery16BitModuleName.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGet16BitModuleName(wchar_t **a1, __int64 a2)
{
  int v4; // edi
  int v5; // ebx
  CHAR v6[256]; // [rsp+30h] [rbp-118h] BYREF

  if ( *(_DWORD *)(a2 + 64) == 5 )
  {
    memset_0(v6, 0, sizeof(v6));
    v4 = AslpFileQuery16BitModuleName(v6);
    if ( v4 >= 0 )
    {
      v5 = AslStringAnsiToUnicode(a1, v6);
      if ( v5 < 0 )
        AslLogCallPrintf(
          1,
          (unsigned int)"AslpFileGet16BitModuleName",
          4354,
          (unsigned int)"AslStringAnsiToUnicode failed [%x]");
      return (unsigned int)v5;
    }
    else
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"AslpFileGet16BitModuleName",
        4348,
        (unsigned int)"AslpFileQuery16BitModuleName failed [%x]");
      return (unsigned int)v4;
    }
  }
  else
  {
    *a1 = 0LL;
    return 3221225659LL;
  }
}
