/*
 * XREFs of KeRundownSecureProcess @ 0x1405B8418
 * Callers:
 *     PspRundownSingleProcess @ 0x1408A8B38 (PspRundownSingleProcess.c)
 * Callees:
 *     VslRundownSecureProcess @ 0x1407102FC (VslRundownSecureProcess.c)
 */

__int64 __fastcall KeRundownSecureProcess(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 368) )
    return VslRundownSecureProcess();
  return result;
}
