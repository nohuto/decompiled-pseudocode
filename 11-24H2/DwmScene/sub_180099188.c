/*
 * XREFs of sub_180099188 @ 0x180099188
 * Callers:
 *     sub_180075340 @ 0x180075340 (sub_180075340.c)
 *     sub_180077E60 @ 0x180077E60 (sub_180077E60.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18000B6A4 @ 0x18000B6A4 (sub_18000B6A4.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_1800131E0 @ 0x1800131E0 (sub_1800131E0.c)
 *     sub_18006AE84 @ 0x18006AE84 (sub_18006AE84.c)
 *     sub_180098C10 @ 0x180098C10 (sub_180098C10.c)
 *     sub_180098D70 @ 0x180098D70 (sub_180098D70.c)
 *     sub_180098EFC @ 0x180098EFC (sub_180098EFC.c)
 *     sub_1800993A8 @ 0x1800993A8 (sub_1800993A8.c)
 *     sub_180099B7C @ 0x180099B7C (sub_180099B7C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180099188(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  _QWORD *v8; // rdx
  char *v9; // rax
  char *v10; // rdx
  _QWORD *v11; // rax
  unsigned __int64 v12; // r8
  char *v13; // rbx
  __int64 *v14; // rdi
  unsigned __int64 v15; // rsi
  __int64 *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  char *v27; // [rsp+20h] [rbp-51h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-49h]
  _QWORD *v29; // [rsp+30h] [rbp-41h] BYREF
  __int128 v30; // [rsp+38h] [rbp-39h] BYREF
  __int64 v31; // [rsp+48h] [rbp-29h]
  __int128 v32; // [rsp+50h] [rbp-21h] BYREF
  __int64 v33; // [rsp+60h] [rbp-11h]
  _BYTE v34[48]; // [rsp+68h] [rbp-9h] BYREF

  v8 = *(_QWORD **)(a1 + 8);
  v9 = *(char **)a1;
  v32 = 0LL;
  v33 = 0LL;
  v27 = v9;
  v29 = v8;
  sub_180098C10((__int64 *)&v32, ((char *)v8 - v9) >> 4, (_QWORD **)&v27, &v29);
  v10 = *(char **)(a2 + 8);
  v11 = *(_QWORD **)a2;
  v30 = 0LL;
  v31 = 0LL;
  v29 = v11;
  v27 = v10;
  sub_180098C10((__int64 *)&v30, (v10 - (char *)v11) >> 4, &v29, &v27);
  v12 = (__int64)(*((_QWORD *)&v32 + 1) - v32) >> 4;
  if ( v12 > 3 )
    sub_18006AE84(
      (__int64 *)v32,
      *((char **)&v32 + 1),
      v12,
      (unsigned __int8 (__fastcall *)(__int64, __int64))sub_180099160);
  v13 = (char *)*((_QWORD *)&v30 + 1);
  v14 = (__int64 *)v30;
  if ( (unsigned __int64)((__int64)(*((_QWORD *)&v30 + 1) - v30) >> 4) > 1 )
  {
    v15 = v30 + 16;
    if ( (_QWORD)v30 + 16LL != *((_QWORD *)&v30 + 1) )
    {
      while ( (__int64)((v13 - (char *)v14) & 0xFFFFFFFFFFFFFFF0uLL) > 512 )
      {
        sub_180098EFC(&v27, (unsigned __int64)v14, v13);
        if ( v28 > v15 )
        {
          v13 = v27;
          if ( (unsigned __int64)v27 <= v15 )
            goto LABEL_11;
        }
        else
        {
          v14 = (__int64 *)v28;
        }
      }
      sub_180098D70(v14, (__int64 *)v13);
    }
  }
LABEL_11:
  v16 = (__int64 *)(a5 + 8);
  v17 = sub_1800993A8(v34, &v32, a3) - a5;
  v18 = 3LL;
  do
  {
    v19 = *(__int64 *)((char *)v16 + v17 - 8);
    v20 = *(__int64 *)((char *)v16 + v17);
    *(__int64 *)((char *)v16 + v17 - 8) = 0LL;
    *(__int64 *)((char *)v16 + v17) = 0LL;
    *(v16 - 1) = v19;
    v21 = *v16;
    *v16 = v20;
    if ( v21 )
      sub_18001060C(v21);
    v16 += 2;
    --v18;
  }
  while ( v18 );
  sub_18000B6A4((__int64)v34, 16LL, 3LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  v22 = (__int64 *)sub_180099B7C(&v27, &v30, a3);
  v23 = *v22;
  v24 = v22[1];
  *v22 = 0LL;
  v22[1] = 0LL;
  *a4 = v23;
  v25 = a4[1];
  a4[1] = v24;
  if ( v25 )
    sub_18001060C(v25);
  if ( v28 )
    sub_18001060C(v28);
  sub_1800131E0((__int64)&v30);
  return sub_1800131E0((__int64)&v32);
}
