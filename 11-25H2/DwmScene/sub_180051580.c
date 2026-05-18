/*
 * XREFs of sub_180051580 @ 0x180051580
 * Callers:
 *     sub_18007B39C @ 0x18007B39C (sub_18007B39C.c)
 * Callees:
 *     sub_18002755C @ 0x18002755C (sub_18002755C.c)
 *     sub_1800279D0 @ 0x1800279D0 (sub_1800279D0.c)
 *     sub_18004099C @ 0x18004099C (sub_18004099C.c)
 *     sub_180051F28 @ 0x180051F28 (sub_180051F28.c)
 *     sub_1800526B8 @ 0x1800526B8 (sub_1800526B8.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180051580(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  int v5; // ebp
  __int64 v6; // rdx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+48h] [rbp+10h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !(_BYTE)result )
  {
    v5 = *(_DWORD *)(*a2 + 244LL);
    v8 = v5;
    result = sub_18004099C(a1 + 112, (__int64)&v8);
    if ( result == *(_QWORD *)(a1 + 112) || !*(_QWORD *)(result + 40) )
    {
      result = sub_1800279D0(a1, (__int64)a2);
      v6 = *(_QWORD *)(a1 + 136);
      if ( v6 )
      {
        sub_180051F28(a1, v6, *a2);
        v8 = v5;
        *(_BYTE *)(*(_QWORD *)sub_18002755C((__int64 *)(a1 + 80), (__int64)v7, &v8) + 32LL) = 1;
        if ( (*(_BYTE *)(a1 + 40) & 8) != 0 )
          return sub_1800526B8(a1 + 136, 0LL);
        result = *(_QWORD *)(a1 + 72);
        if ( (*(_BYTE *)(result + 752) & 8) != 0 )
          return sub_1800526B8(a1 + 136, 0LL);
      }
    }
  }
  return result;
}
