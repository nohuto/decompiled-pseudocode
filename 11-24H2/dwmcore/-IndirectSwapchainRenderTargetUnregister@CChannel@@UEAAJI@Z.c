/*
 * XREFs of ?IndirectSwapchainRenderTargetUnregister@CChannel@@UEAAJI@Z @ 0x180262280
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18012F57C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18012FF80 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x1801D2090 (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::IndirectSwapchainRenderTargetUnregister(CChannel *this, unsigned int a2)
{
  unsigned int v4; // ebx
  _BYTE v6[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]
  int v8; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v9; // [rsp+54h] [rbp+1Ch]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v6, this);
  CChannel::CheckHandle((__int64)this, a2, 86);
  v8 = 172;
  v9 = a2;
  v4 = CChannel::SendCommand((struct CCommandBatch **)this, &v8, 8u);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 80LL))(v7);
  return v4;
}
