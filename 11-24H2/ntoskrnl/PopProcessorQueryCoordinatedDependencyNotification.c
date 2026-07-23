/*
 * XREFs of PopProcessorQueryCoordinatedDependencyNotification @ 0x1405CFF40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopProcessorQueryCoordinatedDependencyNotification(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v5; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  if ( v2 && *(_QWORD *)(v2 + 104) )
  {
    if ( (unsigned __int8)guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 72), 30LL) )
    {
      v5 = *(_QWORD *)(a2 + 16);
      if ( v5 )
        *(_QWORD *)(a2 + 16) = *(_QWORD *)(v5 + 192);
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
  return v3;
}
