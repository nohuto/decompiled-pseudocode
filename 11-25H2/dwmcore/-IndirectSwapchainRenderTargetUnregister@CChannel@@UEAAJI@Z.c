/*
 * XREFs of ?IndirectSwapchainRenderTargetUnregister@CChannel@@UEAAJI@Z @ 0x18026E2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180182E5C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180183860 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x1801DFE40 (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::IndirectSwapchainRenderTargetUnregister(CChannel *this, unsigned int a2)
{
  unsigned int v4; // ebx
  _BYTE v6[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]
  int v8; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v9; // [rsp+54h] [rbp+1Ch]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v6, this);
  CChannel::CheckHandle((__int64)this, a2, 85);
  v8 = 163;
  v9 = a2;
  v4 = CChannel::SendCommand((struct CCommandBatch **)this, &v8, 8u);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 80LL))(v7);
  return v4;
}
