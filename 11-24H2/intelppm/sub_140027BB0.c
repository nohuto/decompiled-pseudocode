/*
 * XREFs of sub_140027BB0 @ 0x140027BB0
 * Callers:
 *     sub_1400470A0 @ 0x1400470A0 (sub_1400470A0.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_140032E50 @ 0x140032E50 (sub_140032E50.c)
 *     sub_140040DB8 @ 0x140040DB8 (sub_140040DB8.c)
 */

__int64 __fastcall sub_140027BB0(__int64 a1, __int64 a2)
{
  int v4; // edx
  int v5; // edi
  int v7; // [rsp+40h] [rbp+8h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x80000u);
  v5 = sub_140040DB8(a1, 1229999199, 0, (unsigned int)&P, (__int64)&v7);
  if ( v5 >= 0 )
  {
    *(_QWORD *)(a1 + 272) |= *(_QWORD *)(a1 + 280) & 0x20E0000000000LL;
    if ( v7 )
    {
      v5 = sub_140032E50(P, *(_QWORD *)(a1 + 64), 0LL, a2);
    }
    else
    {
      v5 = -1072431089;
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        LOBYTE(v4) = 2;
        sub_140003D28(off_140018050->DeviceExtension, v4, 3, 51, (__int64)&unk_140012FE8);
      }
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v5 < 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x80000u);
  return (unsigned int)v5;
}
