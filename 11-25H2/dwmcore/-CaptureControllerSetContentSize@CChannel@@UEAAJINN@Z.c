/*
 * XREFs of ?CaptureControllerSetContentSize@CChannel@@UEAAJINN@Z @ 0x18026D890
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180182E5C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180183860 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x1801DFE40 (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::CaptureControllerSetContentSize(CChannel *this, unsigned int a2, double a3, double a4)
{
  float v6; // xmm1_4
  float v7; // xmm2_4
  unsigned int v8; // ebx
  _DWORD v10[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+38h] [rbp-30h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)&v11, this);
  CChannel::CheckHandle((__int64)this, a2, 19);
  v10[0] = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v10[1] = a2;
  v6 = a3;
  v7 = a4;
  *(float *)&v10[2] = v6;
  *(float *)&v10[3] = v7;
  v8 = CChannel::SendCommand((struct CCommandBatch **)this, v10, 0x10u);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 80LL))(v12);
  return v8;
}
