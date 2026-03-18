/*
 * XREFs of EditionIsGetAsyncKeyStateBlocked @ 0x1C00E9560
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 EditionIsGetAsyncKeyStateBlocked()
{
  struct tagTHREADINFO *v0; // rdi
  unsigned int v1; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v3; // r8

  v0 = PtiCurrentShared();
  if ( *((_QWORD *)v0 + 57) != grpdeskRitInput )
    return 1LL;
  v1 = 0;
  if ( gptiForeground )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(gptiForeground);
    v3 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v3 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( v3 == *(_QWORD *)(gptiForeground + 424LL) )
      return 0LL;
  }
  LOBYTE(v1) = RtlAreAnyAccessesGranted(*((_DWORD *)v0 + 224), 0x18u) == 0;
  return v1;
}
