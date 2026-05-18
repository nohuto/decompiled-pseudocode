/*
 * XREFs of sub_1800516E0 @ 0x1800516E0
 * Callers:
 *     sub_18007B4FC @ 0x18007B4FC (sub_18007B4FC.c)
 * Callees:
 *     sub_1800276BC @ 0x1800276BC (sub_1800276BC.c)
 *     sub_180027B30 @ 0x180027B30 (sub_180027B30.c)
 *     sub_180040AFC @ 0x180040AFC (sub_180040AFC.c)
 *     sub_180052088 @ 0x180052088 (sub_180052088.c)
 *     sub_180052818 @ 0x180052818 (sub_180052818.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800516E0(__int64 a1, _QWORD *a2)
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
    result = sub_180040AFC(a1 + 112, (__int64)&v8);
    if ( result == *(_QWORD *)(a1 + 112) || !*(_QWORD *)(result + 40) )
    {
      result = sub_180027B30(a1, (__int64)a2);
      v6 = *(_QWORD *)(a1 + 136);
      if ( v6 )
      {
        sub_180052088(a1, v6, *a2);
        v8 = v5;
        *(_BYTE *)(*(_QWORD *)sub_1800276BC((__int64 *)(a1 + 80), (__int64)v7, &v8) + 32LL) = 1;
        if ( (*(_BYTE *)(a1 + 40) & 8) != 0 )
          return sub_180052818(a1 + 136, 0LL);
        result = *(_QWORD *)(a1 + 72);
        if ( (*(_BYTE *)(result + 752) & 8) != 0 )
          return sub_180052818(a1 + 136, 0LL);
      }
    }
  }
  return result;
}
