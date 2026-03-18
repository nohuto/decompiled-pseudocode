/*
 * XREFs of vGetLastBootTimeStatus @ 0x140115EFC
 * Callers:
 *     InitFNTCache @ 0x140115854 (InitFNTCache.c)
 * Callees:
 *     bQueryFntCacheReg @ 0x1401161F4 (bQueryFntCacheReg.c)
 */

__int64 __fastcall vGetLastBootTimeStatus(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  *(_DWORD *)(*(_QWORD *)(v3 + 19600) + 12LL) = 0;
  if ( (unsigned int)bQueryFntCacheReg(*(HANDLE *)(v3 + 19616)) )
    *(_DWORD *)(*(_QWORD *)(v3 + 19600) + 12LL) = 0;
  v4 = *(_QWORD *)(v3 + 19600);
  result = *(unsigned int *)(v4 + 12);
  *(_DWORD *)(v4 + 16) = result;
  return result;
}
