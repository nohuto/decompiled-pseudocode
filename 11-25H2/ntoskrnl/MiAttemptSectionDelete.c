/*
 * XREFs of MiAttemptSectionDelete @ 0x14034E3B8
 * Callers:
 *     MiForceSectionClosed @ 0x14034E348 (MiForceSectionClosed.c)
 *     MiCanFileBeTruncatedInternal @ 0x14034EBE4 (MiCanFileBeTruncatedInternal.c)
 *     MmFlushImageSection @ 0x14046B190 (MmFlushImageSection.c)
 * Callees:
 *     MiRemoveUnusedSegment @ 0x140218D9C (MiRemoveUnusedSegment.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     KeWaitForGate @ 0x140418844 (KeWaitForGate.c)
 *     MiCleanSection @ 0x1404190A4 (MiCleanSection.c)
 */

char __fastcall MiAttemptSectionDelete(__int64 a1, unsigned __int8 a2, char a3)
{
  int v6; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // [rsp+20h] [rbp-30h] BYREF
  int v11; // [rsp+28h] [rbp-28h]
  int v12; // [rsp+2Ch] [rbp-24h]
  __int16 v13; // [rsp+30h] [rbp-20h] BYREF
  char v14; // [rsp+32h] [rbp-1Eh]
  char v15; // [rsp+33h] [rbp-1Dh]
  int v16; // [rsp+34h] [rbp-1Ch]
  _QWORD v17[3]; // [rsp+38h] [rbp-18h] BYREF

  v12 = 0;
  v15 = 0;
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
    v16 = 0;
    v11 = 1;
    v17[0] = v17;
    v10 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = &v10;
    v13 = 263;
    v14 = 6;
    v17[1] = v17;
    MiReleaseSpinLockExclusive((_DWORD *)(a1 + 72), a2);
    KeWaitForGate(&v13, 19LL);
    return 1;
  }
  else
  {
    MiRemoveUnusedSegment(a1);
    LOBYTE(v8) = a2;
    *(_QWORD *)(a1 + 40) = 1LL;
    LOBYTE(v9) = (a3 & 4) != 0;
    return MiCleanSection(a1, v8, v9);
  }
}
