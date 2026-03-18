/*
 * XREFs of ?PartitionSwitchRemotingMode@CChannel@@UEAAJW4Enum@DwmRemotingMode@@I@Z @ 0x18021FF50
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180183860 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::PartitionSwitchRemotingMode(__int64 a1, int a2, int a3)
{
  __int64 v3; // r14
  unsigned int v7; // ebx
  _DWORD v9[6]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
  v9[0] = 267;
  v9[1] = a2;
  v9[2] = a3;
  v7 = CChannel::SendCommand((struct CCommandBatch **)a1, v9, 0xCu);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
  return v7;
}
