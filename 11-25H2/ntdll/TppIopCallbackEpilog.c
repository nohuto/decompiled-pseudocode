/*
 * XREFs of TppIopCallbackEpilog @ 0x1800432B0
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x180043EC0 (TppCleanupGroupMemberDestroy.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TppIopCallbackEpilog(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 (__fastcall *v5)(__int64); // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    v5 = **(__int64 (__fastcall ***)(__int64))(a1 + 8);
    if ( (char *)v5 == (char *)TppSimplepFree )
    {
      TppCleanupGroupMemberDestroy(a1);
      return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x200000), a1);
    }
    else if ( (char *)v5 == (char *)TppAlpcpFree )
    {
      return TppAlpcpFree(a1, a2, a3);
    }
    else if ( v5 == TppWorkpFree )
    {
      return TppWorkpFree(a1);
    }
    else
    {
      return v5(a1);
    }
  }
  return result;
}
