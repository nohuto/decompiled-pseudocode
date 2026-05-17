/*
 * XREFs of RtlCheckRegistryKey @ 0x180085730
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetRegistryHandle @ 0x180085E98 (RtlpGetRegistryHandle.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 */

__int64 __fastcall RtlCheckRegistryKey(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 result; // rax
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  v2 = a1;
  result = RtlpGetRegistryHandle(a1, a2, 0LL, &Handle);
  if ( (int)result >= 0 )
  {
    if ( (v2 & 0x40000000) == 0 )
      NtClose(Handle);
    return 0LL;
  }
  return result;
}
