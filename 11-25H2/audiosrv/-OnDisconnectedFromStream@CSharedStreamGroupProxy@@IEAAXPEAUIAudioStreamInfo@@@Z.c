/*
 * XREFs of ?OnDisconnectedFromStream@CSharedStreamGroupProxy@@IEAAXPEAUIAudioStreamInfo@@@Z @ 0x180063D88
 * Callers:
 *     ?DisconnectFromStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180063AF0 (-DisconnectFromStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ?UpdateCountOfPeriodicitySensitiveClients@CBaseStreamGroupProxy@@IEAAXH@Z @ 0x18007C1D0 (-UpdateCountOfPeriodicitySensitiveClients@CBaseStreamGroupProxy@@IEAAXH@Z.c)
 *     ?UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ @ 0x1800A4048 (-UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ.c)
 *     ?UpdateCountOfFormatSensitiveClients@CBaseStreamGroupProxy@@IEAAXH@Z @ 0x1800F394C (-UpdateCountOfFormatSensitiveClients@CBaseStreamGroupProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfLazyRequestClients@CBaseStreamGroupProxy@@IEAAXH@Z @ 0x1800F3A1C (-UpdateCountOfLazyRequestClients@CBaseStreamGroupProxy@@IEAAXH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSharedStreamGroupProxy::OnDisconnectedFromStream(
        CSharedStreamGroupProxy *this,
        struct IAudioStreamInfo *a2)
{
  __int64 v2; // rax
  CBaseStreamGroupProxy *v5; // rdi

  v2 = (__int64)a2 + 248;
  if ( !a2 )
    v2 = 256LL;
  if ( *(_BYTE *)v2 )
  {
    --*((_DWORD *)this + 92);
    CSharedStreamGroupProxy::UpdateAuxiliaryStreamState(this);
  }
  v5 = (CSharedStreamGroupProxy *)((char *)this + 8);
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 136LL))(a2) )
    CBaseStreamGroupProxy::UpdateCountOfPeriodicitySensitiveClients(v5, -1);
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 144LL))(a2) )
    CBaseStreamGroupProxy::UpdateCountOfFormatSensitiveClients(v5, -1);
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 152LL))(a2) )
    CBaseStreamGroupProxy::UpdateCountOfLazyRequestClients(v5, -1);
  CBaseStreamGroupProxy::RemoveStream(v5, a2);
}
