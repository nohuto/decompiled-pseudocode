/*
 * XREFs of MiProbePacketContended @ 0x140391364
 * Callers:
 *     MiProbeAndLockPacket @ 0x140237CC0 (MiProbeAndLockPacket.c)
 *     MmProbeAndLockSelectedPages @ 0x140390AC0 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiPageTableLockIsContended @ 0x140391410 (MiPageTableLockIsContended.c)
 */

__int64 __fastcall MiProbePacketContended(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // r11
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // rdx
  unsigned int *MmInternal; // rcx
  __int64 v8; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (_QWORD *)(a1 + 104);
  v3 = 0;
  if ( v1 && (unsigned int)MiPageTableLockIsContended(*v2, v1) )
    return 1LL;
  v4 = *v2;
  if ( (*(_DWORD *)(*v2 + 184LL) & 0xFu) <= 5 )
  {
    v5 = (__int64 *)&unk_140E38880;
    if ( (*(_DWORD *)(v4 + 184) & 0xF) != 1 )
      v5 = (__int64 *)(v4 + 192);
    v6 = *v5;
    MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal;
    v8 = MmInternal ? MmInternal[81] : 0LL;
    if ( (*(_DWORD *)((v8 << 6) + v6) & 0x40000000) != 0 )
      return 1LL;
  }
  LOBYTE(v3) = KeShouldYieldProcessor() != 0;
  return v3;
}
