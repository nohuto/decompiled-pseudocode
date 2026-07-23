/*
 * XREFs of PspApplyMitigationOptions @ 0x140A4B32C
 * Callers:
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExpLockHandleTableExclusive @ 0x140447858 (ExpLockHandleTableExclusive.c)
 *     ExpUnlockHandleTableExclusive @ 0x14044D754 (ExpUnlockHandleTableExclusive.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ObReferenceProcessHandleTable @ 0x140894BB0 (ObReferenceProcessHandleTable.c)
 *     PspSetRedirectionTrustPolicy @ 0x140A5D7E4 (PspSetRedirectionTrustPolicy.c)
 *     PspDecodeMitigationExecuteOptions @ 0x140A60AEC (PspDecodeMitigationExecuteOptions.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x140A971CC (PspSetNoChildProcessRestrictedPolicy.c)
 */

__int64 __fastcall PspApplyMitigationOptions(__int64 a1, __int64 a2, __m128i *a3, __int128 *a4, int a5)
{
  __m128i v5; // xmm2
  unsigned __int64 v8; // xmm3_8
  unsigned __int64 v10; // xmm1_8
  __int128 v11; // xmm0
  unsigned __int64 v12; // rsi
  unsigned __int8 v13; // cl
  __int64 v14; // r8
  int v15; // eax
  char v16; // si
  unsigned __int64 v17; // rax
  __int64 result; // rax
  char v19; // bl
  unsigned __int64 v20; // xmm1_8
  unsigned __int64 v21; // rsi
  int v22; // eax
  unsigned __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // rcx
  char v26; // al
  __int64 v27; // rsi
  int v28; // eax
  __int64 v29; // rdx
  __m128i v30; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v31; // [rsp+30h] [rbp-50h]
  __m128i v32; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v33; // [rsp+50h] [rbp-30h]
  __int128 v34; // [rsp+58h] [rbp-28h]
  unsigned __int64 v35; // [rsp+68h] [rbp-18h]

  v5 = *a3;
  v8 = a3[1].m128i_u64[0];
  v10 = *((_QWORD *)a4 + 2);
  v11 = *a4;
  v32 = *a3;
  v34 = v11;
  v33 = v8;
  v35 = v10;
  if ( *(_WORD *)(a1 + 1772) == 332 )
  {
    v30 = v5;
    v31 = v8;
    *(_BYTE *)(a1 + 147) = PspDecodeMitigationExecuteOptions(&v30);
  }
  v12 = v32.m128i_i64[0];
  if ( (((unsigned __int64)v32.m128i_i64[0] >> 8) & 3) != 1 )
  {
    if ( (((unsigned __int64)v32.m128i_i64[0] >> 8) & 3) != 3 )
      goto LABEL_5;
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 8u);
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x10u);
  v12 = v32.m128i_i64[0];
LABEL_5:
  if ( (v12 & 0x30000) != 0 )
  {
    if ( (BYTE2(v12) & 3) != 2 )
      goto LABEL_8;
    goto LABEL_7;
  }
  if ( (a5 & 1) == 0 )
  {
LABEL_7:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x40u);
    v12 = v32.m128i_i64[0];
  }
LABEL_8:
  if ( (*(_DWORD *)(a1 + 1872) & 0x40) != 0 )
    goto LABEL_12;
  if ( ((v12 >> 20) & 3) != 0 )
  {
    if ( ((v12 >> 20) & 3) != 1 )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( (a5 & 2) != 0 )
  {
LABEL_11:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x20u);
    v12 = v32.m128i_i64[0];
  }
LABEL_12:
  if ( !a2 )
    goto LABEL_13;
  if ( ((v12 >> 24) & 3) == 0 )
  {
    if ( (a5 & 4) == 0 )
      goto LABEL_149;
LABEL_177:
    v23 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)a1);
    v24 = v23;
    if ( v23 )
    {
      ExpLockHandleTableExclusive(v23, (__int64)KeGetCurrentThread());
      v25 = *(_QWORD *)(v24 + 96);
      if ( v25 )
      {
        v28 = *(_DWORD *)(v25 + 8);
        if ( (v28 & 8) == 0 )
          *(_DWORD *)(v25 + 8) = v28 | 8;
      }
      else
      {
        v26 = *(_BYTE *)(v24 + 44);
        if ( (v26 & 2) == 0 )
          *(_BYTE *)(v24 + 44) = v26 | 2;
      }
      ExpUnlockHandleTableExclusive(v24);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 488));
      v12 = v32.m128i_i64[0];
    }
    goto LABEL_149;
  }
  if ( ((v12 >> 24) & 3) == 1 )
    goto LABEL_177;
