/*
 * XREFs of IoGetOplockFullFoExt @ 0x14045995C
 * Callers:
 *     FsRtlpOplockDequeueRH @ 0x140459914 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpOplockCleanup @ 0x1404E3BFC (FsRtlpOplockCleanup.c)
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
