/*
 * XREFs of CompletionQueueReInit @ 0x14000CAB0
 * Callers:
 *     NVMeQueuesReInit @ 0x14000C920 (NVMeQueuesReInit.c)
 * Callees:
 *     memset @ 0x1400314C0 (memset.c)
 */

void *__fastcall CompletionQueueReInit(__int64 a1, __int64 a2)
{
  int v2; // eax
  void *v3; // rcx
  void *result; // rax
  int v5; // eax

  *(_DWORD *)(a2 + 170) = 0;
  if ( *(_WORD *)(a2 + 168) )
  {
    v2 = *(unsigned __int16 *)(a1 + 326);
    v3 = *(void **)a2;
    result = (void *)((unsigned int)(16 * v2) >> 2);
    if ( !(_DWORD)result )
      return result;
    return memset(v3, 0, 4LL * (unsigned int)result);
  }
  v5 = *(unsigned __int16 *)(a1 + 324);
  v3 = *(void **)a2;
  result = (void *)((unsigned int)(16 * v5) >> 2);
  if ( (_DWORD)result )
    return memset(v3, 0, 4LL * (unsigned int)result);
  return result;
}
