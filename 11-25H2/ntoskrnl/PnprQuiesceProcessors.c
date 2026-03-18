/*
 * XREFs of PnprQuiesceProcessors @ 0x140B44B74
 * Callers:
 *     PnprQuiesce @ 0x1405A4478 (PnprQuiesce.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KeRemoveProcessorAffinityEx @ 0x14026A790 (KeRemoveProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140405FA0 (KeEnumerateNextProcessor.c)
 *     KeInitializeDpc @ 0x140454E30 (KeInitializeDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeSuspendClockTimerSafe @ 0x1405B6188 (KeSuspendClockTimerSafe.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PnprGetMillisecondCounter @ 0x140B43B94 (PnprGetMillisecondCounter.c)
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
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  unsigned __int16 *v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int64 result; // rax
  unsigned int MillisecondCounter; // eax
  __int64 v30; // rcx
  unsigned __int16 *v31; // rcx
  struct _KAFFINITY_EX *v32; // rax
  __int64 v33; // rdx
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  unsigned int v41; // r8d
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rax
  int v45; // ebx
  int v46; // eax
  __int64 v47; // rcx
  int v48; // eax
  int v49; // eax
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  unsigned __int16 *v57; // rax
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  char DeferredContext; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int DeferredContext_4; // [rsp+2Ch] [rbp-DCh] BYREF
  unsigned __int16 *v67[2]; // [rsp+30h] [rbp-D8h] BYREF
  struct _KDPC Dpc; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v69; // [rsp+80h] [rbp-88h]
  unsigned __int16 v70; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int16 *v71; // [rsp+90h] [rbp-78h]

  memset_0(&v70, 0, 0x108uLL);
  memset((void *)&Dpc.Number, 0, 62);
  LODWORD(v69) = 0;
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
  v6 = &v70;
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
  KeRemoveProcessorAffinityEx(&v70, *(_DWORD *)(v15 + 180));
  v67[1] = v71;
  v67[0] = &v70;
  LOWORD(Dpc.TargetInfoAsUlong) = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&DeferredContext_4, v67) )
  {
    if ( !v69 )
      WORD1(Dpc.DpcListEntry.Next) = DeferredContext_4 + 2048;
    DeferredContext = 0;
    KeInsertQueueDpc((PRKDPC)&Dpc.DpcListEntry, v1, (PVOID)DeferredContext_4);
    while ( !DeferredContext )
      _mm_pause();
  }
  v16 = *(unsigned int *)(PnprContext + 64);
  if ( (v16 & 0x20) != 0 && (int)guard_dispatch_icall_no_overrides(v16) < 0 )
  {
    v17 = PnprContext;
    v18 = *(_DWORD *)(PnprContext + 33288);
    if ( !v18 )
      v18 = 2455;
    *(_DWORD *)(PnprContext + 33288) = v18;
    v19 = *(_DWORD *)(v17 + 33292);
    if ( !v19 )
      v19 = 1;
    *(_DWORD *)(v17 + 33292) = v19;
    v20 = &v70;
    do
    {
      v21 = *((_OWORD *)v20 + 1);
      *(_OWORD *)&v4->Count = *(_OWORD *)v20;
      v22 = *((_OWORD *)v20 + 2);
      *(_OWORD *)&v4->StaticBitmap[1] = v21;
      v23 = *((_OWORD *)v20 + 3);
      *(_OWORD *)&v4->StaticBitmap[3] = v22;
      v24 = *((_OWORD *)v20 + 4);
      *(_OWORD *)&v4->StaticBitmap[5] = v23;
      v25 = *((_OWORD *)v20 + 5);
      *(_OWORD *)&v4->StaticBitmap[7] = v24;
      v26 = *((_OWORD *)v20 + 6);
      *(_OWORD *)&v4->StaticBitmap[9] = v25;
      v27 = *((_OWORD *)v20 + 7);
      v20 += 64;
      *(_OWORD *)&v4->StaticBitmap[11] = v26;
      v4 = (struct _KAFFINITY_EX *)((char *)v4 + 128);
      *(_OWORD *)&v4[-1].StaticBitmap[30] = v27;
      --v3;
    }
    while ( v3 );
LABEL_20:
    result = *(_QWORD *)v20;
    *(_QWORD *)&v4->Count = result;
    return result;
  }
  guard_dispatch_icall_no_overrides(0LL);
  KeSuspendClockTimerSafe();
  MillisecondCounter = PnprGetMillisecondCounter(0);
  v30 = PnprContext;
  *(_QWORD *)(PnprContext + 33296) = MillisecondCounter;
  _InterlockedAdd((volatile signed __int32 *)(v30 + 184), 1u);
  while ( *(_DWORD *)(PnprContext + 184) < (int)v1 )
    _mm_pause();
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)(PnprContext + 192), 1u);
    while ( *(_DWORD *)(PnprContext + 192) < (int)v1 )
      _mm_pause();
    guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33184));
    *(_DWORD *)(PnprContext + 33304) = PnprGetMillisecondCounter(0);
  }
  v31 = &v70;
  v32 = &KeActiveProcessors;
  v33 = 2LL;
  do
  {
    v34 = *(_OWORD *)&v32->StaticBitmap[1];
    *(_OWORD *)v31 = *(_OWORD *)&v32->Count;
    v35 = *(_OWORD *)&v32->StaticBitmap[3];
    *((_OWORD *)v31 + 1) = v34;
    v36 = *(_OWORD *)&v32->StaticBitmap[5];
    *((_OWORD *)v31 + 2) = v35;
    v37 = *(_OWORD *)&v32->StaticBitmap[7];
    *((_OWORD *)v31 + 3) = v36;
    v38 = *(_OWORD *)&v32->StaticBitmap[9];
    *((_OWORD *)v31 + 4) = v37;
    v39 = *(_OWORD *)&v32->StaticBitmap[11];
    *((_OWORD *)v31 + 5) = v38;
    v40 = *(_OWORD *)&v32->StaticBitmap[13];
    v32 = (struct _KAFFINITY_EX *)((char *)v32 + 128);
    *((_OWORD *)v31 + 6) = v39;
    v31 += 64;
    *((_OWORD *)v31 - 1) = v40;
    --v33;
  }
  while ( v33 );
  v41 = 0;
  *(_QWORD *)v31 = *(_QWORD *)&v32->Count;
  v42 = *(_QWORD *)(PnprContext + 16);
  if ( *(_DWORD *)(v42 + 8) )
  {
    do
    {
      v43 = v41++;
      KeActiveProcessors.Bitmap[v43] &= ~*(_QWORD *)(*(_QWORD *)v42 + 8 * v43);
    }
    while ( v41 < *(_DWORD *)(v42 + 8) );
  }
  v44 = *(_QWORD *)(PnprContext + 16);
  *(_QWORD *)(PnprContext + 200) = 1LL;
  if ( *(_DWORD *)(v44 + 16) )
  {
    *(_DWORD *)(PnprContext + 33308) = PnprGetMillisecondCounter(0);
    v45 = guard_dispatch_icall_no_overrides(1LL);
    v46 = PnprGetMillisecondCounter(0);
    v47 = PnprContext;
    *(_DWORD *)(PnprContext + 33312) = v46;
    if ( v45 < 0 )
    {
      v48 = *(_DWORD *)(v47 + 33288);
      if ( !v48 )
        v48 = 2540;
      *(_DWORD *)(v47 + 33288) = v48;
      v49 = *(_DWORD *)(v47 + 33292);
      if ( !v49 )
        v49 = 1;
      *(_DWORD *)(v47 + 33292) = v49;
      v20 = &v70;
      do
      {
        v50 = *((_OWORD *)v20 + 1);
        *(_OWORD *)&v4->Count = *(_OWORD *)v20;
        v51 = *((_OWORD *)v20 + 2);
        *(_OWORD *)&v4->StaticBitmap[1] = v50;
        v52 = *((_OWORD *)v20 + 3);
        *(_OWORD *)&v4->StaticBitmap[3] = v51;
        v53 = *((_OWORD *)v20 + 4);
        *(_OWORD *)&v4->StaticBitmap[5] = v52;
        v54 = *((_OWORD *)v20 + 5);
        *(_OWORD *)&v4->StaticBitmap[7] = v53;
        v55 = *((_OWORD *)v20 + 6);
        *(_OWORD *)&v4->StaticBitmap[9] = v54;
        v56 = *((_OWORD *)v20 + 7);
        v20 += 64;
        *(_OWORD *)&v4->StaticBitmap[11] = v55;
        v4 = (struct _KAFFINITY_EX *)((char *)v4 + 128);
        *(_OWORD *)&v4[-1].StaticBitmap[30] = v56;
        --v3;
      }
      while ( v3 );
      goto LABEL_20;
    }
  }
  v57 = &v70;
  do
  {
    v58 = *((_OWORD *)v57 + 1);
    *(_OWORD *)&v4->Count = *(_OWORD *)v57;
    v59 = *((_OWORD *)v57 + 2);
    *(_OWORD *)&v4->StaticBitmap[1] = v58;
    v60 = *((_OWORD *)v57 + 3);
    *(_OWORD *)&v4->StaticBitmap[3] = v59;
    v61 = *((_OWORD *)v57 + 4);
    *(_OWORD *)&v4->StaticBitmap[5] = v60;
    v62 = *((_OWORD *)v57 + 5);
    *(_OWORD *)&v4->StaticBitmap[7] = v61;
    v63 = *((_OWORD *)v57 + 6);
    *(_OWORD *)&v4->StaticBitmap[9] = v62;
    v64 = *((_OWORD *)v57 + 7);
    v57 += 64;
    *(_OWORD *)&v4->StaticBitmap[11] = v63;
    v4 = (struct _KAFFINITY_EX *)((char *)v4 + 128);
    *(_OWORD *)&v4[-1].StaticBitmap[30] = v64;
    --v3;
  }
  while ( v3 );
  *(_QWORD *)&v4->Count = *(_QWORD *)v57;
  while ( 1 )
  {
    result = PnprContext;
    if ( *(_DWORD *)(PnprContext + 204) >= *(_DWORD *)(*(_QWORD *)(PnprContext + 16) + 16LL) )
      break;
    _mm_pause();
  }
  return result;
}
