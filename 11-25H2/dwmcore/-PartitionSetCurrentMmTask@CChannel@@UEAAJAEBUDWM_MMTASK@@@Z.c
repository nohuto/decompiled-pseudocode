/*
 * XREFs of ?PartitionSetCurrentMmTask@CChannel@@UEAAJAEBUDWM_MMTASK@@@Z @ 0x18026E810
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180183860 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x1801DFE40 (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::PartitionSetCurrentMmTask(CChannel *this, const struct DWM_MMTASK *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  _BYTE v12[8]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+28h] [rbp-B0h]
  __int64 v14; // [rsp+30h] [rbp-A8h] BYREF
  _OWORD v15[10]; // [rsp+38h] [rbp-A0h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v12, this);
  v14 = 262LL;
  memset_0(v15, 0, 0x90uLL);
  v4 = *((_OWORD *)a2 + 1);
  v15[0] = *(_OWORD *)a2;
  v5 = *((_OWORD *)a2 + 2);
  v15[1] = v4;
  v6 = *((_OWORD *)a2 + 3);
  v15[2] = v5;
  v7 = *((_OWORD *)a2 + 4);
  v15[3] = v6;
  v8 = *((_OWORD *)a2 + 5);
  v15[4] = v7;
  v9 = *((_OWORD *)a2 + 6);
  v15[5] = v8;
  v10 = *((_OWORD *)a2 + 8);
  v15[6] = v9;
  v15[7] = *((_OWORD *)a2 + 7);
  v15[8] = v10;
  LODWORD(a2) = CChannel::SendCommand((struct CCommandBatch **)this, &v14, 0x98u);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 80LL))(v13);
  return (unsigned int)a2;
}
