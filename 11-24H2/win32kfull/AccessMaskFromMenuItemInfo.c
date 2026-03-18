/*
 * XREFs of AccessMaskFromMenuItemInfo @ 0x1401D51A4
 * Callers:
 *     NtUserThunkedMenuItemInfo @ 0x1402A12D0 (NtUserThunkedMenuItemInfo.c)
 * Callees:
 *     <none>
 */

int __fastcall AccessMaskFromMenuItemInfo(__int64 a1, char a2, __int16 a3)
{
  int v3; // r9d
  int v4; // ecx
  int result; // eax

  v3 = 64;
  if ( (a2 & 1) != 0 )
  {
    v3 = (32 * (a3 & 8 | 2)) | 0x200;
    if ( (a3 & 0x1000) == 0 )
      v3 = 32 * (a3 & 8 | 2);
    if ( (a3 & 3) != 0 )
      v3 |= 0x80u;
  }
  v4 = v3 | 0x800;
  if ( (a2 & 4) == 0 )
    v4 = v3;
  result = v4 | 0x400;
  if ( (a2 & 0x20) == 0 )
    return v4;
  return result;
}
