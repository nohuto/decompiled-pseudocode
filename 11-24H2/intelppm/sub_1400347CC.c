/*
 * XREFs of sub_1400347CC @ 0x1400347CC
 * Callers:
 *     sub_140027628 @ 0x140027628 (sub_140027628.c)
 *     sub_1400392E0 @ 0x1400392E0 (sub_1400392E0.c)
 * Callees:
 *     sub_140003BC4 @ 0x140003BC4 (sub_140003BC4.c)
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_140028380 @ 0x140028380 (sub_140028380.c)
 */

__int64 __fastcall sub_1400347CC(unsigned __int8 *a1, const char *a2, struct _DEVICE_OBJECT *a3, __int64 a4)
{
  const char *v4; // rdi
  int v6; // edx
  struct _DEVICE_OBJECT *v7; // r8
  __int64 v8; // r9
  __int64 result; // rax
  int v10; // edx

  if ( a1 )
  {
    v4 = a2;
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      if ( LOWORD(off_140018050->DeviceType) )
      {
        LOBYTE(a2) = 5;
        sub_140003D28(off_140018050->DeviceExtension, (_DWORD)a2, 2, 106, (__int64)&unk_140012FE8);
      }
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 && LOWORD(off_140018050->DeviceType) )
        sub_140003BC4((__int64)off_140018050->DeviceExtension, 5u, 2u, 0x6Bu, (__int64)&unk_140012FE8, v4);
    }
    sub_140028380(a1, "  ", a3, a4);
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      if ( LOWORD(off_140018050->DeviceType) )
      {
        LOBYTE(v6) = 5;
        sub_140003D28(off_140018050->DeviceExtension, v6, 2, 108, (__int64)&unk_140012FE8);
      }
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 && LOWORD(off_140018050->DeviceType) )
        sub_140003BC4((__int64)off_140018050->DeviceExtension, 5u, 2u, 0x6Du, (__int64)&unk_140012FE8, v4);
    }
    result = sub_140028380(a1 + 12, "  ", v7, v8);
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      if ( LOWORD(off_140018050->DeviceType) )
      {
        LOBYTE(v10) = 5;
        return sub_140003D28(off_140018050->DeviceExtension, v10, 2, 110, (__int64)&unk_140012FE8);
      }
    }
  }
  return result;
}
