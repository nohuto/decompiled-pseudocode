/*
 * XREFs of sub_180067964 @ 0x180067964
 * Callers:
 *     sub_18005F730 @ 0x18005F730 (sub_18005F730.c)
 *     sub_180061FF0 @ 0x180061FF0 (sub_180061FF0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800323A0 @ 0x1800323A0 (sub_1800323A0.c)
 *     sub_18005889C @ 0x18005889C (sub_18005889C.c)
 *     sub_1800588CC @ 0x1800588CC (sub_1800588CC.c)
 *     sub_18005896C @ 0x18005896C (sub_18005896C.c)
 *     sub_1800589C0 @ 0x1800589C0 (sub_1800589C0.c)
 *     sub_18005D728 @ 0x18005D728 (sub_18005D728.c)
 *     sub_180084964 @ 0x180084964 (sub_180084964.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_180067964(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  int v4; // xmm8_4
  int v5; // xmm9_4
  int v6; // xmm10_4
  double v7; // xmm0_8
  double v8; // xmm0_8
  double v9; // xmm0_8
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 v12; // r15
  _UNKNOWN **v13; // r14
  __int64 *v14; // rsi
  __int64 v15; // r12
  __int64 v16; // rbx
  __int64 v17; // rbp
  char v18; // al
  double v19; // xmm0_8
  float v20; // xmm11_4
  double v21; // xmm0_8
  float v22; // xmm12_4
  double v23; // xmm0_8
  float v24; // xmm13_4
  char v25; // al
  double v26; // xmm0_8
  int v27; // xmm14_4
  int v28; // eax
  double v29; // xmm0_8
  int v30; // xmm15_4
  unsigned int v31; // ecx
  float v32; // xmm0_4
  double v33; // xmm0_8
  unsigned int v34; // [rsp+20h] [rbp-108h]
  int v35; // [rsp+24h] [rbp-104h]
  int v36; // [rsp+28h] [rbp-100h]
  __int64 v37; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v38; // [rsp+38h] [rbp-F0h]
  __int64 v39; // [rsp+40h] [rbp-E8h]
  __int64 v40; // [rsp+48h] [rbp-E0h]
  char v41; // [rsp+138h] [rbp+10h]
  char v42; // [rsp+140h] [rbp+18h]
  char v43; // [rsp+148h] [rbp+20h]

  v3 = sub_1800323A0(a1, *(_DWORD *)(*a2 + 112));
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, &unk_1801C56A8, 0LL) )
  {
    v7 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, &unk_1801C5648);
    v4 = LODWORD(v7);
    v8 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, &unk_1801C5668);
    v5 = LODWORD(v8);
    v9 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, &unk_1801C5688);
    v6 = LODWORD(v9);
  }
  v34 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, &unk_1801C5608, 0LL);
  v11 = sub_18005D728(*a2, v10);
  v12 = 0LL;
  v13 = &off_1801B8890;
  v14 = (__int64 *)(v11 + 144);
  v15 = 3LL;
  do
  {
    if ( *v14 )
      _InterlockedIncrement((volatile signed __int32 *)(*v14 + 8));
    v16 = *(v14 - 1);
    v39 = v16;
    v17 = *v14;
    v40 = *v14;
    if ( v16 )
    {
      unknown_libname_81(&v37, (_QWORD *)(v12 + v11 + 8));
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, *(v13 - 2), 0LL);
      v41 = v18;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 88LL))(v3, *(v13 - 1));
      v19 = (*(double (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 88LL))(v3, *v13);
      v20 = *(float *)&v19;
      v21 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, v13[3]);
      v22 = *(float *)&v21;
      v23 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, v13[4]);
      v24 = *(float *)&v23;
      v42 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, v13[2], 0LL);
      (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, v13[5], 0LL);
      v43 = v25;
      v26 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, v13[6]);
      v27 = LODWORD(v26);
      v35 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, v13[8], 0LL);
      (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, v13[9], 0LL);
      v36 = v28;
      v29 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, v13[10]);
      v30 = LODWORD(v29);
      v31 = (int)o_roundf();
      if ( v31 >= 0x10 )
      {
        if ( v31 > 0x800 )
          v31 = 2048;
      }
      else
      {
        v31 = 16;
      }
      *(_DWORD *)(v16 + 1940) = v31;
      sub_180084964(v16, v34);
      *(_BYTE *)(v16 + 72) = v41;
      sub_1800589C0(v16, v20);
      *(_BYTE *)(v16 + 1953) = v42;
      sub_18005896C(v16, v22);
      sub_18005889C(v16, v24);
      *(_BYTE *)(v16 + 1952) = v43;
      *(_DWORD *)(v16 + 1948) = v27;
      *(_DWORD *)(v16 + 1960) = v35;
      *(_DWORD *)(v16 + 1964) = v36;
      *(_DWORD *)(v16 + 1968) = v30;
      if ( v37 && *(_DWORD *)(v37 + 120) == 1 )
      {
        sub_1800588CC(v16, *(float *)(v37 + 112));
        v32 = 0.0;
      }
      else
      {
        v33 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, v13[1]);
        sub_1800588CC(v16, *(float *)&v33);
        v32 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, v13[7]);
      }
      *(float *)(v16 + 1956) = v32;
      *(_DWORD *)(v16 + 400) = v4;
      *(_DWORD *)(v16 + 404) = v5;
      *(_DWORD *)(v16 + 408) = v6;
      if ( v38 )
        sub_18001050C(v38);
    }
    if ( v17 )
      sub_18001050C(v17);
    v12 += 16LL;
    v14 += 2;
    v13 += 13;
    --v15;
  }
  while ( v15 );
}
