/*
 * XREFs of _ConvertMemHandle @ 0x1401EF21C
 * Callers:
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x140103AA8 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     NtUserConvertMemHandle @ 0x1401EF1B0 (NtUserConvertMemHandle.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B2678 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B281C (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall ConvertMemHandle(const void *a1, unsigned int a2, __int64 a3)
{
  size_t v3; // rdi
  __int64 v4; // r9
  __int64 v5; // rax
  _DWORD *v6; // rbx

  v3 = a2;
  v4 = a2 + 20;
  if ( (unsigned int)v4 < 0x18 )
    v4 = 24LL;
  if ( (unsigned int)v4 < a2 )
    return 0LL;
  LOBYTE(a3) = 6;
  v5 = HMAllocObject(0LL, 0LL, a3, v4);
  v6 = (_DWORD *)v5;
  if ( !v5 )
    return 0LL;
  HMLockObject(v5);
  v6[4] = v3;
  memmove(v6 + 5, a1, v3);
  return *(_QWORD *)v6;
}
