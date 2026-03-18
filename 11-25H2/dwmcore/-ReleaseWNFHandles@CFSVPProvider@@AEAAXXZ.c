/*
 * XREFs of ?ReleaseWNFHandles@CFSVPProvider@@AEAAXXZ @ 0x1802321F0
 * Callers:
 *     ??1CFSVPProvider@@QEAA@XZ @ 0x18024B64C (--1CFSVPProvider@@QEAA@XZ.c)
 * Callees:
 *     PubSebUnregisterRpc @ 0x180221610 (PubSebUnregisterRpc.c)
 *     McTemplateU0zttq_EventWriteTransfer @ 0x18025745C (McTemplateU0zttq_EventWriteTransfer.c)
 *     ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x180259200 (-PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z.c)
 */

void __fastcall CFSVPProvider::ReleaseWNFHandles(CFSVPProvider *this)
{
  struct _SEB_RPC_PUBLISH_DATA *v2; // rcx
  char updated; // al
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  struct _SEB_RPC_PUBLISH_DATA *v7; // rcx

  if ( *((_QWORD *)this + 1) )
  {
    if ( *((_BYTE *)this + 75) )
    {
      if ( *((_BYTE *)this + 76) )
      {
        v2 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 2);
        if ( v2 )
          PubSebiUpdateLevelEventRpc(v2, 0);
      }
      updated = PubSebiUpdateLevelEventRpc(*((struct _SEB_RPC_PUBLISH_DATA **)this + 1), 0);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        McTemplateU0zttq_EventWriteTransfer(v5, v4, v6, 0, 0, updated);
      *((_BYTE *)this + 75) = 0;
    }
    PubSebUnregisterRpc(*((struct _SEB_RPC_PUBLISH_DATA **)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
  v7 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 2);
  if ( v7 )
  {
    PubSebUnregisterRpc(v7);
    *((_QWORD *)this + 2) = 0LL;
  }
}
