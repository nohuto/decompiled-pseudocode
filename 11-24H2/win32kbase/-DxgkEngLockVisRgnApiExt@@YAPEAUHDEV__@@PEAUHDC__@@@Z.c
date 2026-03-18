/*
 * XREFs of ?DxgkEngLockVisRgnApiExt@@YAPEAUHDEV__@@PEAUHDC__@@@Z @ 0x1400FE5F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkEngLockVisRgnApiExt(HDC a1, __int64 a2)
{
  __int64 v3; // rbx
  int (*v4)(void); // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(HDC); // rax

  v3 = 0LL;
  v4 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 96LL);
  if ( v4 )
  {
    if ( v4() >= 0 )
    {
      v7 = *(__int64 (__fastcall **)(HDC))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6, v5) + 24) + 104LL);
      if ( v7 )
        return v7(a1);
    }
  }
  return v3;
}
