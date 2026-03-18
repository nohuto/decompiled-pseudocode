/*
 * XREFs of PnprQuiesceProcessors @ 0x140B54B74
 * Callers:
 *     PnprQuiesce @ 0x1405A7C88 (PnprQuiesce.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KeRemoveProcessorAffinityEx @ 0x1403CA140 (KeRemoveProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14040D4F0 (KeEnumerateNextProcessor.c)
 *     KeInitializeDpc @ 0x140455470 (KeInitializeDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeSuspendClockTimerSafe @ 0x1405B9FAC (KeSuspendClockTimerSafe.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PnprGetMillisecondCounter @ 0x140B53B94 (PnprGetMillisecondCounter.c)
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
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  unsigned __int16 *v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int64 result; // rax
  unsigned int MillisecondCounter; // eax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  unsigned __int16 *v37; // rcx
  struct _KAFFINITY_EX *v38; // rax
  __int64 v39; // rdx
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  unsigned int v47; // r8d
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  int v55; // ebx
  int v56; // eax
  __int64 v57; // rcx
  int v58; // eax
  int v59; // eax
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  unsigned __int16 *v67; // rax
  __int128 v68; // xmm1
  __int128 v69; // xmm0
  __int128 v70; // xmm1
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  char DeferredContext; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int DeferredContext_4; // [rsp+2Ch] [rbp-DCh] BYREF
  unsigned __int16 *v77[2]; // [rsp+30h] [rbp-D8h] BYREF
  struct _KDPC Dpc; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v79; // [rsp+80h] [rbp-88h]
  unsigned __int16 v80; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int16 *v81; // [rsp+90h] [rbp-78h]

  memset_0(&v80, 0, 0x108uLL);
  memset((void *)&Dpc.Number, 0, 62);
  LODWORD(v79) = 0;
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
  v6 = &v80;
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
  KeRemoveProcessorAffinityEx(&v80, *(_DWORD *)(v15 + 180));
  v77[1] = v81;
  v77[0] = &v80;
  LOWORD(Dpc.TargetInfoAsUlong) = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&DeferredContext_4, v77) )
  {
    if ( !v79 )
      WORD1(Dpc.DpcListEntry.Next) = DeferredContext_4 + 2048;
    DeferredContext = 0;
    KeInsertQueueDpc((PRKDPC)&Dpc.DpcListEntry, v1, (PVOID)DeferredContext_4);
    while ( !DeferredContext )
      _mm_pause();
  }
  v19 = *(unsigned int *)(PnprContext + 64);
  if ( (v19 & 0x20) != 0 && (int)guard_dispatch_icall_no_overrides(v19, v16, v17, v18) < 0 )
  {
    v20 = PnprContext;
    v21 = *(_DWORD *)(PnprContext + 33288);
    if ( !v21 )
      v21 = 2455;
    *(_DWORD *)(PnprContext + 33288) = v21;
    v22 = *(_DWORD *)(v20 + 33292);
    if ( !v22 )
      v22 = 1;
    *(_DWORD *)(v20 + 33292) = v22;
    v23 = &v80;
    do
    {
      v24 = *((_OWORD *)v23 + 1);
      *(_OWORD *)&v4->Count = *(_OWORD *)v23;
      v25 = *((_OWORD *)v23 + 2);
      *(_OWORD *)&v4->StaticBitmap[1] = v24;
      v26 = *((_OWORD *)v23 + 3);
      *(_OWORD *)&v4->StaticBitmap[3] = v25;
      v27 = *((_OWORD *)v23 + 4);
      *(_OWORD *)&v4->StaticBitmap[5] = v26;
      v28 = *((_OWORD *)v23 + 5);
      *(_OWORD *)&v4->StaticBitmap[7] = v27;
      v29 = *((_OWORD *)v23 + 6);
      *(_OWORD *)&v4->StaticBitmap[9] = v28;
      v30 = *((_OWORD *)v23 + 7);
      v23 += 64;
      *(_OWORD *)&v4->StaticBitmap[11] = v29;
      v4 = (struct _KAFFINITY_EX *)((char *)v4 + 128);
      *(_OWORD *)&v4[-1].StaticBitmap[30] = v30;
      --v3;
    }
    while ( v3 );
LABEL_20:
    result = *(_QWORD *)v23;
    *(_QWORD *)&v4->Count = result;
    return result;
  }
  guard_dispatch_icall_no_overrides(0LL, *(_QWORD *)(PnprContext + 33176), v17, v18);
  KeSuspendClockTimerSafe();
  MillisecondCounter = PnprGetMillisecondCounter(0);
  v36 = PnprContext;
  *(_QWORD *)(PnprContext + 33296) = MillisecondCounter;
  _InterlockedAdd((volatile signed __int32 *)(v36 + 184), 1u);
  while ( *(_DWORD *)(PnprContext + 184) < (int)v1 )
    _mm_pause();
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)(PnprContext + 192), 1u);
    while ( *(_DWORD *)(PnprContext + 192) < (int)v1 )
      _mm_pause();
    LOBYTE(v33) = 1;
    guard_dispatch_icall_no_overrides(*(_QWORD *)(PnprContext + 33184), v33, v34, v35);
    *(_DWORD *)(PnprContext + 33304) = PnprGetMillisecondCounter(0);
  }
  v37 = &v80;
  v38 = &KeActiveProcessors;
  v39 = 2LL;
  do
  {
    v40 = *(_OWORD *)&v38->StaticBitmap[1];
    *(_OWORD *)v37 = *(_OWORD *)&v38->Count;
    v41 = *(_OWORD *)&v38->StaticBitmap[3];
    *((_OWORD *)v37 + 1) = v40;
    v42 = *(_OWORD *)&v38->StaticBitmap[5];
    *((_OWORD *)v37 + 2) = v41;
    v43 = *(_OWORD *)&v38->StaticBitmap[7];
    *((_OWORD *)v37 + 3) = v42;
    v44 = *(_OWORD *)&v38->StaticBitmap[9];
    *((_OWORD *)v37 + 4) = v43;
    v45 = *(_OWORD *)&v38->StaticBitmap[11];
    *((_OWORD *)v37 + 5) = v44;
    v46 = *(_OWORD *)&v38->StaticBitmap[13];
    v38 = (struct _KAFFINITY_EX *)((char *)v38 + 128);
    *((_OWORD *)v37 + 6) = v45;
    v37 += 64;
    *((_OWORD *)v37 - 1) = v46;
    --v39;
  }
  while ( v39 );
  v47 = 0;
  *(_QWORD *)v37 = *(_QWORD *)&v38->Count;
  v48 = *(_QWORD *)(PnprContext + 16);
  if ( *(_DWORD *)(v48 + 8) )
  {
    do
    {
      v49 = v47++;
      KeActiveProcessors.Bitmap[v49] &= ~*(_QWORD *)(*(_QWORD *)v48 + 8 * v49);
    }
    while ( v47 < *(_DWORD *)(v48 + 8) );
  }
  v50 = *(_QWORD *)(PnprContext + 16);
  *(_QWORD *)(PnprContext + 200) = 1LL;
  if ( *(_DWORD *)(v50 + 16) )
  {
    v51 = PnprGetMillisecondCounter(0);
    v52 = PnprContext;
    *(_DWORD *)(PnprContext + 33308) = v51;
    v55 = guard_dispatch_icall_no_overrides(1LL, *(_QWORD *)(v52 + 33176), v53, v54);
    v56 = PnprGetMillisecondCounter(0);
    v57 = PnprContext;
    *(_DWORD *)(PnprContext + 33312) = v56;
    if ( v55 < 0 )
    {
      v58 = *(_DWORD *)(v57 + 33288);
      if ( !v58 )
        v58 = 2540;
      *(_DWORD *)(v57 + 33288) = v58;
      v59 = *(_DWORD *)(v57 + 33292);
      if ( !v59 )
        v59 = 1;
      *(_DWORD *)(v57 + 33292) = v59;
      v23 = &v80;
      do
      {
        v60 = *((_OWORD *)v23 + 1);
        *(_OWORD *)&v4->Count = *(_OWORD *)v23;
        v61 = *((_OWORD *)v23 + 2);
        *(_OWORD *)&v4->StaticBitmap[1] = v60;
        v62 = *((_OWORD *)v23 + 3);
        *(_OWORD *)&v4->StaticBitmap[3] = v61;
        v63 = *((_OWORD *)v23 + 4);
        *(_OWORD *)&v4->StaticBitmap[5] = v62;
        v64 = *((_OWORD *)v23 + 5);
        *(_OWORD *)&v4->StaticBitmap[7] = v63;
        v65 = *((_OWORD *)v23 + 6);
        *(_OWORD *)&v4->StaticBitmap[9] = v64;
        v66 = *((_OWORD *)v23 + 7);
        v23 += 64;
        *(_OWORD *)&v4->StaticBitmap[11] = v65;
        v4 = (struct _KAFFINITY_EX *)((char *)v4 + 128);
        *(_OWORD *)&v4[-1].StaticBitmap[30] = v66;
        --v3;
      }
      while ( v3 );
      goto LABEL_20;
    }
  }
  v67 = &v80;
  do
  {
    v68 = *((_OWORD *)v67 + 1);
    *(_OWORD *)&v4->Count = *(_OWORD *)v67;
    v69 = *((_OWORD *)v67 + 2);
    *(_OWORD *)&v4->StaticBitmap[1] = v68;
    v70 = *((_OWORD *)v67 + 3);
    *(_OWORD *)&v4->StaticBitmap[3] = v69;
    v71 = *((_OWORD *)v67 + 4);
    *(_OWORD *)&v4->StaticBitmap[5] = v70;
    v72 = *((_OWORD *)v67 + 5);
    *(_OWORD *)&v4->StaticBitmap[7] = v71;
    v73 = *((_OWORD *)v67 + 6);
    *(_OWORD *)&v4->StaticBitmap[9] = v72;
    v74 = *((_OWORD *)v67 + 7);
    v67 += 64;
    *(_OWORD *)&v4->StaticBitmap[11] = v73;
    v4 = (struct _KAFFINITY_EX *)((char *)v4 + 128);
    *(_OWORD *)&v4[-1].StaticBitmap[30] = v74;
    --v3;
  }
  while ( v3 );
  *(_QWORD *)&v4->Count = *(_QWORD *)v67;
  while ( 1 )
  {
    result = PnprContext;
    if ( *(_DWORD *)(PnprContext + 204) >= *(_DWORD *)(*(_QWORD *)(PnprContext + 16) + 16LL) )
      break;
    _mm_pause();
  }
  return result;
}
