/*
 * XREFs of ExFreeCacheAwarePushLock @ 0x1404F8C10
 * Callers:
 *     ExAllocateCacheAwarePushLock @ 0x1404B6390 (ExAllocateCacheAwarePushLock.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall ExFreeCacheAwarePushLock(PVOID *P)
{
  PVOID *v2; // rsi
  unsigned __int64 v3; // rbx

  if ( *P )
  {
    v2 = P;
    v3 = (-(__int64)(*((_BYTE *)*P + 8) != 0) & 0xFFFFFFFFFFFFFFE1uLL) + 32;
    do
    {
      if ( *v2 )
        ExFreePoolWithTag(*v2, 0);
      ++v2;
      --v3;
    }
    while ( v3 );
  }
  ExFreePoolWithTag(P, 0);
}
