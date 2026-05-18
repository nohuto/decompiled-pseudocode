/*
 * XREFs of sub_1800BDB30 @ 0x1800BDB30
 * Callers:
 *     sub_1800BDDA0 @ 0x1800BDDA0 (sub_1800BDDA0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B8C @ 0x180011B8C (sub_180011B8C.c)
 *     sub_18001C99C @ 0x18001C99C (sub_18001C99C.c)
 *     sub_180025FBC @ 0x180025FBC (sub_180025FBC.c)
 *     sub_180026050 @ 0x180026050 (sub_180026050.c)
 *     sub_180029B80 @ 0x180029B80 (sub_180029B80.c)
 *     sub_1800BB198 @ 0x1800BB198 (sub_1800BB198.c)
 *     sub_1800BD804 @ 0x1800BD804 (sub_1800BD804.c)
 *     sub_1800BDA58 @ 0x1800BDA58 (sub_1800BDA58.c)
 *     sub_1800BDDAC @ 0x1800BDDAC (sub_1800BDDAC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800BDB30(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v8; // r12
  unsigned int v9; // edi
  unsigned int v10; // ebx
  int v11; // ebx
  __int64 v12; // rax
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  __int64 v15; // xmm0_8
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 result; // rax
  __int64 v20; // [rsp+20h] [rbp-58h] BYREF
  __int64 v21; // [rsp+28h] [rbp-50h]
  __int128 v22; // [rsp+30h] [rbp-48h]
  LARGE_INTEGER PerformanceCount[2]; // [rsp+40h] [rbp-38h] BYREF
  LARGE_INTEGER v24[2]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v25; // [rsp+60h] [rbp-18h]
  char v26; // [rsp+C0h] [rbp+48h]
  char v27; // [rsp+C8h] [rbp+50h]
  __int64 v28; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v29; // [rsp+D8h] [rbp+60h] BYREF

  v27 = *(_BYTE *)(a2 + 8);
  if ( v27 )
    sub_180026050((__int64 *)a2);
  v8 = *(_BYTE *)(a3 + 8);
  if ( v8 )
    sub_180026050((__int64 *)a3);
  v26 = *(_BYTE *)(a4 + 8);
  if ( v26 )
    sub_180026050((__int64 *)a4);
  v9 = *((_DWORD *)a1 + 116);
  v10 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 312LL))(a1);
  *((_QWORD *)&v22 + 1) = __PAIR64__(v9, v10);
  PerformanceCount[0].LowPart = 0;
  LOBYTE(v25) = 0;
  *(_QWORD *)&v22 = a1[54];
  sub_180011B8C(&v28);
  QueryPerformanceCounter(&PerformanceCount[1]);
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*a1 + 320LL))(a1, &v20);
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)a1[57] + 64LL))(a1[57], v10, v9);
  sub_180029B80((__int64)&v20);
  sub_180011B8C(&v29);
  QueryPerformanceCounter(v24);
  if ( v11 < 0 )
    sub_18001C99C(&stru_1801B84E8, 3);
  sub_1800BD804((__int64)a1, &v20);
  if ( v20 )
    sub_1800BB198(v20, v11);
  if ( v21 )
    sub_18001050C(v21);
  (*(void (__fastcall **)(_QWORD, LARGE_INTEGER *))(*(_QWORD *)a1[57] + 136LL))(a1[57], PerformanceCount);
  v12 = (*((_DWORD *)a1 + 399) + 1) % 0x14u;
  *((_DWORD *)a1 + 399) = v12;
  v13 = *(_OWORD *)&PerformanceCount[0].LowPart;
  v14 = *(_OWORD *)&v24[0].LowPart;
  v15 = v25;
  v12 *= 56LL;
  *(_OWORD *)((char *)a1 + v12 + 472) = v22;
  *(_OWORD *)((char *)a1 + v12 + 488) = v13;
  *(_OWORD *)((char *)a1 + v12 + 504) = v14;
  *(_QWORD *)((char *)a1 + v12 + 520) = v15;
  v16 = *((_DWORD *)a1 + 398) + 1;
  if ( v16 > 0x14 )
    v16 = 20;
  *((_DWORD *)a1 + 398) = v16;
  sub_1800BDA58(a1);
  sub_1800BDDAC(a1);
  if ( v26 )
    sub_180025FBC((__int64 *)a4);
  if ( v8 )
    sub_180025FBC((__int64 *)a3);
  if ( v27 )
    sub_180025FBC((__int64 *)a2);
  v17 = v28;
  a1[34] = v28;
  v18 = v29;
  a1[35] = v29;
  result = v18 - v17;
  a1[36] = result;
  return result;
}
