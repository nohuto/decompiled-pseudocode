/*
 * XREFs of TppIopCallbackEpilog @ 0x1800218E0
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x180021980 (TppCleanupGroupMemberDestroy.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TppIopCallbackEpilog(__int64 a1)
{
  __int64 result; // rax
  __int64 (__fastcall *v3)(__int64); // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    v3 = **(__int64 (__fastcall ***)(__int64))(a1 + 8);
    if ( (char *)v3 == (char *)TppSimplepFree )
    {
      TppCleanupGroupMemberDestroy(a1);
      return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x200000), a1);
    }
    else if ( v3 == TppAlpcpFree )
    {
      return TppAlpcpFree(a1);
    }
    else if ( v3 == TppWorkpFree )
    {
      return TppWorkpFree(a1);
    }
    else
    {
      return v3(a1);
    }
  }
  return result;
}
