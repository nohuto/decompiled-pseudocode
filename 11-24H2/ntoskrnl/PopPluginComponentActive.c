/*
 * XREFs of PopPluginComponentActive @ 0x1402C0850
 * Callers:
 *     PopFxActivateComponentWorker @ 0x1402AE658 (PopFxActivateComponentWorker.c)
 *     PopFxActivateComponentDependents @ 0x1403A91E0 (PopFxActivateComponentDependents.c)
 *     PopFxIdleWorkerTail @ 0x1404E22FC (PopFxIdleWorkerTail.c)
 * Callees:
 *     PopPepProcessEvent @ 0x1402C0980 (PopPepProcessEvent.c)
 *     PopFxBugCheck @ 0x1403A9948 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall PopPluginComponentActive(__int64 a1, unsigned int a2, char a3, void *a4)
{
  __int64 v4; // rbp
  __int64 v8; // rbx
  __int64 v9; // rax
  ULONG_PTR v10; // r14
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 result; // rax
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  __int128 v15; // [rsp+40h] [rbp-18h]

  v4 = a2;
  if ( a4 )
    memset_0(a4, 0, 0x40uLL);
  v8 = *(_QWORD *)(a1 + 56);
  if ( *(_BYTE *)(v8 + 124) )
  {
    v9 = *(_QWORD *)(v8 + 32);
    v14 = 0LL;
    DWORD2(v14) = v4;
    v10 = *(_QWORD *)(v9 + 64);
    *(_QWORD *)&v14 = *(_QWORD *)(v9 + 72);
    BYTE12(v14) = a3;
    v15 = 0LL;
    BYTE8(v15) = 0;
    if ( (unsigned __int8)guard_dispatch_icall_no_overrides(7LL, &v14) )
    {
      if ( BYTE8(v15) )
        PopFxBugCheck(0x612uLL, v10, 0LL, 0LL);
    }
  }
  v11 = 6LL;
  v12 = 3LL;
  if ( a3 )
  {
    v12 = 6LL;
    v11 = 2LL;
  }
  result = PopPepProcessEvent(v8, v8 + 208 * v4 + 192, v12, v11);
  if ( (_BYTE)result )
  {
    if ( !a4 )
      PopFxBugCheck(0x612uLL, 0LL, 0LL, 0LL);
  }
  return result;
}
