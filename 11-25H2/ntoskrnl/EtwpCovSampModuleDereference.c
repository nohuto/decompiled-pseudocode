/*
 * XREFs of EtwpCovSampModuleDereference @ 0x14090D03C
 * Callers:
 *     EtwpCovSampProcessRemoveModule @ 0x14090BB08 (EtwpCovSampProcessRemoveModule.c)
 *     EtwpCovSampImageNotify @ 0x14090C0A0 (EtwpCovSampImageNotify.c)
 *     EtwpCovSampProcessCleanup @ 0x14090E2F0 (EtwpCovSampProcessCleanup.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall EtwpCovSampModuleDereference(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 result; // rax

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 64), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  result = v2 - 1;
  if ( v3 )
  {
    if ( result )
      __fastfail(0xEu);
  }
  else if ( result == 1 && !*(_DWORD *)(a2 + 132) )
  {
    if ( a1 )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 1636));
  }
  return result;
}
