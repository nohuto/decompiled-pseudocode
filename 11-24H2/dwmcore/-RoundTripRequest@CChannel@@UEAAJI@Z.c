/*
 * XREFs of ?RoundTripRequest@CChannel@@UEAAJI@Z @ 0x18020D7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18012FF80 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::RoundTripRequest(CChannel *this, int a2)
{
  __int64 v2; // rsi
  unsigned int v5; // ebx
  int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+34h] [rbp+Ch]

  v2 = *((_QWORD *)this + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
  v7 = 42;
  v8 = a2;
  v5 = CChannel::SendCommand((struct CCommandBatch **)this, &v7, 8u);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2);
  return v5;
}
