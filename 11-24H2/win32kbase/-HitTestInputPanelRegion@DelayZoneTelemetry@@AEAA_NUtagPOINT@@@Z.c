/*
 * XREFs of ?HitTestInputPanelRegion@DelayZoneTelemetry@@AEAA_NUtagPOINT@@@Z @ 0x14021F714
 * Callers:
 *     ?UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDelayZonePanelTelemetryData@@PEBUtagPOINTER_INFO@@K@Z @ 0x14021F98C (-UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDela.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     PtInRect @ 0x1400DCAE4 (PtInRect.c)
 */

char __fastcall DelayZoneTelemetry::HitTestInputPanelRegion(DelayZoneTelemetry *this, struct tagPOINT a2)
{
  char *v2; // rsi
  char v3; // bp
  char *v4; // rdi
  bool v7; // zf
  __int64 v8; // r8
  char *v9; // rax
  char **v10; // rdx

  v2 = (char *)this + 12288;
  v3 = 0;
  v4 = (char *)*((_QWORD *)this + 1536);
  if ( v4 == (char *)this + 12288 )
    return 0;
  do
  {
    v7 = !PtInRect((_DWORD *)v4 + 4, *(_QWORD *)&a2);
    v9 = *(char **)v4;
    if ( !v7 )
      v3 = 1;
    v4 = *(char **)v4;
    if ( *((_QWORD *)v9 + 1) != v8 || (v10 = *(char ***)(v8 + 8), *v10 != (char *)v8) )
      __fastfail(3u);
    *v10 = v9;
    *((_QWORD *)v9 + 1) = v10;
    GreDeleteFastMutex((char *)v8);
  }
  while ( v4 != v2 );
  return v3;
}
