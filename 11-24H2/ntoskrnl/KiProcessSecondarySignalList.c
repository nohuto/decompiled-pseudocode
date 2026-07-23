/*
 * XREFs of KiProcessSecondarySignalList @ 0x1405B9C90
 * Callers:
 *     <none>
 * Callees:
 *     KiProcessDisconnectList @ 0x1403AE80C (KiProcessDisconnectList.c)
 *     KiAcquireSecondarySignalListLock @ 0x1405B9C38 (KiAcquireSecondarySignalListLock.c)
 *     KiReleaseSecondarySignalListLock @ 0x1405B9D68 (KiReleaseSecondarySignalListLock.c)
 */

void __fastcall KiProcessSecondarySignalList(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 **v4; // rcx
  __int64 v5; // rax
  unsigned __int8 v6[8]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v7; // [rsp+28h] [rbp-18h] BYREF
  __int64 **v8; // [rsp+30h] [rbp-10h]

  v6[0] = 0;
  v8 = (__int64 **)&v7;
  v7 = (__int64)&v7;
  KiAcquireSecondarySignalListLock(v6);
  if ( (__int64 *)KiSecondarySignalList != &KiSecondarySignalList )
  {
    v4 = v8;
    if ( *(__int64 **)(v7 + 8) != &v7
      || *v8 != &v7
      || *(__int64 **)(KiSecondarySignalList + 8) != &KiSecondarySignalList
      || *(__int64 **)qword_140F10518 != &KiSecondarySignalList
      || (*v8 = &KiSecondarySignalList,
          v8 = (__int64 **)qword_140F10518,
          *(_QWORD *)qword_140F10518 = &v7,
          v5 = KiSecondarySignalList,
          qword_140F10518 = (__int64)v4,
          *(__int64 **)(KiSecondarySignalList + 8) != &KiSecondarySignalList)
      || *v4 != &KiSecondarySignalList )
    {
      __fastfail(3u);
    }
    *v4 = (__int64 *)KiSecondarySignalList;
    *(_QWORD *)(v5 + 8) = v4;
    qword_140F10518 = (__int64)&KiSecondarySignalList;
    KiSecondarySignalList = (__int64)&KiSecondarySignalList;
  }
  LOBYTE(v4) = v6[0];
  KiSecondarySignalDpcRunning = 0;
  KiReleaseSecondarySignalListLock(v4);
  KiProcessDisconnectList(&v7);
}
