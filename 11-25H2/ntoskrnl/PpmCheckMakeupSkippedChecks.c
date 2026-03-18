/*
 * XREFs of PpmCheckMakeupSkippedChecks @ 0x140204A70
 * Callers:
 *     PpmCheckRun @ 0x140204960 (PpmCheckRun.c)
 * Callees:
 *     PpmPerfCompleteMakeup @ 0x140202E34 (PpmPerfCompleteMakeup.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x140203834 (PpmEventTraceMakeupPerfCheck.c)
 *     PpmParkMaximumCoresParked @ 0x140203898 (PpmParkMaximumCoresParked.c)
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     PpmPerfMinimumPerfReached @ 0x14047855C (PpmPerfMinimumPerfReached.c)
 *     PpmParkCompleteMakeup @ 0x1404EAB50 (PpmParkCompleteMakeup.c)
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
    if ( PpmParkMaximumCoresParked() && (unsigned __int8)PpmPerfMinimumPerfReached() )
    {
      v1 = PpmCheckRegistered.Bitmap[0];
      LOWORD(v2) = 0;
      while ( 1 )
      {
        while ( v1 )
        {
          _BitScanForward64(&v3, v1);
          v1 &= ~(1LL << v3);
          Prcb = KeGetPrcb(*((unsigned int *)qword_140F216A8 + 64 * (unsigned __int16)v2 + (unsigned __int8)v3));
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
