/*
 * XREFs of MiReferenceExistingControlArea @ 0x1402BE814
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14098BD70 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     MiLockSectionControlArea @ 0x1402BED40 (MiLockSectionControlArea.c)
 *     MiRemoveUnusedSegment @ 0x14030303C (MiRemoveUnusedSegment.c)
 *     MiReleaseControlAreaWaiters @ 0x140338770 (MiReleaseControlAreaWaiters.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiReferenceExistingControlArea(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  ULONG *v5; // r9
  ULONG **v6; // rax
  unsigned __int8 v7; // cl
  __int64 *v8; // rcx
  volatile LONG *v9; // rcx
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  unsigned int v13; // edi
  __int64 *v14; // rdx
  int v15; // eax
  unsigned __int8 v16; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v16 = 0;
  v3 = MiLockSectionControlArea(*(_QWORD *)(v1 + 40), (*(_BYTE *)(a1 + 19) & 1) == 0, &v16);
  v4 = v3;
  if ( !v3 )
    return 3221225473LL;
  if ( (*(_DWORD *)(v3 + 56) & 3) != 0 )
  {
    MiReleaseSpinLockExclusive((_DWORD *)(v3 + 72), v16);
    return 3221225473LL;
  }
  v5 = (ULONG *)*((_QWORD *)qword_140E300C8 + (*(_WORD *)(v3 + 60) & 0x3FF));
  v6 = *(ULONG ***)(a1 + 176);
  if ( !v6 )
  {
    if ( (*(_BYTE *)(v4 + 62) & 1) != 0 )
    {
      if ( v5 == *((ULONG **)qword_140E300C8 + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink)) )
        goto LABEL_7;
      if ( (*(_DWORD *)a1 & 1) == 0 )
      {
        v15 = *(_DWORD *)a1 | 0x800000;
LABEL_35:
        *(_DWORD *)a1 = v15;
        goto LABEL_23;
      }
    }
    else if ( v5 == &MiSystemPartition )
    {
LABEL_7:
      v7 = *(_BYTE *)(v4 + 62);
      goto LABEL_8;
    }
    if ( (*(_DWORD *)a1 & 0x1000000) != 0 )
      goto LABEL_7;
    v15 = *(_DWORD *)a1 | 0x1000000;
    goto LABEL_35;
  }
  if ( *v6 != v5 || (v7 = *(_BYTE *)(v4 + 62), ((v7 ^ (unsigned __int8)(*(_DWORD *)a1 >> 22)) & 1) != 0) )
  {
    *(_DWORD *)a1 |= 0x800000u;
LABEL_23:
    v13 = -1073740682;
LABEL_30:
    MiReleaseSpinLockExclusive((_DWORD *)(v4 + 72), v16);
    return v13;
  }
LABEL_8:
  if ( (*(_DWORD *)a1 & 0x2000000) != 0 && (v7 & 0xC) != 0 )
  {
    v13 = -1073739503;
    goto LABEL_30;
  }
  v8 = *(__int64 **)(v4 + 80);
  if ( v8 )
  {
    do
    {
      v14 = (__int64 *)*v8;
      if ( (v8[1] & 4) != 0 )
        *((_DWORD *)v8 + 3) = 1;
      v8 = v14;
    }
    while ( v14 );
  }
  ++*(_QWORD *)(v4 + 24);
  MiRemoveUnusedSegment(v4);
  if ( (*(_DWORD *)a1 & 1) != 0 )
    *(_DWORD *)(v4 + 56) |= 0x8000u;
  else
    ++*(_QWORD *)(v4 + 48);
  v9 = (volatile LONG *)(v4 + 72);
  v10 = v16;
  ExReleaseSpinLockExclusiveFromDpcLevel(v9);
  if ( (_BYTE)v10 != 17 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v11) = v10;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
    }
    __writecr8(v10);
  }
  MiReleaseControlAreaWaiters(0LL);
  return 0LL;
}
