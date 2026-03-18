/*
 * XREFs of ?PartitionRegisterForNotifications@CChannel@@UEAAJ_N@Z @ 0x180249E80
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18012FF80 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::PartitionRegisterForNotifications(CChannel *this, char a2)
{
  __int64 v2; // rsi
  unsigned int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
  v7 = 269LL;
  BYTE4(v7) = a2;
  v5 = CChannel::SendCommand((struct CCommandBatch **)this, &v7, 8u);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2);
  return v5;
}
