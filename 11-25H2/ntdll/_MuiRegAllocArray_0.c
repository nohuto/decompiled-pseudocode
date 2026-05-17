/*
 * XREFs of _MuiRegAllocArray_0 @ 0x180142B98
 * Callers:
 *     RtlpCleanupRegistryKeys @ 0x180140C60 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 */

__int64 __fastcall MuiRegAllocArray_0(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rcx

  result = 0LL;
  v3 = 8LL * a2;
  if ( v3 <= 0xFFFFFFFF )
  {
    if ( (_DWORD)v3 )
      return RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)v3);
  }
  return result;
}
