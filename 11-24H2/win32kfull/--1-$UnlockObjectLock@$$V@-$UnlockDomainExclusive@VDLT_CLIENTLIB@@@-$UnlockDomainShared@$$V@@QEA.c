/*
 * XREFs of ??1?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@VDLT_CLIENTLIB@@@?$UnlockDomainShared@$$V@@QEAA@XZ @ 0x140178818
 * Callers:
 *     xxxLoadHmodIndex @ 0x140082390 (xxxLoadHmodIndex.c)
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x140082B90 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 *     xxxDoSysExpunge @ 0x1401785EC (xxxDoSysExpunge.c)
 *     ?xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z @ 0x140287804 (-xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall UnlockDomainShared<>::UnlockDomainExclusive<DLT_CLIENTLIB>::UnlockObjectLock<>::~UnlockObjectLock<>(
        __int64 a1)
{
  __int64 v1; // rbx
  int v2; // edi
  tagDomLock *v3; // rcx

  v1 = a1;
  if ( *(_BYTE *)(a1 + 40) )
  {
    v2 = 0;
    do
    {
      v3 = *(tagDomLock **)v1;
      if ( *(_QWORD *)v1 )
      {
        if ( *(_BYTE *)(v1 + 8) )
          tagDomLock::LockExclusive(v3);
        else
          tagDomLock::LockShared(v3);
      }
      ++v2;
      v1 += 16LL;
    }
    while ( !v2 );
  }
}
