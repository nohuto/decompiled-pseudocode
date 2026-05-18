/*
 * XREFs of sub_18002A92C @ 0x18002A92C
 * Callers:
 *     sub_18002B070 @ 0x18002B070 (sub_18002B070.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     memcmp @ 0x18000CE3D (memcmp.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180013298 @ 0x180013298 (sub_180013298.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18001B948 @ 0x18001B948 (sub_18001B948.c)
 *     sub_18001C338 @ 0x18001C338 (sub_18001C338.c)
 *     sub_18001C420 @ 0x18001C420 (sub_18001C420.c)
 *     sub_18001D780 @ 0x18001D780 (sub_18001D780.c)
 *     sub_180028AE8 @ 0x180028AE8 (sub_180028AE8.c)
 *     sub_180028B8C @ 0x180028B8C (sub_180028B8C.c)
 *     sub_180028E60 @ 0x180028E60 (sub_180028E60.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18002A92C(__int64 a1)
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
  v2 = (_QWORD *)sub_18001B1F8(72LL);
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
      sub_180028B8C(
        *(_QWORD **)(a1 + 336),
        (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\renderoutput.cpp",
        596,
        (__int64)"LogGpuProfilingData",
        (__int64)"GpuStats_FrameNumber",
        *(_QWORD *)(v3 + 128));
      v5 = v29;
      sub_18001B948((__int64)&v29, (__int64)&v29, v29[1]);
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
            sub_180028E60(&v29, (__int64)&v33, v7 + 32, (__int64)&v31);
            *(double *)(v33 + 64) = v10 + *(double *)(v33 + 64);
          }
        }
        else
        {
          sub_1800138F8((__int64)&unk_1801C98D8);
          v11 = (const void *)sub_1800138F8(v8);
          if ( v13 == qword_1801C98E8 && !memcmp(v11, v12, v13) )
          {
            sub_180028AE8(*(_QWORD **)(a1 + 336), v14, 618LL);
          }
          else
          {
            v15 = *(_QWORD **)(a1 + 336);
            v16 = sub_180013298(v34, (__int64)&unk_1801C4F08, v8);
            sub_1800138F8((__int64)v16);
            sub_180028AE8(v15, v17, 623LL);
            sub_180011B5C((__int64)v34);
          }
        }
        sub_18001C420(&v32);
        v7 = v32;
      }
      v18 = (__int64 *)*v29;
      while ( !*((_BYTE *)v18 + 25) )
      {
        v19 = sub_180013298(v35, (__int64)&unk_1801C4F08, (__int64)(v18 + 4));
        sub_18001D780((__int64)v34, (__int64)v19, (__int64)&unk_1801C98B8);
        sub_180011B5C((__int64)v35);
        sub_1800138F8((__int64)v34);
        sub_180028AE8(*(_QWORD **)(a1 + 336), v20, 644LL);
        sub_180011B5C((__int64)v34);
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
      sub_180028AE8(*(_QWORD **)(a1 + 336), v6, 648LL);
      sub_180028AE8(*(_QWORD **)(a1 + 336), v24, 649LL);
      sub_180028AE8(*(_QWORD **)(a1 + 336), v25, 650LL);
      sub_180028AE8(*(_QWORD **)(a1 + 336), v26, 651LL);
      sub_180028AE8(*(_QWORD **)(a1 + 336), v27, 652LL);
    }
    v3 += 152LL;
  }
  return sub_18001C338((void **)&v29);
}
