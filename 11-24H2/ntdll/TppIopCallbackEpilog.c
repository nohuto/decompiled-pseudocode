/*
 * XREFs of TppIopCallbackEpilog @ 0x18004E2E0
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x18004E380 (TppCleanupGroupMemberDestroy.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

signed __int32 __fastcall TppIopCallbackEpilog(__int64 a1)
{
  signed __int32 result; // eax
  LOGICAL (__fastcall *v3)(void *); // rax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( result == 1 )
  {
    v3 = **(LOGICAL (__fastcall ***)(void *))(a1 + 8);
    if ( (char *)v3 == (char *)TppSimplepFree )
    {
      TppCleanupGroupMemberDestroy(a1);
      return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, (PVOID)a1);
    }
    else if ( (char *)v3 == (char *)TppAlpcpFree )
    {
      return TppAlpcpFree(a1);
    }
    else if ( v3 == TppWorkpFree )
    {
      return TppWorkpFree((void *)a1);
    }
    else
    {
      return v3((void *)a1);
    }
  }
  return result;
}
