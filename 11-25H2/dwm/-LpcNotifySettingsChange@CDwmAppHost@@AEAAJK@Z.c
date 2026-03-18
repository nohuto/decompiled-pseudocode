/*
 * XREFs of ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x140002E78
 * Callers:
 *     ?s_LpcCommandHandler@CDwmAppHost@@CAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x140002060 (-s_LpcCommandHandler@CDwmAppHost@@CAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 *     ?PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@00_N@Z @ 0x1400022B8 (-PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@00_N@Z.c)
 *     ?NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x140003BD4 (-NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 *     ?OnSettingChange@CDwmAppHost@@AEAAX_K_J@Z @ 0x140003F40 (-OnSettingChange@CDwmAppHost@@AEAAX_K_J@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1400030AC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?LpcVerifyOutgoingPayloadSize@@YAXPEBU_PORT_MESSAGE@@@Z @ 0x140003168 (-LpcVerifyOutgoingPayloadSize@@YAXPEBU_PORT_MESSAGE@@@Z.c)
 */

__int64 __fastcall CDwmAppHost::LpcNotifySettingsChange(CDwmAppHost *this, int a2)
{
  int v3; // ebx
  struct _PORT_MESSAGE *v4; // rax
  struct _PORT_MESSAGE *v5; // rdi
  int v6; // eax
  int v7; // edi
  signed __int32 v9; // [rsp+48h] [rbp-38h] BYREF
  HANDLE hObject; // [rsp+50h] [rbp-30h]
  char v11; // [rsp+58h] [rbp-28h]
  int v12; // [rsp+5Ch] [rbp-24h]
  LPVOID lpMem[2]; // [rsp+60h] [rbp-20h]
  HANDLE hHeap; // [rsp+70h] [rbp-10h]
  void *v15; // [rsp+A0h] [rbp+20h]

  v3 = 0;
  if ( !*(&hInstance + 1) )
    return (unsigned int)v3;
  v11 = 0;
  v12 = 0;
  v9 = 0;
  *(_OWORD *)lpMem = 0LL;
  LODWORD(v15) = 1073741871;
  hHeap = GetProcessHeap();
  hObject = *(&hInstance + 1);
  HIDWORD(v15) = a2;
  v4 = (struct _PORT_MESSAGE *)HeapAlloc(hHeap, 8u, 0x38uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[1].u1.Length = 1073741871;
    v4->u1.Length = 3670032;
    LpcVerifyOutgoingPayloadSize(v4);
    v5[1].ClientId.UniqueProcess = v15;
    v6 = NtAlpcSendWaitReceivePort(hObject, 0x10000LL, v5, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( v6 == -1073741769 || v6 == -1073741229 )
      _InterlockedCompareExchange(&v9, 1, 0);
    if ( v6 < 0 )
    {
      v3 = v6 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(
        4u,
        &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
        9u,
        v6 | 0x10000000,
        0x1C2u,
        0LL);
    }
    HeapFree(hHeap, 0, v5);
    v7 = v3;
    if ( v3 >= 0 )
      goto LABEL_9;
  }
  else
  {
    v3 = -2147024882;
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      4u,
      &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
      9u,
      -2147024882,
      0x1B1u,
      0LL);
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x17Cu, 0LL);
LABEL_9:
  if ( v11 && hObject )
  {
    CloseHandle(hObject);
    v11 = 0;
  }
  hObject = 0LL;
  v9 = 0;
  if ( lpMem[1] )
    HeapFree(hHeap, 0, lpMem[1]);
  return (unsigned int)v3;
}
