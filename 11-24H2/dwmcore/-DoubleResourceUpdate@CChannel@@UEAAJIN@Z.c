/*
 * XREFs of ?DoubleResourceUpdate@CChannel@@UEAAJIN@Z @ 0x18020E780
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18012F57C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18012FF80 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::DoubleResourceUpdate(CChannel *this, unsigned int a2, double a3)
{
  __int64 v3; // rsi
  float v6; // xmm0_4
  unsigned int v7; // ebx
  _DWORD v9[4]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *((_QWORD *)this + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
  CChannel::CheckHandle((__int64)this, a2, 62);
  v9[0] = 139;
  v9[1] = a2;
  v6 = a3;
  *(float *)&v9[2] = v6;
  v7 = CChannel::SendCommand((struct CCommandBatch **)this, v9, 0xCu);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
  return v7;
}
