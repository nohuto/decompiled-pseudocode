/*
 * XREFs of TppIopCallbackEpilog @ 0x1800432B0
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x180043EC0 (TppCleanupGroupMemberDestroy.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

signed __int32 __fastcall TppIopCallbackEpilog(__int64 a1)
{
  signed __int32 result; // eax
  __int64 (__fastcall *v3)(); // rax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( result == 1 )
  {
    v3 = **(__int64 (__fastcall ***)())(a1 + 8);
    if ( v3 == TppSimplepFree )
    {
      TppCleanupGroupMemberDestroy(a1);
      return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, (PVOID)a1);
    }
    else if ( (char *)v3 == (char *)TppAlpcpFree )
    {
      return TppAlpcpFree(a1);
    }
    else if ( (char *)v3 == (char *)TppWorkpFree )
    {
      return TppWorkpFree((void *)a1);
    }
    else
    {
      return ((__int64 (__fastcall *)(__int64))v3)(a1);
    }
  }
  return result;
}
