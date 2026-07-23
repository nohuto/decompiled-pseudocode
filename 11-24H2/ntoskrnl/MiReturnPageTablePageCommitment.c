/*
 * XREFs of MiReturnPageTablePageCommitment @ 0x1409D7D90
 * Callers:
 *     MiRemoveVad @ 0x1402907F8 (MiRemoveVad.c)
 *     MiDeleteEmptyPageTableCommit @ 0x140473714 (MiDeleteEmptyPageTableCommit.c)
 * Callees:
 *     MiVadPureReserve @ 0x140210510 (MiVadPureReserve.c)
 *     MiGetNextVad @ 0x140291ACC (MiGetNextVad.c)
 *     MiGetPreviousVad @ 0x140291B10 (MiGetPreviousVad.c)
 *     MmGetMinWsPagePriority @ 0x1403C11A0 (MmGetMinWsPagePriority.c)
 *     RtlAreBitsClearEx @ 0x140411AE0 (RtlAreBitsClearEx.c)
 *     MiVadPageTableChargeLevel @ 0x140414CB0 (MiVadPageTableChargeLevel.c)
 *     MiVadDeleted @ 0x14041C6D0 (MiVadDeleted.c)
 *     MiBitmapRangeZeroEx @ 0x140442114 (MiBitmapRangeZeroEx.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x14047F700 (PdcCreateWatchdogAroundClientCall.c)
 *     MiUpdateChargedWsles @ 0x1404F3904 (MiUpdateChargedWsles.c)
 *     MiReturnFullProcessCommitment @ 0x1409D8398 (MiReturnFullProcessCommitment.c)
 */

