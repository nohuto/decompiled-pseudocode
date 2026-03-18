/*
 * XREFs of RtlMergeBitMaps @ 0x140439210
 * Callers:
 *     HvUnCOWReconciledPages @ 0x140438F00 (HvUnCOWReconciledPages.c)
 *     HvStoreModifiedData @ 0x14088302C (HvStoreModifiedData.c)
 *     CmpFlushHive @ 0x140883A5C (CmpFlushHive.c)
 *     HvpPerformLogFileRecovery @ 0x1409FA6B8 (HvpPerformLogFileRecovery.c)
 *     HvFoldBackUnreconciledData @ 0x140AA54A8 (HvFoldBackUnreconciledData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlMergeBitMaps(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // r9d
  __int64 result; // rax
  __int64 v4; // r10
  __int64 v5; // r8

  v2 = *(_DWORD *)a1;
  result = *a2;
  if ( *(_DWORD *)a1 >= (unsigned int)result )
    v2 = *a2;
  v4 = 0LL;
  if ( v2 )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(a1 + 8);
      if ( v2 < 0x20 )
        break;
      *(_DWORD *)(v5 + 4 * v4) |= *(_DWORD *)(*((_QWORD *)a2 + 1) + 4 * v4);
      v4 = (unsigned int)(v4 + 1);
      v2 -= 32;
      if ( !v2 )
        return result;
    }
    *(_DWORD *)(v5 + 4 * v4) |= *(_DWORD *)(*((_QWORD *)a2 + 1) + 4 * v4) & ((1LL << v2) - 1);
  }
  return result;
}
