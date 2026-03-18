/*
 * XREFs of ?GaussianBlurEffectUpdate@CChannel@@UEAAJIMII@Z @ 0x18026E180
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180182E5C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180183860 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x1801DFE40 (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::GaussianBlurEffectUpdate(
        CChannel *this,
        unsigned int a2,
        float a3,
        int a4,
        unsigned int a5)
{
  unsigned int v8; // ebx
  __int64 v10; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+28h] [rbp-40h]
  _DWORD v12[8]; // [rsp+30h] [rbp-38h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)&v10, this);
  CChannel::CheckHandle((__int64)this, a2, 63);
  v12[0] = 447;
  *(float *)&v12[2] = a3;
  v12[1] = a2;
  v12[3] = a4;
  v12[4] = a5;
  v8 = CChannel::SendCommand((struct CCommandBatch **)this, v12, 0x14u);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 80LL))(v11);
  return v8;
}
