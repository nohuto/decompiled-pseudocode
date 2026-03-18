/*
 * XREFs of ?SizeResourceUpdate@CChannel@@UEAAJIAEBUD2D_SIZE_F@@@Z @ 0x18020C360
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18012F57C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18012FF80 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::SizeResourceUpdate(CChannel *this, unsigned int a2, const struct D2D_SIZE_F *a3)
{
  __int64 v3; // r14
  unsigned int v7; // ebx
  __m128i si128; // [rsp+20h] [rbp-18h] BYREF

  v3 = *((_QWORD *)this + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
  CChannel::CheckHandle((__int64)this, a2, 160);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  si128.m128i_u64[1] = (unsigned __int64)*a3;
  si128.m128i_i32[1] = a2;
  v7 = CChannel::SendCommand((struct CCommandBatch **)this, &si128, 0x10u);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
  return v7;
}
