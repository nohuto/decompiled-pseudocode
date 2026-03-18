/*
 * XREFs of ?xxxDestroyWindowIfSupported@@YAHPEAUtagWND@@@Z @ 0x1401130D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxDestroyWindowIfSupported(struct tagWND *a1, __int64 a2)
{
  unsigned int v3; // ebx
  int (*v4)(void); // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int (__fastcall *v7)(struct tagWND *); // rax

  v3 = 0;
  v4 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 2752LL);
  if ( v4 )
  {
    if ( v4() >= 0 )
    {
      v7 = *(unsigned int (__fastcall **)(struct tagWND *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6, v5) + 48)
                                                          + 2760LL);
      if ( v7 )
        return v7(a1);
    }
  }
  return v3;
}
