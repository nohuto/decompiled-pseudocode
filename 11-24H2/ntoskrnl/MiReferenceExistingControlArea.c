/*
 * XREFs of MiReferenceExistingControlArea @ 0x140315C60
 * Callers:
 *     MiCreateImageOrDataSection @ 0x140941B00 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14020F410 (MiReleaseControlAreaWaiters.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x14022F72C (MiRemoveUnusedSegment.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     MiLockSectionControlArea @ 0x140316190 (MiLockSectionControlArea.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
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
  __int64 v12; // r8
  unsigned int v14; // edi
  __int64 *v15; // rdx
  int v16; // eax
  unsigned __int8 v17; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v17 = 0;
  v3 = MiLockSectionControlArea(*(_QWORD *)(v1 + 40), (*(_BYTE *)(a1 + 19) & 1) == 0, &v17);
  v4 = v3;
  if ( !v3 )
    return 3221225473LL;
  if ( (*(_DWORD *)(v3 + 56) & 3) != 0 )
  {
    MiReleaseSpinLockExclusive((_DWORD *)(v3 + 72), v17);
    return 3221225473LL;
  }
  v5 = (ULONG *)*((_QWORD *)qword_140E2FF88 + (*(_WORD *)(v3 + 60) & 0x3FF));
  v6 = *(ULONG ***)(a1 + 176);
  if ( !v6 )
  {
    if ( (*(_BYTE *)(v4 + 62) & 1) != 0 )
    {
      if ( v5 == *((ULONG **)qword_140E2FF88 + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink)) )
        goto LABEL_7;
      if ( (*(_DWORD *)a1 & 1) == 0 )
      {
        v16 = *(_DWORD *)a1 | 0x800000;
LABEL_35:
        *(_DWORD *)a1 = v16;
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
    v16 = *(_DWORD *)a1 | 0x1000000;
    goto LABEL_35;
  }
  if ( *v6 != v5 || (v7 = *(_BYTE *)(v4 + 62), ((v7 ^ (unsigned __int8)(*(_DWORD *)a1 >> 22)) & 1) != 0) )
  {
    *(_DWORD *)a1 |= 0x800000u;
LABEL_23:
    v14 = -1073740682;
LABEL_30:
    MiReleaseSpinLockExclusive((_DWORD *)(v4 + 72), v17);
    return v14;
  }
LABEL_8:
  if ( (*(_DWORD *)a1 & 0x2000000) != 0 && (v7 & 0xC) != 0 )
  {
    v14 = -1073739503;
    goto LABEL_30;
  }
  v8 = *(__int64 **)(v4 + 80);
  if ( v8 )
  {
    do
    {
      v15 = (__int64 *)*v8;
      if ( (v8[1] & 4) != 0 )
        *((_DWORD *)v8 + 3) = 1;
      v8 = v15;
    }
    while ( v15 );
  }
  ++*(_QWORD *)(v4 + 24);
  MiRemoveUnusedSegment(v4);
  if ( (*(_DWORD *)a1 & 1) != 0 )
    *(_DWORD *)(v4 + 56) |= 0x8000u;
  else
    ++*(_QWORD *)(v4 + 48);
  v9 = (volatile LONG *)(v4 + 72);
  v10 = v17;
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
  MiReleaseControlAreaWaiters(0LL, v11, v12);
  return 0LL;
}
