/*
 * XREFs of ?FreeDdeXactIfSupported@@YAXPEAUtagXSTATE@@@Z @ 0x1401B5EA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall FreeDdeXactIfSupported(struct tagXSTATE *a1, __int64 a2)
{
  int (*v3)(void); // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  void (__fastcall *v6)(struct tagXSTATE *); // rax

  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 2864LL);
  if ( v3 && v3() >= 0 )
  {
    v6 = *(void (__fastcall **)(struct tagXSTATE *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 2872LL);
    if ( v6 )
      v6(a1);
  }
}
