/*
 * XREFs of ?FreeWin32KSyscallFilter@@YAXXZ @ 0x140154584
 * Callers:
 *     InitializeWin32KSyscallFilter @ 0x1401005C0 (InitializeWin32KSyscallFilter.c)
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140164AC0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeWin32KSyscallFilter(__int64 a1)
{
  __int64 v1; // rdi
  void **v2; // rbx
  void *v3; // rcx
  __int64 v4; // rbx
  void *v5; // rcx

  v1 = 7LL;
  v2 = (void **)(W32GetUserSessionState(a1) + 70984);
  do
  {
    v3 = *v2;
    if ( *v2 )
    {
      ExFreePoolWithTag(v3, 0);
      *v2 = 0LL;
    }
    ++v2;
    --v1;
  }
  while ( v1 );
  v4 = W32GetUserSessionState(v3) + 71152;
  if ( *(_QWORD *)v4 )
  {
    ExFreePoolWithTag(*(PVOID *)v4, 0);
    *(_QWORD *)v4 = 0LL;
  }
  v5 = *(void **)(v4 + 8);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *(_QWORD *)(v4 + 8) = 0LL;
  }
}
