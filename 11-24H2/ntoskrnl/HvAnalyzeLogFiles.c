/*
 * XREFs of HvAnalyzeLogFiles @ 0x14096B918
 * Callers:
 *     HvRecoverFlushProtocolStateFromFiles @ 0x1407DF9A4 (HvRecoverFlushProtocolStateFromFiles.c)
 *     HvLoadHive @ 0x140969B4C (HvLoadHive.c)
 * Callees:
 *     _tlgWriteAgg @ 0x140273698 (_tlgWriteAgg.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     HvpCompareLogSequenceNumbers @ 0x1407E6874 (HvpCompareLogSequenceNumbers.c)
 *     HvpLogIneligibleLogHeader @ 0x1407E68A8 (HvpLogIneligibleLogHeader.c)
 *     HvpIsReadErrorTransient @ 0x14096BF54 (HvpIsReadErrorTransient.c)
 *     HvpLogUnreadableLog @ 0x14096C0F8 (HvpLogUnreadableLog.c)
 *     HvpLogInvalidLogHeader @ 0x14096C300 (HvpLogInvalidLogHeader.c)
 *     HvpDetermineResultingLoggingState @ 0x14096C888 (HvpDetermineResultingLoggingState.c)
 *     HvpDetermineLogFileApplicationOrder @ 0x14096C94C (HvpDetermineLogFileApplicationOrder.c)
 *     HvpAnalyzeSingleLogFile @ 0x14096CFFC (HvpAnalyzeSingleLogFile.c)
 *     HvpHeaderCheckSum @ 0x140BBB7A0 (HvpHeaderCheckSum.c)
 */

