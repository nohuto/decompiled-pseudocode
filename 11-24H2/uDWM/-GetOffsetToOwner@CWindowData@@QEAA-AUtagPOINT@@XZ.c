/*
 * XREFs of ?GetOffsetToOwner@CWindowData@@QEAA?AUtagPOINT@@XZ @ 0x18003E370
 * Callers:
 *     ?OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18003E2CC (-OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct tagPOINT __fastcall CWindowData::GetOffsetToOwner(CWindowData *this, __int64 a2)
{
  __int64 v2; // r8

  v2 = *((_QWORD *)this + 75);
  *(_QWORD *)a2 = 0LL;
  if ( v2 )
  {
    *(_DWORD *)a2 = *((_DWORD *)this + 12) - *(_DWORD *)(v2 + 48);
    *(_DWORD *)(a2 + 4) = *((_DWORD *)this + 13) - *(_DWORD *)(v2 + 52);
  }
  return (struct tagPOINT)a2;
}
