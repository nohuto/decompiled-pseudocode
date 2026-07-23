/*
 * XREFs of MiReturnSystemImageCommitment @ 0x140A8BE44
 * Callers:
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 * Callees:
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     MiGetBaseLoaderPortion @ 0x1404C96FC (MiGetBaseLoaderPortion.c)
 *     MiUnmapReturnCharges @ 0x140A8BE9C (MiUnmapReturnCharges.c)
 */

__int64 __fastcall MiReturnSystemImageCommitment(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD *v2; // r10
  __int64 v3; // rax

  if ( (*(_DWORD *)(MiGetBaseLoaderPortion(a1) + 184) & 0x400) == 0 )
  {
    v3 = *(unsigned int *)(*(_QWORD *)MiSectionControlArea(*(_QWORD *)(v1 + 112)) + 8LL);
    v2[3] = v3;
    *v2 = v3;
  }
  _InterlockedAdd(&dword_140E37730, -*((_DWORD *)v2 + 6));
  return MiUnmapReturnCharges(&MiSystemPartition, v2);
}
