/*
 * XREFs of HvlEnableVsmCalls @ 0x140C5D014
 * Callers:
 *     KiInitializeBootStructures @ 0x140B580C0 (KiInitializeBootStructures.c)
 * Callees:
 *     HvlpTryConfigureInterface @ 0x14058B81C (HvlpTryConfigureInterface.c)
 *     HvlpGetVtlCallVa @ 0x1406A0B30 (HvlpGetVtlCallVa.c)
 *     VslBindNtIum @ 0x140C199BC (VslBindNtIum.c)
 */

__int64 __fastcall HvlEnableVsmCalls(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 240);
  if ( (*(_DWORD *)(result + 132) & 0x100) != 0 )
  {
    result = HvlpTryConfigureInterface(a1);
    if ( (int)result >= 0 )
    {
      HvlpGetVtlCallVa();
      return VslBindNtIum();
    }
  }
  return result;
}
