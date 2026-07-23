/*
 * XREFs of MmIsFileSectionActive @ 0x140484620
 * Callers:
 *     <none>
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     MiLockSectionControlArea @ 0x1402BED40 (MiLockSectionControlArea.c)
 *     MiIsSectionActive @ 0x1404846E4 (MiIsSectionActive.c)
 */

__int64 __fastcall MmIsFileSectionActive(_QWORD *a1, int a2, _DWORD *a3)
{
  char v4; // bl
  int IsSectionActive; // edi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int8 v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = 0;
  v4 = a2;
  if ( (a2 & 0xFFFFFFF8) != 0 || (a2 & 3) == 0 || (a2 & 4) == 0 )
    return 3221225485LL;
  IsSectionActive = 0;
  if ( (a2 & 1) == 0
    || (v7 = MiLockSectionControlArea(a1, 0, &v12)) == 0
    || (IsSectionActive = MiIsSectionActive(v7), MiReleaseSpinLockExclusive((_DWORD *)(v11 + 72), v12), !IsSectionActive) )
  {
    if ( (v4 & 2) != 0 )
    {
      v8 = MiLockSectionControlArea(a1, 1, &v12);
      if ( v8 )
      {
        IsSectionActive = MiIsSectionActive(v8);
        MiReleaseSpinLockExclusive((_DWORD *)(v10 + 72), v12);
      }
    }
  }
  *a3 = IsSectionActive;
  return 0LL;
}
