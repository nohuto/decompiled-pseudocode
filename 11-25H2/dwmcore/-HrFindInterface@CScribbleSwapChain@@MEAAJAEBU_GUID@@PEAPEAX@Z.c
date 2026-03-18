/*
 * XREFs of ?HrFindInterface@CScribbleSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B4530
 * Callers:
 *     ?HrFindInterface@CConversionSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18022F5E0 (-HrFindInterface@CConversionSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?HrFindInterface@COverlaySwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B4700 (-HrFindInterface@COverlaySwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CScribbleSwapChain::HrFindInterface(CScribbleSwapChain *this, const struct _GUID *a2, void **a3)
{
  unsigned int v4; // ecx
  __int64 v5; // rcx

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_78f95c0d_ffd7_47bf_b918_8d28789a139f.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_78f95c0d_ffd7_47bf_b918_8d28789a139f.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_78f95c0d_ffd7_47bf_b918_8d28789a139f.Data4;
    if ( v5 || *((int *)this + 68) < 1 )
    {
      return (unsigned int)COverlaySwapChain::HrFindInterface(this, a2, a3);
    }
    else
    {
      *a3 = (void *)(((unsigned __int64)this + 256) & -(__int64)(this != 0LL));
      return 0;
    }
  }
  return v4;
}
