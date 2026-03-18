/*
 * XREFs of ?ReportGetAsyncKeyStateAnomaly@CAsyncKeyEventMonitor@@AEAAXK@Z @ 0x1400ED528
 * Callers:
 *     ?OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ @ 0x1400ED484 (-OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1400E24D4 (McTemplateK0qqq_EtwWriteTransfer.c)
 */

void __fastcall CAsyncKeyEventMonitor::ReportGetAsyncKeyStateAnomaly(
        CAsyncKeyEventMonitor *this,
        unsigned int a2,
        __int64 a3)
{
  _DWORD *v4; // rbx
  unsigned int i; // edi
  int v6; // r9d
  __int64 v7; // rcx

  v4 = (_DWORD *)((char *)this + 12);
  for ( i = 0; i < 0xA; ++i )
  {
    v6 = *(v4 - 1);
    if ( v6 == -1 )
      break;
    v7 = (unsigned int)*v4;
    if ( (unsigned int)v7 >= 2
      && (!a2 || (unsigned int)v7 / a2)
      && (Microsoft_Windows_Win32kEnableBits & 0x400000000LL) != 0 )
    {
      McTemplateK0qqq_EtwWriteTransfer(v7, &AuditApiGetAsyncKeyState, a3, v6, a2, *v4);
    }
    *(v4 - 1) = -1;
    *v4 = -1;
    v4 += 2;
  }
}
