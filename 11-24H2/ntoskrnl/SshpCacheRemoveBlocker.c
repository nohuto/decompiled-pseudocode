/*
 * XREFs of SshpCacheRemoveBlocker @ 0x140A36E84
 * Callers:
 *     SleepstudyHelperDestroyLibrary @ 0x140767890 (SleepstudyHelperDestroyLibrary.c)
 *     SshpUnlinkBlockerFromLibrary @ 0x140A36E28 (SshpUnlinkBlockerFromLibrary.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1403E4330 (RtlDeleteElementGenericTableAvl.c)
 */

char __fastcall SshpCacheRemoveBlocker(__int64 a1, __int64 a2)
{
  _UNKNOWN **v2; // rax
  _DWORD v4[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v2 = &retaddr;
  if ( *(_DWORD *)(a1 + 44) )
  {
    v4[1] = 0;
    v5 = a2;
    v4[0] = 1;
    LOBYTE(v2) = RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 48), v4);
  }
  return (char)v2;
}
