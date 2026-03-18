/*
 * XREFs of ApiSetGetMiPInputTransform @ 0x140193A94
 * Callers:
 *     NtUserGetPointerInputTransform @ 0x14016D770 (NtUserGetPointerInputTransform.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetGetMiPInputTransform(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  int (*v5)(void); // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int (__fastcall *v8)(__int64, __int64); // rax

  v4 = 0;
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 6256LL);
  if ( v5 )
  {
    if ( v5() >= 0 )
    {
      v8 = *(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7, v6) + 48)
                                                           + 6264LL);
      if ( v8 )
        return v8(a1, a2);
    }
  }
  return v4;
}
