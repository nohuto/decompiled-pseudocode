/*
 * XREFs of ?RemoveNotify@@YAXPEAUtagNOTIFY@@@Z @ 0x1C0010150
 * Callers:
 *     FreeThreadsWinEvents @ 0x1C006FFE0 (FreeThreadsWinEvents.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00794C0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     xxxProcessNotifyWinEvent @ 0x1C00F16EC (xxxProcessNotifyWinEvent.c)
 *     ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x1C01BF1E0 (-CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z.c)
 *     xxxProcessTSFEvent @ 0x1C01BF7F8 (xxxProcessTSFEvent.c)
 * Callees:
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C003FD28 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 */

void __fastcall RemoveNotify(struct tagNOTIFY ***a1)
{
  struct tagNOTIFY **v2; // rax
  struct tagNOTIFY **v3; // rcx

  if ( !tagDomLock::IsLockedExclusive(gDomainWinEventLock) )
    __int2c();
  v2 = *a1;
  if ( (*a1)[1] != (struct tagNOTIFY *)a1 || (v3 = a1[1], *v3 != (struct tagNOTIFY *)a1) )
    __fastfail(3u);
  *v3 = (struct tagNOTIFY *)v2;
  v2[1] = (struct tagNOTIFY *)v3;
  a1[1] = (struct tagNOTIFY **)a1;
  *a1 = (struct tagNOTIFY **)a1;
  if ( !*((_DWORD *)a1 + 6) )
    HMAssignmentUnlock(a1 + 2);
  if ( a1 == (struct tagNOTIFY ***)&qword_1C035F120 )
    dword_1C035E130 = 0;
  else
    Win32FreePool(a1);
}
