/*
 * XREFs of PopProcessorQueryCoordinatedDependencyNotification @ 0x1405D2820
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopProcessorQueryCoordinatedDependencyNotification(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v7; // rax

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  if ( v4 && *(_QWORD *)(v4 + 104) )
  {
    if ( (unsigned __int8)guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 72), 30LL, a2, a4) )
    {
      v7 = *(_QWORD *)(a2 + 16);
      if ( v7 )
        *(_QWORD *)(a2 + 16) = *(_QWORD *)(v7 + 192);
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
