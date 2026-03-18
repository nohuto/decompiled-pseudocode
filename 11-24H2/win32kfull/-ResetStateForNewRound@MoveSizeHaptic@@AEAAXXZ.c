/*
 * XREFs of ?ResetStateForNewRound@MoveSizeHaptic@@AEAAXXZ @ 0x1402DC724
 * Callers:
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x140249264 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?CheckAndEmitRequiredHaptic@MoveSizeHaptic@@QEAAXXZ @ 0x1402DC1F4 (-CheckAndEmitRequiredHaptic@MoveSizeHaptic@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall MoveSizeHaptic::ResetStateForNewRound(MoveSizeHaptic *this)
{
  __int64 v1; // r9
  unsigned int v2; // edx
  unsigned int v3; // r8d

  v1 = *(_QWORD *)this;
  v2 = *((_DWORD *)this + 2) & 0xFFFFFF3F;
  *((_DWORD *)this + 2) = v2;
  v3 = v2 & 0xFFFFFFDF | (*(_BYTE *)(v1 + 372) != 0 ? 0x20 : 0);
  *((_DWORD *)this + 2) = v3;
  *(_OWORD *)((char *)this + 44) = *(_OWORD *)(v1 + 356);
  *(_OWORD *)((char *)this + 12) = *(_OWORD *)(v1 + 72);
  *((_DWORD *)this + 2) = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(*(_DWORD *)(v1 + 200) >> 15)) & 0x10;
  *(_OWORD *)((char *)this + 28) = *(_OWORD *)(v1 + 40);
}
