/*
 * XREFs of MiForceSectionClosed @ 0x14034E348
 * Callers:
 *     MmForceSectionClosed @ 0x1404772A0 (MmForceSectionClosed.c)
 *     MmForceSectionClosedEx @ 0x1404998E0 (MmForceSectionClosedEx.c)
 *     MiCreateImageOrDataSection @ 0x14093D200 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiLockSectionControlArea @ 0x14034CE80 (MiLockSectionControlArea.c)
 *     MiAttemptSectionDelete @ 0x14034E3B8 (MiAttemptSectionDelete.c)
 */

__int64 __fastcall MiForceSectionClosed(_QWORD *a1, char a2, char a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int8 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  v5 = MiLockSectionControlArea(a1, a2 & 1, &v8);
  if ( v5 )
  {
    if ( (a3 & 1) == 0 || (*(_BYTE *)(v5 + 62) & 0xC) != 0 )
    {
      LOBYTE(v6) = v8;
      return 2 - (unsigned int)((unsigned __int8)MiAttemptSectionDelete(v5, v6, a2 & 4) != 0);
    }
    MiReleaseSpinLockExclusive((_DWORD *)(v5 + 72), v8);
  }
  return 0LL;
}
