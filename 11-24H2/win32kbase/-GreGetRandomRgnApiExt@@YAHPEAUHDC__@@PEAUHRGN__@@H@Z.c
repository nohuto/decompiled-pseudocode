/*
 * XREFs of ?GreGetRandomRgnApiExt@@YAHPEAUHDC__@@PEAUHRGN__@@H@Z @ 0x1400F4DF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreGetRandomRgnApiExt(HDC a1, HRGN a2, unsigned int a3)
{
  unsigned int v6; // ebx
  int (*v7)(void); // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int (__fastcall *v10)(HDC, HRGN, _QWORD); // rax

  v6 = 0;
  v7 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 80LL);
  if ( v7 && v7() >= 0 )
  {
    v10 = *(unsigned int (__fastcall **)(HDC, HRGN, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v9, v8) + 24) + 88LL);
    if ( v10 )
      return v10(a1, a2, a3);
    else
      return (unsigned int)-1;
  }
  return v6;
}
