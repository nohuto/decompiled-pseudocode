/*
 * XREFs of ??_EDXGTHREAD@@UEAAPEAXI@Z @ 0x140012030
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x14001233C (--1ReferenceCounted@@UEAA@XZ.c)
 */

ReferenceCounted *__fastcall DXGTHREAD::`vector deleting destructor'(ReferenceCounted *Entry, char a2)
{
  *((_DWORD *)Entry + 8) = 1409316932;
  *(_QWORD *)Entry = &DXGTHREAD::`vftable';
  ReferenceCounted::~ReferenceCounted(Entry);
  if ( (a2 & 1) != 0 )
    ExFreeToLookasideListEx(&g_DxgkThreadLookasideList, Entry);
  return Entry;
}
