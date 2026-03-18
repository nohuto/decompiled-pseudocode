/*
 * XREFs of ?HrFindInterface@CBrush@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801EB2F0
 * Callers:
 *     ?HrFindInterface@CMaskBrush@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004B7D0 (-HrFindInterface@CMaskBrush@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBrush::HrFindInterface(CBrush *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_dcb0a0af_cd0d_426f_8ccb_326c78eb4a27.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_dcb0a0af_cd0d_426f_8ccb_326c78eb4a27.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_dcb0a0af_cd0d_426f_8ccb_326c78eb4a27.Data4;
    if ( v4 )
    {
      return 2147500034LL;
    }
    else
    {
      *a3 = (void *)(((unsigned __int64)this + 72) & -(__int64)(this != 0LL));
      return 0LL;
    }
  }
  return result;
}
