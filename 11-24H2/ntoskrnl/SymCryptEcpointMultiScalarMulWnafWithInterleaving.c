/*
 * XREFs of SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140527510
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptIntCopy @ 0x14052112C (SymCryptIntCopy.c)
 *     SymCryptIntCreate @ 0x14052115C (SymCryptIntCreate.c)
 *     SymCryptIntIsEqualUint32 @ 0x1405212A0 (SymCryptIntIsEqualUint32.c)
 *     SymCryptSizeofIntFromDigits @ 0x140521914 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptPrecomputation @ 0x1405280B0 (SymCryptPrecomputation.c)
 *     SymCryptEcpointCopy @ 0x140528154 (SymCryptEcpointCopy.c)
 *     SymCryptEcpointCreate @ 0x140528190 (SymCryptEcpointCreate.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x140528AE0 (SymCryptSizeofEcpointFromCurve.c)
 *     SymCryptEcpointAdd @ 0x140528B04 (SymCryptEcpointAdd.c)
 *     SymCryptEcpointDouble @ 0x140528B98 (SymCryptEcpointDouble.c)
 *     SymCryptEcpointIsZero @ 0x140528C18 (SymCryptEcpointIsZero.c)
 *     SymCryptEcpointNegate @ 0x140528CAC (SymCryptEcpointNegate.c)
 *     SymCryptEcpointSetZero @ 0x140528D94 (SymCryptEcpointSetZero.c)
 *     SymCryptWidthNafRecoding @ 0x1405336D8 (SymCryptWidthNafRecoding.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall SymCryptEcpointMultiScalarMulWnafWithInterleaving(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v9; // ebp
  _QWORD *v10; // r12
  __int64 v11; // r15
  unsigned int v14; // edi
  __int64 v15; // r14
  unsigned int v16; // ebx
  unsigned int v17; // ebp
  __int64 *v18; // r14
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // rbp
  __int64 v25; // rax
  __int64 v26; // r13
  unsigned __int64 v27; // r14
  __int64 v28; // rcx
  __int64 v29; // r15
  int IsZero; // ebx
  int v31; // eax
  int v32; // ebx
  _QWORD *v33; // rbx
  int i; // r12d
  unsigned int v35; // ebx
  unsigned int v36; // eax
  __int64 *v37; // rcx
  __int64 v38; // rax
  unsigned int v39; // ebx
  char v41; // [rsp+40h] [rbp-2B8h]
  __int64 v43; // [rsp+48h] [rbp-2B0h]
  int v44; // [rsp+48h] [rbp-2B0h]
  unsigned int v45; // [rsp+50h] [rbp-2A8h]
  __int64 v46; // [rsp+58h] [rbp-2A0h]
  __int64 *v47; // [rsp+58h] [rbp-2A0h]
  __int64 v48; // [rsp+58h] [rbp-2A0h]
  int v49; // [rsp+60h] [rbp-298h]
  int v50; // [rsp+64h] [rbp-294h]
  int v51; // [rsp+68h] [rbp-290h]
  __int64 *v52; // [rsp+68h] [rbp-290h]
  __int64 v54; // [rsp+70h] [rbp-288h]
  __int64 v55; // [rsp+80h] [rbp-278h]
  int v56; // [rsp+88h] [rbp-270h]
  int v57; // [rsp+8Ch] [rbp-26Ch]
  __int64 v58; // [rsp+98h] [rbp-260h] BYREF
  _QWORD v59[64]; // [rsp+A0h] [rbp-258h] BYREF

  v9 = *(_DWORD *)(a1 + 92);
  v10 = a3;
  v11 = a8;
  v14 = 0;
  v49 = -1;
  v56 = *(_DWORD *)(a1 + 88);
  v57 = *(_DWORD *)(a1 + 24);
  v50 = v57 + 1;
  v45 = v9;
  v58 = 0LL;
  v41 = 0;
  memset_0(v59, 0, sizeof(v59));
  v15 = (unsigned int)SymCryptSizeofEcpointFromCurve(a1);
  v43 = v15;
  v46 = (unsigned int)SymCryptSizeofIntFromDigits();
  if ( (a5 & 0xFFFFFFDE) != 0 )
    return 32782;
  if ( a4 > 2 )
    return 32779;
  if ( !*v10 )
  {
    *v10 = *(_QWORD *)(a1 + 648);
    v41 = 1;
  }
  if ( (a5 & 1) == 0 )
    return 32779;
  v16 = v9 * a4;
  v17 = 0;
  if ( v16 )
  {
    v18 = v59;
    v19 = a1 - (_QWORD)v59;
    do
    {
      if ( v17 < v45 && v41 )
      {
        v20 = *(__int64 *)((char *)v18 + v19 + 104);
      }
      else
      {
        v21 = SymCryptEcpointCreate(a7, v43, a1);
        a7 += v43;
        v20 = v21;
        v19 = a1 - (_QWORD)v59;
      }
      *v18 = v20;
      ++v17;
      ++v18;
    }
    while ( v17 < v16 );
    v11 = a8;
    v10 = a3;
    v15 = v43;
  }
  v22 = SymCryptEcpointCreate(a7, v15, a1);
  v23 = v15 + a7;
  v24 = v22;
  v54 = SymCryptEcpointCreate(v23, v15, a1);
  v51 = SymCryptIntCreate();
  SymCryptIntCreate();
  v55 = v46 + v46 + v15 + v23;
  v25 = 4LL * v50 * a4;
  v26 = v25 + v55;
  v27 = (v25 + v55 + v25 + 31) & 0xFFFFFFFFFFFFFFE0uLL;
  v28 = v43 * (v16 + 2);
  v44 = 0;
  v29 = v11 - (v28 + 2 * (v46 + 16 * ((4 * (unsigned __int64)(2 * v50 * a4) + 31) >> 5)));
  if ( a4 )
  {
    v47 = &v58;
    do
    {
      IsZero = SymCryptEcpointIsZero(a1, *v10, v27, v29);
      v31 = IsZero | SymCryptIntIsEqualUint32();
      v49 &= v31;
      *(_DWORD *)v47 = v31;
      if ( !v31 )
      {
        SymCryptIntCopy();
        v32 = v44;
        SymCryptWidthNafRecoding(v56, v51, v55 + 4 * v44 * v50, v26 + 4 * v44 * v50, v50);
        if ( !v44 && v41 )
          goto LABEL_23;
        v33 = &v59[v44 * v45];
        SymCryptEcpointCopy(a1, *v10, *v33);
        SymCryptPrecomputation(a1, v45, (_DWORD)v33, v24, v27, v29);
      }
      v32 = v44;
LABEL_23:
      v47 = (__int64 *)((char *)v47 + 4);
      ++v10;
      v44 = v32 + 1;
    }
    while ( v32 + 1 < a4 );
  }
  SymCryptEcpointSetZero(a1, v24, v27, v29);
  if ( !v49 )
  {
    for ( i = v57; i > -1; --i )
    {
      SymCryptEcpointDouble(a1, v24, v24, 0, v27, v29);
      v35 = 0;
      if ( a4 )
      {
        v36 = a4;
        v37 = &v58;
        v52 = &v58;
        do
        {
          if ( !*(_DWORD *)v37 )
          {
            v38 = i + v35 * v50;
            v48 = v38;
            if ( *(_DWORD *)(v26 + 4 * v38) )
            {
              SymCryptEcpointCopy(a1, v59[v35 * v45 + (*(_DWORD *)(v55 + 4 * v38) >> 1)], v54);
              if ( *(_DWORD *)(v26 + 4 * v48) == -1 )
                SymCryptEcpointNegate(a1, v54, -1, v27, v29);
              SymCryptEcpointAdd(a1, v24, v54, v24, 1, v27, v29);
              v37 = v52;
            }
            v36 = a4;
          }
          v37 = (__int64 *)((char *)v37 + 4);
          ++v35;
          v52 = v37;
        }
        while ( v35 < v36 );
      }
    }
  }
  if ( *(_DWORD *)(a1 + 64) && (a5 & 0x20) != 0 )
  {
    v39 = 0;
    do
    {
      SymCryptEcpointDouble(a1, v24, v24, 0, v27, v29);
      ++v39;
    }
    while ( v39 < *(_DWORD *)(a1 + 64) );
  }
  if ( (unsigned int)SymCryptEcpointIsZero(a1, v24, v27, v29) )
    SymCryptEcpointSetZero(a1, v24, v27, v29);
  SymCryptEcpointCopy(a1, v24, a6);
  return v14;
}
