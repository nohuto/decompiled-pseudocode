/*
 * XREFs of IoGetOplockFullFoExt @ 0x14044E68C
 * Callers:
 *     FsRtlpOplockCleanup @ 0x1403CDA80 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockDequeueRH @ 0x14044E644 (FsRtlpOplockDequeueRH.c)
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
