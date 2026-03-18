/*
 * XREFs of PopProcessorQueryPlatformStateNotification @ 0x14048E040
 * Callers:
 *     <none>
 * Callees:
 *     PopTranslateDependencyArray @ 0x14048E0F8 (PopTranslateDependencyArray.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopProcessorQueryPlatformStateNotification(__int64 a1, ULONG_PTR a2, char a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  ULONG_PTR v6; // rsi
  __int64 v8; // r14
  __int64 v9; // rax

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 72);
  if ( v4 && *(_QWORD *)(v4 + 104) )
  {
    v8 = a2 + 40;
    if ( (unsigned __int8)guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 72), a3 != 0 ? 22 : 19, a2, a4) )
    {
      v9 = *(_QWORD *)(a2 + 8);
      if ( v9 )
        *(_QWORD *)(a2 + 8) = *(_QWORD *)(v9 + 192);
      PopTranslateDependencyArray(v6, a2, *(_DWORD *)(a2 + 28), v8);
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v5;
}
