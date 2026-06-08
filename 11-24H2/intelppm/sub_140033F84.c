/*
 * XREFs of sub_140033F84 @ 0x140033F84
 * Callers:
 *     sub_140034144 @ 0x140034144 (sub_140034144.c)
 * Callees:
 *     sub_140003BC4 @ 0x140003BC4 (sub_140003BC4.c)
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_140005F24 @ 0x140005F24 (sub_140005F24.c)
 *     sub_14000CC98 @ 0x14000CC98 (sub_14000CC98.c)
 *     sub_140028380 @ 0x140028380 (sub_140028380.c)
 */

__int64 __fastcall sub_140033F84(_QWORD *a1, __int64 a2, struct _DEVICE_OBJECT *a3, __int64 a4)
{
  _DWORD *v5; // rcx
  unsigned int i; // ebx
  __int64 v7; // r8
  const char *v8; // rax
  const char **v9; // rbx
  __int64 v10; // rsi
  unsigned __int8 *v11; // rdi
  __int64 result; // rax
  int v13; // [rsp+20h] [rbp-38h]

  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    if ( LOWORD(off_140018050->DeviceType) )
      sub_140005F24((__int64)off_140018050->DeviceExtension, 5u, 2u, 0xB9u, (__int64)&unk_140012FE8);
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 && LOWORD(off_140018050->DeviceType) )
      sub_140003D28(off_140018050->DeviceExtension, 5, 2, 186, (__int64)&unk_140012FE8);
  }
  v5 = (_DWORD *)*a1;
  for ( i = 0; i < *(_DWORD *)*a1; ++i )
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 && LOWORD(off_140018050->DeviceType) )
    {
      switch ( v5[i + 1] )
      {
        case 1:
          v8 = "Processor Boost";
          break;
        case 2:
          v8 = "Processor Throttle";
          break;
        case 3:
          v8 = "L2 Cache";
          break;
        case 4:
          v8 = "L3 Cache";
          break;
        case 5:
          v8 = "Memory Bandwith";
          break;
        default:
          v8 = "Unknown";
          break;
      }
      v7 = (unsigned int)v5[i + 1];
      sub_14000CC98((__int64)off_140018050->DeviceExtension, (__int64)off_140018050, v7, 0xBBu, v13, v7, v8);
    }
    v5 = (_DWORD *)*a1;
  }
  v9 = (const char **)&off_140012348;
  v10 = 4LL;
  do
  {
    v11 = (unsigned __int8 *)a1 + *((unsigned int *)v9 - 2);
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      if ( LOWORD(off_140018050->DeviceType) )
        sub_140003BC4((__int64)off_140018050->DeviceExtension, 5u, 2u, 0xBCu, (__int64)&unk_140012FE8, *v9);
    }
    result = sub_140028380(v11, "      ", a3, a4);
    v9 += 3;
    --v10;
  }
  while ( v10 );
  return result;
}
