/*
 * XREFs of RtlInternEntryDereference @ 0x14099C800
 * Callers:
 *     PopEtEnergyContextCleanup @ 0x14099B510 (PopEtEnergyContextCleanup.c)
 *     PopEtEnergyContextSetState @ 0x14099BAF0 (PopEtEnergyContextSetState.c)
 *     PopEtAggregateKeyCleanup @ 0x14099BE60 (PopEtAggregateKeyCleanup.c)
 *     PopEtAppIdDereference @ 0x14099BEA8 (PopEtAppIdDereference.c)
 *     PopEtStringSet @ 0x14099BF40 (PopEtStringSet.c)
 *     PopEtProcessSnapshotUpdateFromSnapshotContext @ 0x14099C6E8 (PopEtProcessSnapshotUpdateFromSnapshotContext.c)
 *     PopEtProcessSnapshotCreate @ 0x14099D018 (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PopEtInternerUnlock @ 0x14099C9D0 (PopEtInternerUnlock.c)
 *     PopEtInternerFree @ 0x14099C9F0 (PopEtInternerFree.c)
 *     PopEtInternerLock @ 0x14099CA10 (PopEtInternerLock.c)
 */

__int64 __fastcall RtlInternEntryDereference(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *i; // rdx
  __int64 v6; // [rsp+38h] [rbp+10h]

  result = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 16));
  if ( result <= 0 )
  {
    if ( result )
      __fastfail(0xEu);
    if ( *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a1 + 16) + 16LL) == PopEtInternerLock )
      PopEtInternerLock(a1, 0LL);
    else
      guard_dispatch_icall_no_overrides(a1, 0LL);
    v6 = *(_QWORD *)(a2 + 8) & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
    for ( i = (_QWORD *)(*(_QWORD *)(a1 + 8)
                       + 8LL
                       * ((37
                         * (BYTE6(v6)
                          + 37
                          * (BYTE5(v6)
                           + 37
                           * (BYTE4(v6)
                            + 37
                            * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883)))))))
                         + HIBYTE(v6)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1))); (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( *i == a2 )
      {
        *i = *(_QWORD *)a2;
        --*(_DWORD *)a1;
        *(_QWORD *)a2 |= 0x8000000000000002uLL;
        break;
      }
    }
    if ( *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a1 + 16) + 24LL) == PopEtInternerUnlock )
      PopEtInternerUnlock(a1, 0LL);
    else
      guard_dispatch_icall_no_overrides(a1, 0LL);
    if ( *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a1 + 16) + 8LL) == PopEtInternerFree )
      return PopEtInternerFree(a1, a2);
    else
      return guard_dispatch_icall_no_overrides(a1, a2);
  }
  return result;
}
