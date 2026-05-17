/*
 * XREFs of TpReleaseAlpcCompletion @ 0x180069EA0
 * Callers:
 *     <none>
 * Callees:
 *     TppWorkpFree @ 0x180020C20 (TppWorkpFree.c)
 *     TppAlpcpValidateAlpc @ 0x180069F4C (TppAlpcpValidateAlpc.c)
 *     TppCleanupGroupMemberRelease @ 0x18006A160 (TppCleanupGroupMemberRelease.c)
 *     TppSimplepFree @ 0x18006A2D0 (TppSimplepFree.c)
 *     TppAlpcpFree @ 0x18006C970 (TppAlpcpFree.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TpReleaseAlpcCompletion(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 (__fastcall *v4)(__int64); // rax
  __int64 v5; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  result = TppAlpcpValidateAlpc(a1, 1LL, 0LL);
  if ( (_DWORD)result )
  {
    result = TppCleanupGroupMemberRelease(a1 + 72, 1LL);
    if ( (_DWORD)result )
    {
      *(_QWORD *)(a1 + 256) = retaddr;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 72), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        v4 = **(__int64 (__fastcall ***)(__int64))(a1 + 80);
        if ( (char *)v4 == (char *)TppSimplepFree )
        {
          return TppSimplepFree(a1 + 72, v3);
        }
        else if ( v4 == TppAlpcpFree )
        {
          return TppAlpcpFree(a1 + 72);
        }
        else
        {
          v5 = a1 + 72;
          if ( v4 == TppWorkpFree )
            return TppWorkpFree(v5);
          else
            return v4(v5);
        }
      }
    }
  }
  return result;
}
