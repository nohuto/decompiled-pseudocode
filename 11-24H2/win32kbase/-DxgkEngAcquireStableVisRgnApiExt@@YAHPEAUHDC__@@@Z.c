/*
 * XREFs of ?DxgkEngAcquireStableVisRgnApiExt@@YAHPEAUHDC__@@@Z @ 0x1400F9FA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkEngAcquireStableVisRgnApiExt(HDC a1, __int64 a2)
{
  unsigned int v3; // ebx
  int (*v4)(void); // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int (__fastcall *v7)(HDC); // rax

  v3 = 0;
  v4 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 320LL);
  if ( !v4 || v4() < 0 )
    return 0LL;
  v7 = *(unsigned int (__fastcall **)(HDC))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6, v5) + 24) + 328LL);
  if ( v7 )
    return v7(a1);
  return v3;
}
