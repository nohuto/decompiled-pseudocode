/*
 * XREFs of HalpMcaPopulateErrorDataEx @ 0x14053D66C
 * Callers:
 *     HalpMcaPopulateErrorData @ 0x14053D48C (HalpMcaPopulateErrorData.c)
 * Callees:
 *     HalpWheaReadMsrMisc @ 0x14047807C (HalpWheaReadMsrMisc.c)
 *     HalpWheaReadMsrAddress @ 0x140551EC0 (HalpWheaReadMsrAddress.c)
 */

_UNKNOWN **__fastcall HalpMcaPopulateErrorDataEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  _UNKNOWN **result; // rax
  unsigned int v8; // r14d
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v8 = a2;
  if ( a5 < 0x20 )
  {
    ++*(_DWORD *)(a4 + 292);
    *(_DWORD *)(a4 + 4LL * a5 + 296) = a2;
    *(_QWORD *)(a4 + 8LL * a5 + 424) = a3;
    if ( (a3 & 0x400000000000000LL) != 0 )
    {
      result = (_UNKNOWN **)HalpWheaReadMsrAddress(a1, a2);
      *(_QWORD *)(a4 + 8LL * a5 + 680) = result;
    }
    if ( (a3 & 0x800000000000000LL) != 0 )
    {
      if ( HalpMcaMiscImplemented )
      {
        result = (_UNKNOWN **)HalpWheaReadMsrMisc(a1, v8);
        *(_QWORD *)(a4 + 8LL * a5 + 936) = result;
      }
    }
  }
  return result;
}
