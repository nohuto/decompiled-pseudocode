/*
 * XREFs of sub_1800CA890 @ 0x1800CA890
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_1800CAA88 @ 0x1800CAA88 (sub_1800CAA88.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800CA890(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  __int64 v5; // rcx
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2;
  v4 = *(_DWORD *)(*(_QWORD *)(a1 + 96) + 12LL);
  v5 = *(_QWORD *)(a1 + 104);
  v9 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  sub_180011B04(a1 + 72, &v7);
  sub_1800CAA88(a2, &v7, &v9, v4);
  if ( v8 )
    sub_18001050C(v8);
  return a2;
}
