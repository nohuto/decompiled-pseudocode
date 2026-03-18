/*
 * XREFs of xxxClearWakeMask @ 0x140064880
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x14009E630 (NtUserMsgWaitForMultipleObjectsEx.c)
 *     NtUserClearWakeMask @ 0x140292EA0 (NtUserClearWakeMask.c)
 * Callees:
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x140064910 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall xxxClearWakeMask(__int64 a1, __int64 a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v3; // rbx
  __int64 result; // rax

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v3 = *CurrentThreadNonPaged;
  else
    v3 = 0LL;
  _InterlockedExchange(
    (volatile __int32 *)(*(_QWORD *)(v3 + 488) + 20LL),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  if ( !*(_DWORD *)(v3 + 1304) )
    xxxUpdateInputHangInfo(0LL, 1LL);
  result = 1LL;
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v3 + 488) + 16LL), 0);
  *(_QWORD *)(v3 + 1360) &= ~0x400uLL;
  return result;
}
