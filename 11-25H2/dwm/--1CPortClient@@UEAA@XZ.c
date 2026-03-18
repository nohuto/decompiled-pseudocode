/*
 * XREFs of ??1CPortClient@@UEAA@XZ @ 0x140003B1C
 * Callers:
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140002A10 (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 *     ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140003934 (-LpcSyncFlush@CDwmAppHost@@AEAAJXZ.c)
 *     ??_ECPortClient@@UEAAPEAXI@Z @ 0x14000E9C0 (--_ECPortClient@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Disconnect@CPortClient@@QEAAXXZ @ 0x140003B64 (-Disconnect@CPortClient@@QEAAXXZ.c)
 */

void __fastcall CPortClient::~CPortClient(HANDLE *this)
{
  HANDLE v2; // r8

  *this = &CPortClient::`vftable';
  CPortClient::Disconnect((CPortClient *)this);
  v2 = this[5];
  if ( v2 )
  {
    HeapFree(this[6], 0, v2);
    this[5] = 0LL;
  }
}
