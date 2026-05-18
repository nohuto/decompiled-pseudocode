/*
 * XREFs of sub_18002A7CC @ 0x18002A7CC
 * Callers:
 *     sub_18002AF10 @ 0x18002AF10 (sub_18002AF10.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     memcmp @ 0x18000CD55 (memcmp.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180013198 @ 0x180013198 (sub_180013198.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18001B7E8 @ 0x18001B7E8 (sub_18001B7E8.c)
 *     sub_18001C1D8 @ 0x18001C1D8 (sub_18001C1D8.c)
 *     sub_18001C2C0 @ 0x18001C2C0 (sub_18001C2C0.c)
 *     sub_18001D620 @ 0x18001D620 (sub_18001D620.c)
 *     sub_180028988 @ 0x180028988 (sub_180028988.c)
 *     sub_180028A2C @ 0x180028A2C (sub_180028A2C.c)
 *     sub_180028D00 @ 0x180028D00 (sub_180028D00.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18002A7CC(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rsi
  __int64 v4; // r15
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // ecx
  double v10; // xmm6_8
  const void *v11; // rax
  const void *v12; // rdx
  size_t v13; // r8
  __int64 v14; // rdx
  _QWORD *v15; // rbx
  void *v16; // rax
  __int64 v17; // rdx
  __int64 *v18; // rbx
  void *v19; // rax
  __int64 v20; // rdx
  __int64 **v21; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  _QWORD *v29; // [rsp+38h] [rbp-69h] BYREF
  __int64 v30; // [rsp+40h] [rbp-61h]
  int v31; // [rsp+48h] [rbp-59h] BYREF
  __int64 v32; // [rsp+50h] [rbp-51h] BYREF
  __int64 v33; // [rsp+58h] [rbp-49h] BYREF
  _BYTE v34[32]; // [rsp+68h] [rbp-39h] BYREF
  _BYTE v35[32]; // [rsp+88h] [rbp-19h] BYREF

  v30 = 0LL;
  v2 = (_QWORD *)sub_18001B098(72LL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  v29 = v2;
  v3 = *(_QWORD *)(a1 + 368);
  v4 = *(_QWORD *)(a1 + 376);
  while ( v3 != v4 )
  {
    if ( *(_BYTE *)(v3 + 120) )
    {
      sub_180028A2C(
        *(_QWORD **)(a1 + 336),
        (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\renderoutput.cpp",
        596,
        (__int64)"LogGpuProfilingData",
        (__int64)"GpuStats_FrameNumber",
        *(_QWORD *)(v3 + 128));
      v5 = v29;
      sub_18001B7E8((__int64)&v29, (__int64)&v29, v29[1]);
      v5[1] = v5;
      *v5 = v5;
      v5[2] = v5;
      v30 = 0LL;
      v7 = **(_QWORD **)(v3 + 136);
      v32 = v7;
      while ( !*(_BYTE *)(v7 + 25) )
      {
        v8 = v7 + 32;
        v9 = *(_DWORD *)(v7 + 64);
        if ( v9 )
        {
          if ( v9 == 1 )
          {
            v10 = *(double *)(v7 + 80) - *(double *)(v7 + 72);
            v31 = 0;
            sub_180028D00(&v29, (__int64)&v33, v7 + 32, (__int64)&v31);
            *(double *)(v33 + 64) = v10 + *(double *)(v33 + 64);
          }
        }
        else
        {
          sub_1800137F8((__int64)&unk_1801C88C8);
          v11 = (const void *)sub_1800137F8(v8);
          if ( v13 == qword_1801C88D8 && !memcmp(v11, v12, v13) )
          {
            sub_180028988(*(_QWORD **)(a1 + 336), v14, 618LL);
          }
          else
          {
            v15 = *(_QWORD **)(a1 + 336);
            v16 = sub_180013198(v34, (__int64)&unk_1801C3EF8, v8);
            sub_1800137F8((__int64)v16);
            sub_180028988(v15, v17, 623LL);
            sub_180011A5C((__int64)v34);
          }
        }
        sub_18001C2C0(&v32);
        v7 = v32;
      }
      v18 = (__int64 *)*v29;
      while ( !*((_BYTE *)v18 + 25) )
      {
        v19 = sub_180013198(v35, (__int64)&unk_1801C3EF8, (__int64)(v18 + 4));
        sub_18001D620((__int64)v34, (__int64)v19, (__int64)&unk_1801C88A8);
        sub_180011A5C((__int64)v35);
        sub_1800137F8((__int64)v34);
        sub_180028988(*(_QWORD **)(a1 + 336), v20, 644LL);
        sub_180011A5C((__int64)v34);
        v21 = (__int64 **)v18[2];
        if ( *((_BYTE *)v21 + 25) )
        {
          for ( i = (__int64 *)v18[1]; !*((_BYTE *)i + 25) && v18 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v18 = i;
          v18 = i;
        }
        else
        {
          v18 = (__int64 *)v18[2];
          for ( j = *v21; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v18 = j;
        }
      }
      sub_180028988(*(_QWORD **)(a1 + 336), v6, 648LL);
      sub_180028988(*(_QWORD **)(a1 + 336), v24, 649LL);
      sub_180028988(*(_QWORD **)(a1 + 336), v25, 650LL);
      sub_180028988(*(_QWORD **)(a1 + 336), v26, 651LL);
      sub_180028988(*(_QWORD **)(a1 + 336), v27, 652LL);
    }
    v3 += 152LL;
  }
  return sub_18001C1D8((void **)&v29);
}
