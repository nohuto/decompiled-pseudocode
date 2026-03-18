/*
 * XREFs of ??0CPortClient@@QEAA@IPEAX@Z @ 0x140002BF4
 * Callers:
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140002A10 (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 *     ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140003934 (-LpcSyncFlush@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

CPortClient *__fastcall CPortClient::CPortClient(CPortClient *this, __int64 a2, void *a3)
{
  *(_QWORD *)this = &CPortClient::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_BYTE *)this + 24) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = GetProcessHeap();
  return this;
}
