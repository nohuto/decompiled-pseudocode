/*
 * XREFs of ?AnimationUpdateBeginTime@CChannel@@UEAAJI_K0@Z @ 0x180261580
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18012F57C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18012FF80 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x1801D2090 (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::AnimationUpdateBeginTime(CChannel *this, unsigned int a2, __int64 a3, __int64 a4)
{
  __int128 v6; // rdi
  unsigned int v7; // ebx
  __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+28h] [rbp-30h]
  _DWORD v11[2]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v12; // [rsp+38h] [rbp-20h]

  *((_QWORD *)&v6 + 1) = a4;
  *(_QWORD *)&v6 = a3;
  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)&v9, this);
  CChannel::CheckHandle((__int64)this, a2, 2);
  v11[0] = 11;
  v11[1] = a2;
  v12 = v6;
  v7 = CChannel::SendCommand((struct CCommandBatch **)this, v11, 0x18u);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 80LL))(v10);
  return v7;
}
