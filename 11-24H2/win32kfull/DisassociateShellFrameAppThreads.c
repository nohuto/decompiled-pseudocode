/*
 * XREFs of DisassociateShellFrameAppThreads @ 0x14018E304
 * Callers:
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x14018DF04 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     PatchThreadWindows @ 0x1402B4D00 (PatchThreadWindows.c)
 * Callees:
 *     ?FindShellFrameAppThreadsAssociation@@YAPEAU_THREADSASSOCIATION@@PEAUtagTHREADINFO@@@Z @ 0x14018E358 (-FindShellFrameAppThreadsAssociation@@YAPEAU_THREADSASSOCIATION@@PEAUtagTHREADINFO@@@Z.c)
 */

struct _THREADSASSOCIATION *__fastcall DisassociateShellFrameAppThreads(struct tagTHREADINFO *a1)
{
  struct tagTHREADINFO *i; // rbx
  struct _THREADSASSOCIATION *result; // rax
  __int64 v3; // rdx
  struct _THREADSASSOCIATION **v4; // rcx

  for ( i = a1; ; a1 = i )
  {
    result = FindShellFrameAppThreadsAssociation(a1);
    if ( !result )
      break;
    v3 = *(_QWORD *)result;
    if ( *(struct _THREADSASSOCIATION **)(*(_QWORD *)result + 8LL) != result
      || (v4 = (struct _THREADSASSOCIATION **)*((_QWORD *)result + 1), *v4 != result) )
    {
      __fastfail(3u);
    }
    *v4 = (struct _THREADSASSOCIATION *)v3;
    *(_QWORD *)(v3 + 8) = v4;
    Win32FreePool(result);
  }
  return result;
}