unsigned __int8 __fastcall MiReturnPageTablePageCommitment(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        _BYTE *a7)
{
  unsigned __int8 result; // al
  __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  BOOL v14; // eax
  __int64 v15; // r10
  int v16; // ecx
  __int64 v17; // r9
  unsigned __int64 v18; // r11
  __int64 v19; // r12
  __int64 v20; // r8
  _BYTE *v21; // r15
  BOOL v22; // ebp
  __int64 v23; // rdi
  __int64 v24; // rsi
  unsigned __int8 *v25; // r13
  __int64 v26; // r10
  int v27; // eax
  bool v28; // zf
  __int64 NextVad; // r10
  char v30; // r8
  signed __int64 v31; // rbx
  __int64 v32; // r14
  __int64 v33; // rbx
  __int64 v34; // rdi
  __int64 v35; // rsi
  unsigned __int64 v36; // r15
  unsigned __int64 PreviousVad; // r11
  char v38; // r8
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rdx
  int v43; // [rsp+20h] [rbp-A8h]
  __int64 v44; // [rsp+28h] [rbp-A0h]
  __int64 v45; // [rsp+30h] [rbp-98h]
  unsigned __int64 v46; // [rsp+38h] [rbp-90h]
  __int64 v47; // [rsp+40h] [rbp-88h]
  __int64 v48; // [rsp+48h] [rbp-80h]
  __int64 v49; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v50; // [rsp+58h] [rbp-70h]
  __int64 v51; // [rsp+60h] [rbp-68h]
  unsigned __int8 *v52; // [rsp+68h] [rbp-60h]
  __int64 v53; // [rsp+70h] [rbp-58h]
  unsigned __int64 v54; // [rsp+78h] [rbp-50h]
  unsigned __int64 v55; // [rsp+80h] [rbp-48h]
  __int64 v56; // [rsp+88h] [rbp-40h]
  __int64 v57; // [rsp+90h] [rbp-38h]

  result = -3;
  v9 = a3;
  if ( (*(unsigned int *)(a6 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a6 + 34) << 32)) >= 0x7FFFFFFFDLL
    && (*(unsigned int *)(a6 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a6 + 34) << 32)) != 0x7FFFFFFFELL )
  {
    return result;
  }
  v10 = a4 & 0xFFFFFFFFFFFFFFFEuLL;
  v11 = a4 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (a4 & 1) == 0 )
  {
    v10 = a4;
    v11 = 0LL;
  }
  v50 = v10;
  v54 = v11;
  v12 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
  v13 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (a5 & 1) == 0 )
  {
    v12 = a5;
    v13 = 0LL;
  }
  v51 = v12;
  v55 = v13;
  MiVadPageTableChargeLevel(a6);
  v14 = MiVadPureReserve(a6);
  v16 = 0;
  v17 = *(_QWORD *)(v9 + 1040) + 768LL;
  v19 = 0LL;
  v45 = 0LL;
  v20 = 1023LL;
  v21 = a7;
  v22 = v14;
  v53 = v17;
  v23 = (unsigned int)(a1 >> 21);
  v24 = (unsigned int)(v18 >> 21);
  v48 = 1023LL;
  v25 = a7 + 1;
  v52 = a7 + 1;
  if ( (int)v15 > 0 )
  {
    result = *v25;
    v42 = v15;
    v16 = v15;
    do
    {
      *a7 >>= 1;
      v23 >>= 9;
      v24 >>= 9;
      result >>= 1;
      v20 >>= 9;
      --v42;
    }
    while ( v42 );
    *v25 = result;
    v46 = -1LL;
    v44 = 0LL;
    v48 = v20;
    if ( (int)v15 >= 3 )
      goto LABEL_31;
  }
  else
  {
    v46 = -1LL;
    v44 = 0LL;
  }
  v26 = v16;
  LOBYTE(v27) = 9 * v16;
  v47 = v16;
  v43 = 9 * v16;
  do
  {
    v28 = *v21 == 0;
    v56 = v23;
    v57 = v24;
    if ( v28 )
    {
      ++v23;
    }
    else
    {
      PreviousVad = v50;
      v38 = v27;
      while ( PreviousVad
           && (__int64)(((unsigned __int64)*(unsigned int *)(PreviousVad + 28) >> 9) | ((unsigned __int64)*(unsigned __int8 *)(PreviousVad + 33) << 23)) >> v38 == v23 )
      {
        if ( ((*(unsigned int *)(PreviousVad + 52) | ((unsigned __int64)*(unsigned __int8 *)(PreviousVad + 34) << 32)) < 0x7FFFFFFFDLL
           || (*(unsigned int *)(PreviousVad + 52) | ((unsigned __int64)*(unsigned __int8 *)(PreviousVad + 34) << 32)) == 0x7FFFFFFFELL)
          && ((unsigned int)MiVadDeleted(PreviousVad) || !MiVadPureReserve(v39)) )
        {
          ++v23;
          *v21 = 0;
          break;
        }
        if ( PreviousVad == v54 )
          PreviousVad = a6;
        PreviousVad = MiGetPreviousVad((unsigned __int64 *)PreviousVad);
        v50 = PreviousVad;
      }
      LOBYTE(v27) = v43;
    }
    if ( *v25 )
    {
      NextVad = v51;
      v30 = v27;
      while ( NextVad
           && (__int64)(((unsigned __int64)*(unsigned int *)(NextVad + 24) >> 9) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 32) << 23)) >> v30 == v24 )
      {
        if ( ((*(unsigned int *)(NextVad + 52) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 34) << 32)) < 0x7FFFFFFFDLL
           || (*(unsigned int *)(NextVad + 52) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 34) << 32)) == 0x7FFFFFFFELL)
          && ((unsigned int)MiVadDeleted(NextVad) || !MiVadPureReserve(v41)) )
        {
          --v24;
          *v25 = 0;
          break;
        }
        if ( NextVad == v55 )
          NextVad = a6;
        NextVad = MiGetNextVad(NextVad);
        v51 = NextVad;
      }
      v26 = v47;
    }
    else
    {
      --v24;
    }
    if ( v23 > v24 )
    {
      v33 = v9 + 1024;
      break;
    }
    if ( !v22 )
      v19 += v24 - v23 + 1;
    v49 = v23;
    v31 = v23;
    v32 = v17 + 16 * (36 - v26);
    do
    {
      if ( v22 )
      {
        if ( v31 == v23 )
        {
          v40 = MiBitmapRangeZeroEx(v32, v31, &v49);
          v23 = v49;
          if ( v40 )
          {
            v31 = v49 - 1;
            goto LABEL_23;
          }
        }
        if ( !_bittest64(*(const signed __int64 **)(v32 + 8), v31) )
          goto LABEL_23;
        ++v19;
      }
      _bittestandreset64(*(signed __int64 **)(v32 + 8), v31);
      if ( !(unsigned int)MmGetMinWsPagePriority() && (v31 == v24 || (v31 & 7) == 7 || v22) )
      {
        v36 = v31 & 0xFFFFFFFFFFFFFFF8uLL;
        if ( RtlAreBitsClearEx((unsigned __int64 *)v32, v31 & 0xFFFFFFFFFFFFFFF8uLL, 8uLL)
          && ((*(_DWORD *)(a3 + 1532) & 1) != 0 || v36 != (v48 & 0xFFFFFFFFFFFFFFF8uLL)) )
        {
          if ( v47 )
          {
            ++v45;
          }
          else
          {
            if ( v46 == -1LL )
              goto LABEL_45;
            if ( v46 + 8 * v44 != v36 )
            {
              PdcCreateWatchdogAroundClientCall();
              v45 += v44;
LABEL_45:
              v44 = 1LL;
              v46 = v31 & 0xFFFFFFFFFFFFFFF8uLL;
              goto LABEL_23;
            }
            ++v44;
          }
        }
      }
LABEL_23:
      ++v31;
    }
    while ( v31 <= v24 );
    v9 = a3;
    v33 = a3 + 1024;
    if ( v44 )
    {
      PdcCreateWatchdogAroundClientCall();
      v45 += v44;
      v46 = -1LL;
      v44 = 0LL;
    }
    v27 = v43 + 9;
    v21 = a7;
    v26 = v47 + 1;
    v25 = v52;
    v34 = v56;
    v35 = v57;
    *a7 >>= 1;
    *v25 >>= 1;
    v48 >>= 9;
    v17 = v53;
    v23 = v34 >> 9;
    v24 = v35 >> 9;
    v43 = v27;
    ++v47;
  }
  while ( v27 < 27 );
  result = v45;
  if ( v45 )
    result = (unsigned __int8)MiUpdateChargedWsles(v33, -v45);
  if ( v19 )
    *(_QWORD *)(v17 + 240) -= v19;
LABEL_31:
  if ( v19 + v45 )
    return MiReturnFullProcessCommitment(v9);
  return result;
}
