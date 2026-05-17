/*
 * XREFs of TpReleaseIoCompletion @ 0x1800D6CA0
 * Callers:
 *     <none>
 * Callees:
 *     TppIopValidateIo @ 0x1800D6D50 (TppIopValidateIo.c)
 *     TppCleanupGroupMemberRelease @ 0x1800D6DF0 (TppCleanupGroupMemberRelease.c)
 *     TppSimplepFree @ 0x1800D6F60 (TppSimplepFree.c)
 */

__int64 __fastcall TpReleaseIoCompletion(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 (__fastcall *v4)(__int64); // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  result = TppIopValidateIo(a1, 1LL);
  if ( (_DWORD)result )
  {
    result = TppCleanupGroupMemberRelease(a1, 1LL);
    if ( (_DWORD)result )
    {
      *(_QWORD *)(a1 + 184) = retaddr;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        v4 = **(__int64 (__fastcall ***)(__int64))(a1 + 8);
        if ( (char *)v4 == (char *)TppSimplepFree )
        {
          return TppSimplepFree(a1, v3);
        }
        else if ( (char *)v4 == (char *)TppAlpcpFree )
        {
          return TppAlpcpFree((_QWORD *)a1);
        }
        else if ( v4 == TppWorkpFree )
        {
          return TppWorkpFree(a1);
        }
        else
        {
          return v4(a1);
        }
      }
    }
  }
  return result;
}
