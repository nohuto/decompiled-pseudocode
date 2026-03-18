/*
 * XREFs of ACPIFreeWaitWakePowerRequest @ 0x140033370
 * Callers:
 *     ACPIDereferenceWaitWakePowerRequest @ 0x140032388 (ACPIDereferenceWaitWakePowerRequest.c)
 * Callees:
 *     ACPIDelayedFreeWakeInterrupt @ 0x140034330 (ACPIDelayedFreeWakeInterrupt.c)
 */

void __fastcall ACPIFreeWaitWakePowerRequest(_DWORD *Entry)
{
  unsigned int v1; // edi
  unsigned int **v2; // r14
  unsigned int *v4; // rsi
  unsigned int *v5; // r15
  __int64 v6; // rbp
  struct _EX_RUNDOWN_REF *v7; // rcx

  v1 = Entry[29];
  v2 = (unsigned int **)(Entry + 38);
  if ( v1 > 1 )
  {
    v4 = *v2;
  }
  else
  {
    v4 = Entry + 38;
    if ( !v1 )
      goto LABEL_7;
  }
  v5 = v4 + 6;
  v6 = (unsigned int)Entry[29];
  do
  {
    ACPIDelayedFreeWakeInterrupt(*v5, *((_QWORD *)v5 + 1));
    v5 += 10;
    --v6;
  }
  while ( v6 );
  if ( v1 > 1 )
  {
    ExFreePoolWithTag(v4, 0x50706341u);
    *v2 = 0LL;
  }
LABEL_7:
  v7 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)Entry + 5);
  Entry[29] = 0;
  ExReleaseRundownProtection(v7 + 125);
  ExFreeToNPagedLookasideList(&RequestLookAsideList, Entry);
}
