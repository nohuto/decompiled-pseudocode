/*
 * XREFs of _PostQuitMessage @ 0x1401BC740
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x14002E8AC (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     NtUserPostQuitMessage @ 0x1401BC700 (NtUserPostQuitMessage.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IPostQuitMessage @ 0x1401BC764 (IPostQuitMessage.c)
 */

__int64 __fastcall PostQuitMessage(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  struct tagTHREADINFO *v3; // rax

  v2 = a1;
  v3 = PtiCurrent(a1, a2);
  return IPostQuitMessage(v3, v2);
}
