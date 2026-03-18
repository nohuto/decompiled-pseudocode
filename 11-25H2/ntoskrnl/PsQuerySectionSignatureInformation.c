/*
 * XREFs of PsQuerySectionSignatureInformation @ 0x14091E1C0
 * Callers:
 *     PsCheckProcessFileSigningLevel @ 0x1407667E0 (PsCheckProcessFileSigningLevel.c)
 *     PsConvertToGuiThread @ 0x14091E000 (PsConvertToGuiThread.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 */

__int64 __fastcall PsQuerySectionSignatureInformation(_KPROCESS *a1, _BYTE *a2)
{
  struct _EX_RUNDOWN_REF *p_Blink; // rdi
  BOOLEAN v3; // r8
  __int64 v6; // rcx
  unsigned int v7; // ebx

  p_Blink = (struct _EX_RUNDOWN_REF *)&a1[1].ProfileListHead.Blink;
  v3 = 0;
  if ( a1 == KeGetCurrentThread()->Process || (v3 = ExAcquireRundownProtection_0(p_Blink)) != 0 )
  {
    v6 = a1[1].Padding[4];
    if ( v6 )
    {
      *a2 = *(_BYTE *)(*(_QWORD *)MiSectionControlArea(v6) + 15LL) & 0xF;
      v7 = 0;
    }
    else
    {
      v7 = -1073741823;
    }
    if ( v3 )
      ExReleaseRundownProtection_0(p_Blink);
  }
  else
  {
    return (unsigned int)-1073741558;
  }
  return v7;
}
