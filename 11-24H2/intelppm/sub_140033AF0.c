/*
 * XREFs of sub_140033AF0 @ 0x140033AF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_140010380 @ 0x140010380 (sub_140010380.c)
 */

__int64 __fastcall sub_140033AF0(__int64 a1, char *a2, unsigned int a3)
{
  int v4; // edx

  v4 = 8;
  if ( a3 < 8 )
    return 3221225485LL;
  if ( *(_WORD *)(a1 + 2) <= 8u )
  {
    *(_QWORD *)a2 = 0LL;
    sub_140010380(a2, (char *)(a1 + 4), *(unsigned __int16 *)(a1 + 2));
    return 0LL;
  }
  else
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      LOBYTE(v4) = 2;
      sub_140003D28(off_140018050->DeviceExtension, v4, 1, 78, (__int64)&unk_140012FE8);
    }
    return 3222536200LL;
  }
}
