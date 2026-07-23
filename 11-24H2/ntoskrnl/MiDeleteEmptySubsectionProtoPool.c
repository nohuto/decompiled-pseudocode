/*
 * XREFs of MiDeleteEmptySubsectionProtoPool @ 0x140473E98
 * Callers:
 *     MiDeleteEmptySubsections @ 0x140292788 (MiDeleteEmptySubsections.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteEmptySubsectionProtoPool(_DWORD *a1)
{
  __int64 v1; // rdi

  v1 = 0LL;
  if ( !*a1 )
    goto LABEL_9;
  do
  {
    ExFreePoolWithTag(*(PVOID *)&a1[2 * v1 + 2], 0);
    v1 = (unsigned int)(v1 + 1);
  }
  while ( (unsigned int)v1 < *a1 );
  if ( !(_DWORD)v1 )
  {
LABEL_9:
    if ( !a1[1] )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiOneMillisecond);
  }
  *a1 = 0;
}
