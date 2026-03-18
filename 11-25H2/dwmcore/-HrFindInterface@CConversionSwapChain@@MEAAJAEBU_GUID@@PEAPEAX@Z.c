/*
 * XREFs of ?HrFindInterface@CConversionSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18022F5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConversionSwapChain::HrFindInterface(CConversionSwapChain *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_cf12c0b8_aae0_4ef0_b8e3_97cd3b4d6f91.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_cf12c0b8_aae0_4ef0_b8e3_97cd3b4d6f91.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_cf12c0b8_aae0_4ef0_b8e3_97cd3b4d6f91.Data4;
    if ( v4 )
    {
      v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_78f95c0d_ffd7_47bf_b918_8d28789a139f.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_78f95c0d_ffd7_47bf_b918_8d28789a139f.Data1 )
        v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_78f95c0d_ffd7_47bf_b918_8d28789a139f.Data4;
      if ( v5 )
      {
        return CScribbleSwapChain::HrFindInterface(this, a2, a3);
      }
      else
      {
        *a3 = 0LL;
        return 2147500034LL;
      }
    }
    else
    {
      *a3 = (void *)(((unsigned __int64)this + 512) & -(__int64)(this != 0LL));
      return 0LL;
    }
  }
  return result;
}
