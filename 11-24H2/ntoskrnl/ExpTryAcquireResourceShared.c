/*
 * XREFs of ExpTryAcquireResourceShared @ 0x1403D6AF0
 * Callers:
 *     ExAcquireSharedWaitForExclusive @ 0x1403D6820 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     <none>
 */

char __fastcall ExpTryAcquireResourceShared(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 64);
  if ( v1 && (*(char *)(a1 + 26) < 0 || *(_DWORD *)(a1 + 76)) )
    return 0;
  *(_WORD *)(a1 + 24) = 1;
  *(_DWORD *)(a1 + 64) = v1 + 1;
  return 1;
}