LABEL_149:
  if ( (*(_DWORD *)(a2 + 1872) & 0x1000) != 0 )
  {
    v12 = v12 & 0xFFFFFFFFCFFFFFFFuLL | 0x10000000;
    v32.m128i_i64[0] = v12;
  }
LABEL_13:
  if ( ((v12 >> 28) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x3000u);
    v12 = v32.m128i_i64[0];
  }
  if ( (*(_DWORD *)(a1 + 1872) & 0x1000) == 0 && (((unsigned __int64)v34 >> 28) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x2000u);
    v12 = v32.m128i_i64[0];
  }
  if ( a2 && (*(_DWORD *)(a2 + 2008) & 2) != 0 )
    v33 = v33 & 0xFFFFFFFFCFFFFFFFuLL | 0x10000000;
  if ( ((v33 >> 28) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2008), 6u);
    v12 = v32.m128i_i64[0];
  }
  if ( (*(_DWORD *)(a1 + 2008) & 2) == 0 && ((v35 >> 28) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2008), 4u);
    v12 = v32.m128i_i64[0];
  }
  if ( ((v12 >> 36) & 3) != 1 )
  {
    if ( ((v12 >> 36) & 3) != 3 )
      goto LABEL_22;
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x200u);
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x900u);
  v12 = v32.m128i_i64[0];
LABEL_22:
  v32.m128i_i64[1] = _mm_srli_si128(_mm_loadu_si128(&v32), 8).m128i_u64[0];
  if ( (v32.m128i_i8[15] & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x400u);
    v12 = v32.m128i_i64[0];
  }
  if ( (*(_DWORD *)(a1 + 1872) & 0x100) != 0 )
  {
    v32.m128i_i64[1] = v32.m128i_i64[1] & 0xFFFFFFFFFCCCFFFFuLL | 0x2220000;
    *((_QWORD *)&v34 + 1) = *((_QWORD *)&v34 + 1) & 0xFFFFFFFFFCCCFFFFuLL | 0x2220000;
  }
  else if ( (((unsigned __int64)v34 >> 36) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x800u);
    v12 = v32.m128i_i64[0];
  }
  if ( (BYTE4(v12) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x80u);
    v12 = v32.m128i_i64[0];
  }
  if ( ((v12 >> 40) & 3) == 0 )
  {
    if ( (a5 & 8) == 0 )
      goto LABEL_31;
    v21 = v12 & 0xFFFFFCFFFFFFFFFFuLL | 0x10000000000LL;
    v32.m128i_i64[0] = v21;
    if ( (a5 & 0x20) == 0 || PspDisableControlFlowGuardExportSuppression )
      goto LABEL_125;
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 2u);
    v27 = v21 | 0x30000000000LL;
    goto LABEL_185;
  }
  if ( ((v12 >> 40) & 3) != 1 )
  {
    if ( ((v12 >> 40) & 3) != 3 )
      goto LABEL_31;
    if ( !PspDisableControlFlowGuardExportSuppression )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 2u);
      v32.m128i_i64[0] |= 0x30000000000uLL;
      goto LABEL_125;
    }
    v27 = v12 & 0xFFFFFCFFFFFFFFFFuLL | 0x10000000000LL;
LABEL_185:
    v32.m128i_i64[0] = v27;
  }
LABEL_125:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 1u);
  if ( (a5 & 0x10) == 0 )
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 136), 5u);
  v12 = v32.m128i_i64[0];
LABEL_31:
  if ( (((unsigned __int64)v32.m128i_i64[1] >> 8) & 3) == 1 && (*(_DWORD *)(a1 + 1872) & 1) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 4u);
    v12 = v32.m128i_i64[0];
  }
  if ( ((v12 >> 44) & 3) == 1 )
  {
    if ( *(_BYTE *)(a1 + 1528) < 8u )
      *(_BYTE *)(a1 + 1528) = 8;
    if ( *(_BYTE *)(a1 + 1529) < 8u )
      *(_BYTE *)(a1 + 1529) = 8;
  }
  else
  {
    if ( ((v12 >> 44) & 3) != 3 )
      goto LABEL_34;
    if ( *(_BYTE *)(a1 + 1528) < 6u )
      *(_BYTE *)(a1 + 1528) = 6;
    if ( *(_BYTE *)(a1 + 1529) < 6u )
      *(_BYTE *)(a1 + 1529) = 6;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x800000u);
  v12 = v32.m128i_i64[0];
LABEL_34:
  if ( (*(_DWORD *)(a1 + 1872) & 0x800000) == 0 )
  {
    if ( (((unsigned __int64)v34 >> 44) & 3) == 1 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x1000000u);
    }
    else
    {
      if ( (((unsigned __int64)v34 >> 44) & 3) != 3 )
        goto LABEL_35;
      _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x2000000u);
    }
    v12 = v32.m128i_i64[0];
  }
