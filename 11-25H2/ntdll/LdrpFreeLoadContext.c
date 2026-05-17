/*
 * XREFs of LdrpFreeLoadContext @ 0x1800D9060
 * Callers:
 *     LdrpCleanupEnclaveLoadState @ 0x1800D8F28 (LdrpCleanupEnclaveLoadState.c)
 *     LdrpFreeLoadContextOfNode @ 0x1800D8FB8 (LdrpFreeLoadContextOfNode.c)
 *     LdrpFreeReplacedModule @ 0x1800D9148 (LdrpFreeReplacedModule.c)
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     LdrpHandlePendingModuleReplaced @ 0x1800D910C (LdrpHandlePendingModuleReplaced.c)
 *     LdrpFreeReplacedModule @ 0x1800D9148 (LdrpFreeReplacedModule.c)
 */

__int64 __fastcall LdrpFreeLoadContext(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rax

  v1 = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 176LL) = 0LL;
  result = LdrpHandlePendingModuleReplaced(a1);
  if ( *(_QWORD *)(a1 + 88) )
  {
    if ( *(_DWORD *)(a1 + 104) )
    {
      do
      {
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * v1);
        if ( v5 )
        {
          v6 = *(_QWORD *)(v5 + 176);
          if ( v6 )
          {
            if ( (*(_DWORD *)(v6 + 32) & 0x80000) == 0 && *(_QWORD *)(v6 + 56) != v5 )
            {
              *(_QWORD *)(v6 + 56) = v5;
              LdrpFreeReplacedModule();
            }
          }
        }
        ++v1;
      }
      while ( v1 < *(_DWORD *)(a1 + 104) );
    }
    result = RtlFreeHeap(LdrpHeap, 0, *(_QWORD *)(a1 + 88), v4);
  }
  if ( (*(_DWORD *)(a1 + 32) & 0x8000) != 0 )
    return RtlFreeHeap(LdrpHeap, 0, a1, v4);
  return result;
}
