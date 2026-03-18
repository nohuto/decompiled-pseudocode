/*
 * XREFs of MiEmptyDeferredWorkingSetEntries @ 0x1402BB160
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140232170 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140233060 (MiResolveTransitionFault.c)
 *     MiCompletePrivateZeroFault @ 0x14024C030 (MiCompletePrivateZeroFault.c)
 *     MiQueueCoreWorkingSetEntries @ 0x1402B9360 (MiQueueCoreWorkingSetEntries.c)
 *     MiCompleteRestrictedImageFault @ 0x140464CC4 (MiCompleteRestrictedImageFault.c)
 * Callees:
 *     MiAddWorkingSetEntries @ 0x1402BA2B0 (MiAddWorkingSetEntries.c)
 */

__int64 __fastcall MiEmptyDeferredWorkingSetEntries(__int64 a1)
{
  __int64 v2; // r10
  __int64 v3; // rdx
  __int64 v4; // rax
  char v5; // cl
  unsigned __int64 v6; // rdx
  char v7; // r9
  __int64 result; // rax

  v2 = *(_QWORD *)a1;
  v3 = (__int64)(*(_QWORD *)(a1 + 16) << 25) >> 16 << 25;
  v4 = *(unsigned __int16 *)(a1 + 8);
  v5 = *(_BYTE *)(a1 + 13) & 2;
  v6 = (v4 << 12) + (v3 >> 16);
  if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v7 = v5 | 5;
  }
  else
  {
    v7 = v5 | 4;
    if ( (*(_DWORD *)(v2 + 184) & 0xF) != 0 )
      v7 = v5;
  }
  MiAddWorkingSetEntries(v2, v6, *(unsigned __int16 *)(a1 + 10), v7);
  result = 0LL;
  *(_WORD *)(a1 + 10) = 0;
  return result;
}
