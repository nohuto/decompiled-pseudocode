/*
 * XREFs of AslpFileGet16BitDescription @ 0x18009FDD4
 * Callers:
 *     AslpFileGetHeaderAttributesNE @ 0x1800A0DFC (AslpFileGetHeaderAttributesNE.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     AslStringAnsiToUnicode @ 0x18009E0C0 (AslStringAnsiToUnicode.c)
 *     AslpFileQuery16BitDescription @ 0x1800A2BC4 (AslpFileQuery16BitDescription.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall AslpFileGet16BitDescription(PWSTR *a1, __int64 a2)
{
  int v4; // edi
  int v5; // ebx
  char v6[256]; // [rsp+30h] [rbp-118h] BYREF

  if ( *(_DWORD *)(a2 + 56) == 5 )
  {
    memset_0(v6, 0, sizeof(v6));
    v4 = AslpFileQuery16BitDescription(v6);
    if ( v4 >= 0 )
    {
      v5 = AslStringAnsiToUnicode(a1, v6);
      if ( v5 < 0 )
        AslLogCallPrintf(1LL);
      return (unsigned int)v5;
    }
    else
    {
      AslLogCallPrintf(1LL);
      return (unsigned int)v4;
    }
  }
  else
  {
    *a1 = 0LL;
    return 3221225659LL;
  }
}
