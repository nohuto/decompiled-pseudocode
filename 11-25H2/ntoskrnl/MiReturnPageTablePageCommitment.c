/*
 * XREFs of MiReturnPageTablePageCommitment @ 0x1409E3F50
 * Callers:
 *     MiRemoveVad @ 0x1402A7E14 (MiRemoveVad.c)
 *     MiDeleteEmptyPageTableCommit @ 0x14047A134 (MiDeleteEmptyPageTableCommit.c)
 * Callees:
 *     MiGetNextVad @ 0x1402A96D8 (MiGetNextVad.c)
 *     MiGetPreviousVad @ 0x1402A971C (MiGetPreviousVad.c)
 *     MmGetMinWsPagePriority @ 0x140311E90 (MmGetMinWsPagePriority.c)
 *     MiVadPureReserve @ 0x140384DA0 (MiVadPureReserve.c)
 *     MiVadPageTableChargeLevel @ 0x1403FD8E0 (MiVadPageTableChargeLevel.c)
 *     RtlAreBitsClearEx @ 0x140420500 (RtlAreBitsClearEx.c)
 *     MiVadDeleted @ 0x140432030 (MiVadDeleted.c)
 *     MiBitmapRangeZeroEx @ 0x14044BE04 (MiBitmapRangeZeroEx.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140483BB0 (PdcCreateWatchdogAroundClientCall.c)
 *     MiUpdateChargedWsles @ 0x1404F37B0 (MiUpdateChargedWsles.c)
 *     MiReturnFullProcessCommitment @ 0x1409E454C (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiReturnPageTablePageCommitment(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        _BYTE *a7)
{
  __int64 result; // rax
  __int64 v9; // r13
  unsigned __int64 PreviousVad; // r14
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  BOOL v14; // eax
  __int64 v15; // r10
  _BYTE *v16; // r9
  BOOL v17; // ebp
  __int64 v18; // r12
  __int64 v19; // rax
  unsigned __int64 v20; // r11
  int v21; // ecx
  unsigned __int8 *v22; // r15
  __int64 v23; // r8
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // r10
  int v27; // r13d
  bool v28; // zf
  char v29; // r8
  __int64 v30; // rcx
  _BYTE *v31; // r9
  __int64 NextVad; // r9
  char v33; // r8
  __int64 v34; // rcx
  __int64 v35; // r13
  unsigned __int64 v36; // rbx
  __int64 v37; // r14
  __int64 v38; // rbx
  __int64 v39; // rdi
  __int64 v40; // rsi
  unsigned __int64 v41; // r15
  int v42; // eax
  unsigned __int8 v43; // al
  __int64 v44; // rdx
  __int64 v45; // [rsp+20h] [rbp-A8h]
  __int64 v46; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v47; // [rsp+30h] [rbp-98h]
  int v48; // [rsp+38h] [rbp-90h]
  __int64 v49; // [rsp+40h] [rbp-88h]
  __int64 v50; // [rsp+48h] [rbp-80h] BYREF
  __int64 v51; // [rsp+50h] [rbp-78h]
  __int64 v52; // [rsp+58h] [rbp-70h]
  unsigned __int8 *v53; // [rsp+60h] [rbp-68h]
  unsigned __int64 v54; // [rsp+68h] [rbp-60h]
  __int64 v55; // [rsp+70h] [rbp-58h]
  unsigned __int64 v56; // [rsp+78h] [rbp-50h]
  unsigned __int64 v57; // [rsp+80h] [rbp-48h]
  __int64 v58; // [rsp+88h] [rbp-40h]
  __int64 v59; // [rsp+90h] [rbp-38h]

  result = 0x7FFFFFFFDLL;
  v9 = a3;
  if ( (*(unsigned int *)(a6 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a6 + 34) << 32)) >= 0x7FFFFFFFDLL
    && (*(unsigned int *)(a6 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a6 + 34) << 32)) != 0x7FFFFFFFELL )
  {
    return result;
  }
  PreviousVad = a4 & 0xFFFFFFFFFFFFFFFEuLL;
  v11 = a4 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (a4 & 1) == 0 )
  {
    v11 = 0LL;
    PreviousVad = a4;
  }
  v56 = v11;
  v54 = PreviousVad;
  v12 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
  v13 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (a5 & 1) == 0 )
  {
    v12 = a5;
    v13 = 0LL;
  }
  v52 = v12;
  v57 = v13;
  MiVadPageTableChargeLevel(a6);
  v14 = MiVadPureReserve(a6);
  v16 = a7;
  v17 = v14;
  v18 = 0LL;
  v19 = *(_QWORD *)(v9 + 1040) + 768LL;
  v21 = 0;
  v46 = 0LL;
  v22 = a7 + 1;
  v53 = a7 + 1;
  v23 = 1023LL;
  v55 = v19;
  v24 = (unsigned int)(a1 >> 21);
  v25 = (unsigned int)(v20 >> 21);
  v49 = 1023LL;
  if ( (int)v15 > 0 )
  {
    v43 = *v22;
    v44 = v15;
    v21 = v15;
    do
    {
      *a7 >>= 1;
      v24 >>= 9;
      v25 >>= 9;
      v43 >>= 1;
      v23 >>= 9;
      --v44;
    }
    while ( v44 );
    *v22 = v43;
    result = 0LL;
    v47 = -1LL;
    v45 = 0LL;
    v49 = v23;
    if ( (int)v15 >= 3 )
      goto LABEL_41;
  }
  else
  {
    v47 = -1LL;
    v45 = 0LL;
  }
  v26 = v21;
  LOBYTE(v27) = 9 * v21;
  v51 = v21;
  v48 = 9 * v21;
LABEL_9:
  v28 = *v16 == 0;
  v58 = v24;
  v59 = v25;
  if ( v28 )
  {
LABEL_16:
    ++v24;
  }
  else
  {
    v29 = v27;
    while ( PreviousVad
         && (__int64)(((unsigned __int64)*(unsigned int *)(PreviousVad + 28) >> 9) | ((unsigned __int64)*(unsigned __int8 *)(PreviousVad + 33) << 23)) >> v29 == v24 )
    {
      if ( ((*(unsigned int *)(PreviousVad + 52) | ((unsigned __int64)*(unsigned __int8 *)(PreviousVad + 34) << 32)) < 0x7FFFFFFFDLL
         || (*(unsigned int *)(PreviousVad + 52) | ((unsigned __int64)*(unsigned __int8 *)(PreviousVad + 34) << 32)) == 0x7FFFFFFFELL)
        && ((unsigned int)MiVadDeleted(PreviousVad) || !MiVadPureReserve(v30)) )
      {
        *v31 = 0;
        goto LABEL_16;
      }
      if ( PreviousVad == v56 )
        PreviousVad = a6;
      PreviousVad = MiGetPreviousVad((unsigned __int64 *)PreviousVad);
      v54 = PreviousVad;
    }
  }
  if ( *v22 )
  {
    NextVad = v52;
    v33 = v27;
    while ( NextVad
         && (__int64)(((unsigned __int64)*(unsigned int *)(NextVad + 24) >> 9) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 32) << 23)) >> v33 == v25 )
    {
      if ( ((*(unsigned int *)(NextVad + 52) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 34) << 32)) < 0x7FFFFFFFDLL
         || (*(unsigned int *)(NextVad + 52) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 34) << 32)) == 0x7FFFFFFFELL)
        && ((unsigned int)MiVadDeleted(NextVad) || !MiVadPureReserve(v34)) )
      {
        *v22 = 0;
        goto LABEL_24;
      }
      if ( NextVad == v57 )
        NextVad = a6;
      NextVad = MiGetNextVad(NextVad);
      v52 = NextVad;
    }
  }
  else
  {
LABEL_24:
    --v25;
  }
  if ( v24 <= v25 )
  {
    if ( !v17 )
      v18 += v25 - v24 + 1;
    v35 = v51;
    v50 = v24;
    v36 = v24;
    v37 = v55 + 16 * (36 - v26);
    while ( 1 )
    {
      if ( !v17 )
        goto LABEL_45;
      if ( v36 == v24 )
      {
        v42 = MiBitmapRangeZeroEx(v37, v36, &v50);
        v24 = v50;
        if ( v42 )
        {
          v36 = v50 - 1;
          goto LABEL_32;
        }
      }
      if ( _bittest64(*(const signed __int64 **)(v37 + 8), v36) )
        break;
LABEL_32:
      if ( (__int64)++v36 > v25 )
      {
        v38 = a3 + 1024;
        if ( v45 )
        {
          PdcCreateWatchdogAroundClientCall();
          v46 += v45;
          v47 = -1LL;
          v45 = 0LL;
        }
        v27 = v48 + 9;
        v16 = a7;
        v26 = v51 + 1;
        v22 = v53;
        v39 = v58;
        v40 = v59;
        *a7 >>= 1;
        *v22 >>= 1;
        v49 >>= 9;
        PreviousVad = v54;
        v24 = v39 >> 9;
        v25 = v40 >> 9;
        v48 = v27;
        v51 = v26;
        if ( v27 >= 27 )
        {
          v9 = a3;
          goto LABEL_37;
        }
        goto LABEL_9;
      }
    }
    ++v18;
LABEL_45:
    _bittestandreset64(*(signed __int64 **)(v37 + 8), v36);
    if ( (unsigned int)MmGetMinWsPagePriority() || v36 != v25 && (v36 & 7) != 7 && !v17 )
      goto LABEL_32;
    v41 = v36 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( !RtlAreBitsClearEx((unsigned __int64 *)v37, v36 & 0xFFFFFFFFFFFFFFF8uLL, 8uLL)
      || (*(_DWORD *)(a3 + 1532) & 1) == 0 && v41 == (v49 & 0xFFFFFFFFFFFFFFF8uLL) )
    {
      goto LABEL_32;
    }
    if ( v35 )
    {
      ++v46;
    }
    else
    {
      if ( v47 != -1LL )
      {
        if ( v47 + 8 * v45 == v41 )
        {
          ++v45;
          goto LABEL_32;
        }
        PdcCreateWatchdogAroundClientCall();
        v46 += v45;
      }
      v45 = 1LL;
      v47 = v36 & 0xFFFFFFFFFFFFFFF8uLL;
    }
    goto LABEL_32;
  }
  v9 = a3;
  v38 = a3 + 1024;
LABEL_37:
  result = v46;
  if ( v46 )
    result = (__int64)MiUpdateChargedWsles(v38, -v46);
  if ( v18 )
  {
    result = v55;
    *(_QWORD *)(v55 + 240) -= v18;
  }
LABEL_41:
  if ( v18 + v46 )
    return MiReturnFullProcessCommitment(v9, v18 + v46);
  return result;
}
