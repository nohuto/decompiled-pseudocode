/*
 * XREFs of PopProcessorQueryPlatformStateNotification @ 0x140488510
 * Callers:
 *     <none>
 * Callees:
 *     PopTranslateDependencyArray @ 0x1404885C8 (PopTranslateDependencyArray.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopProcessorQueryPlatformStateNotification(__int64 a1, ULONG_PTR a2, char a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  ULONG_PTR v5; // rsi
  __int64 v7; // r14
  __int64 v8; // rax

  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 72);
  if ( v3 && *(_QWORD *)(v3 + 104) )
  {
    v7 = a2 + 40;
    if ( (unsigned __int8)guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 72), a3 != 0 ? 22 : 19) )
    {
      v8 = *(_QWORD *)(a2 + 8);
      if ( v8 )
        *(_QWORD *)(a2 + 8) = *(_QWORD *)(v8 + 192);
      PopTranslateDependencyArray(v5, a2, *(_DWORD *)(a2 + 28), v7);
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
  return v4;
}
