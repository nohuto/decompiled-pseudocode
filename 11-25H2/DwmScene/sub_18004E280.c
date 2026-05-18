/*
 * XREFs of sub_18004E280 @ 0x18004E280
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180015D88 @ 0x180015D88 (sub_180015D88.c)
 *     sub_180027C24 @ 0x180027C24 (sub_180027C24.c)
 *     sub_18004E374 @ 0x18004E374 (sub_18004E374.c)
 *     sub_180050750 @ 0x180050750 (sub_180050750.c)
 *     sub_180078418 @ 0x180078418 (sub_180078418.c)
 */

__int64 __fastcall sub_18004E280(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 *v3; // rax
  __int64 *v4; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  __int128 v10; // [rsp+20h] [rbp-60h] BYREF
  __int64 v11; // [rsp+30h] [rbp-50h]
  _DWORD v12[7]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v13; // [rsp+5Ch] [rbp-24h]
  int v14; // [rsp+6Ch] [rbp-14h]
  int v15; // [rsp+70h] [rbp-10h]

  v1 = (__int64 *)(a1 + 512);
  if ( !*(_QWORD *)(a1 + 512) )
  {
    v3 = (__int64 *)sub_180078418(a1);
    v4 = sub_180015D88(v3, &v10);
    sub_180011010(v1, v4);
    if ( *((_QWORD *)&v10 + 1) )
      sub_18001050C(*((__int64 *)&v10 + 1));
    v5 = *v1;
    v6 = std::string::string(&v10, "Light Probe Sampler");
    sub_180027C24(v5, (__int64)v6);
    v12[1] = 0;
    v12[2] = 0;
    v12[3] = 0;
    v12[4] = 0;
    v14 = 0;
    v7 = *v1;
    v13 = 0LL;
    v12[6] = 7;
    v15 = 2139095039;
    v12[0] = 3;
    v12[5] = 8;
    sub_180050750(v7, v12, 0LL, v8, v10, *((_QWORD *)&v10 + 1), v11);
  }
  v10 = xmmword_1800F7600;
  return sub_18004E374(a1, &v10);
}
