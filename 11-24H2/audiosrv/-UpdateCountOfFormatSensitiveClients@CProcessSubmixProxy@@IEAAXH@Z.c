/*
 * XREFs of ?UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800F8A30
 * Callers:
 *     ?OnConnectedToStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z @ 0x180025FE0 (-OnConnectedToStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z.c)
 *     ?OnDisconnectedFromStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z @ 0x1800F7C04 (-OnDisconnectedFromStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CProcessSubmixProxy::UpdateCountOfFormatSensitiveClients(__int64 this, int a2)
{
  int v3; // ecx

  v3 = *(_DWORD *)(this + 100);
  *(_DWORD *)(this + 100) = v3 + a2;
  if ( v3 != v3 + a2 && (!v3 || !(v3 + a2)) )
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(this + 200) + 320LL))(
      *(_QWORD *)(this + 200),
      (this + 8) & -(__int64)(this != 0),
      **(_QWORD **)(this + 200),
      -this);
}