LABEL_35:
  v13 = v32.m128i_i8[0];
  if ( (((unsigned __int8)v32.m128i_i8[0] >> 4) & 3) == 0 && (*(_DWORD *)(a1 + 1872) & 1) != 0 )
  {
    v12 = v12 & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
    v32.m128i_i64[0] = v12;
    v13 = v12;
  }
  if ( ((v13 >> 4) & 3) != 1 && (((unsigned __int64)v34 >> 4) & 3) == 1 )
  {
    v12 |= 0x30uLL;
    v32.m128i_i64[0] = v12;
  }
  if ( (a5 & 0xC000) == 0x4000 )
  {
    v12 = v12 & 0xFFFCFFFFFFFFFFFFuLL | 0x1000000000000LL;
LABEL_204:
    v32.m128i_i64[0] = v12;
    goto LABEL_39;
  }
  if ( (a5 & 0xC000) == 0xC000 && (BYTE6(v12) & 3) != 1 )
  {
    v12 |= 0x3000000000000uLL;
    goto LABEL_204;
  }
LABEL_39:
  if ( (HIWORD(v12) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x10000u);
    goto LABEL_233;
  }
  if ( (HIWORD(v12) & 3) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x20000u);
LABEL_233:
    v12 = v32.m128i_i64[0];
  }
  if ( (*(_DWORD *)(a1 + 1872) & 0x30000) == 0 && (WORD3(v34) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x20000u);
    v12 = v32.m128i_i64[0];
  }
  if ( a2 && (*(_DWORD *)(a2 + 1872) & 0x80000) != 0 )
  {
    v12 = v12 & 0xFFCFFFFFFFFFFFFFuLL | 0x10000000000000LL;
    v32.m128i_i64[0] = v12;
  }
  if ( ((v12 >> 52) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x80000u);
    v12 = v32.m128i_i64[0];
  }
  if ( (*(_DWORD *)(a1 + 1872) & 0x80000) == 0 && (((unsigned __int64)v34 >> 52) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x100000u);
    v12 = v32.m128i_i64[0];
  }
  if ( a2 && (*(_DWORD *)(a2 + 1872) & 0x200000) != 0 )
  {
    v12 = v12 & 0xFCFFFFFFFFFFFFFFuLL | 0x100000000000000LL;
    v32.m128i_i64[0] = v12;
  }
  if ( (HIBYTE(v12) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x200000u);
    v12 = v32.m128i_i64[0];
  }
  if ( (*(_DWORD *)(a1 + 1872) & 0x200000) == 0 && (BYTE7(v34) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x400000u);
    v12 = v32.m128i_i64[0];
  }
  if ( a2 && (*(_DWORD *)(a2 + 1872) & 0x40000) != 0 )
  {
    v12 = v12 & 0xCFFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
    v32.m128i_i64[0] = v12;
  }
  if ( ((v12 >> 60) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x40000u);
  v14 = 0x8000000LL;
  if ( a2 )
  {
    v15 = *(_DWORD *)(a2 + 1872);
    if ( (v15 & 0x4000000) != 0 )
    {
      v32.m128i_i64[1] = v32.m128i_i64[1] & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
    }
    else if ( (v15 & 0x8000000) != 0 )
    {
      v32.m128i_i64[1] |= 0x30uLL;
    }
  }
  if ( (((unsigned __int64)v32.m128i_i64[1] >> 4) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0xC000000u);
  }
  else if ( (((unsigned __int64)v32.m128i_i64[1] >> 4) & 3) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x8000000u);
  }
  if ( (*(_DWORD *)(a1 + 1872) & 0xC000000) == 0 && ((*((_QWORD *)&v34 + 1) >> 4) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x8000000u);
  if ( (((unsigned __int64)v32.m128i_i64[1] >> 28) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 1u);
  if ( (*(_DWORD *)(a1 + 1876) & 1) == 0 && ((*((_QWORD *)&v34 + 1) >> 28) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 2u);
  if ( (v32.m128i_i8[12] & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 4u);
  if ( (HIWORD(v32.m128i_i64[1]) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x40000000u);
  if ( (((unsigned __int64)v32.m128i_i64[1] >> 52) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x2000u);
  if ( (*(_DWORD *)(a1 + 1876) & 4) == 0 && (BYTE12(v34) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 8u);
  if ( (((unsigned __int64)v32.m128i_i64[1] >> 40) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x400u);
  if ( (*(_DWORD *)(a1 + 1876) & 0x400) == 0 && ((*((_QWORD *)&v34 + 1) >> 40) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x800u);
  if ( (((unsigned __int64)v32.m128i_i64[1] >> 16) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x10u);
  if ( (*(_DWORD *)(a1 + 1876) & 0x10) == 0 && ((*((_QWORD *)&v34 + 1) >> 16) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x20u);
  if ( *(_WORD *)(a1 + 1772) == 332 )
  {
    if ( (((unsigned __int64)v32.m128i_i64[1] >> 20) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x40u);
    if ( (*(_DWORD *)(a1 + 1876) & 0x40) == 0 && ((*((_QWORD *)&v34 + 1) >> 20) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x80u);
    if ( (((unsigned __int64)v32.m128i_i64[1] >> 24) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x100u);
    if ( (*(_DWORD *)(a1 + 1876) & 0x100) == 0 && ((*((_QWORD *)&v34 + 1) >> 24) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x200u);
  }
  v16 = (unsigned __int64)v32.m128i_i64[1] >> 36;
  if ( (v16 & 3) == 1 )
  {
    v29 = 1LL;
    goto LABEL_242;
  }
  if ( (((unsigned __int64)v32.m128i_i64[1] >> 36) & 3) == 3 )
  {
    v29 = 2LL;
LABEL_242:
    PspSetNoChildProcessRestrictedPolicy(a1, v29, 0x8000000LL);
  }
  if ( (v16 & 3) != 1 && ((*((_QWORD *)&v34 + 1) >> 36) & 3) == 1 )
    PspSetNoChildProcessRestrictedPolicy(a1, 3LL, v14);
  if ( a2 )
  {
    v22 = *(_DWORD *)(a2 + 1872);
    if ( (v22 & 0x10000000) != 0 && (v22 & 0x20000000) == 0 )
      v32.m128i_i64[1] = v32.m128i_i64[1] & 0xFFFFCFFFFFFFFFFFuLL | 0x100000000000LL;
  }
  if ( (((unsigned __int64)v32.m128i_i64[1] >> 44) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x10000000u);
  }
  else if ( (((unsigned __int64)v32.m128i_i64[1] >> 44) & 3) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x30000000u);
  }
  switch ( ((unsigned __int64)v32.m128i_i64[1] >> 60) & 3 )
  {
    case 0uLL:
      if ( (a5 & 0x10000) == 0 || (a5 & 0x100000) != 0 || (a5 & 0x200000) != 0 )
        break;
      if ( (a5 & 0x20000) != 0 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x100000u);
      v32.m128i_i64[1] = v32.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
LABEL_176:
      _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x4000u);
      break;
    case 1uLL:
      goto LABEL_176;
    case 3uLL:
      v32.m128i_i64[1] = v32.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
      _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x4000u);
      _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x100000u);
      break;
  }
  if ( ((*((_QWORD *)&v34 + 1) >> 60) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x8000u);
  if ( (*(_DWORD *)(a1 + 1876) & 0x4000) == 0 )
  {
    v17 = v33 & 0xFFFFFFFFFFFFFFFCuLL | 2;
    goto LABEL_97;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x20000u);
  if ( (v33 & 3) == 0 )
  {
    if ( (a5 & 0x40000) == 0 )
      goto LABEL_198;
    goto LABEL_197;
  }
  if ( (v33 & 3) == 3 )
LABEL_197:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x80000000);
LABEL_198:
  v17 = v33 & 0xFFFFFFFFFFFFFFFCuLL | 1;
LABEL_97:
  v33 = v17;
  if ( (v35 & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x40000u);
  if ( ((v33 >> 4) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x200000u);
  }
  else if ( ((v33 >> 4) & 3) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x200000u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x400000u);
  }
  if ( ((v35 >> 4) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x800000u);
  if ( ((v33 >> 12) & 3) != 0 )
  {
    if ( ((v33 >> 12) & 3) != 1 )
      goto LABEL_106;
  }
  else
  {
    v33 = v33 & 0xFFFFFFFFFFFFCFFFuLL | 0x1000;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x8000000u);
LABEL_106:
  if ( ((v35 >> 12) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x10000000u);
  if ( ((v33 >> 16) & 3) != 0 )
  {
    if ( ((v33 >> 16) & 3) != 1 )
      goto LABEL_111;
    goto LABEL_110;
  }
  if ( (a5 & 0x80000) == 0 )
LABEL_110:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x40000000u);
LABEL_111:
  result = v33 >> 20;
  v19 = v33 >> 20;
  if ( (v19 & 3) == 1 )
    result = PspSetRedirectionTrustPolicy(a1, 1LL);
  if ( (v19 & 3) != 1 && ((v35 >> 20) & 3) == 1 )
    result = PspSetRedirectionTrustPolicy(a1, 2LL);
  if ( ((v33 >> 24) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2008), 1u);
  v20 = v33;
  *a3 = v32;
  a3[1].m128i_i64[0] = v20;
  return result;
}
