/*
 * XREFs of ?OnAudioPacket@CBridgeToRenderGraph@@UEAAXPEBUAE_CURRENT_POSITION@@PEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x140035040
 * Callers:
 *     <none>
 * Callees:
 *     ?WriteToRenderEndpoint@CBridgeToRenderGraph@@AEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x1400350B0 (-WriteToRenderEndpoint@CBridgeToRenderGraph@@AEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBridgeToRenderGraph::OnAudioPacket(
        CBridgeToRenderGraph *this,
        const struct AE_CURRENT_POSITION *a2,
        const struct APO_CONNECTION_PROPERTY *a3)
{
  __int64 v5; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(unsigned int (__fastcall **)(_QWORD, const struct AE_CURRENT_POSITION *))(**((_QWORD **)this + 7) + 24LL))(
         *((_QWORD *)this + 7),
         a2)
    && a3->u32ValidFrameCount )
  {
    v5 = *((_QWORD *)this + 4);
    v6 = 0;
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v5 + 40LL))(v5, &v6);
    if ( !v6 )
      *((_WORD *)this + 40) = 256;
    CBridgeToRenderGraph::WriteToRenderEndpoint(this, a3);
  }
}
