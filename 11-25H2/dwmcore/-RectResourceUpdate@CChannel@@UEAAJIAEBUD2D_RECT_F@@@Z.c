/*
 * XREFs of ?RectResourceUpdate@CChannel@@UEAAJIAEBUD2D_RECT_F@@@Z @ 0x180181A30
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180182E5C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180183860 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::RectResourceUpdate(CChannel *this, unsigned int a2, const struct D2D_RECT_F *a3)
{
  __int64 v3; // r14
  __int128 v7; // xmm0
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-28h] BYREF
  _OWORD v11[2]; // [rsp+24h] [rbp-24h]

  v3 = *((_QWORD *)this + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
  CChannel::CheckHandle(this, a2, 127LL);
  v10 = 314;
  v11[0] = 0LL;
  v7 = (__int128)*a3;
  LODWORD(v11[0]) = a2;
  *(_OWORD *)((char *)v11 + 4) = v7;
  v8 = CChannel::SendCommand(this, &v10, 0x18u);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
  return v8;
}
