/*
 * XREFs of IoGetOplockFullFoExt @ 0x14045A5F8
 * Callers:
 *     FsRtlpOplockDequeueRH @ 0x14045A5B0 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpOplockCleanup @ 0x1404E4B20 (FsRtlpOplockCleanup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoGetOplockFullFoExt(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = 0LL;
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 208);
    if ( v2 )
      return *(_QWORD *)(v2 + 56);
  }
  return result;
}
