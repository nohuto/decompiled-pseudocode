/*
 * XREFs of MiFlushTbNowToAvoidOverflow @ 0x14042C8A0
 * Callers:
 *     MiBuildPhysicalPageFreeChain @ 0x140675C14 (MiBuildPhysicalPageFreeChain.c)
 * Callees:
 *     MiTbFlushListPromoteThreshold @ 0x14042C8E0 (MiTbFlushListPromoteThreshold.c)
 */

_BOOL8 __fastcall MiFlushTbNowToAvoidOverflow(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx

  if ( *(_DWORD *)(a1 + 28) == *(_DWORD *)(a1 + 12) )
    return 1LL;
  v1 = MiTbFlushListPromoteThreshold(a1);
  return *(_QWORD *)(v2 + 32) + 1LL >= v1;
}
