/*
 * XREFs of PspApplyMitigationOptions @ 0x140A521AC
 * Callers:
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExpUnlockHandleTableExclusive @ 0x1403D7690 (ExpUnlockHandleTableExclusive.c)
 *     ExpLockHandleTableExclusive @ 0x140454230 (ExpLockHandleTableExclusive.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ObReferenceProcessHandleTable @ 0x1408ADC40 (ObReferenceProcessHandleTable.c)
 *     PspSetRedirectionTrustPolicy @ 0x140A62D9C (PspSetRedirectionTrustPolicy.c)
 *     PspDecodeMitigationExecuteOptions @ 0x140A64DBC (PspDecodeMitigationExecuteOptions.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x140A9616C (PspSetNoChildProcessRestrictedPolicy.c)
 */

__int64 __fastcall PspApplyMitigationOptions(__int64 a1, __int64 a2, __m128i *a3, __int128 *a4, int a5)
{
  __m128i v5; // xmm2
  unsigned __int64 v8; // xmm3_8
  unsigned __int64 v10; // xmm1_8
  __int128 v11; // xmm0
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rsi
  unsigned __int8 v14; // cl
  __int64 v15; // r8
  int v16; // eax
  char v17; // si
  unsigned __int64 v18; // rax
  __int64 result; // rax
  char v20; // bl
  unsigned __int64 v21; // xmm1_8
  int v22; // eax
  __int64 v23; // rsi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v25; // rcx
  char v26; // al
  unsigned __int64 v27; // rax
  __int64 v28; // r14
  int v29; // eax
  __int64 v30; // rdx
  __m128i v31; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v32; // [rsp+30h] [rbp-50h]
  __m128i v33; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v34; // [rsp+50h] [rbp-30h]
  __int128 v35; // [rsp+58h] [rbp-28h]
  unsigned __int64 v36; // [rsp+68h] [rbp-18h]

  v5 = *a3;
  v8 = a3[1].m128i_u64[0];
  v10 = *((_QWORD *)a4 + 2);
  v11 = *a4;
  v33 = *a3;
  v35 = v11;
  v34 = v8;
  v36 = v10;
  if ( *(_WORD *)(a1 + 1772) == 332 )
  {
    v31 = v5;
    v32 = v8;
    *(_BYTE *)(a1 + 147) = PspDecodeMitigationExecuteOptions(&v31);
  }
  v12 = v33.m128i_i64[0];
  if ( (((unsigned __int64)v33.m128i_i64[0] >> 8) & 3) != 1 )
  {
    if ( (((unsigned __int64)v33.m128i_i64[0] >> 8) & 3) != 3 )
      goto LABEL_5;
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 8u);
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x10u);
  v12 = v33.m128i_i64[0];
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
    v12 = v33.m128i_i64[0];
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
    v12 = v33.m128i_i64[0];
  }
LABEL_12:
  if ( !a2 )
    goto LABEL_13;
  if ( ((v12 >> 24) & 3) != 0 )
  {
    if ( ((v12 >> 24) & 3) == 1 )
    {
LABEL_200:
      v27 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)a1);
      v28 = v27;
      if ( v27 )
      {
        CurrentThread = KeGetCurrentThread();
        ExpLockHandleTableExclusive(v27, (__int64)CurrentThread);
        v25 = *(_QWORD *)(v28 + 96);
        if ( v25 )
        {
          v29 = *(_DWORD *)(v25 + 8);
          if ( (v29 & 8) == 0 )
            *(_DWORD *)(v25 + 8) = v29 | 8;
        }
        else
        {
          v26 = *(_BYTE *)(v28 + 44);
          if ( (v26 & 2) == 0 )
            *(_BYTE *)(v28 + 44) = v26 | 2;
        }
        ExpUnlockHandleTableExclusive(v28, (__int64)CurrentThread);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 488));
        v12 = v33.m128i_i64[0];
      }
    }
  }
  else if ( (a5 & 4) != 0 )
  {
    goto LABEL_200;
  }
  if ( (*(_DWORD *)(a2 + 1872) & 0x1000) != 0 )
  {
    v12 = v12 & 0xFFFFFFFFCFFFFFFFuLL | 0x10000000;
    v33.m128i_i64[0] = v12;
  }
