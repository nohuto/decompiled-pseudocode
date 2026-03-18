/*
 * XREFs of ?ClearInputPanelRects@DelayZoneTelemetry@@QEAAXXZ @ 0x140150C48
 * Callers:
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1400D0998 (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 *     ?ClearSession@DelayZoneTelemetry@@QEAAXXZ @ 0x14021F69C (-ClearSession@DelayZoneTelemetry@@QEAAXXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

void __fastcall DelayZoneTelemetry::ClearInputPanelRects(DelayZoneTelemetry *this)
{
  char *v1; // rdi
  char *v2; // rbx
  char *v3; // rdx
  char *v4; // rcx
  char **v5; // rax

  v1 = (char *)this + 12288;
  v2 = (char *)*((_QWORD *)this + 1536);
  while ( v2 != v1 )
  {
    v3 = *(char **)v2;
    v4 = v2;
    v2 = v3;
    if ( *((char **)v3 + 1) != v4 || (v5 = (char **)*((_QWORD *)v4 + 1), *v5 != v4) )
      __fastfail(3u);
    *v5 = v3;
    *((_QWORD *)v3 + 1) = v5;
    GreDeleteFastMutex(v4);
  }
}
