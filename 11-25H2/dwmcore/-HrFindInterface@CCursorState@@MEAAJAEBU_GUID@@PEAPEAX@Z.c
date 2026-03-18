/*
 * XREFs of ?HrFindInterface@CCursorState@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802BC6A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCursorState::HrFindInterface(CCursorState *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rax

  v3 = 0;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b8e581a0_f45a_41f7_8a55_00964d427dd0.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b8e581a0_f45a_41f7_8a55_00964d427dd0.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b8e581a0_f45a_41f7_8a55_00964d427dd0.Data4;
  if ( v4 )
    return (unsigned int)-2147467262;
  else
    *a3 = this;
  return v3;
}
