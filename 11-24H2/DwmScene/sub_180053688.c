/*
 * XREFs of sub_180053688 @ 0x180053688
 * Callers:
 *     sub_18005360C @ 0x18005360C (sub_18005360C.c)
 *     sub_180053C10 @ 0x180053C10 (sub_180053C10.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_180011C8C @ 0x180011C8C (sub_180011C8C.c)
 *     sub_180015274 @ 0x180015274 (sub_180015274.c)
 *     sub_180017658 @ 0x180017658 (sub_180017658.c)
 *     sub_18001CF40 @ 0x18001CF40 (sub_18001CF40.c)
 *     sub_180028584 @ 0x180028584 (sub_180028584.c)
 *     sub_18002863C @ 0x18002863C (sub_18002863C.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     sub_1800287D4 @ 0x1800287D4 (sub_1800287D4.c)
 *     sub_18002D550 @ 0x18002D550 (sub_18002D550.c)
 *     sub_180032500 @ 0x180032500 (sub_180032500.c)
 *     sub_180032548 @ 0x180032548 (sub_180032548.c)
 *     sub_1800339BC @ 0x1800339BC (sub_1800339BC.c)
 *     sub_180034224 @ 0x180034224 (sub_180034224.c)
 *     sub_1800354B8 @ 0x1800354B8 (sub_1800354B8.c)
 *     sub_180036AF4 @ 0x180036AF4 (sub_180036AF4.c)
 *     sub_180053500 @ 0x180053500 (sub_180053500.c)
 *     sub_180053DB0 @ 0x180053DB0 (sub_180053DB0.c)
 *     sub_180058CAC @ 0x180058CAC (sub_180058CAC.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=8
int __fastcall sub_180053688(__int64 a1)
{
  int v2; // ecx
  int v3; // eax
  int v4; // r14d
  __int64 v5; // rax
  __int64 v6; // rsi
  int v7; // edx
  unsigned int v8; // esi
  __int64 v9; // rbx
  _QWORD *v10; // r12
  _QWORD *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned int v15; // eax
  _QWORD *v16; // rax
  void (__fastcall *v17)(__int64, _QWORD *); // r8
  __int64 v18; // r9
  _QWORD *v19; // r15
  __int64 *v20; // r10
  unsigned int **v21; // r10
  _QWORD *v22; // r11
  unsigned int *v23; // rbx
  unsigned int v24; // edx
  __int64 v25; // r10
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 *v28; // rax
  int result; // eax
  __int64 v30; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+38h] [rbp-C8h]
  __int64 v32; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+48h] [rbp-B8h]
  __int128 v34; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  char v36; // [rsp+68h] [rbp-98h]
  __int64 v37; // [rsp+70h] [rbp-90h] BYREF
  __int64 v38; // [rsp+78h] [rbp-88h]
  __int64 v39; // [rsp+80h] [rbp-80h] BYREF
  volatile signed __int32 *v40; // [rsp+88h] [rbp-78h]
  _BYTE v41[16]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v42[16]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v43; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v44; // [rsp+B8h] [rbp-48h]
  __int64 v45; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v46[16]; // [rsp+C8h] [rbp-38h] BYREF
  char v47[8]; // [rsp+D8h] [rbp-28h] BYREF
  volatile signed __int32 *v48; // [rsp+E0h] [rbp-20h]
  __int64 v49; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v50; // [rsp+F0h] [rbp-10h]
  _BYTE v51[16]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v52; // [rsp+108h] [rbp+8h] BYREF
  __int64 v53; // [rsp+118h] [rbp+18h]
  _QWORD *v54; // [rsp+198h] [rbp+98h]
  _QWORD *v55; // [rsp+1A0h] [rbp+A0h]
  __int64 v56; // [rsp+1A8h] [rbp+A8h] BYREF

  *(_BYTE *)(a1 + 376) = 1;
  sub_180053500(a1, &v32);
  v2 = v32;
  if ( v32 )
    v2 = sub_18001CF40((unsigned int *)(v32 + 192));
  if ( *(_QWORD *)(a1 + 64) != *(_QWORD *)(a1 + 72) )
  {
    if ( !*(_BYTE *)(a1 + 384) || (v3 = *(_DWORD *)(a1 + 380), *(_DWORD *)(a1 + 380) = v2, v2 > v3) )
    {
      *(_QWORD *)(a1 + 392) = *sub_180011C8C(&v56);
      sub_1800287D4(*(_QWORD *)(a1 + 24) + 1104LL, (__int64)v51);
      v4 = 0;
      v35 = 0LL;
      v36 = 0;
      if ( v32 )
      {
        v5 = sub_18002867C(v32 + 16, (__int64)v46);
        sub_180017658((__int64)&v35, v5);
        sub_180011044((__int64)v46);
        v6 = v32;
        v4 = *(_DWORD *)(v32 + 112);
        v7 = *(_DWORD *)(a1 + 16);
        if ( v7 )
        {
          *(_DWORD *)(v32 + 112) = v7;
          v7 = *(_DWORD *)(a1 + 16);
          v6 = v32;
        }
        v8 = *(_DWORD *)(v6 + 112);
        if ( v7 )
          goto LABEL_15;
      }
      else
      {
        v8 = *(_DWORD *)(a1 + 16);
        if ( v8 )
        {
          v7 = *(_DWORD *)(a1 + 16);
          goto LABEL_15;
        }
        v8 = 1;
      }
      v7 = 1;
LABEL_15:
      v9 = sub_180032500(*(_QWORD *)(a1 + 24), v7);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v9 + 88LL))(v9, &unk_1801C57F8);
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v9 + 88LL))(v9, &unk_1801C5818);
      v10 = *(_QWORD **)(a1 + 64);
      v11 = *(_QWORD **)(a1 + 72);
      v54 = v11;
      while ( v10 != v11 )
      {
        sub_180036AF4((__int64)v10, &v30);
        if ( v30 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v30 + 352LL))(v30) )
        {
          v12 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v30 + 376LL))(v30, v47);
          sub_180011C04(v12, &v37);
          if ( v48 )
            sub_180010644(v48);
          v13 = v37;
          if ( v37 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37) )
          {
            sub_18002863C(v13 + 24, (__int64)v42);
            sub_18002863C(v30 + 8, (__int64)v41);
            v14 = sub_180032500(*(_QWORD *)(a1 + 24), v8);
            v15 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v14 + 72LL))(v14, &unk_1801C55D8, 0LL);
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v30 + 304LL))(v30, v15);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 72LL))(v30);
            v16 = sub_180032548(*(_QWORD *)(a1 + 24), &v49);
            v17(v18, v16);
            if ( v50 )
              sub_18001060C(v50);
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v30 + 232LL))(v30, v8);
            v55 = *(_QWORD **)(a1 + 48);
            v19 = *(_QWORD **)(a1 + 40);
            if ( v19 != v55 )
            {
              do
              {
                sub_180015274(&v39, v19);
                sub_18002D550(v20, &v52, (__int64)&v39);
                v23 = (unsigned int *)v53;
                if ( *(_BYTE *)(v53 + 25) || (unsigned __int64)v40 < *(_QWORD *)(v53 + 40) )
                  v23 = *v21;
                v24 = v8;
                if ( v40 )
                {
                  sub_180010644(v40);
                  v24 = v8;
                  v21 = (unsigned int **)(a1 + 88);
                  v22 = v55;
                }
                if ( v23 != *v21 )
                {
                  v25 = *v19;
                  v43 = *(_QWORD *)(*v19 + 344LL);
                  if ( (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*((unsigned __int64 *)v23 + 6), (__m128)v43)) & 3) != 3
                    || (v8 = v24,
                        v44 = *(_QWORD *)(v25 + 352),
                        (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*((unsigned __int64 *)v23 + 7), (__m128)v44)) & 3) != 3)
                    || *(_DWORD *)(v25 + 360) != v23[16] )
                  {
                    sub_180058CAC(
                      v25,
                      _mm_unpacklo_ps((__m128)v23[12], (__m128)v23[13]).m128_u64[0],
                      _mm_unpacklo_ps((__m128)v23[14], (__m128)v23[15]).m128_u64[0],
                      v23[16]);
                  }
                }
                v19 += 2;
              }
              while ( v19 != v22 );
            }
            (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 24) + 48LL))(*(_QWORD *)(a1 + 24), &v30);
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v30 + 240LL))(v30, v8);
            sub_180034224(*(_QWORD **)(a1 + 24), (__int64)&v32, a1 + 40, &v30);
            sub_1800339BC(*(_QWORD *)(a1 + 24), &v37, &v30, (__int64)v41, (__int64)v42, (__int64)&v35);
            (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 24) + 56LL))(*(_QWORD *)(a1 + 24), &v30);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 248LL))(v30);
            v26 = *(_QWORD *)(a1 + 24);
            v34 = 0LL;
            v27 = v10[1];
            if ( v27 )
            {
              *(_QWORD *)&v34 = *v10;
              *((_QWORD *)&v34 + 1) = v27;
              _InterlockedIncrement((volatile signed __int32 *)(v27 + 12));
            }
            sub_1800354B8(v26, (unsigned __int64 *)&v34);
            sub_180011044((__int64)v41);
            sub_180011044((__int64)v42);
          }
          if ( v38 )
            sub_18001060C(v38);
          v11 = v54;
        }
        if ( v31 )
          sub_18001060C(v31);
        v10 += 2;
      }
      if ( v32 )
        *(_DWORD *)(v32 + 112) = v4;
      v28 = sub_180011C8C(&v45);
      sub_180053DB0(a1, *v28 - *(_QWORD *)(a1 + 392));
      sub_180011044((__int64)&v35);
      sub_180028584((__int64)v51);
    }
  }
  *(_BYTE *)(a1 + 376) = 0;
  result = Cnd_broadcast((_Cnd_t)(a1 + 232));
  if ( v33 )
    return sub_18001060C(v33);
  return result;
}
