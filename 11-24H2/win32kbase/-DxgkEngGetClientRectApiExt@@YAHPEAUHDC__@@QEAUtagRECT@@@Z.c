/*
 * XREFs of ?DxgkEngGetClientRectApiExt@@YAHPEAUHDC__@@QEAUtagRECT@@@Z @ 0x1400F7000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkEngGetClientRectApiExt(HDC a1, struct tagRECT *const a2)
{
  unsigned int v4; // ebx
  int (*v5)(void); // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int (__fastcall *v8)(HDC, struct tagRECT *const); // rax

  v4 = 0;
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 192LL);
  if ( v5 )
  {
    if ( v5() >= 0 )
    {
      v8 = *(unsigned int (__fastcall **)(HDC, struct tagRECT *const))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7, v6)
                                                                                 + 24)
                                                                     + 200LL);
      if ( v8 )
        return v8(a1, a2);
    }
  }
  return v4;
}
