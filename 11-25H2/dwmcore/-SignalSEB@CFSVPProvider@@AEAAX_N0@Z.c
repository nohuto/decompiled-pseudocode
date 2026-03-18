/*
 * XREFs of ?SignalSEB@CFSVPProvider@@AEAAX_N0@Z @ 0x1801FB8A0
 * Callers:
 *     ?CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ @ 0x1800C9618 (-CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SEBWorkerThread@@@details@wil@@QEAA_NXZ @ 0x18024B7E4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SEBWorkerThread@@@details@wil@@QE.c)
 *     ?SignalSEBWorker@CFSVPProvider@@AEAAXXZ @ 0x1802502D0 (-SignalSEBWorker@CFSVPProvider@@AEAAXXZ.c)
 *     McTemplateU0zttq_EventWriteTransfer @ 0x18025745C (McTemplateU0zttq_EventWriteTransfer.c)
 *     ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x180259200 (-PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z.c)
 *     ?RequestThreadpoolWork@CFSVPProvider@@AEAAJXZ @ 0x1802894E0 (-RequestThreadpoolWork@CFSVPProvider@@AEAAJXZ.c)
 */

void __fastcall CFSVPProvider::SignalSEB(CFSVPProvider *this, unsigned __int8 a2, char a3)
{
  int v5; // ebp
  int v6; // edx
  int v7; // r8d
  char updated; // di
  struct _SEB_RPC_PUBLISH_DATA *v9; // rcx
  struct _SEB_RPC_PUBLISH_DATA *v10; // rcx

  v5 = a2;
  updated = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SEBWorkerThread>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SEBWorkerThread>::GetImpl'::`2'::impl) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    *((_BYTE *)this + 73) = v5;
    *((_BYTE *)this + 74) = a3;
    if ( ((_BYTE)v5 != *((_BYTE *)this + 75) || a3 != *((_BYTE *)this + 76))
      && (int)CFSVPProvider::RequestThreadpoolWork(this) < 0 )
    {
      CFSVPProvider::SignalSEBWorker(this);
    }
    if ( this != (CFSVPProvider *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    return;
  }
  v9 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 2);
  if ( v9 && *((_BYTE *)this + 76) != a3 )
    PubSebiUpdateLevelEventRpc(v9, a3 != 0);
  v10 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 1);
  if ( v10 )
  {
    if ( *((_BYTE *)this + 75) == (_BYTE)v5 )
      goto LABEL_16;
    updated = PubSebiUpdateLevelEventRpc(v10, (_BYTE)v5 != 0);
  }
  if ( *((_BYTE *)this + 75) == (_BYTE)v5 )
  {
LABEL_16:
    if ( *((_BYTE *)this + 76) == a3 )
      return;
  }
  *((_BYTE *)this + 75) = v5;
  *((_BYTE *)this + 76) = a3;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0zttq_EventWriteTransfer((_DWORD)v10, v6, v7, v5, a3, updated);
}
