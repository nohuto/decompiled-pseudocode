/*
 * XREFs of MiPopLargePfnList @ 0x14048BDB4
 * Callers:
 *     MiCreateSlabEntry @ 0x140217C8C (MiCreateSlabEntry.c)
 *     MiCommitExistingVad @ 0x140306380 (MiCommitExistingVad.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x140692A4C (MiAllocateLargeProcessPagesFromCache.c)
 * Callees:
 *     MiDemotePfnListChain @ 0x14069341C (MiDemotePfnListChain.c)
 */

unsigned __int64 __fastcall MiPopLargePfnList(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  __int64 v4; // rcx

  v2 = (_QWORD *)(a1 + 24LL * (unsigned int)a2);
  if ( (_QWORD *)*v2 == v2 )
    MiDemotePfnListChain(a1, a2);
  v3 = (_QWORD *)*v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v4 = *v3, *(_QWORD **)(*v3 + 8LL) != v3) )
    __fastfail(3u);
  *v2 = v4;
  *(_QWORD *)(v4 + 8) = v2;
  --v2[2];
  return 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v3 + 0x44000000000LL) >> 4);
}
