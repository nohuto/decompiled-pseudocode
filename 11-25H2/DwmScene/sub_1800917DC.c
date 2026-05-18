/*
 * XREFs of sub_1800917DC @ 0x1800917DC
 * Callers:
 *     sub_180091DB0 @ 0x180091DB0 (sub_180091DB0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     memset @ 0x18000C088 (memset.c)
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     sub_180012408 @ 0x180012408 (sub_180012408.c)
 *     sub_18002797C @ 0x18002797C (sub_18002797C.c)
 *     sub_180090DF8 @ 0x180090DF8 (sub_180090DF8.c)
 *     sub_180090EB8 @ 0x180090EB8 (sub_180090EB8.c)
 *     sub_180091230 @ 0x180091230 (sub_180091230.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800917DC(__int64 a1, __int64 a2, __int64 a3, float a4, float a5)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // r14
  float v11; // xmm7_4
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  __int64 (__fastcall *v15)(); // rax
  int v16; // esi
  __int64 v17; // rdi
  float v18; // xmm6_4
  float v19; // xmm7_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float *v22; // rax
  __int64 v23; // r10
  __int64 v24; // rcx
  float *v25; // rax
  _DWORD *v26; // rdx
  float v27; // xmm1_4
  float v28; // xmm0_4
  __int64 v29; // r10
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v33[2]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v34[56]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+70h] [rbp-98h]
  _DWORD v36[32]; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v37[64]; // [rsp+F8h] [rbp-10h] BYREF
  _DWORD v38[64]; // [rsp+1F8h] [rbp+F0h] BYREF
  _BYTE v39[4]; // [rsp+2F8h] [rbp+1F0h] BYREF
  char v40; // [rsp+2FCh] [rbp+1F4h] BYREF

  v8 = *(int *)(a1 + 372);
  v9 = *(_DWORD *)(a1 + 372) / 2;
  v10 = 16LL;
  sub_18002797C((__int64)v37, 16LL, 16LL, (__int64 (__fastcall *)(__int64))unknown_libname_7);
  sub_18002797C((__int64)v38, 16LL, 16LL, (__int64 (__fastcall *)(__int64))unknown_libname_7);
  v11 = (float)(int)v8;
  memset(v36, 0, sizeof(v36));
  v35 = 0LL;
  v12 = *(_DWORD *)(a1 + 368);
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 != 1 )
          goto LABEL_10;
        v15 = sub_180091B10;
      }
      else
      {
        v15 = sub_180091B40;
      }
    }
    else
    {
      v15 = sub_180091BC0;
    }
  }
  else
  {
    v15 = sub_180091BA0;
  }
  v33[0] = (__int64)v15;
  sub_180090DF8((__int64)v34, v33);
LABEL_10:
  if ( *(_DWORD *)(a1 + 368) )
  {
    v16 = 0;
    if ( (int)v8 > 0 )
    {
      v10 = v8;
      v17 = 0LL;
      v18 = 1.0;
      v19 = v11 + 1.0;
      do
      {
        v20 = 1.0;
        v21 = -1.0;
        LODWORD(v33[0]) = sub_18001110C(
                            (float)((float)((float)((float)v16 + 1.0) / v19) + (float)((float)((float)v16 + 1.0) / v19))
                          - 1.0,
                            -1.0,
                            1.0);
        if ( !v35 )
        {
          std::_Xbad_function_call();
          __debugbreak();
          goto LABEL_24;
        }
        *(float *)&v36[v17] = (*(float (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v35 + 16LL))(v35, v33);
        ++v16;
        ++v17;
      }
      while ( v17 < v10 );
      v10 = 16LL;
    }
  }
  else
  {
    LODWORD(v33[0]) = 0;
    sub_180090EB8(v36, (char *)v37, v33);
    v36[v9] = 1065353216;
  }
  v18 = 0.0;
  v22 = (float *)v36;
  do
    v18 = v18 + *v22++;
  while ( v22 != (float *)v37 );
  sub_18002797C((__int64)v39, 16LL, 16LL, (__int64 (__fastcall *)(__int64))unknown_libname_7);
  v23 = v9;
  if ( (int)v9 > 0 )
  {
    v24 = 0LL;
    v25 = (float *)&v40;
    LODWORD(v9) = -(int)v9;
    v26 = v36;
    do
    {
      v21 = *(float *)&v36[2 * v24 + 1];
      v20 = v21 + *(float *)&v26[2 * v24];
      if ( v20 == 0.0 )
        v27 = 0.5;
      else
LABEL_24:
        v27 = v21 / v20;
      v28 = (float)(int)v9 + v27;
      *(v25 - 1) = v28;
      *v25 = v28;
      v25[2] = v20;
      LODWORD(v9) = v9 + 2;
      ++v24;
      v25 = (float *)((char *)v25 + v10);
    }
    while ( v24 < v23 );
  }
  sub_180091230((__int64)v37, (__int64)v39);
  sub_180091230((__int64)v38, (__int64)v39);
  if ( v29 > 0 )
  {
    v30 = 0LL;
    do
    {
      *(float *)((char *)v37 + v30) = *(float *)((char *)v37 + v30) / a4;
      *(_DWORD *)((char *)&v37[1] + v30) = 0;
      *(float *)((char *)&v37[3] + v30) = *(float *)((char *)&v37[3] + v30) / v18;
      *(_DWORD *)((char *)v38 + v30) = 0;
      *(float *)((char *)&v38[1] + v30) = *(float *)((char *)&v38[1] + v30) / a5;
      *(float *)((char *)&v38[3] + v30) = *(float *)((char *)&v38[3] + v30) / v18;
      v30 += v10;
      --v29;
    }
    while ( v29 );
  }
  sub_180091230(a2, (__int64)v37);
  sub_180091230(a3, (__int64)v38);
  return sub_180012408((__int64)v34, v31);
}
