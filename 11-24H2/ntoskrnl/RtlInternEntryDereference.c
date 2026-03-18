/*
 * XREFs of RtlInternEntryDereference @ 0x140905B7C
 * Callers:
 *     PopEtEnergyContextCleanup @ 0x14090488C (PopEtEnergyContextCleanup.c)
 *     PopEtEnergyContextSetState @ 0x140904E6C (PopEtEnergyContextSetState.c)
 *     PopEtAggregateKeyCleanup @ 0x1409051DC (PopEtAggregateKeyCleanup.c)
 *     PopEtAppIdDereference @ 0x140905224 (PopEtAppIdDereference.c)
 *     PopEtStringSet @ 0x1409052BC (PopEtStringSet.c)
 *     PopEtProcessSnapshotUpdateFromSnapshotContext @ 0x140905A64 (PopEtProcessSnapshotUpdateFromSnapshotContext.c)
 *     PopEtProcessSnapshotCreate @ 0x140906398 (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopEtInternerUnlock @ 0x140905D50 (PopEtInternerUnlock.c)
 *     PopEtInternerFree @ 0x140905D70 (PopEtInternerFree.c)
 *     PopEtInternerLock @ 0x140905D90 (PopEtInternerLock.c)
 */

__int64 __fastcall RtlInternEntryDereference(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // r9
  __int64 v8; // r8
  _QWORD *i; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // [rsp+38h] [rbp+10h]

  result = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 16));
  if ( result <= 0 )
  {
    if ( result )
      __fastfail(0xEu);
    if ( *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a1 + 16) + 16LL) == PopEtInternerLock )
      PopEtInternerLock(a1, 0LL);
    else
      guard_dispatch_icall_no_overrides(a1, 0LL, a3, a4);
    v7 = *(_DWORD *)(a1 + 4) >> 5;
    v12 = *(_QWORD *)(a2 + 8) & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
    v8 = 37
       * (BYTE6(v12)
        + 37
        * (BYTE5(v12)
         + 37
         * (BYTE4(v12)
          + 37 * (BYTE3(v12) + 37 * (BYTE2(v12) + 37 * (BYTE1(v12) + 37 * ((unsigned __int8)v12 + 11623883LL)))))));
    for ( i = (_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (((_DWORD)v8 + HIBYTE(v12)) & (unsigned int)(v7 - 1)));
          (*i & 1) == 0;
          i = (_QWORD *)*i )
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
      guard_dispatch_icall_no_overrides(a1, 0LL, v8, v7);
    if ( *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a1 + 16) + 8LL) == PopEtInternerFree )
      return PopEtInternerFree(a1, a2);
    else
      return guard_dispatch_icall_no_overrides(a1, a2, v10, v11);
  }
  return result;
}
