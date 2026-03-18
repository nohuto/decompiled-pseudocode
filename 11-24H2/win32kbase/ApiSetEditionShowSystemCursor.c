/*
 * XREFs of ApiSetEditionShowSystemCursor @ 0x140193368
 * Callers:
 *     xxxUserProcessCallout @ 0x140167490 (xxxUserProcessCallout.c)
 *     ?UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z @ 0x1401B2608 (-UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionShowSystemCursor(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int (*v3)(void); // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int (__fastcall *v6)(__int64); // rax

  v2 = 0;
  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 6576LL);
  if ( v3 )
  {
    if ( v3() >= 0 )
    {
      v6 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 6584LL);
      if ( v6 )
        return v6(1LL);
    }
  }
  return v2;
}
