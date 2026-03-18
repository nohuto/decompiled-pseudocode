/*
 * XREFs of ?SignalSEBWorker@CFSVPProvider@@AEAAXXZ @ 0x1802502D0
 * Callers:
 *     ?CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ @ 0x1800C9618 (-CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ.c)
 *     ?CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ @ 0x1800C9890 (-CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ.c)
 *     ?SignalSEB@CFSVPProvider@@AEAAX_N0@Z @ 0x1801FB8A0 (-SignalSEB@CFSVPProvider@@AEAAX_N0@Z.c)
 *     _lambda_a29cc3fe718aa785b8a158e67bed590f_::_lambda_invoker_cdecl_ @ 0x1802894D0 (_lambda_a29cc3fe718aa785b8a158e67bed590f_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     McTemplateU0zttq_EventWriteTransfer @ 0x18025745C (McTemplateU0zttq_EventWriteTransfer.c)
 *     ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x180259200 (-PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z.c)
 */

void __fastcall CFSVPProvider::SignalSEBWorker(CFSVPProvider *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  char updated; // r14
  char v4; // si
  char v5; // bp
  int v6; // edx
  struct _SEB_RPC_PUBLISH_DATA *v7; // rcx
  int v8; // r8d
  char v9; // al
  char v10; // al

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  updated = 0;
  v4 = 0;
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v9 = *((_BYTE *)this + 73);
  if ( v9 != *((_BYTE *)this + 75) )
  {
    *((_BYTE *)this + 75) = v9;
    v4 = 1;
  }
  v10 = *((_BYTE *)this + 74);
  if ( v10 != *((_BYTE *)this + 76) )
  {
    *((_BYTE *)this + 76) = v10;
    v5 = 1;
  }
  *((_BYTE *)this + 72) = 0;
  if ( v1 )
    LeaveCriticalSection(v1);
  if ( v4 )
  {
    v7 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 1);
    if ( v7 )
      updated = PubSebiUpdateLevelEventRpc(v7, *((_BYTE *)this + 75) != 0);
  }
  if ( v5 )
  {
    v7 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 2);
    if ( v7 )
      PubSebiUpdateLevelEventRpc(v7, *((_BYTE *)this + 76) != 0);
  }
  if ( (v4 || v5) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0zttq_EventWriteTransfer(
      (_DWORD)v7,
      v6,
      v8,
      *((unsigned __int8 *)this + 75),
      *((_BYTE *)this + 76),
      updated);
}