LABEL_13:
  if ( ((v12 >> 28) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x3000u);
    v12 = v33.m128i_i64[0];
  }
  if ( (*(_DWORD *)(a1 + 1872) & 0x1000) == 0 && (((unsigned __int64)v35 >> 28) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x2000u);
    v12 = v33.m128i_i64[0];
  }
  if ( a2 && (*(_DWORD *)(a2 + 2008) & 2) != 0 )
    v34 = v34 & 0xFFFFFFFFCFFFFFFFuLL | 0x10000000;
  if ( ((v34 >> 28) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2008), 6u);
    v12 = v33.m128i_i64[0];
  }
  if ( (*(_DWORD *)(a1 + 2008) & 2) == 0 && ((v36 >> 28) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2008), 4u);
    v12 = v33.m128i_i64[0];
  }
  if ( ((v12 >> 36) & 3) != 1 )
  {
    if ( ((v12 >> 36) & 3) != 3 )
      goto LABEL_24;
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x200u);
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x900u);
  v12 = v33.m128i_i64[0];
LABEL_24:
  v33.m128i_i64[1] = _mm_srli_si128(_mm_loadu_si128(&v33), 8).m128i_u64[0];
  if ( (v33.m128i_i8[15] & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x400u);
    v12 = v33.m128i_i64[0];
  }
  if ( (*(_DWORD *)(a1 + 1872) & 0x100) != 0 )
  {
    v33.m128i_i64[1] = v33.m128i_i64[1] & 0xFFFFFFFFFCCCFFFFuLL | 0x2220000;
    *((_QWORD *)&v35 + 1) = *((_QWORD *)&v35 + 1) & 0xFFFFFFFFFCCCFFFFuLL | 0x2220000;
  }
  else if ( (((unsigned __int64)v35 >> 36) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x800u);
    v12 = v33.m128i_i64[0];
  }
  if ( (BYTE4(v12) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x80u);
    v12 = v33.m128i_i64[0];
  }
  if ( ((v12 >> 40) & 3) == 0 )
  {
    if ( (a5 & 8) == 0 )
      goto LABEL_40;
    v13 = v12 & 0xFFFFFCFFFFFFFFFFuLL | 0x10000000000LL;
    v33.m128i_i64[0] = v13;
    if ( (a5 & 0x20) == 0 || PspDisableControlFlowGuardExportSuppression )
      goto LABEL_37;
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 2u);
    v23 = v13 | 0x30000000000LL;
    goto LABEL_176;
  }
  if ( ((v12 >> 40) & 3) != 1 )
  {
    if ( ((v12 >> 40) & 3) != 3 )
      goto LABEL_40;
    if ( !PspDisableControlFlowGuardExportSuppression )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 2u);
      v33.m128i_i64[0] |= 0x30000000000uLL;
      goto LABEL_37;
    }
    v23 = v12 & 0xFFFFFCFFFFFFFFFFuLL | 0x10000000000LL;
LABEL_176:
    v33.m128i_i64[0] = v23;
  }
LABEL_37:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 1u);
  if ( (a5 & 0x10) == 0 )
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 136), 5u);
  v12 = v33.m128i_i64[0];
LABEL_40:
  if ( (((unsigned __int64)v33.m128i_i64[1] >> 8) & 3) == 1 && (*(_DWORD *)(a1 + 1872) & 1) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 4u);
    v12 = v33.m128i_i64[0];
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
      goto LABEL_43;
    if ( *(_BYTE *)(a1 + 1528) < 6u )
      *(_BYTE *)(a1 + 1528) = 6;
    if ( *(_BYTE *)(a1 + 1529) < 6u )
      *(_BYTE *)(a1 + 1529) = 6;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x800000u);
  v12 = v33.m128i_i64[0];
LABEL_43:
  if ( (*(_DWORD *)(a1 + 1872) & 0x800000) == 0 )
  {
    if ( (((unsigned __int64)v35 >> 44) & 3) == 1 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x1000000u);
    }
    else
    {
      if ( (((unsigned __int64)v35 >> 44) & 3) != 3 )
        goto LABEL_44;
      _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x2000000u);
    }
    v12 = v33.m128i_i64[0];
  }
