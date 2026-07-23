/*
 * XREFs of PpmParkUnblockIdle @ 0x14044D0B0
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfQueueAction @ 0x1402AF01C (PpmPerfQueueAction.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeRemoveProcessorAffinityEx @ 0x1403A4D10 (KeRemoveProcessorAffinityEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char PpmParkUnblockIdle()
{
  char v0; // di
  unsigned __int64 v2; // rbx
  unsigned __int16 i; // si
  unsigned __int64 v4; // rdx
  unsigned int v5; // r14d
  __int64 Prcb; // rax
  int v7; // ecx
  $B38C3B1372D6E954799962D5DD404846 *v8; // rdx
  __int64 Count; // r8
  unsigned __int64 v10; // rsi
  unsigned __int16 j; // bx
  unsigned __int64 v12; // rdx
  __int64 v13; // rax

  v0 = 1;
  if ( PpmIsParkingEnabled )
  {
    v2 = PpmPerfNewUnparkedMask.Bitmap[0];
    for ( i = 0; ; v2 = PpmPerfNewUnparkedMask.Bitmap[i] )
    {
      while ( v2 )
      {
        _BitScanForward64(&v4, v2);
        v2 &= ~(1LL << v4);
        v5 = *((_DWORD *)qword_140F22998 + 64 * i + (unsigned __int8)v4);
        Prcb = KeGetPrcb(v5);
        if ( *(_BYTE *)(Prcb + 34953) )
          *(_BYTE *)(Prcb + 34953) = 0;
        else
          KeRemoveProcessorAffinityEx(&PpmPerfNewUnparkedMask.Count, v5);
      }
      if ( ++i >= (unsigned int)PpmPerfNewUnparkedMask.Count )
        break;
    }
    v7 = 0;
    if ( PpmPerfNewUnparkedMask.Count )
    {
      v8 = &PpmPerfNewUnparkedMask.8;
      Count = PpmPerfNewUnparkedMask.Count;
      do
      {
        v7 += __popcnt(v8->Bitmap[0]);
        v8 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v8 + 8);
        --Count;
      }
      while ( Count );
      if ( v7 )
      {
        PpmCheckCount = v7;
        v10 = PpmPerfNewUnparkedMask.Bitmap[0];
        for ( j = 0; ; v10 = PpmPerfNewUnparkedMask.Bitmap[j] )
        {
          while ( v10 )
          {
            _BitScanForward64(&v12, v10);
            v10 &= ~(1LL << v12);
            v13 = KeGetPrcb(*((_DWORD *)qword_140F22998 + 64 * j + (unsigned __int8)v12));
            PpmPerfQueueAction(v13, 6);
          }
          if ( ++j >= (unsigned int)PpmPerfNewUnparkedMask.Count )
            break;
        }
        *(_QWORD *)&PpmPerfNewUnparkedMask.Count = 2097153LL;
        memset_0(&PpmPerfNewUnparkedMask.8, 0, sizeof(PpmPerfNewUnparkedMask.8));
        return 0;
      }
    }
  }
  return v0;
}
