/*
 * XREFs of ?HrFindInterface@COverlaySwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B4700
 * Callers:
 *     ?HrFindInterface@CScribbleSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B4530 (-HrFindInterface@CScribbleSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseWeakRefSource@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B45A0 (-InternalQueryInterface@-$CMILCOMBaseWeakRefSource@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall COverlaySwapChain::HrFindInterface(COverlaySwapChain *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data4;
    if ( !v4 )
      goto LABEL_8;
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2c1fe8d2_95c7_47a6_865f_9c56f4e898cc.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2c1fe8d2_95c7_47a6_865f_9c56f4e898cc.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2c1fe8d2_95c7_47a6_865f_9c56f4e898cc.Data4;
    if ( v5 )
    {
      return 2147500034LL;
    }
    else
    {
LABEL_8:
      *a3 = (void *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
      return 0LL;
    }
  }
  return result;
}
