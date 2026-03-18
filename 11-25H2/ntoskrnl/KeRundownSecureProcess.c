/*
 * XREFs of KeRundownSecureProcess @ 0x1405B4528
 * Callers:
 *     PspRundownSingleProcess @ 0x1408E0448 (PspRundownSingleProcess.c)
 * Callees:
 *     VslRundownSecureProcess @ 0x1407041FC (VslRundownSecureProcess.c)
 */

__int64 __fastcall KeRundownSecureProcess(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 368) )
    return VslRundownSecureProcess();
  return result;
}
