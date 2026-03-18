/*
 * XREFs of IopDiskIoAttributionTreeCompare @ 0x140462D48
 * Callers:
 *     IoStartDiskIoAttributionForContext @ 0x140462C4C (IoStartDiskIoAttributionForContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopDiskIoAttributionTreeCompare(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx

  v2 = *a1;
  v3 = *(_QWORD *)(a2 + 24);
  if ( v2 < v3 )
    return 0xFFFFFFFFLL;
  else
    return v2 > v3;
}
