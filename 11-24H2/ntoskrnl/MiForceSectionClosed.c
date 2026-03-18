/*
 * XREFs of MiForceSectionClosed @ 0x140315054
 * Callers:
 *     MmForceSectionClosed @ 0x140477460 (MmForceSectionClosed.c)
 *     MmForceSectionClosedEx @ 0x140499A30 (MmForceSectionClosedEx.c)
 *     MiCreateImageOrDataSection @ 0x140941B00 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     MiAttemptSectionDelete @ 0x140314F64 (MiAttemptSectionDelete.c)
 *     MiLockSectionControlArea @ 0x140316190 (MiLockSectionControlArea.c)
 */

__int64 __fastcall MiForceSectionClosed(__int64 a1, char a2, char a3)
{
  __int64 v5; // rax
  unsigned __int8 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  v5 = MiLockSectionControlArea(a1, a2 & 1, &v7);
  if ( v5 )
  {
    if ( (a3 & 1) == 0 || (*(_BYTE *)(v5 + 62) & 0xC) != 0 )
      return 2 - (unsigned int)(MiAttemptSectionDelete(v5, v7, a2 & 4) != 0);
    MiReleaseSpinLockExclusive((_DWORD *)(v5 + 72), v7);
  }
  return 0LL;
}