__int64 __fastcall HvAnalyzeLogFiles(
        _QWORD *a1,
        ULONG a2,
        char a3,
        unsigned int *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 i; // rbx
  int v11; // eax
  unsigned int v12; // edi
  __int64 result; // rax
  int v14; // edi
  unsigned int *v15; // rsi
  __int128 *v16; // rbx
  unsigned int v17; // r15d
  __int64 v18; // r14
  _QWORD *v19; // r12
  __int64 v20; // r9
  __int64 v21; // r15
  __int64 v22; // r13
  unsigned int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned int *v28; // r14
  int v29; // edi
  __int64 j; // rbx
  struct _EVENT_DATA_DESCRIPTOR v31; // xmm1
  int v32; // eax
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  int v37; // eax
  _BOOL8 v38; // rcx
  int v39; // ecx
  int v40; // eax
  unsigned int v41; // r10d
  _OWORD *v42; // rax
  __int64 v43; // rdx
  _OWORD *v44; // rcx
  __int128 v45; // xmm1
  char v47; // [rsp+31h] [rbp-CFh] BYREF
  char Size; // [rsp+32h] [rbp-CEh] BYREF
  char v49; // [rsp+33h] [rbp-CDh] BYREF
  ULONG Reserved; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v51; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int *v52; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v53; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v54; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v55; // [rsp+60h] [rbp-A0h]
  struct _EVENT_DATA_DESCRIPTOR v56[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v57; // [rsp+90h] [rbp-70h]
  __int128 v58; // [rsp+A0h] [rbp-60h]
  __int128 v59; // [rsp+B0h] [rbp-50h]
  __int64 v60; // [rsp+C0h] [rbp-40h]
  int v61; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+D0h] [rbp-30h] BYREF
  char *v63; // [rsp+F0h] [rbp-10h]
  int v64; // [rsp+F8h] [rbp-8h]
  int v65; // [rsp+FCh] [rbp-4h]
  char *p_Size; // [rsp+100h] [rbp+0h]
  int v67; // [rsp+108h] [rbp+8h]
  int v68; // [rsp+10Ch] [rbp+Ch]
  char *v69; // [rsp+110h] [rbp+10h]
  int v70; // [rsp+118h] [rbp+18h]
  int v71; // [rsp+11Ch] [rbp+1Ch]
  ULONG *p_Reserved; // [rsp+120h] [rbp+20h]
  int v73; // [rsp+128h] [rbp+28h]
  int v74; // [rsp+12Ch] [rbp+2Ch]
  unsigned int **v75; // [rsp+130h] [rbp+30h]
  int v76; // [rsp+138h] [rbp+38h]
  int v77; // [rsp+13Ch] [rbp+3Ch]

  v7 = a4;
  Reserved = a2;
  v55 = a1;
  v52 = a4;
  v54 = a6;
  v51 = a7;
  memset_0((char *)&v56[0].Ptr + 4, 0, 0x58uLL);
  v53 = 0LL;
  LODWORD(v56[0].Ptr) = a5;
  for ( i = 0LL; (unsigned int)i < a5; i = (unsigned int)(i + 1) )
  {
    v11 = guard_dispatch_icall_no_overrides(*(_QWORD *)&v7[6 * i + 4], 0LL);
    v12 = v11;
    if ( v11 >= 0 )
    {
      v7 = v52;
    }
    else
    {
      if ( (unsigned __int8)HvpIsReadErrorTransient((unsigned int)v11) )
        return 3221225805LL;
      v25 = v12;
      v7 = v52;
      HvpLogUnreadableLog(v52[6 * i], v25);
      *((_QWORD *)&v53 + i) = 0LL;
    }
  }
  v14 = 0;
  if ( !a5 )
  {
LABEL_11:
    v23 = dword_140E09F58;
    v24 = qword_140E09F70;
    if ( (unsigned int)dword_140E09F58 > 5 )
    {
      if ( (qword_140E09F68 & 8) != 0 && (qword_140E09F70 & 8) == qword_140E09F70 )
      {
        *(_QWORD *)&v57 = &v51;
        v51 = 0x1000000LL;
        *((_QWORD *)&v57 + 1) = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E09F58,
          (unsigned __int8 *)word_1400567FA,
          0LL,
          0LL,
          3u,
          v56);
        v24 = qword_140E09F70;
        v23 = dword_140E09F58;
      }
      if ( v23 > 5 && (qword_140E09F68 & 0x400000000008LL) != 0 && (v24 & 0x400000000008LL) == v24 )
      {
        *(_QWORD *)&v57 = &v51;
        v51 = 1LL;
        *(_QWORD *)&v58 = &v54;
        *((_QWORD *)&v57 + 1) = 8LL;
        v54 = 0x1000000LL;
        *((_QWORD *)&v58 + 1) = 8LL;
        tlgWriteAgg((__int64)&dword_140E09F58, (unsigned __int8 *)&unk_1400567B0, v9, 4u, (__int64)v56);
      }
    }
    return 3221225804LL;
  }
  v15 = v52;
  v16 = &v53;
  v17 = Reserved;
  v18 = a5;
  v19 = v55;
  do
  {
    v20 = *(_QWORD *)v16;
    if ( !*(_QWORD *)v16 )
      goto LABEL_9;
    if ( *(_DWORD *)v20 != 1718052210
      || *(_DWORD *)(v20 + 4) != *(_DWORD *)(v20 + 8)
      || *(_QWORD *)(v20 + 12) != *v19
      || (v37 = *(_DWORD *)(v20 + 28), v37 != 6) && v37 != 1
      || (v39 = *(_DWORD *)(v20 + 40), (unsigned int)(v39 - 1) > 0x7FFFDFFF)
      || (v39 & 0xFFF) != 0
      || (v40 = HvpHeaderCheckSum(*(_QWORD *)v16), *(_DWORD *)(v20 + 508) != v40) )
    {
      HvpLogInvalidLogHeader(v19, *v15, v20);
LABEL_30:
      *(_QWORD *)v16 = 0LL;
      goto LABEL_9;
    }
    if ( !a3 && (int)HvpCompareLogSequenceNumbers(v41, v17) < 0 )
    {
      HvpLogIneligibleLogHeader();
      goto LABEL_30;
    }
    ++v14;
LABEL_9:
    v15 += 6;
    v16 = (__int128 *)((char *)v16 + 8);
    --v18;
  }
  while ( v18 );
  v21 = v54;
  v22 = v51;
  if ( !v14 )
    goto LABEL_11;
  if ( v51 )
  {
    if ( v14 == 1 )
      v38 = v53 == 0;
    else
      v38 = (int)HvpCompareLogSequenceNumbers(*(_DWORD *)(v53 + 4), *(_DWORD *)(*((_QWORD *)&v53 + 1) + 8LL)) < 0;
    v42 = (_OWORD *)*((_QWORD *)&v53 + v38);
    v43 = 4LL;
    v44 = (_OWORD *)v51;
    do
    {
      *v44 = *v42;
      v44[1] = v42[1];
      v44[2] = v42[2];
      v44[3] = v42[3];
      v44[4] = v42[4];
      v44[5] = v42[5];
      v44[6] = v42[6];
      v44 += 8;
      v45 = v42[7];
      v42 += 8;
      *(v44 - 1) = v45;
      --v43;
    }
    while ( v43 );
    memset_0((void *)(v22 + 512), 0, 0xE00uLL);
    *(_DWORD *)(v22 + 28) = 0;
  }
  v28 = v52;
  v29 = 0;
  for ( j = 0LL; (unsigned int)j < a5; j = (unsigned int)(j + 1) )
  {
    v8 = *((_QWORD *)&v53 + j);
    if ( v8 )
    {
      result = HvpAnalyzeSingleLogFile(&v28[6 * j], v8, (char *)&v56[0].Ptr + 24 * j + 4);
      *((_QWORD *)&v53 + j) = 0LL;
      if ( (_DWORD)result != -2147483614 )
      {
        if ( (int)result < 0 )
          return result;
        ++v29;
      }
    }
  }
  if ( !v29 )
  {
    if ( (unsigned int)dword_140E09F58 > 5 && tlgKeywordOn((__int64)&dword_140E09F58, 0x400000000008LL) )
    {
      *(_QWORD *)&v57 = &v51;
      *((_QWORD *)&v57 + 1) = 8LL;
      v51 = 0x1000000LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E09F58,
        (unsigned __int8 *)&word_14005677E,
        0LL,
        0LL,
        3u,
        v56);
    }
    return 3221225804LL;
  }
  if ( (unsigned int)dword_140E09F58 > 5 && (qword_140E09F68 & 8) != 0 && (qword_140E09F70 & 8) == qword_140E09F70 )
  {
    v65 = 0;
    v68 = 0;
    v71 = 0;
    v74 = 0;
    v77 = 0;
    v63 = &v47;
    Size = v56[0].Size;
    p_Size = &Size;
    v49 = v57;
    v69 = &v49;
    Reserved = v56[0].Reserved;
    p_Reserved = &Reserved;
    LODWORD(v52) = DWORD1(v57);
    v75 = &v52;
    v47 = v29;
    v64 = 1;
    v67 = 1;
    v70 = 1;
    v73 = 4;
    v76 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09F58, (unsigned __int8 *)byte_140056721, 0LL, 0LL, 7u, &v62);
  }
  LOBYTE(v8) = a3;
  HvpDetermineLogFileApplicationOrder(v56, v8);
  HvpDetermineResultingLoggingState(v56);
  v31 = v56[1];
  v32 = v61;
  *(struct _EVENT_DATA_DESCRIPTOR *)v21 = v56[0];
  v33 = v57;
  *(struct _EVENT_DATA_DESCRIPTOR *)(v21 + 16) = v31;
  v34 = v58;
  *(_OWORD *)(v21 + 32) = v33;
  v35 = v59;
  *(_OWORD *)(v21 + 48) = v34;
  *(_QWORD *)&v34 = v60;
  *(_OWORD *)(v21 + 64) = v35;
  *(_QWORD *)(v21 + 80) = v34;
  *(_DWORD *)(v21 + 88) = v32;
  return 0LL;
}
