/*
 * XREFs of PpmPerfApplyProcessorStates @ 0x14029EE10
 * Callers:
 *     <none>
 * Callees:
 *     ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x14029B69C (-KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     PpmPerfQueueAction @ 0x14029F0D0 (PpmPerfQueueAction.c)
 *     PpmPerfApplyProcessorState @ 0x14029F124 (PpmPerfApplyProcessorState.c)
 *     KeGetPrcb @ 0x140352980 (KeGetPrcb.c)
 *     PpmPerfApplyHiddenProcessorState @ 0x1405D2984 (PpmPerfApplyHiddenProcessorState.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  __int64 v8; // r12
  __int64 Prcb; // rax
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 v12; // r15
  unsigned int v13; // r8d
  int v14; // ecx
  __int64 Count; // r8
  $B38C3B1372D6E954799962D5DD404846 *v16; // rdx
  unsigned __int64 v17; // rsi
  unsigned __int16 m; // di
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  struct _KAFFINITY_EX v22; // [rsp+40h] [rbp-C0h] BYREF

  *(_QWORD *)&v22.Count = 2097153LL;
  v0 = 0;
  v22.Bitmap[0] = 0LL;
  memset_0(&v22.StaticBitmap[1], 0, 0xF8uLL);
  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 1214) )
    {
      KiOrAffinityEx((struct _KAFFINITY_EX *)(i + 24), &v22, &v22, v22.Size);
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
  v5 = v22.Bitmap[0];
  for ( k = 0; ; v5 = v22.Bitmap[k] )
  {
    while ( v5 )
    {
      _BitScanForward64(&v7, v5);
      v5 &= ~(1LL << v7);
      v8 = *((unsigned int *)qword_140F21E78 + 64 * k + (unsigned __int8)v7);
      Prcb = KeGetPrcb(v8);
      v11 = Prcb;
      v12 = *(_QWORD *)(Prcb + 35256);
      if ( !*(_BYTE *)(v12 + 140) )
        goto LABEL_13;
      LOBYTE(v10) = 1;
      if ( (unsigned __int8)PpmPerfApplyProcessorState(Prcb, v10) )
      {
        *(_BYTE *)(v12 + 140) = 0;
LABEL_13:
        if ( (unsigned __int8)PpmPerfApplyProcessorState(v11, 0LL) )
        {
          v13 = *((_DWORD *)KiGlobalState + v8);
          if ( v22.Count > v13 >> 6 )
            v22.Bitmap[v13 >> 6] &= ~(1LL << (v13 & 0x3F));
        }
      }
    }
    if ( ++k >= (unsigned int)v22.Count )
      break;
  }
  v14 = 0;
  if ( v22.Count )
  {
    Count = v22.Count;
    v16 = &v22.8;
    do
    {
      v14 += __popcnt(v16->Bitmap[0]);
      v16 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v16 + 8);
      --Count;
    }
    while ( Count );
  }
  PpmCheckCount = v14;
  if ( !v14 )
    return 1;
  v17 = v22.Bitmap[0];
  for ( m = 0; ; v17 = v22.Bitmap[m] )
  {
    while ( v17 )
    {
      _BitScanForward64(&v19, v17);
      v17 &= ~(1LL << v19);
      v20 = KeGetPrcb(*((unsigned int *)qword_140F21E78 + 64 * m + (unsigned __int8)v19));
      PpmPerfQueueAction(v20, 2LL);
    }
    if ( ++m >= (unsigned int)v22.Count )
      break;
  }
  return v0;
}
