/*
 * XREFs of SubmissionQueueReInit @ 0x14000CB10
 * Callers:
 *     NVMeQueuesReInit @ 0x14000C920 (NVMeQueuesReInit.c)
 * Callees:
 *     memset @ 0x1400314C0 (memset.c)
 */

void *__fastcall SubmissionQueueReInit(__int64 a1, __int64 a2)
{
  int v2; // eax
  void *v3; // rcx
  void *result; // rax
  int v5; // eax

  *(_DWORD *)(a2 + 52) = 0;
  *(_WORD *)(a2 + 56) = 0;
  *(_WORD *)(a2 + 136) = 0;
  if ( *(_WORD *)(a2 + 48) )
  {
    v2 = *(unsigned __int16 *)(a1 + 326);
    v3 = *(void **)a2;
    result = (void *)((unsigned int)(v2 << 6) >> 2);
    if ( !(_DWORD)result )
      return result;
    return memset(v3, 0, 4LL * (unsigned int)result);
  }
  v5 = *(unsigned __int16 *)(a1 + 324);
  v3 = *(void **)a2;
  result = (void *)((unsigned int)(v5 << 6) >> 2);
  if ( (_DWORD)result )
    return memset(v3, 0, 4LL * (unsigned int)result);
  return result;
}
