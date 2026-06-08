/*
 * XREFs of sub_14000E5C0 @ 0x14000E5C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003834 @ 0x140003834 (sub_140003834.c)
 *     sub_140006718 @ 0x140006718 (sub_140006718.c)
 *     sub_140008DF8 @ 0x140008DF8 (sub_140008DF8.c)
 */

__int64 __fastcall sub_14000E5C0(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v7; // ebx
  int v8; // eax
  int v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  v7 = 0;
  sub_140008DF8(a1, (_BYTE *)a2, a3);
  if ( *(_QWORD *)(a2 + 16) )
  {
    if ( a4 )
    {
      v8 = sub_140006718(a1, (unsigned __int8 *)(a2 + 12));
      if ( v8 != (_DWORD)a4 )
      {
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          v11 = v8;
          v10 = a4;
          sub_140003834((__int64)off_140018050->DeviceExtension, 3u, 3u, 0x18u, (__int64)&unk_140013160, v10, v11);
        }
        return (unsigned int)-1073741823;
      }
    }
  }
  return v7;
}
