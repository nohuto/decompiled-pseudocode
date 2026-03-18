/*
 * XREFs of ?HrFindInterface@CSurfaceBrush@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801FDEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSurfaceBrush::HrFindInterface(CSurfaceBrush *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c155b649_2c5b_416a_b836_bbda56b2ec27.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c155b649_2c5b_416a_b836_bbda56b2ec27.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c155b649_2c5b_416a_b836_bbda56b2ec27.Data4;
    if ( v5 )
    {
      v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_dcb0a0af_cd0d_426f_8ccb_326c78eb4a27.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_dcb0a0af_cd0d_426f_8ccb_326c78eb4a27.Data1 )
        v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_dcb0a0af_cd0d_426f_8ccb_326c78eb4a27.Data4;
      if ( v7 )
        return 2147500034LL;
      v6 = (unsigned __int64)this + 72;
    }
    else
    {
      v6 = (unsigned __int64)this + 104;
    }
    *a3 = (void *)(v6 & -(__int64)(this != 0LL));
    return 0LL;
  }
  return result;
}
