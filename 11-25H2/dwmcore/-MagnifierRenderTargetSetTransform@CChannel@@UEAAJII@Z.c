/*
 * XREFs of ?MagnifierRenderTargetSetTransform@CChannel@@UEAAJII@Z @ 0x18026E5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180182DE0 (-CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180182E5C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180183860 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x1801DFE40 (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::MagnifierRenderTargetSetTransform(CChannel *this, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // ebx
  _DWORD v8[4]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v9[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v9, this);
  CChannel::CheckHandle((__int64)this, a2, 103);
  CChannel::CheckOptionalHandle((__int64)this, a3, 172);
  v8[0] = 229;
  v8[1] = a2;
  v8[2] = a3;
  v6 = CChannel::SendCommand((struct CCommandBatch **)this, v8, 0xCu);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 80LL))(v10);
  return v6;
}
