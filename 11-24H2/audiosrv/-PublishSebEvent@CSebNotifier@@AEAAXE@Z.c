/*
 * XREFs of ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x1800605B0
 * Callers:
 *     ?AcquireSebReference@CSebNotifier@@QEAA?AV?$shared_ptr@VCSebReference@@@std@@XZ @ 0x1800114D0 (-AcquireSebReference@CSebNotifier@@QEAA-AV-$shared_ptr@VCSebReference@@@std@@XZ.c)
 *     ?ReleaseSebReference@CSebNotifier@@QEAAXXZ @ 0x18006375C (-ReleaseSebReference@CSebNotifier@@QEAAXXZ.c)
 *     _lambda_35797e26c2f113dffb458279a808fd40_::_lambda_invoker_cdecl_ @ 0x1801092E0 (_lambda_35797e26c2f113dffb458279a808fd40_--_lambda_invoker_cdecl_.c)
 *     ??0CSebNotifier@@QEAA@XZ @ 0x18010982C (--0CSebNotifier@@QEAA@XZ.c)
 *     ??1CSebNotifier@@QEAA@XZ @ 0x180109B4C (--1CSebNotifier@@QEAA@XZ.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     PubSebLevelEvent @ 0x1800606F8 (PubSebLevelEvent.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

void __fastcall CSebNotifier::PublishSebEvent(CSebNotifier *this, char a2)
{
  int v4; // esi
  __int64 v5; // rcx
  char v6; // [rsp+30h] [rbp-29h] BYREF
  _DWORD v7[3]; // [rsp+34h] [rbp-25h] BYREF
  _DWORD v8[2]; // [rsp+40h] [rbp-19h] BYREF
  __int64 v9; // [rsp+48h] [rbp-11h]
  unsigned __int16 *v10; // [rsp+50h] [rbp-9h]
  int v11; // [rsp+58h] [rbp-1h]
  int v12; // [rsp+5Ch] [rbp+3h]
  void *v13; // [rsp+60h] [rbp+7h]
  int v14; // [rsp+68h] [rbp+Fh]
  int v15; // [rsp+6Ch] [rbp+13h]
  char *v16; // [rsp+70h] [rbp+17h]
  int v17; // [rsp+78h] [rbp+1Fh]
  int v18; // [rsp+7Ch] [rbp+23h]
  _DWORD *v19; // [rsp+80h] [rbp+27h]
  int v20; // [rsp+88h] [rbp+2Fh]
  int v21; // [rsp+8Ch] [rbp+33h]

  if ( *((_BYTE *)this + 40) != a2 )
  {
    v4 = PubSebLevelEvent(WNF_SEB_AUDIO_ACTIVITY);
    if ( v4 >= 0 )
      *((_BYTE *)this + 40) = a2;
    v5 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *(_DWORD *)v5 > 4u
      && (*(_BYTE *)(v5 + 16) & 0x40) != 0
      && (*(_QWORD *)(v5 + 24) & 0x40LL) == *(_QWORD *)(v5 + 24) )
    {
      v21 = 0;
      v18 = 0;
      v19 = v7;
      v17 = 1;
      v16 = &v6;
      v8[1] = 4;
      v10 = *(unsigned __int16 **)(v5 + 8);
      v20 = 4;
      v7[0] = v4;
      v6 = a2;
      v8[0] = 184549376;
      v9 = 64LL;
      v11 = *v10;
      v13 = &unk_1801AD649;
      v15 = 1;
      v12 = 2;
      v14 = 52;
      v7[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwEventWriteTransfer(*(_QWORD *)(v5 + 32), v8, 0LL, 0LL);
    }
  }
}
