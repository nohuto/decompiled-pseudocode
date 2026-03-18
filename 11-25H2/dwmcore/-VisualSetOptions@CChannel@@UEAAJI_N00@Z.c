/*
 * XREFs of ?VisualSetOptions@CChannel@@UEAAJI_N00@Z @ 0x180214110
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180182E5C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180183860 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::VisualSetOptions(CChannel *this, unsigned int a2, char a3, unsigned __int8 a4, bool a5)
{
  __int64 v5; // r14
  unsigned int v10; // ebx
  _DWORD v12[2]; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+28h] [rbp-10h]
  __int16 v14; // [rsp+29h] [rbp-Fh]
  bool v15; // [rsp+2Bh] [rbp-Dh]

  v5 = *((_QWORD *)this + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 56LL))(v5);
  CChannel::CheckHandle((__int64)this, a2, 182);
  v12[0] = 398;
  v15 = a5;
  v12[1] = a2;
  v13 = a3;
  v14 = a4;
  v10 = CChannel::SendCommand((struct CCommandBatch **)this, v12, 0xCu);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 80LL))(v5);
  return v10;
}
