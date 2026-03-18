/*
 * XREFs of McTemplateU0zttq_EventWriteTransfer @ 0x18025745C
 * Callers:
 *     ?CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ @ 0x1800C9618 (-CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ.c)
 *     ?CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ @ 0x1800C9890 (-CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ.c)
 *     ?SignalSEB@CFSVPProvider@@AEAAX_N0@Z @ 0x1801FB8A0 (-SignalSEB@CFSVPProvider@@AEAAX_N0@Z.c)
 *     ?ReleaseWNFHandles@CFSVPProvider@@AEAAXXZ @ 0x1802321F0 (-ReleaseWNFHandles@CFSVPProvider@@AEAAXXZ.c)
 *     ?SignalSEBWorker@CFSVPProvider@@AEAAXXZ @ 0x1802502D0 (-SignalSEBWorker@CFSVPProvider@@AEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0zttq_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6)
{
  __int64 v6; // rax
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-19h] BYREF
  const wchar_t *v9; // [rsp+40h] [rbp-9h]
  int v10; // [rsp+48h] [rbp-1h]
  int v11; // [rsp+4Ch] [rbp+3h]
  int *v12; // [rsp+50h] [rbp+7h]
  __int64 v13; // [rsp+58h] [rbp+Fh]
  char *v14; // [rsp+60h] [rbp+17h]
  __int64 v15; // [rsp+68h] [rbp+1Fh]
  char *v16; // [rsp+70h] [rbp+27h]
  __int64 v17; // [rsp+78h] [rbp+2Fh]
  int v18; // [rsp+B8h] [rbp+6Fh] BYREF

  v18 = a4;
  v6 = -1LL;
  do
    ++v6;
  while ( aFsvp[v6] );
  v9 = L"FSVP";
  v10 = 2 * v6 + 2;
  v11 = 0;
  v12 = &v18;
  v13 = 4LL;
  v14 = &a5;
  v15 = 4LL;
  v16 = &a6;
  v17 = 4LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_ETWGUID_PUBLISH_SEB_NOTIFICATION,
           a3,
           5u,
           &v8);
}
