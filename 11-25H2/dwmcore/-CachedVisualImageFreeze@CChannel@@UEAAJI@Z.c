/*
 * XREFs of ?CachedVisualImageFreeze@CChannel@@UEAAJI@Z @ 0x18021E7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180182E5C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180183860 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::CachedVisualImageFreeze(CChannel *this, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned int v5; // ebx
  int v7; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+34h] [rbp+Ch]

  v2 = *((_QWORD *)this + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
  CChannel::CheckHandle((__int64)this, a2, 18);
  v7 = 21;
  v8 = a2;
  v5 = CChannel::SendCommand((struct CCommandBatch **)this, &v7, 8u);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2);
  return v5;
}
