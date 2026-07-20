/*
 * XREFs of SmpGetMuSessionIdFromClientContext @ 0x140009A30
 * Callers:
 *     SmpLoadDeferredSubsystem @ 0x140016C40 (SmpLoadDeferredSubsystem.c)
 * Callees:
 *     SmpGetProcessMuSessionId @ 0x140007D90 (SmpGetProcessMuSessionId.c)
 */

__int64 __fastcall SmpGetMuSessionIdFromClientContext(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  result = 0LL;
  v5 = 0;
  if ( (*(_DWORD *)a1 & 0x10) != 0 )
  {
    result = *(unsigned int *)(v2 + 64);
    *a2 = *(_QWORD *)(v2 + 32);
  }
  else
  {
    if ( (*(_DWORD *)a1 & 8) != 0 )
    {
      result = *(unsigned int *)(v2 + 8);
      v2 = *(_QWORD *)(v2 + 48);
    }
    else if ( v2 )
    {
      if ( (int)SmpGetProcessMuSessionId((void *)v2, &v5) >= 0 )
      {
        result = v5;
      }
      else
      {
        result = 0LL;
        v2 = 0LL;
      }
    }
    *a2 = v2;
  }
  return result;
}
