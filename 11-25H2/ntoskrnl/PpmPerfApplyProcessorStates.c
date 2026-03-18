/*
 * XREFs of PpmPerfApplyProcessorStates @ 0x1403E8630
 * Callers:
 *     <none>
 * Callees:
 *     ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x140272B6C (-KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     PpmPerfQueueAction @ 0x1403E88F0 (PpmPerfQueueAction.c)
 *     PpmPerfApplyProcessorState @ 0x1403E8944 (PpmPerfApplyProcessorState.c)
 *     PpmPerfApplyHiddenProcessorState @ 0x1405CE0B0 (PpmPerfApplyHiddenProcessorState.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char PpmPerfApplyProcessorStates()
{
  char v0; // bl
  __int64 i; // rdi
  __int64 v2; // rsi
  unsigned int j; // r14d
  __int64 v4; // r8
  unsigned __int64 v5; // rdi
  unsigned __int16 k; // si
  unsigned __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // r12
  __int64 Prcb; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  __int64 v15; // r15
  unsigned int v16; // r8d
  int v17; // ecx
  __int64 Count; // r8
  $B38C3B1372D6E954799962D5DD404846 *v19; // rdx
  unsigned __int64 v20; // rsi
  unsigned __int16 m; // di
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  struct _KAFFINITY_EX v25; // [rsp+40h] [rbp-C0h] BYREF

  *(_QWORD *)&v25.Count = 2097153LL;
  v0 = 0;
  v25.Bitmap[0] = 0LL;
  memset_0(&v25.StaticBitmap[1], 0, 0xF8uLL);
  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 1214) )
    {
      KiOrAffinityEx((struct _KAFFINITY_EX *)(i + 24), &v25, &v25, v25.Size);
      for ( j = 0; j < *(_DWORD *)(i + 296); ++j )
      {
        v2 = *(_QWORD *)(i + 312) + 1192LL * j;
        if ( *(_DWORD *)(v2 + 16) )
        {
          if ( *(_BYTE *)(v2 + 140) )
          {
            LOBYTE(v4) = 1;
            PpmPerfApplyHiddenProcessorState(i, *(_QWORD *)(i + 312) + 1192LL * j, v4);
            *(_BYTE *)(v2 + 140) = 0;
          }
          PpmPerfApplyHiddenProcessorState(i, v2, 0LL);
        }
      }
      *(_BYTE *)(i + 1214) = 0;
    }
  }
  v5 = v25.Bitmap[0];
  for ( k = 0; ; v5 = v25.Bitmap[k] )
  {
    while ( v5 )
    {
      _BitScanForward64(&v7, v5);
      v5 &= ~(1LL << v7);
      v8 = k << 6;
      v9 = *((unsigned int *)qword_140F216A8 + (unsigned int)(unsigned __int8)v7 + v8);
      Prcb = KeGetPrcb(*((_DWORD *)qword_140F216A8 + (unsigned int)(unsigned __int8)v7 + v8));
      v14 = Prcb;
      v15 = *(_QWORD *)(Prcb + 35256);
      if ( !*(_BYTE *)(v15 + 140) )
        goto LABEL_13;
      LOBYTE(v11) = 1;
      if ( (unsigned __int8)PpmPerfApplyProcessorState(Prcb, v11, v12, v13) )
      {
        *(_BYTE *)(v15 + 140) = 0;
LABEL_13:
        if ( (unsigned __int8)PpmPerfApplyProcessorState(v14, 0LL, v12, v13) )
        {
          v16 = *((_DWORD *)KiGlobalState + v9);
          if ( v25.Count > v16 >> 6 )
            v25.Bitmap[v16 >> 6] &= ~(1LL << (v16 & 0x3F));
        }
      }
    }
    if ( ++k >= (unsigned int)v25.Count )
      break;
  }
  v17 = 0;
  if ( v25.Count )
  {
    Count = v25.Count;
    v19 = &v25.8;
    do
    {
      v17 += __popcnt(v19->Bitmap[0]);
      v19 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v19 + 8);
      --Count;
    }
    while ( Count );
  }
  PpmCheckCount = v17;
  if ( !v17 )
    return 1;
  v20 = v25.Bitmap[0];
  for ( m = 0; ; v20 = v25.Bitmap[m] )
  {
    while ( v20 )
    {
      _BitScanForward64(&v22, v20);
      v20 &= ~(1LL << v22);
      v23 = KeGetPrcb(*((_DWORD *)qword_140F216A8 + 64 * m + (unsigned __int8)v22));
      PpmPerfQueueAction(v23, 2LL);
    }
    if ( ++m >= (unsigned int)v25.Count )
      break;
  }
  return v0;
}
