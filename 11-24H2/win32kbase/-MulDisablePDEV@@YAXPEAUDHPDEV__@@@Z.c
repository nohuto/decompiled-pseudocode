/*
 * XREFs of ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x140155FA0
 * Callers:
 *     <none>
 * Callees:
 *     EngFreeMem @ 0x14001A6C0 (EngFreeMem.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x140039260 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall MulDisablePDEV(_QWORD *pv, __int64 a2)
{
  __int64 v2; // rbx
  void (__fastcall *v4)(__int64); // rax
  _QWORD *i; // rbx

  v2 = pv[4];
  v4 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(pv, a2) + 24) + 24LL);
  if ( v4 )
    v4(v2);
  for ( i = (_QWORD *)*pv; i; i = (_QWORD *)*i )
    PDEVOBJ::vUnreferencePdev((PDEVOBJ *)(i + 7));
  EngFreeMem(pv);
}
