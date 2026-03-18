/*
 * XREFs of ?HrFindInterface@CDDASwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802C8510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDASwapChain::HrFindInterface(CDDASwapChain *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    result = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data1 )
      result = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data4;
    if ( result )
      return 2147500034LL;
    else
      *a3 = this;
  }
  return result;
}
