/*
 * XREFs of ?CaptureControllerSetDefaultSDRBoost@CChannel@@UEAAJIM@Z @ 0x18026D940
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180182E5C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180183860 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x1801DFE40 (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::CaptureControllerSetDefaultSDRBoost(CChannel *this, unsigned int a2, float a3)
{
  unsigned int v5; // ebx
  _DWORD v7[4]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v8[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v8, this);
  CChannel::CheckHandle((__int64)this, a2, 19);
  v7[0] = 486;
  *(float *)&v7[2] = a3;
  v7[1] = a2;
  v5 = CChannel::SendCommand((struct CCommandBatch **)this, v7, 0xCu);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 80LL))(v9);
  return v5;
}
