/*
 * XREFs of MiAttemptSectionDelete @ 0x1403F25B4
 * Callers:
 *     MiCanFileBeTruncatedInternal @ 0x1403F2224 (MiCanFileBeTruncatedInternal.c)
 *     MiForceSectionClosed @ 0x1403F2544 (MiForceSectionClosed.c)
 *     MmFlushImageSection @ 0x1403F44D0 (MmFlushImageSection.c)
 * Callees:
 *     MiCleanSection @ 0x140270170 (MiCleanSection.c)
 *     KeWaitForGate @ 0x140271C4C (KeWaitForGate.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     MiRemoveUnusedSegment @ 0x14030303C (MiRemoveUnusedSegment.c)
 */

char __fastcall MiAttemptSectionDelete(__int64 a1, unsigned __int8 a2, char a3)
{
  int v6; // eax
  __int64 v8; // [rsp+20h] [rbp-30h] BYREF
  int v9; // [rsp+28h] [rbp-28h]
  int v10; // [rsp+2Ch] [rbp-24h]
  __int16 v11; // [rsp+30h] [rbp-20h] BYREF
  char v12; // [rsp+32h] [rbp-1Eh]
  char v13; // [rsp+33h] [rbp-1Dh]
  int v14; // [rsp+34h] [rbp-1Ch]
  _QWORD v15[3]; // [rsp+38h] [rbp-18h] BYREF

  v10 = 0;
  v13 = 0;
  v6 = *(_DWORD *)(a1 + 56);
  if ( *(_QWORD *)(a1 + 24) || *(_QWORD *)(a1 + 40) || (v6 & 2) != 0 )
  {
    if ( (a3 & 4) != 0 )
      *(_DWORD *)(a1 + 56) = v6 | 0x40000;
    MiReleaseSpinLockExclusive((_DWORD *)(a1 + 72), a2);
    return 0;
  }
  else if ( (v6 & 1) != 0 )
  {
    v14 = 0;
    v9 = 1;
    v15[0] = v15;
    v8 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = &v8;
    v11 = 263;
    v12 = 6;
    v15[1] = v15;
    MiReleaseSpinLockExclusive((_DWORD *)(a1 + 72), a2);
    KeWaitForGate((__int64)&v11, 19LL);
    return 1;
  }
  else
  {
    MiRemoveUnusedSegment(a1);
    *(_QWORD *)(a1 + 40) = 1LL;
    return MiCleanSection(a1, a2, (a3 & 4) != 0);
  }
}
