/*
 * XREFs of ?IsDetachedFromTree@ShellGesturesClientProxy@@QEAA_NXZ @ 0x180080A80
 * Callers:
 *     ?TraceClients@ShellGesturesProcessor@@CAXXZ @ 0x18008A514 (-TraceClients@ShellGesturesProcessor@@CAXXZ.c)
 *     ?ProcessInteropMessage@ShellGesturesProcessor@@SAXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z @ 0x180159C88 (-ProcessInteropMessage@ShellGesturesProcessor@@SAXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ShellGesturesClientProxy::IsDetachedFromTree(ShellGesturesClientProxy *this)
{
  __int64 v1; // rcx
  char v2; // dl
  _DWORD *v3; // r8
  _DWORD *i; // rcx

  v1 = *((_QWORD *)this + 20);
  v2 = 0;
  if ( v1 )
  {
    v3 = *(_DWORD **)(v1 + 24);
    for ( i = *(_DWORD **)(v1 + 16); i != v3 && *i; i += 4 )
      ;
    if ( i == v3 )
      return 1;
  }
  return v2;
}