LABEL_44:
  v14 = v33.m128i_i8[0];
  if ( (((unsigned __int8)v33.m128i_i8[0] >> 4) & 3) == 0 && (*(_DWORD *)(a1 + 1872) & 1) != 0 )
  {
    v12 = v12 & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
    v33.m128i_i64[0] = v12;
    v14 = v12;
  }
  if ( ((v14 >> 4) & 3) != 1 && (((unsigned __int64)v35 >> 4) & 3) == 1 )
  {
    v12 |= 0x30uLL;
    v33.m128i_i64[0] = v12;
  }
  if ( (a5 & 0xC000) == 0x4000 )
  {
    v12 = v12 & 0xFFFCFFFFFFFFFFFFuLL | 0x1000000000000LL;
LABEL_233:
    v33.m128i_i64[0] = v12;
    goto LABEL_48;
  }
  if ( (a5 & 0xC000) == 0xC000 && (BYTE6(v12) & 3) != 1 )
  {
    v12 |= 0x3000000000000uLL;
    goto LABEL_233;
  }
LABEL_48:
  if ( (HIWORD(v12) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x10000u);
    goto LABEL_234;
  }
  if ( (HIWORD(v12) & 3) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x20000u);
LABEL_234:
    v12 = v33.m128i_i64[0];
  }
  if ( (*(_DWORD *)(a1 + 1872) & 0x30000) == 0 && (WORD3(v35) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x20000u);
    v12 = v33.m128i_i64[0];
  }
  if ( a2 && (*(_DWORD *)(a2 + 1872) & 0x80000) != 0 )
  {
    v12 = v12 & 0xFFCFFFFFFFFFFFFFuLL | 0x10000000000000LL;
    v33.m128i_i64[0] = v12;
  }
  if ( ((v12 >> 52) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x80000u);
    v12 = v33.m128i_i64[0];
  }
  if ( (*(_DWORD *)(a1 + 1872) & 0x80000) == 0 && (((unsigned __int64)v35 >> 52) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x100000u);
    v12 = v33.m128i_i64[0];
  }
  if ( a2 && (*(_DWORD *)(a2 + 1872) & 0x200000) != 0 )
  {
    v12 = v12 & 0xFCFFFFFFFFFFFFFFuLL | 0x100000000000000LL;
    v33.m128i_i64[0] = v12;
  }
  if ( (HIBYTE(v12) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x200000u);
    v12 = v33.m128i_i64[0];
  }
  if ( (*(_DWORD *)(a1 + 1872) & 0x200000) == 0 && (BYTE7(v35) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x400000u);
    v12 = v33.m128i_i64[0];
  }
  if ( a2 && (*(_DWORD *)(a2 + 1872) & 0x40000) != 0 )
  {
    v12 = v12 & 0xCFFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
    v33.m128i_i64[0] = v12;
  }
  if ( ((v12 >> 60) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x40000u);
  v15 = 0x8000000LL;
  if ( a2 )
  {
    v16 = *(_DWORD *)(a2 + 1872);
    if ( (v16 & 0x4000000) != 0 )
    {
      v33.m128i_i64[1] = v33.m128i_i64[1] & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
    }
    else if ( (v16 & 0x8000000) != 0 )
    {
      v33.m128i_i64[1] |= 0x30uLL;
    }
  }
  if ( (((unsigned __int64)v33.m128i_i64[1] >> 4) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0xC000000u);
  }
  else if ( (((unsigned __int64)v33.m128i_i64[1] >> 4) & 3) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x8000000u);
  }
  if ( (*(_DWORD *)(a1 + 1872) & 0xC000000) == 0 && ((*((_QWORD *)&v35 + 1) >> 4) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x8000000u);
  if ( (((unsigned __int64)v33.m128i_i64[1] >> 28) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 1u);
  if ( (*(_DWORD *)(a1 + 1876) & 1) == 0 && ((*((_QWORD *)&v35 + 1) >> 28) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 2u);
  if ( (v33.m128i_i8[12] & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 4u);
  if ( (HIWORD(v33.m128i_i64[1]) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x40000000u);
  if ( (((unsigned __int64)v33.m128i_i64[1] >> 52) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x2000u);
  if ( (*(_DWORD *)(a1 + 1876) & 4) == 0 && (BYTE12(v35) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 8u);
  if ( (((unsigned __int64)v33.m128i_i64[1] >> 40) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x400u);
  if ( (*(_DWORD *)(a1 + 1876) & 0x400) == 0 && ((*((_QWORD *)&v35 + 1) >> 40) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x800u);
  if ( (((unsigned __int64)v33.m128i_i64[1] >> 16) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x10u);
  if ( (*(_DWORD *)(a1 + 1876) & 0x10) == 0 && ((*((_QWORD *)&v35 + 1) >> 16) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x20u);
  if ( *(_WORD *)(a1 + 1772) == 332 )
  {
    if ( (((unsigned __int64)v33.m128i_i64[1] >> 20) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x40u);
    if ( (*(_DWORD *)(a1 + 1876) & 0x40) == 0 && ((*((_QWORD *)&v35 + 1) >> 20) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x80u);
    if ( (((unsigned __int64)v33.m128i_i64[1] >> 24) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x100u);
    if ( (*(_DWORD *)(a1 + 1876) & 0x100) == 0 && ((*((_QWORD *)&v35 + 1) >> 24) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x200u);
  }
  v17 = (unsigned __int64)v33.m128i_i64[1] >> 36;
  if ( (v17 & 3) == 1 )
  {
    v30 = 1LL;
    goto LABEL_243;
  }
  if ( (((unsigned __int64)v33.m128i_i64[1] >> 36) & 3) == 3 )
  {
    v30 = 2LL;
LABEL_243:
    PspSetNoChildProcessRestrictedPolicy(a1, v30, 0x8000000LL);
  }
  if ( (v17 & 3) != 1 && ((*((_QWORD *)&v35 + 1) >> 36) & 3) == 1 )
    PspSetNoChildProcessRestrictedPolicy(a1, 3LL, v15);
  if ( a2 )
  {
    v22 = *(_DWORD *)(a2 + 1872);
    if ( (v22 & 0x10000000) != 0 && (v22 & 0x20000000) == 0 )
      v33.m128i_i64[1] = v33.m128i_i64[1] & 0xFFFFCFFFFFFFFFFFuLL | 0x100000000000LL;
  }
  if ( (((unsigned __int64)v33.m128i_i64[1] >> 44) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x10000000u);
  }
  else if ( (((unsigned __int64)v33.m128i_i64[1] >> 44) & 3) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x30000000u);
  }
  switch ( ((unsigned __int64)v33.m128i_i64[1] >> 60) & 3 )
  {
    case 0uLL:
      if ( (a5 & 0x10000) == 0 || (a5 & 0x100000) != 0 || (a5 & 0x200000) != 0 )
        break;
      if ( (a5 & 0x20000) != 0 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x100000u);
      v33.m128i_i64[1] = v33.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
LABEL_172:
      _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x4000u);
      break;
    case 1uLL:
      goto LABEL_172;
    case 3uLL:
      v33.m128i_i64[1] = v33.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
      _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x4000u);
      _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x100000u);
      break;
  }
  if ( ((*((_QWORD *)&v35 + 1) >> 60) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x8000u);
  if ( (*(_DWORD *)(a1 + 1876) & 0x4000) == 0 )
  {
    v18 = v34 & 0xFFFFFFFFFFFFFFFCuLL | 2;
    goto LABEL_108;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x20000u);
  if ( (v34 & 3) == 0 )
  {
    if ( (a5 & 0x40000) == 0 )
      goto LABEL_189;
    goto LABEL_188;
  }
  if ( (v34 & 3) == 3 )
LABEL_188:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x80000000);
LABEL_189:
  v18 = v34 & 0xFFFFFFFFFFFFFFFCuLL | 1;
LABEL_108:
  v34 = v18;
  if ( (v36 & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x40000u);
  if ( ((v34 >> 4) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x200000u);
  }
  else if ( ((v34 >> 4) & 3) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x200000u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x400000u);
  }
  if ( ((v36 >> 4) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x800000u);
  if ( ((v34 >> 12) & 3) != 0 )
  {
    if ( ((v34 >> 12) & 3) != 1 )
      goto LABEL_117;
  }
  else
  {
    v34 = v34 & 0xFFFFFFFFFFFFCFFFuLL | 0x1000;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x8000000u);
LABEL_117:
  if ( ((v36 >> 12) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x10000000u);
  if ( ((v34 >> 16) & 3) != 0 )
  {
    if ( ((v34 >> 16) & 3) != 1 )
      goto LABEL_122;
    goto LABEL_121;
  }
  if ( (a5 & 0x80000) == 0 )
LABEL_121:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x40000000u);
LABEL_122:
  result = v34 >> 20;
  v20 = v34 >> 20;
  if ( (v20 & 3) == 1 )
    result = PspSetRedirectionTrustPolicy(a1, 1LL);
  if ( (v20 & 3) != 1 && ((v36 >> 20) & 3) == 1 )
    result = PspSetRedirectionTrustPolicy(a1, 2LL);
  if ( ((v34 >> 24) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2008), 1u);
  v21 = v34;
  *a3 = v33;
  a3[1].m128i_i64[0] = v21;
  return result;
}
