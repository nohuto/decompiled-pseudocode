/*
 * XREFs of KeRundownSecureProcess @ 0x1405B59F8
 * Callers:
 *     PspRundownSingleProcess @ 0x1408FED98 (PspRundownSingleProcess.c)
 * Callees:
 *     VslRundownSecureProcess @ 0x14070DE8C (VslRundownSecureProcess.c)
 */

__int64 __fastcall KeRundownSecureProcess(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 368) )
    return VslRundownSecureProcess();
  return result;
}
