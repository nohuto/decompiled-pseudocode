/*
 * XREFs of PnprQuiesceProcessors @ 0x140B56BC4
 * Callers:
 *     PnprQuiesce @ 0x1405A4C78 (PnprQuiesce.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KeRemoveProcessorAffinityEx @ 0x1403A4D10 (KeRemoveProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     KeInitializeDpc @ 0x14044A220 (KeInitializeDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeSuspendClockTimerSafe @ 0x1405B75DC (KeSuspendClockTimerSafe.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PnprGetMillisecondCounter @ 0x140B55BE4 (PnprGetMillisecondCounter.c)
 */

__int64 PnprQuiesceProcessors()
{
  int v0; // edx
  void *v1; // rbx
  unsigned __int8 CurrentIrql; // cl
  __int64 v3; // rsi
  struct _KAFFINITY_EX *v4; // rdi
  struct _KAFFINITY_EX *v5; // rax
  unsigned __int16 *v6; // rcx
  __int64 v7; // rdx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  unsigned __int16 *v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int64 result; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int MillisecondCounter; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned __int16 *v35; // rcx
  struct _KAFFINITY_EX *v36; // rax
  __int64 v37; // rdx
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  unsigned int v45; // r8d
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rdx
  int v51; // ebx
  int v52; // eax
  __int64 v53; // rcx
  int v54; // eax
  int v55; // eax
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  unsigned __int16 *v63; // rax
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  __int128 v69; // xmm0
  __int128 v70; // xmm1
  char DeferredContext; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int DeferredContext_4; // [rsp+2Ch] [rbp-DCh] BYREF
  unsigned __int16 *v73[2]; // [rsp+30h] [rbp-D8h] BYREF
  struct _KDPC Dpc; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v75; // [rsp+80h] [rbp-88h]
  unsigned __int16 v76; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int16 *v77; // [rsp+90h] [rbp-78h]

  memset_0(&v76, 0, 0x108uLL);
  memset((void *)&Dpc.Number, 0, 62);
  LODWORD(v75) = 0;
  DeferredContext_4 = 0;
  v1 = (void *)*(unsigned int *)(PnprContext + 176);
  CurrentIrql = KeGetCurrentIrql();
  v3 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags != LOBYTE(Dpc.Number) )
  {
    LOBYTE(v0) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v0);
  }
  KeInitializeDpc((PRKDPC)&Dpc.DpcListEntry, (PKDEFERRED_ROUTINE)PnprQuiesceProcessorDpc, &DeferredContext);
  v4 = &KeActiveProcessors;
  BYTE1(Dpc.DpcListEntry.Next) = 2;
  v5 = &KeActiveProcessors;
  v6 = &v76;
  v7 = 2LL;
  do
  {
    v8 = *(_OWORD *)&v5->StaticBitmap[1];
    *(_OWORD *)v6 = *(_OWORD *)&v5->Count;
    v9 = *(_OWORD *)&v5->StaticBitmap[3];
    *((_OWORD *)v6 + 1) = v8;
    v10 = *(_OWORD *)&v5->StaticBitmap[5];
    *((_OWORD *)v6 + 2) = v9;
    v11 = *(_OWORD *)&v5->StaticBitmap[7];
    *((_OWORD *)v6 + 3) = v10;
    v12 = *(_OWORD *)&v5->StaticBitmap[9];
    *((_OWORD *)v6 + 4) = v11;
    v13 = *(_OWORD *)&v5->StaticBitmap[11];
    *((_OWORD *)v6 + 5) = v12;
    v14 = *(_OWORD *)&v5->StaticBitmap[13];
    v5 = (struct _KAFFINITY_EX *)((char *)v5 + 128);
    *((_OWORD *)v6 + 6) = v13;
    v6 += 64;
    *((_OWORD *)v6 - 1) = v14;
    --v7;
  }
  while ( v7 );
  v15 = PnprContext;
  *(_QWORD *)v6 = *(_QWORD *)&v5->Count;
  KeRemoveProcessorAffinityEx(&v76, *(_DWORD *)(v15 + 180));
  v73[1] = v77;
  v73[0] = &v76;
  LOWORD(Dpc.TargetInfoAsUlong) = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&DeferredContext_4, v73) )
  {
    if ( !v75 )
      WORD1(Dpc.DpcListEntry.Next) = DeferredContext_4 + 2048;
    DeferredContext = 0;
    KeInsertQueueDpc((PRKDPC)&Dpc.DpcListEntry, v1, (PVOID)DeferredContext_4);
    while ( !DeferredContext )
      _mm_pause();
  }
  v17 = *(unsigned int *)(PnprContext + 64);
  if ( (v17 & 0x20) != 0 && (int)guard_dispatch_icall_no_overrides(v17, v16) < 0 )
  {
    v18 = PnprContext;
    v19 = *(_DWORD *)(PnprContext + 33288);
    if ( !v19 )
      v19 = 2455;
    *(_DWORD *)(PnprContext + 33288) = v19;
    v20 = *(_DWORD *)(v18 + 33292);
    if ( !v20 )
      v20 = 1;
    *(_DWORD *)(v18 + 33292) = v20;
    v21 = &v76;
    do
    {
      v22 = *((_OWORD *)v21 + 1);
      *(_OWORD *)&v4->Count = *(_OWORD *)v21;
      v23 = *((_OWORD *)v21 + 2);
      *(_OWORD *)&v4->StaticBitmap[1] = v22;
      v24 = *((_OWORD *)v21 + 3);
      *(_OWORD *)&v4->StaticBitmap[3] = v23;
      v25 = *((_OWORD *)v21 + 4);
      *(_OWORD *)&v4->StaticBitmap[5] = v24;
      v26 = *((_OWORD *)v21 + 5);
      *(_OWORD *)&v4->StaticBitmap[7] = v25;
      v27 = *((_OWORD *)v21 + 6);
      *(_OWORD *)&v4->StaticBitmap[9] = v26;
      v28 = *((_OWORD *)v21 + 7);
      v21 += 64;
      *(_OWORD *)&v4->StaticBitmap[11] = v27;
      v4 = (struct _KAFFINITY_EX *)((char *)v4 + 128);
      *(_OWORD *)&v4[-1].StaticBitmap[30] = v28;
      --v3;
    }
    while ( v3 );
LABEL_20:
    result = *(_QWORD *)v21;
    *(_QWORD *)&v4->Count = result;
    return result;
  }
  guard_dispatch_icall_no_overrides(0LL, *(_QWORD *)(PnprContext + 33176));
  KeSuspendClockTimerSafe(v31, v30);
  MillisecondCounter = PnprGetMillisecondCounter(0);
  v34 = PnprContext;
  *(_QWORD *)(PnprContext + 33296) = MillisecondCounter;
  _InterlockedAdd((volatile signed __int32 *)(v34 + 184), 1u);
  while ( *(_DWORD *)(PnprContext + 184) < (int)v1 )
    _mm_pause();
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)(PnprContext + 192), 1u);
    while ( *(_DWORD *)(PnprContext + 192) < (int)v1 )
      _mm_pause();
    LOBYTE(v33) = 1;
    guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33184), v33);
    *(_DWORD *)(PnprContext + 33304) = PnprGetMillisecondCounter(0);
  }
  v35 = &v76;
  v36 = &KeActiveProcessors;
  v37 = 2LL;
  do
  {
    v38 = *(_OWORD *)&v36->StaticBitmap[1];
    *(_OWORD *)v35 = *(_OWORD *)&v36->Count;
    v39 = *(_OWORD *)&v36->StaticBitmap[3];
    *((_OWORD *)v35 + 1) = v38;
    v40 = *(_OWORD *)&v36->StaticBitmap[5];
    *((_OWORD *)v35 + 2) = v39;
    v41 = *(_OWORD *)&v36->StaticBitmap[7];
    *((_OWORD *)v35 + 3) = v40;
    v42 = *(_OWORD *)&v36->StaticBitmap[9];
    *((_OWORD *)v35 + 4) = v41;
    v43 = *(_OWORD *)&v36->StaticBitmap[11];
    *((_OWORD *)v35 + 5) = v42;
    v44 = *(_OWORD *)&v36->StaticBitmap[13];
    v36 = (struct _KAFFINITY_EX *)((char *)v36 + 128);
    *((_OWORD *)v35 + 6) = v43;
    v35 += 64;
    *((_OWORD *)v35 - 1) = v44;
    --v37;
  }
  while ( v37 );
  v45 = 0;
  *(_QWORD *)v35 = *(_QWORD *)&v36->Count;
  v46 = *(_QWORD *)(PnprContext + 16);
  if ( *(_DWORD *)(v46 + 8) )
  {
    do
    {
      v47 = v45++;
      KeActiveProcessors.Bitmap[v47] &= ~*(_QWORD *)(*(_QWORD *)v46 + 8 * v47);
    }
    while ( v45 < *(_DWORD *)(v46 + 8) );
  }
  v48 = *(_QWORD *)(PnprContext + 16);
  *(_QWORD *)(PnprContext + 200) = 1LL;
  if ( *(_DWORD *)(v48 + 16) )
  {
    v49 = PnprGetMillisecondCounter(0);
    v50 = PnprContext;
    *(_DWORD *)(PnprContext + 33308) = v49;
    v51 = guard_dispatch_icall_no_overrides(1LL, *(_QWORD *)(v50 + 33176));
    v52 = PnprGetMillisecondCounter(0);
    v53 = PnprContext;
    *(_DWORD *)(PnprContext + 33312) = v52;
    if ( v51 < 0 )
    {
      v54 = *(_DWORD *)(v53 + 33288);
      if ( !v54 )
        v54 = 2540;
      *(_DWORD *)(v53 + 33288) = v54;
      v55 = *(_DWORD *)(v53 + 33292);
      if ( !v55 )
        v55 = 1;
      *(_DWORD *)(v53 + 33292) = v55;
      v21 = &v76;
      do
      {
        v56 = *((_OWORD *)v21 + 1);
        *(_OWORD *)&v4->Count = *(_OWORD *)v21;
        v57 = *((_OWORD *)v21 + 2);
        *(_OWORD *)&v4->StaticBitmap[1] = v56;
        v58 = *((_OWORD *)v21 + 3);
        *(_OWORD *)&v4->StaticBitmap[3] = v57;
        v59 = *((_OWORD *)v21 + 4);
        *(_OWORD *)&v4->StaticBitmap[5] = v58;
        v60 = *((_OWORD *)v21 + 5);
        *(_OWORD *)&v4->StaticBitmap[7] = v59;
        v61 = *((_OWORD *)v21 + 6);
        *(_OWORD *)&v4->StaticBitmap[9] = v60;
        v62 = *((_OWORD *)v21 + 7);
        v21 += 64;
        *(_OWORD *)&v4->StaticBitmap[11] = v61;
        v4 = (struct _KAFFINITY_EX *)((char *)v4 + 128);
        *(_OWORD *)&v4[-1].StaticBitmap[30] = v62;
        --v3;
      }
      while ( v3 );
      goto LABEL_20;
    }
  }
  v63 = &v76;
  do
  {
    v64 = *((_OWORD *)v63 + 1);
    *(_OWORD *)&v4->Count = *(_OWORD *)v63;
    v65 = *((_OWORD *)v63 + 2);
    *(_OWORD *)&v4->StaticBitmap[1] = v64;
    v66 = *((_OWORD *)v63 + 3);
    *(_OWORD *)&v4->StaticBitmap[3] = v65;
    v67 = *((_OWORD *)v63 + 4);
    *(_OWORD *)&v4->StaticBitmap[5] = v66;
    v68 = *((_OWORD *)v63 + 5);
    *(_OWORD *)&v4->StaticBitmap[7] = v67;
    v69 = *((_OWORD *)v63 + 6);
    *(_OWORD *)&v4->StaticBitmap[9] = v68;
    v70 = *((_OWORD *)v63 + 7);
    v63 += 64;
    *(_OWORD *)&v4->StaticBitmap[11] = v69;
    v4 = (struct _KAFFINITY_EX *)((char *)v4 + 128);
    *(_OWORD *)&v4[-1].StaticBitmap[30] = v70;
    --v3;
  }
  while ( v3 );
  *(_QWORD *)&v4->Count = *(_QWORD *)v63;
  while ( 1 )
  {
    result = PnprContext;
    if ( *(_DWORD *)(PnprContext + 204) >= *(_DWORD *)(*(_QWORD *)(PnprContext + 16) + 16LL) )
      break;
    _mm_pause();
  }
  return result;
}
