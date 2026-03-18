/*
 * XREFs of RtlpHpLfhSubsegmentPrefetchRange @ 0x1403C8384
 * Callers:
 *     RtlpHpLfhSubsegmentInitialize @ 0x1402F7508 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x1403CA350 (RtlpHpLfhSubsegmentCommitBlock.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpHpLfhSubsegmentPrefetchRange(__int64 a1, unsigned int a2, int a3, char a4)
{
  char result; // al
  char *v5; // r10
  char *v6; // rcx

  result = RtlpHpLfhPerfFlags;
  v5 = (char *)(a1 + a2);
  v6 = &v5[a3];
  if ( (RtlpHpLfhPerfFlags & 2) != 0 && (a4 & 2) != 0 )
  {
    while ( v5 < v6 )
    {
      result = *v5;
      v5 += 4096;
    }
  }
  return result;
}
