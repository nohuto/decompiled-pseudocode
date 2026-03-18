/*
 * XREFs of ?AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_DISPATCH_FORMAT@@@Z @ 0x14000BE20
 * Callers:
 *     EngAlphaBlend @ 0x14000A5C0 (EngAlphaBlend.c)
 * Callees:
 *     PALLOCMEM @ 0x1400FEC9C (PALLOCMEM.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AlphaScanLineBlend(
        __int64 a1,
        int *a2,
        int a3,
        __int64 a4,
        int a5,
        _DWORD *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  int v14; // ebx
  unsigned int v15; // r12d
  int v16; // r8d
  int v17; // esi
  int v18; // ecx
  int v19; // edx
  int v20; // r10d
  __int64 v21; // r8
  char *v22; // rbx
  int v23; // eax
  __int64 v24; // rdx
  char *v25; // rdi
  void (__fastcall *v26)(char *, char *, _QWORD, _QWORD, __int64); // rdx
  int v27; // ecx
  char *v28; // r14
  char *v30; // rsi
  char *v31; // rdi
  int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  int v36; // [rsp+40h] [rbp-88h]
  char *v37; // [rsp+58h] [rbp-70h]
  char *i; // [rsp+60h] [rbp-68h]
  char *v39; // [rsp+68h] [rbp-60h]
  _QWORD *v40; // [rsp+70h] [rbp-58h]
  _QWORD *v41; // [rsp+78h] [rbp-50h]
  __int64 v42; // [rsp+90h] [rbp-38h]
  unsigned int v44; // [rsp+120h] [rbp+58h]

  v14 = *a2;
  v15 = a2[2] - *a2;
  v16 = a2[1];
  v36 = a2[3] - v16;
  v17 = 4 * v15;
  v18 = *(_DWORD *)(a12 + 4) >> 3;
  v19 = *(_DWORD *)a12 >> 3;
  v37 = 0LL;
  v39 = 0LL;
  if ( !a9 )
    return 0LL;
  v42 = *(_QWORD *)(a9 + 56);
  if ( v17 < (int)v15 )
    return 0LL;
  v20 = v16 * a3;
  if ( v19 )
  {
    v21 = v20 + (__int64)(v14 * v19);
  }
  else
  {
    if ( *(_DWORD *)a12 == 1 )
      v33 = v14 / 8;
    else
      v33 = v14 / 2;
    v21 = v20 + (__int64)v33;
  }
  v22 = (char *)(v21 + a1);
  v23 = a6[1];
  if ( v18 )
  {
    v24 = a5 * v23 + (__int64)(*a6 * v18);
  }
  else
  {
    v34 = v23 * a5;
    if ( *(_DWORD *)(a12 + 4) == 1 )
      v35 = *a6 / 8;
    else
      v35 = *a6 / 2;
    v24 = v34 + v35;
  }
  v25 = (char *)(v24 + a4);
  v41 = (_QWORD *)(a12 + 16);
  v26 = *(void (__fastcall **)(char *, char *, _QWORD, _QWORD, __int64))(a12 + 16);
  v27 = 0;
  if ( v26 )
    v27 = 4 * v15;
  v44 = v27;
  v40 = (_QWORD *)(a12 + 8);
  if ( *(_QWORD *)(a12 + 8) )
  {
    v44 = v17 + v27;
    if ( v17 + v27 < v17 )
      return 0LL;
  }
  if ( v44 )
  {
    v39 = (char *)PALLOCMEM(v44, 1886150983LL);
    if ( !v39 )
      return 0LL;
    v26 = (void (__fastcall *)(char *, char *, _QWORD, _QWORD, __int64))*v41;
  }
  v28 = v39;
  if ( *v40 )
  {
    v37 = v39;
    v28 = &v39[v17];
  }
  if ( !v26 )
    v28 = 0LL;
  for ( i = v25; v36--; i += a5 )
  {
    v30 = i;
    v31 = v22;
    if ( v37 )
    {
      ((void (__fastcall *)(char *, char *, _QWORD, _QWORD, __int64))*v40)(v37, i, 0LL, v15, a7);
      v30 = v37;
    }
    if ( v28 )
    {
      ((void (__fastcall *)(char *, char *, _QWORD, _QWORD, __int64))*v41)(v28, v22, 0LL, v15, a8);
      v31 = v28;
    }
    (*(void (__fastcall **)(char *, char *, _QWORD, _QWORD))(a12 + 32))(v31, v30, v15, *(unsigned int *)(a12 + 40));
    if ( v28 )
      (*(void (__fastcall **)(char *, char *, _QWORD, _QWORD, __int64, __int64, __int64))(a12 + 24))(
        v22,
        v28,
        v15,
        0LL,
        a9,
        a10,
        v42);
    v22 += a3;
  }
  if ( v44 )
    Win32FreePool(v39);
  return 1LL;
}
