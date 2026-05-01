/*
 * XREFs of ?IsVisible@XamlLauncher@@UEAAJPEAH@Z @ 0x1801D7150
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall XamlLauncher::IsVisible(XamlLauncher *this, int *a2)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 result; // rax

  v2 = *((_QWORD *)this + 44);
  v3 = 0;
  if ( !v2 )
    return 2147943568LL;
  LOBYTE(v3) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 104LL))(v2) != 0;
  result = 0LL;
  *a2 = v3;
  return result;
}
