/*
 * XREFs of PsFreeSiloContextSlot @ 0x140772100
 * Callers:
 *     VrpRegistryUnload @ 0x140829360 (VrpRegistryUnload.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     PspStorageFreeSlot @ 0x14077C4E4 (PspStorageFreeSlot.c)
 *     PspGetNextSilo @ 0x1408EBA34 (PspGetNextSilo.c)
 *     PspStorageGetObject @ 0x1409F318C (PspStorageGetObject.c)
 */

__int64 __fastcall PsFreeSiloContextSlot(unsigned int a1)
{
  __int64 i; // rcx
  __int64 NextSilo; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx

  for ( i = 0LL; ; i = v4 )
  {
    NextSilo = PspGetNextSilo(i, 0LL);
    v4 = NextSilo;
    if ( !NextSilo )
      break;
    v5 = *(_QWORD *)(NextSilo + 1536);
    if ( v5 )
    {
      if ( (int)PspStorageGetObject(v5) >= 0 )
      {
        ObfDereferenceObject(0LL);
        KeBugCheckEx(0x199u, *(_QWORD *)(v4 + 1536), 0LL, 0LL, 0LL);
      }
    }
  }
  return PspStorageFreeSlot(a1);
}
