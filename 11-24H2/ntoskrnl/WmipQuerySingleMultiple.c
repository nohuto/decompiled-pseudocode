/*
 * XREFs of WmipQuerySingleMultiple @ 0x1407A4F20
 * Callers:
 *     IoWMIQuerySingleInstanceMultiple @ 0x1407A39F0 (IoWMIQuerySingleInstanceMultiple.c)
 *     WmipIoControl @ 0x1409CCBD0 (WmipIoControl.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     WmipQuerySetExecuteSI @ 0x1409CDA80 (WmipQuerySetExecuteSI.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipQuerySingleMultiple(
        __int64 a1,
        char a2,
        char *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        int *a9)
{
  char *v9; // rsi
  int v10; // edi
  __int64 v11; // r8
  _QWORD *Pool2; // rax
  _QWORD *v13; // r14
  int v14; // r15d
  char v15; // r13
  unsigned int *v16; // rdx
  _BYTE *v17; // r12
  unsigned int v18; // r9d
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // ecx
  unsigned int v23; // esi
  unsigned int *v24; // r13
  unsigned __int16 v25; // cx
  char *v26; // rdx
  void *v27; // rdx
  unsigned int v28; // eax
  unsigned int *v29; // rcx
  __int64 i; // rax
  __int64 v31; // rax
  char *v32; // rsi
  int v33; // eax
  char v35; // [rsp+40h] [rbp-338h]
  int v37; // [rsp+44h] [rbp-334h] BYREF
  int v38; // [rsp+48h] [rbp-330h]
  unsigned int v39; // [rsp+4Ch] [rbp-32Ch]
  int v40; // [rsp+50h] [rbp-328h]
  void *v41; // [rsp+58h] [rbp-320h]
  int v42; // [rsp+60h] [rbp-318h]
  int v43; // [rsp+64h] [rbp-314h]
  unsigned int v44; // [rsp+68h] [rbp-310h]
  int v45; // [rsp+6Ch] [rbp-30Ch]
  void *Src; // [rsp+70h] [rbp-308h]
  unsigned int *v47; // [rsp+78h] [rbp-300h]
  __int64 v48; // [rsp+80h] [rbp-2F8h]
  char *v49; // [rsp+88h] [rbp-2F0h]
  unsigned int v50; // [rsp+90h] [rbp-2E8h]
  __int64 v51; // [rsp+98h] [rbp-2E0h]
  PVOID Object; // [rsp+A0h] [rbp-2D8h]
  PVOID v53; // [rsp+A8h] [rbp-2D0h]
  PVOID v54; // [rsp+B0h] [rbp-2C8h]
  int *v55; // [rsp+B8h] [rbp-2C0h]
  __m128i v56; // [rsp+C0h] [rbp-2B8h]
  __int64 v57; // [rsp+D0h] [rbp-2A8h]
  __int64 v58; // [rsp+D8h] [rbp-2A0h]
  char *v59; // [rsp+E0h] [rbp-298h]
  __int64 v60; // [rsp+E8h] [rbp-290h]
  _BYTE P[592]; // [rsp+F0h] [rbp-288h] BYREF

  v39 = a4;
  v9 = a3;
  v49 = a3;
  v58 = a1;
  v59 = a3;
  v50 = a6;
  v48 = a7;
  v57 = a8;
  v55 = a9;
  v60 = (__int64)a9;
  v43 = 0;
  memset_0(P, 0, 0x248uLL);
  v10 = 0;
  v40 = 0;
  v11 = a7;
  if ( a7 )
  {
    v13 = 0LL;
    v53 = 0LL;
  }
  else
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
    v13 = Pool2;
    v53 = Pool2;
    if ( Pool2 )
      memmove(Pool2, (const void *)(a5 + 8), 24LL * a6);
    else
      v10 = -1073741670;
    v9 = v49;
    v11 = v48;
  }
  if ( v10 < 0 )
    return (unsigned int)v10;
  v14 = 0;
  v38 = 0;
  v15 = 0;
  v35 = 0;
  v47 = 0LL;
  v16 = (unsigned int *)v9;
  v41 = v9;
  v17 = P;
  v54 = P;
  v18 = 580;
  v45 = 580;
  v19 = 0;
  Object = 0LL;
  while ( 1 )
  {
    v44 = v19;
    if ( v19 >= v50 )
      break;
    v20 = v19;
    if ( v11 )
    {
      v56 = *(__m128i *)(v57 + 16LL * v19);
      Object = *(PVOID *)(v11 + 8LL * v19);
      v51 = 0LL;
      Src = (void *)_mm_srli_si128(v56, 8).m128i_u64[0];
      v22 = _mm_cvtsi128_si32(v56);
    }
    else
    {
      v21 = 3LL * v19;
      v22 = LOWORD(v13[3 * v20 + 1]);
      v56.m128i_i16[0] = v22;
      Src = (void *)v13[v21 + 2];
      v56.m128i_i64[1] = (__int64)Src;
      v51 = v13[v21];
      v16 = (unsigned int *)v41;
    }
    v37 = v22;
    v23 = ((unsigned __int16)v22 + 73) & 0xFFFFFFF8;
    if ( v15 || v39 < v23 )
    {
      if ( v23 > v18 )
      {
        if ( v17 != P )
          ExFreePoolWithTag(v17, 0);
        v17 = (_BYTE *)ExAllocatePool2(0x40uLL);
        v54 = v17;
        if ( !v17 )
        {
          v10 = -1073741670;
          break;
        }
        v45 = v23;
      }
      v24 = (unsigned int *)v17;
      v42 = v23;
      v47 = 0LL;
      v35 = 1;
    }
    else
    {
      v24 = v16;
      v42 = v39;
    }
    memset_0(v24, 0, 0x40uLL);
    v24[11] = 2;
    *v24 = v23;
    *((_QWORD *)v24 + 2) = v51;
    v24[12] = 64;
    v24[14] = v23;
    v25 = v37;
    *((_WORD *)v24 + 32) = v37;
    if ( a2 != 1 || !v25 )
      goto LABEL_30;
    if ( ((unsigned __int8)Src & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v26 = (char *)Src + v25;
    if ( (unsigned __int64)v26 > 0x7FFFFFFF0000LL || v26 < Src )
    {
      v27 = (void *)v56.m128i_i64[1];
      v25 = v56.m128i_i16[0];
    }
    else
    {
LABEL_30:
      v27 = Src;
    }
    memmove((char *)v24 + 66, v27, v25);
    v37 = *v24;
    if ( (int)WmipQuerySetExecuteSI(Object, (__int64)v24, v42, (__int64)&v37) < 0 )
      goto LABEL_37;
    v28 = v24[11];
    if ( (v28 & 0x100) != 0 )
      goto LABEL_37;
    ++v40;
    if ( (v28 & 0x20) != 0 )
    {
      v14 += (v24[12] + 7) & 0xFFFFFFF8;
      v38 = v14;
      v15 = 1;
      v35 = 1;
      goto LABEL_38;
    }
    if ( v35 )
    {
      v14 += (v37 + 7) & 0xFFFFFFF8;
      v38 = v14;
LABEL_37:
      v15 = v35;
LABEL_38:
      v16 = (unsigned int *)v41;
      goto LABEL_39;
    }
    if ( v47 )
      v47[3] = v43;
    v29 = v24;
    for ( i = v24[3]; ; i = v29[3] )
    {
      v47 = v29;
      if ( !(_DWORD)i )
        break;
      v29 = (unsigned int *)((char *)v29 + i);
    }
    v31 = (v37 + 7) & 0xFFFFFFF8;
    v14 += v31;
    v38 = v14;
    v39 -= v31;
    v16 = (unsigned int *)((char *)v41 + v31);
    v41 = v16;
    v43 = (_DWORD)v16 - (_DWORD)v29;
    v15 = 0;
LABEL_39:
    v19 = v44 + 1;
    v11 = v48;
    v18 = v45;
  }
  v32 = v49;
  if ( v17 != P )
    ExFreePoolWithTag(v17, 0);
  if ( !v40 )
    v10 = -1073741163;
  if ( v10 >= 0 && v15 )
  {
    v33 = 56;
    *(_DWORD *)v32 = 56;
    *((_DWORD *)v32 + 11) = 32;
    *((_DWORD *)v32 + 12) = v14;
  }
  else
  {
    v33 = v14;
  }
  *v55 = v33;
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  return (unsigned int)v10;
}
