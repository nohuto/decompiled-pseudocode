/*
 * XREFs of ??1CPortClient@@UEAA@XZ @ 0x140002EC8
 * Callers:
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140002010 (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x140002C30 (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140003644 (-LpcSyncFlush@CDwmAppHost@@AEAAJXZ.c)
 *     ??_ECPortClient@@UEAAPEAXI@Z @ 0x14000CE60 (--_ECPortClient@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPortClient::~CPortClient(CPortClient *this)
{
  *(_QWORD *)this = &CPortClient::`vftable';
  CPortClient::Disconnect(this);
}
