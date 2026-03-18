/*
 * XREFs of ?AnimationTriggerTrigger@CChannel@@UEAAJI_K@Z @ 0x18023B240
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180182E5C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180183860 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::AnimationTriggerTrigger(CChannel *this, unsigned int a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned int v7; // ebx
  _DWORD v9[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  v3 = *((_QWORD *)this + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
  CChannel::CheckHandle((__int64)this, a2, 93);
  v9[0] = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v9[1] = a2;
  v10 = a3;
  v7 = CChannel::SendCommand((struct CCommandBatch **)this, v9, 0x10u);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
  return v7;
}
