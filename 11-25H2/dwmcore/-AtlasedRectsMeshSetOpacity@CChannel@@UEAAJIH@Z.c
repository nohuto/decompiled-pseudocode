/*
 * XREFs of ?AtlasedRectsMeshSetOpacity@CChannel@@UEAAJIH@Z @ 0x180181CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180182E5C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180183860 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::AtlasedRectsMeshSetOpacity(CChannel *this, unsigned int a2, int a3)
{
  __int64 v3; // r14
  unsigned int v7; // ebx
  _DWORD v9[6]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *((_QWORD *)this + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
  CChannel::CheckHandle(this, a2, 8LL);
  v9[0] = 476;
  v9[1] = a2;
  v9[2] = a3;
  v7 = CChannel::SendCommand(this, v9, 0xCu);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
  return v7;
}
