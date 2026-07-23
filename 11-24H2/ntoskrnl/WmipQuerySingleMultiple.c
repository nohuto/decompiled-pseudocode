/*
 * XREFs of WmipQuerySingleMultiple @ 0x1407A5030
 * Callers:
 *     IoWMIQuerySingleInstanceMultiple @ 0x1407A3B00 (IoWMIQuerySingleInstanceMultiple.c)
 *     WmipIoControl @ 0x1409B1150 (WmipIoControl.c)
 * Callees:
 *     Feature_1045423416__private_IsEnabledDeviceUsageNoInline @ 0x14064AA64 (Feature_1045423416__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     WmipQuerySetExecuteSI @ 0x1409B2A54 (WmipQuerySetExecuteSI.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  char v15; // r12
  unsigned int *v16; // rdx
  _BYTE *v17; // r13
  unsigned int v18; // r9d
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // ecx
  unsigned int v23; // esi
  unsigned int *v24; // r12
  unsigned __int16 v25; // cx
  char *v26; // rdx
  void *v27; // rdx
  unsigned int v28; // eax
  unsigned int *v29; // rcx
  __int64 i; // rax
  unsigned int v31; // esi
  unsigned int v32; // r12d
  char *v33; // rsi
  int v34; // eax
  char v36; // [rsp+40h] [rbp-338h]
  int v38; // [rsp+44h] [rbp-334h] BYREF
  unsigned int v39; // [rsp+48h] [rbp-330h]
  int v40; // [rsp+4Ch] [rbp-32Ch]
  int v41; // [rsp+50h] [rbp-328h]
  void *v42; // [rsp+58h] [rbp-320h]
  int v43; // [rsp+60h] [rbp-318h]
  int v44; // [rsp+64h] [rbp-314h]
  unsigned int v45; // [rsp+68h] [rbp-310h]
  int v46; // [rsp+6Ch] [rbp-30Ch]
  void *Src; // [rsp+70h] [rbp-308h]
  unsigned int *v48; // [rsp+78h] [rbp-300h]
  __int64 v49; // [rsp+80h] [rbp-2F8h]
  char *v50; // [rsp+88h] [rbp-2F0h]
  unsigned int v51; // [rsp+90h] [rbp-2E8h]
  __int64 v52; // [rsp+98h] [rbp-2E0h]
  PVOID Object; // [rsp+A0h] [rbp-2D8h]
  PVOID v54; // [rsp+A8h] [rbp-2D0h]
  PVOID v55; // [rsp+B0h] [rbp-2C8h]
  int *v56; // [rsp+B8h] [rbp-2C0h]
  __m128i v57; // [rsp+C0h] [rbp-2B8h]
  __int64 v58; // [rsp+D0h] [rbp-2A8h]
  __int64 v59; // [rsp+D8h] [rbp-2A0h]
  char *v60; // [rsp+E0h] [rbp-298h]
  __int64 v61; // [rsp+E8h] [rbp-290h]
  _BYTE P[592]; // [rsp+F0h] [rbp-288h] BYREF

  v39 = a4;
  v9 = a3;
  v50 = a3;
  v59 = a1;
  v60 = a3;
  v51 = a6;
  v49 = a7;
  v58 = a8;
  v56 = a9;
  v61 = (__int64)a9;
  v44 = 0;
  memset_0(P, 0, 0x248uLL);
  v10 = 0;
  v41 = 0;
  v11 = a7;
  if ( a7 )
  {
    v13 = 0LL;
    v54 = 0LL;
  }
  else
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, 24LL * a6, 0x70696D57u);
    v13 = Pool2;
    v54 = Pool2;
    if ( Pool2 )
      memmove(Pool2, (const void *)(a5 + 8), 24LL * a6);
    else
      v10 = -1073741670;
    v9 = v50;
    v11 = v49;
  }
  if ( v10 < 0 )
    return (unsigned int)v10;
  v14 = 0;
  v40 = 0;
  v15 = 0;
  v36 = 0;
  v48 = 0LL;
  v16 = (unsigned int *)v9;
  v42 = v9;
  v17 = P;
  v55 = P;
  v18 = 580;
  v46 = 580;
  v19 = 0;
  Object = 0LL;
  while ( 1 )
  {
    v45 = v19;
    if ( v19 >= v51 )
      break;
    v20 = v19;
    if ( v11 )
    {
      v57 = *(__m128i *)(v58 + 16LL * v19);
      Object = *(PVOID *)(v11 + 8LL * v19);
      v52 = 0LL;
      Src = (void *)_mm_srli_si128(v57, 8).m128i_u64[0];
      v22 = _mm_cvtsi128_si32(v57);
    }
    else
    {
      v21 = 3LL * v19;
      v22 = LOWORD(v13[3 * v20 + 1]);
      v57.m128i_i16[0] = v22;
      Src = (void *)v13[v21 + 2];
      v57.m128i_i64[1] = (__int64)Src;
      v52 = v13[v21];
      v16 = (unsigned int *)v42;
    }
    v38 = v22;
    v23 = ((unsigned __int16)v22 + 73) & 0xFFFFFFF8;
    if ( v15 || v39 < v23 )
    {
      if ( v23 > v18 )
      {
        if ( v17 != P )
          ExFreePoolWithTag(v17, 0);
        v17 = (_BYTE *)ExAllocatePool2(0x40uLL, v23, 0x70696D57u);
        v55 = v17;
        if ( !v17 )
        {
          v10 = -1073741670;
          break;
        }
        v46 = v23;
      }
      v24 = (unsigned int *)v17;
      v43 = v23;
      v48 = 0LL;
      v36 = 1;
    }
    else
    {
      v24 = v16;
      v43 = v39;
    }
    memset_0(v24, 0, 0x40uLL);
    v24[11] = 2;
    *v24 = v23;
    *((_QWORD *)v24 + 2) = v52;
    v24[12] = 64;
    v24[14] = v23;
    v25 = v38;
    *((_WORD *)v24 + 32) = v38;
    if ( a2 != 1 || !v25 )
      goto LABEL_29;
    if ( ((unsigned __int8)Src & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v26 = (char *)Src + v25;
    if ( (unsigned __int64)v26 > 0x7FFFFFFF0000LL || v26 < Src )
    {
      v27 = (void *)v57.m128i_i64[1];
      v25 = v57.m128i_i16[0];
    }
    else
    {
LABEL_29:
      v27 = Src;
    }
    memmove((char *)v24 + 66, v27, v25);
    v38 = *v24;
    if ( (int)WmipQuerySetExecuteSI(Object, (__int64)v24, v43, (__int64)&v38) < 0 )
      goto LABEL_36;
    v28 = v24[11];
    if ( (v28 & 0x100) != 0 )
      goto LABEL_36;
    ++v41;
    if ( (v28 & 0x20) != 0 )
    {
      v14 += (v24[12] + 7) & 0xFFFFFFF8;
      v40 = v14;
      v15 = 1;
      v36 = 1;
      goto LABEL_37;
    }
    if ( v36 )
    {
      v14 += (v38 + 7) & 0xFFFFFFF8;
      v40 = v14;
LABEL_36:
      v15 = v36;
LABEL_37:
      v16 = (unsigned int *)v42;
      goto LABEL_38;
    }
    if ( v48 )
      v48[3] = v44;
    v29 = v24;
    for ( i = v24[3]; ; i = v29[3] )
    {
      v48 = v29;
      if ( !(_DWORD)i )
        break;
      v29 = (unsigned int *)((char *)v29 + i);
    }
    v31 = (v38 + 7) & 0xFFFFFFF8;
    v14 += v31;
    v40 = v14;
    v32 = v39 - v31;
    if ( (unsigned int)Feature_1045423416__private_IsEnabledDeviceUsageNoInline() )
      v39 = v31 < v39 ? v32 : 0;
    else
      v39 = v32;
    v16 = (unsigned int *)((char *)v42 + v31);
    v42 = v16;
    v44 = (_DWORD)v16 - (_DWORD)v48;
    v15 = 0;
LABEL_38:
    v19 = v45 + 1;
    v11 = v49;
    v18 = v46;
  }
  v33 = v50;
  if ( v17 != P )
    ExFreePoolWithTag(v17, 0);
  if ( !v41 )
    v10 = -1073741163;
  if ( v10 >= 0 && v15 )
  {
    v34 = 56;
    *(_DWORD *)v33 = 56;
    *((_DWORD *)v33 + 11) = 32;
    *((_DWORD *)v33 + 12) = v14;
  }
  else
  {
    v34 = v14;
  }
  *v56 = v34;
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  return (unsigned int)v10;
}
