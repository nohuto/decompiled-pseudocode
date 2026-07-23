/*
 * XREFs of KiIpiSendRequest @ 0x1402A24D0
 * Callers:
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     KiIpiSendRequestEx @ 0x1402A2B80 (KiIpiSendRequestEx.c)
 *     KeInvalidateAllCaches @ 0x14039D290 (KeInvalidateAllCaches.c)
 *     KeFlushProcessWriteBuffers @ 0x14039E2AC (KeFlushProcessWriteBuffers.c)
 *     KxFlushEntireTb @ 0x14039EFB4 (KxFlushEntireTb.c)
 *     KxFlushNonGlobalTb @ 0x14039F660 (KxFlushNonGlobalTb.c)
 *     KiUpdateSpeculationControl @ 0x1403DEE10 (KiUpdateSpeculationControl.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403E03C0 (KeQueryTotalCycleTimeThread.c)
 *     KiIpiSendPacket @ 0x14045D668 (KiIpiSendPacket.c)
 *     KeIpiGenericCall @ 0x14045F290 (KeIpiGenericCall.c)
 *     KeInvalidateRangeAllCaches @ 0x140475CD0 (KeInvalidateRangeAllCaches.c)
 * Callees:
 *     ?KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402B2A28 (-KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     HalpInterruptSendIpi @ 0x1402C8970 (HalpInterruptSendIpi.c)
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403AEC60 (EtwGetKernelTraceTimestamp.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x140443850 (KiIpiEnlightenedGuestPriorityKick.c)
 *     PerfInfoLogIpiSend @ 0x1404A8470 (PerfInfoLogIpiSend.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KiIpiSendRequest(__int64 a1, int a2, char *a3, _OWORD *a4, __int64 a5)
{
  unsigned __int16 v5; // di
  unsigned __int16 *v9; // rbx
  _QWORD *v10; // r14
  _WORD *v11; // r13
  unsigned __int16 v12; // cx
  unsigned __int16 Count; // dx
  unsigned __int16 v14; // ax
  bool v15; // cc
  unsigned __int16 v16; // cx
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 result; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // r11d
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned __int64 v28; // rdx
  _QWORD *v29; // rsi
  int v30; // r14d
  unsigned int v31; // r8d
  unsigned __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r10
  signed __int64 *v35; // rdx
  _OWORD *v36; // rax
  signed __int64 v37; // rax
  signed __int64 v38; // r8
  unsigned int v39; // edx
  unsigned int v40; // r9d
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rax
  int v45; // esi
  unsigned __int16 v46; // cx
  __int64 v47; // rax
  __int64 v48; // rcx
  unsigned __int16 *v49; // rdx
  __int64 v50; // rcx
  unsigned __int16 i; // cx
  int v52; // ecx
  signed __int64 v53; // rsi
  __int64 v54; // r8
  int v55; // ecx
  $B38C3B1372D6E954799962D5DD404846 *v56; // r8
  __int64 v57; // r9
  char v58; // [rsp+30h] [rbp-91h]
  int v59; // [rsp+34h] [rbp-8Dh]
  unsigned int v60; // [rsp+38h] [rbp-89h]
  unsigned int v61; // [rsp+3Ch] [rbp-85h]
  unsigned int v62; // [rsp+40h] [rbp-81h]
  unsigned int v63; // [rsp+44h] [rbp-7Dh]
  __int128 v64; // [rsp+48h] [rbp-79h] BYREF
  int v65; // [rsp+58h] [rbp-69h]
  int v66; // [rsp+60h] [rbp-61h]
  __int128 v67; // [rsp+68h] [rbp-59h]
  __int64 v68; // [rsp+78h] [rbp-49h]
  _OWORD *v69; // [rsp+80h] [rbp-41h]
  signed __int64 v70; // [rsp+88h] [rbp-39h]
  __int128 v71; // [rsp+90h] [rbp-31h]
  _OWORD v72[3]; // [rsp+A0h] [rbp-21h] BYREF

  v69 = a4;
  v5 = 0;
  v59 = a2;
  v68 = 0LL;
  v70 = 0LL;
  v67 = 0LL;
  memset(v72, 0, 32);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x400000) != 0 )
  {
    v58 = 1;
    EtwGetKernelTraceTimestamp(v72, 1077936128LL);
  }
  else
  {
    v58 = 0;
  }
  v9 = (unsigned __int16 *)(a1 + 12232);
  v10 = (_QWORD *)(a1 + 12240);
  *(_QWORD *)(a1 + 12232) = 2097153LL;
  v11 = (_WORD *)(a1 + 12496);
  memset_0((void *)(a1 + 12240), 0, 0x100uLL);
  *(_QWORD *)(a1 + 12496) = 2097153LL;
  memset_0((void *)(a1 + 12504), 0, 0x100uLL);
  v12 = *(_WORD *)(a1 + 12234);
  Count = v12;
  if ( a2 )
  {
    if ( KeActiveProcessors.Count <= v12 )
      Count = KeActiveProcessors.Count;
    *(_WORD *)(a1 + 12234) = v12;
    v46 = 0;
    *v9 = Count;
    *(_DWORD *)(a1 + 12236) = 0;
    if ( Count )
    {
      v56 = &KeActiveProcessors.8;
      v57 = Count;
      v46 = Count;
      do
      {
        *(unsigned __int64 *)((char *)&v56->StaticBitmap[1] + (char *)v9 - (char *)&KeActiveProcessors.8) = v56->Bitmap[0];
        v56 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v56 + 8);
        --v57;
      }
      while ( v57 );
    }
    for ( ; v46 < *(_WORD *)(a1 + 12234); *(_QWORD *)&v9[4 * v47 + 4] = 0LL )
      v47 = v46++;
    if ( a2 == 1 )
    {
      v48 = *((_DWORD *)KiGlobalState + *(unsigned int *)(a1 + 36)) >> 6;
      if ( *v9 > (unsigned int)v48 )
      {
        v49 = &v9[4 * v48];
        v50 = *((_QWORD *)v49 + 1);
        _bittestandreset64(&v50, *((_DWORD *)KiGlobalState + *(unsigned int *)(a1 + 36)) & 0x3F);
        *((_QWORD *)v49 + 1) = v50;
      }
    }
    v18 = a5;
    if ( (a5 & 0x80000000) != 0 )
    {
      LODWORD(v18) = a5 & 0x7FFFFFFF;
      for ( i = 0; i < KeSleepingProcessors.Count; ++i )
      {
        if ( KeSleepingProcessors.Bitmap[i] )
        {
          v59 = 0;
          KiSubtractAffinityEx(
            (struct _KAFFINITY_EX *)(a1 + 12232),
            &KeSleepingProcessors,
            (struct _KAFFINITY_EX *)(a1 + 12232),
            *(_WORD *)(a1 + 12234));
          break;
        }
      }
    }
  }
  else
  {
    v14 = *(_WORD *)a3;
    v15 = *(_WORD *)a3 <= v12;
    *(_WORD *)(a1 + 12234) = v12;
    *(_DWORD *)(a1 + 12236) = 0;
    v16 = 0;
    if ( v15 )
      Count = v14;
    *v9 = Count;
    if ( Count )
    {
      v53 = a3 - (char *)v9;
      v54 = Count;
      v16 = Count;
      do
      {
        *v10 = *(_QWORD *)((char *)v10 + v53);
        ++v10;
        --v54;
      }
      while ( v54 );
    }
    for ( ; v16 < *(_WORD *)(a1 + 12234); *(_QWORD *)&v9[4 * v17 + 4] = 0LL )
      v17 = v16++;
    v18 = a5;
  }
  v19 = v18 & 0xF | ((_QWORD)v69 << 7);
  *(_DWORD *)(a1 + 11648) = 1;
  v20 = 0LL;
  v63 = *(_DWORD *)(a1 + 36);
  result = (unsigned __int16)KiSubNodeCount;
  v22 = 0LL;
  *(_DWORD *)(a1 + 11652) = (unsigned __int16)KiSubNodeCount;
  v23 = 0LL;
  v61 = 0;
  v24 = 0;
  v62 = 0;
  v60 = 0;
  v71 = 0LL;
  if ( !(_DWORD)result )
    goto LABEL_36;
  do
  {
    v25 = *(_QWORD *)(KiSubNodes + 8LL * v24);
    if ( !v25 )
    {
      v23 = (unsigned int)(v23 + 1);
      v60 = v23;
      goto LABEL_33;
    }
    v26 = *(_QWORD *)(v25 + 128);
    v27 = *(unsigned __int16 *)(v25 + 136);
    *(_QWORD *)&v71 = 0LL;
    WORD4(v71) = v27;
    v72[2] = 0LL;
    *(_DWORD *)((char *)&v71 + 10) = 0;
    HIWORD(v71) = 0;
    if ( *v9 <= (unsigned __int16)v27 )
    {
      *(_QWORD *)&v71 = 0LL;
LABEL_32:
      v23 = (unsigned int)(v23 + 1);
      v60 = v23;
      goto LABEL_33;
    }
    v28 = *(_QWORD *)&v9[4 * v27 + 4] & v26;
    *(_QWORD *)&v71 = v28;
    if ( !v28 )
      goto LABEL_32;
    v29 = 0LL;
    LOWORD(v68) = v27;
    *((_QWORD *)&v67 + 1) = v28;
    v30 = v27;
    *(_QWORD *)&v67 = 0LL;
LABEL_15:
    v66 = 0;
    v31 = v30 + 1;
    while ( 1 )
    {
      if ( v28 )
      {
        _BitScanForward64(&v32, v28);
        v66 = v32;
        *((_QWORD *)&v67 + 1) = v28 & ~(1LL << v32);
        v33 = *((unsigned int *)qword_140F22998 + 64 * v30 + (unsigned int)(unsigned __int8)v32);
        v34 = KiProcessorBlock[v33];
        _m_prefetchw((const void *)(v34 + 39616));
        v35 = (signed __int64 *)(v34 + ((v63 + 827LL) << 6));
        _m_prefetchw(v35);
        if ( !v29 )
        {
          v29 = v35 + 7;
          *((_DWORD *)v35 + 14) = __popcnt(v71);
        }
        v35[6] = (signed __int64)v29;
        if ( v18 == 5 )
        {
          v36 = v69;
          *((_OWORD *)v35 + 1) = *v69;
          *((_OWORD *)v35 + 2) = v36[1];
          v70 = v35[5];
        }
        v35[1] = v19;
        v37 = *(_QWORD *)(v34 + 39616);
        do
        {
          v38 = v37;
          *v35 = v37;
          v37 = _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 39616), (signed __int64)v35, v37);
        }
        while ( v37 != v38 );
        if ( v37 )
        {
          v62 = 1;
        }
        else
        {
          v61 = 1;
          v39 = *((_DWORD *)KiGlobalState + v33);
          v40 = v39 & 0x3F;
          v41 = v39 >> 6;
          if ( (unsigned __int16)*v11 <= (unsigned int)v41 )
          {
            if ( *(unsigned __int16 *)(a1 + 12498) <= (unsigned int)v41 )
              goto LABEL_26;
            *v11 = v41 + 1;
          }
          v42 = 4 * v41;
          v43 = *(_QWORD *)&v11[4 * v41 + 4];
          _bittestandset64(&v43, v40);
          *(_QWORD *)&v11[v42 + 4] = v43;
        }
LABEL_26:
        v44 = *(_QWORD *)(v34 + 36536);
        if ( v44 )
          _InterlockedIncrement((volatile signed __int32 *)(v44 + 32));
        v28 = *((_QWORD *)&v67 + 1);
        goto LABEL_15;
      }
      LOWORD(v68) = v68 + 1;
      v30 = (unsigned __int16)v68;
      if ( (unsigned __int16)v68 >= v31 )
        break;
      v28 = *(_QWORD *)(8LL * (unsigned __int16)v68 + 8);
      *((_QWORD *)&v67 + 1) = v28;
    }
    v23 = v60;
LABEL_33:
    result = (unsigned __int16)KiSubNodeCount;
    ++v24;
  }
  while ( v24 < (unsigned __int16)KiSubNodeCount );
  if ( (_DWORD)v23 )
  {
    v23 = (unsigned int)-(int)v23;
    result = (unsigned int)(v23 + _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 11652), v23));
    if ( !(_DWORD)result )
    {
      *(_DWORD *)(a1 + 11648) = 0;
      return result;
    }
  }
  v22 = v62;
  v20 = v61;
LABEL_36:
  if ( v18 != 5 && (_DWORD)v22 )
  {
    if ( (_DWORD)v20 )
    {
      ++*(_DWORD *)(a1 + 36560);
      KiIpiEnlightenedGuestPriorityKick(a1 + 12496, v20, v22, v23);
      DWORD1(v64) = 0;
      v65 = 0;
      if ( (unsigned int)KeIsEmptyAffinityEx(a1 + 12496) )
      {
        v55 = -1073741811;
      }
      else
      {
        LODWORD(v64) = 2;
        *((_QWORD *)&v64 + 1) = a1 + 12496;
        result = HalpInterruptSendIpi(&v64, 225LL);
        v55 = result;
        if ( (int)result >= 0 )
          goto LABEL_76;
      }
      KeBugCheckEx(0x5Cu, 0x201uLL, HalpInterruptController, v55, 0LL);
    }
LABEL_76:
    v45 = v59;
    goto LABEL_61;
  }
  v45 = v59;
  if ( (unsigned int)(v59 - 1) <= 1 )
    ++*(_DWORD *)(a1 + 36556);
  else
    ++*(_DWORD *)(a1 + 36560);
  KiIpiEnlightenedGuestPriorityKick(a1 + 12232, v20, v22, v23);
  v65 = 0;
  v64 = 0LL;
  if ( v59 )
  {
    if ( v59 == 1 || v59 == 2 )
    {
      if ( v59 == 1 )
        LODWORD(v64) = 4;
      else
        LODWORD(v64) = 3;
      goto LABEL_60;
    }
LABEL_57:
    v52 = -1073741811;
LABEL_58:
    KeBugCheckEx(0x5Cu, 0x201uLL, HalpInterruptController, v52, v59);
  }
  while ( 1 )
  {
    if ( v5 >= *v9 )
      goto LABEL_57;
    if ( *(_QWORD *)&v9[4 * v5 + 4] )
      break;
    ++v5;
  }
  LODWORD(v64) = 2;
  *((_QWORD *)&v64 + 1) = a1 + 12232;
LABEL_60:
  result = HalpInterruptSendIpi(&v64, 225LL);
  v52 = result;
  if ( (int)result < 0 )
    goto LABEL_58;
LABEL_61:
  if ( v58 )
    return PerfInfoLogIpiSend((unsigned int)v72, v18, v70, v45, a1 + 12232);
  return result;
}
