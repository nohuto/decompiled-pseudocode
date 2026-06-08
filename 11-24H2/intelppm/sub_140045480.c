/*
 * XREFs of sub_140045480 @ 0x140045480
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 */

__int64 __fastcall sub_140045480(__int64 a1, __int64 a2, unsigned int a3)
{
  int v4; // r9d

  if ( a3 < 0xC )
    return 3221225485LL;
  if ( *(_WORD *)(a1 + 2) >= 0xFu )
  {
    if ( *(_BYTE *)(a1 + 4) == 0x82 && *(_WORD *)(a1 + 5) >= 0xCu )
    {
      *(_BYTE *)a2 = *(_BYTE *)(a1 + 7);
      *(_BYTE *)(a2 + 1) = *(_BYTE *)(a1 + 8);
      *(_BYTE *)(a2 + 2) = *(_BYTE *)(a1 + 9);
      *(_QWORD *)(a2 + 4) = *(_QWORD *)(a1 + 11);
      *(_BYTE *)(a2 + 3) = *(_BYTE *)(a1 + 10);
      return 0LL;
    }
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      return 3222536200LL;
    v4 = 80;
    goto LABEL_12;
  }
  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    v4 = 79;
LABEL_12:
    LOBYTE(a2) = 2;
    sub_140003D28(off_140018050->DeviceExtension, a2, 1, v4, (__int64)&unk_140012FE8);
  }
  return 3222536200LL;
}
