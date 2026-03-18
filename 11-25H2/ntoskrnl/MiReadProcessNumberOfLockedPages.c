/*
 * XREFs of MiReadProcessNumberOfLockedPages @ 0x14065ECC8
 * Callers:
 *     MiFreeMdlTracker @ 0x14046F5D8 (MiFreeMdlTracker.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x140663448 (MmUpdateMdlTrackerForMdlSwitch.c)
 *     MmDeleteProcessAddressSpace @ 0x1408D7B40 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReadProcessNumberOfLockedPages(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rax

  v1 = *(_QWORD *)(a1 + 1040);
  v2 = 0LL;
  v3 = (__int64 *)(v1 + 512);
  if ( !MmNumLockedPagesFanOutEnabled )
    return *v3;
  v4 = 4LL;
  do
  {
    v5 = *v3;
    v3 += 8;
    v2 += v5;
    --v4;
  }
  while ( v4 );
  return v2;
}
