/*
 * XREFs of PpmPerfApplyProcessorStates @ 0x1402AF070
 * Callers:
 *     <none>
 * Callees:
 *     ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402AA18C (-KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     PpmPerfApplyProcessorState @ 0x1402ADC20 (PpmPerfApplyProcessorState.c)
 *     PpmPerfQueueAction @ 0x1402AF01C (PpmPerfQueueAction.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     PpmPerfApplyHiddenProcessorState @ 0x1405D00A4 (PpmPerfApplyHiddenProcessorState.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  struct _KPRCB *Prcb; // rax
  struct _KPRCB *v10; // r14
  _PROC_PERF_CONSTRAINT *Constraint; // r15
  unsigned int v12; // r8d
  int v13; // ecx
  __int64 Count; // r8
  $B38C3B1372D6E954799962D5DD404846 *v15; // rdx
  unsigned __int64 v16; // rsi
  unsigned __int16 m; // di
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  struct _KAFFINITY_EX v21; // [rsp+40h] [rbp-C0h] BYREF

  *(_QWORD *)&v21.Count = 2097153LL;
  v0 = 0;
  v21.Bitmap[0] = 0LL;
  memset_0(&v21.StaticBitmap[1], 0, 0xF8uLL);
  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 1214) )
    {
      KiOrAffinityEx((struct _KAFFINITY_EX *)(i + 24), &v21, &v21, v21.Size);
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
  v5 = v21.Bitmap[0];
  for ( k = 0; ; v5 = v21.Bitmap[k] )
  {
    while ( v5 )
    {
      _BitScanForward64(&v7, v5);
      v5 &= ~(1LL << v7);
      v8 = *((unsigned int *)qword_140F22998 + 64 * k + (unsigned __int8)v7);
      Prcb = (struct _KPRCB *)KeGetPrcb(v8);
      v10 = Prcb;
      Constraint = Prcb->PowerState.CheckContext.Constraint;
      if ( !Constraint->Force )
        goto LABEL_13;
      if ( PpmPerfApplyProcessorState(Prcb, 1) )
      {
        Constraint->Force = 0;
LABEL_13:
        if ( PpmPerfApplyProcessorState(v10, 0) )
        {
          v12 = *((_DWORD *)KiGlobalState + v8);
          if ( v21.Count > v12 >> 6 )
            v21.Bitmap[v12 >> 6] &= ~(1LL << (v12 & 0x3F));
        }
      }
    }
    if ( ++k >= (unsigned int)v21.Count )
      break;
  }
  v13 = 0;
  if ( v21.Count )
  {
    Count = v21.Count;
    v15 = &v21.8;
    do
    {
      v13 += __popcnt(v15->Bitmap[0]);
      v15 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v15 + 8);
      --Count;
    }
    while ( Count );
  }
  PpmCheckCount = v13;
  if ( !v13 )
    return 1;
  v16 = v21.Bitmap[0];
  for ( m = 0; ; v16 = v21.Bitmap[m] )
  {
    while ( v16 )
    {
      _BitScanForward64(&v18, v16);
      v16 &= ~(1LL << v18);
      v19 = KeGetPrcb(*((unsigned int *)qword_140F22998 + 64 * m + (unsigned __int8)v18));
      PpmPerfQueueAction(v19, 2);
    }
    if ( ++m >= (unsigned int)v21.Count )
      break;
  }
  return v0;
}
