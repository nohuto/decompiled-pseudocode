/*
 * XREFs of HvpDetermineFinalViewReservationEnd @ 0x140967BE4
 * Callers:
 *     HvpViewMapCreateViewsForRegion @ 0x140967F8C (HvpViewMapCreateViewsForRegion.c)
 * Callees:
 *     CmSiGetMemoryAllocationGranularity @ 0x1404A375C (CmSiGetMemoryAllocationGranularity.c)
 */

__int64 __fastcall HvpDetermineFinalViewReservationEnd(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 i; // r10
  __int64 v6; // r11
  __int64 j; // rdx
  __int64 result; // rax

  for ( i = CmSiGetMemoryAllocationGranularity(); i < v3 - v2; i *= 2LL )
    ;
  for ( j = 2 * i; v6 + j - v3 <= v3 / 8; j *= 2LL )
    i = j;
  if ( i >= v4 )
    i = v4;
  result = i + v6;
  if ( (*(_DWORD *)(a1 + 32) & 1) != 0 && result >= *(_QWORD *)(a1 + 16) )
    return *(_QWORD *)(a1 + 16);
  return result;
}
