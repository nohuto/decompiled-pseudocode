/*
 * XREFs of sub_1400014D0 @ 0x1400014D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140001A70 @ 0x140001A70 (sub_140001A70.c)
 *     sub_140002350 @ 0x140002350 (sub_140002350.c)
 *     sub_140003834 @ 0x140003834 (sub_140003834.c)
 */

__int64 __fastcall sub_1400014D0(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // ebx
  int v7; // eax
  int v8; // edx

  v5 = 0;
  sub_140001A70(a1, a2);
  if ( *(_QWORD *)(a1 + 16) )
  {
    if ( a3 )
    {
      v7 = sub_140002350(a1 + 12);
      if ( v7 != (_DWORD)a3 )
      {
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          LOBYTE(v8) = 3;
          sub_140003834(off_140018050->DeviceExtension, v8, 3, 23, (__int64)&unk_140013160, a3, v7);
        }
        return (unsigned int)-1073741823;
      }
    }
  }
  return v5;
}
