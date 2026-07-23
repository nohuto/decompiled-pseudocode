/*
 * XREFs of PpmCheckMakeupSkippedChecks @ 0x1402ADF00
 * Callers:
 *     PpmCheckRun @ 0x1402ADDF0 (PpmCheckRun.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     PpmPerfMinimumPerfReached @ 0x140474030 (PpmPerfMinimumPerfReached.c)
 *     PpmParkMaximumCoresParked @ 0x14047CC88 (PpmParkMaximumCoresParked.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x14048F5F8 (PpmEventTraceMakeupPerfCheck.c)
 *     PpmPerfCompleteMakeup @ 0x140492A3C (PpmPerfCompleteMakeup.c)
 *     PpmParkCompleteMakeup @ 0x1404E593C (PpmParkCompleteMakeup.c)
 */

char PpmCheckMakeupSkippedChecks()
{
  unsigned __int64 v1; // rdi
  __int64 v2; // rbx
  unsigned __int64 v3; // rdx
  __int64 Prcb; // rax
  __int64 v5; // r8
  __int64 *v6; // r10
  __int64 v7; // rcx
  unsigned int i; // r9d

  if ( PpmCheckMakeupCount )
  {
    if ( (unsigned __int8)PpmParkMaximumCoresParked() && (unsigned __int8)PpmPerfMinimumPerfReached() )
    {
      v1 = PpmCheckRegistered.Bitmap[0];
      LOWORD(v2) = 0;
      while ( 1 )
      {
        while ( v1 )
        {
          _BitScanForward64(&v3, v1);
          v1 &= ~(1LL << v3);
          Prcb = KeGetPrcb(*((unsigned int *)qword_140F22998 + 64 * (unsigned __int16)v2 + (unsigned __int8)v3));
          PpmPerfCompleteMakeup(Prcb + 35248);
        }
        v2 = (unsigned __int16)(v2 + 1);
        if ( (unsigned int)v2 >= PpmCheckRegistered.Count )
          break;
        v1 = PpmCheckRegistered.Bitmap[v2];
      }
      v5 = PpmPerfDomainHead;
      v6 = &PpmPerfDomainHead;
      while ( (__int64 *)v5 != v6 )
      {
        for ( i = 0; i < *(_DWORD *)(v5 + 296); ++i )
        {
          v7 = *(_QWORD *)(v5 + 312) + 1192LL * i;
          if ( *(_DWORD *)(v7 + 16) == 1 )
            PpmPerfCompleteMakeup(*(_QWORD *)v7);
        }
        v5 = *(_QWORD *)v5;
      }
      PpmParkCompleteMakeup();
      PpmCheckMakeupCount = 0;
    }
    else
    {
      PpmEventTraceMakeupPerfCheck();
      --PpmCheckMakeupCount;
      PpmCheckPipelineIndex = 4;
    }
  }
  return 1;
}
