/*
 * XREFs of PopPluginComponentActive @ 0x1402BC504
 * Callers:
 *     PopFxActivateComponentDependents @ 0x14034C650 (PopFxActivateComponentDependents.c)
 * Callees:
 *     PopPepProcessEvent @ 0x1402BD780 (PopPepProcessEvent.c)
 *     PopFxBugCheck @ 0x14034E260 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall PopPluginComponentActive(__int64 a1, unsigned int a2, char a3, void *a4)
{
  __int64 v4; // r14
  __int64 v8; // rdi
  __int64 v9; // rax
  ULONG_PTR v10; // rbp
  __int64 v11; // rax
  __int64 result; // rax
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int128 v14; // [rsp+40h] [rbp-18h]

  v4 = a2;
  if ( a4 )
    memset_0(a4, 0, 0x40uLL);
  v8 = *(_QWORD *)(a1 + 56);
  if ( *(_BYTE *)(v8 + 124) )
  {
    v9 = *(_QWORD *)(v8 + 32);
    v13 = 0LL;
    DWORD2(v13) = v4;
    v10 = *(_QWORD *)(v9 + 64);
    v11 = *(_QWORD *)(v9 + 72);
    v14 = 0LL;
    *(_QWORD *)&v13 = v11;
    BYTE12(v13) = a3;
    BYTE8(v14) = 0;
    if ( (unsigned __int8)guard_dispatch_icall_no_overrides(7LL, &v13) )
    {
      if ( BYTE8(v14) )
        PopFxBugCheck(0x612uLL, v10, 0LL, 0LL);
    }
  }
  result = PopPepProcessEvent(v8, v8 + 208 * v4 + 192, a3 != 0 ? 6 : 3, a3 != 0 ? 2 : 6);
  if ( (_BYTE)result )
  {
    if ( !a4 )
      PopFxBugCheck(0x612uLL, 0LL, 0LL, 0LL);
  }
  return result;
}
