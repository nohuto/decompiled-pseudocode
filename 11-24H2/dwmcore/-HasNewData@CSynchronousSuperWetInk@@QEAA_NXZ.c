/*
 * XREFs of ?HasNewData@CSynchronousSuperWetInk@@QEAA_NXZ @ 0x1801A2BC4
 * Callers:
 *     ?DirtyOnNewData@CVisual@@QEAAXXZ @ 0x1801A2B28 (-DirtyOnNewData@CVisual@@QEAAXXZ.c)
 * Callees:
 *     ?IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ @ 0x1801A2C14 (-IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ.c)
 */

char __fastcall CSynchronousSuperWetInk::HasNewData(CSynchronousSuperWetInk *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned int v3; // ecx

  if ( CSynchronousSuperWetInk::IsSuperWetCompatible(this) )
  {
    if ( *(_DWORD *)(**(_QWORD **)(v2 + 216) + 4LL) > *(_DWORD *)(v2 + 240) )
      return 1;
    v3 = *(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v2 + 88) + 24LL) + 4LL);
    if ( v3 > *(_DWORD *)(v1 + 100) )
    {
      *(_DWORD *)(v1 + 100) = v3;
      return 1;
    }
  }
  return 0;
}
