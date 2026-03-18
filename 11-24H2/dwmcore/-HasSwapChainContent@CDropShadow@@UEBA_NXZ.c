/*
 * XREFs of ?HasSwapChainContent@CDropShadow@@UEBA_NXZ @ 0x180299D00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CDropShadow::HasSwapChainContent(CDropShadow *this)
{
  char v1; // bl
  __int64 v2; // rcx

  v1 = 0;
  if ( !*((_DWORD *)this + 31) )
  {
    v2 = *((_QWORD *)this + 22);
    if ( v2 )
      return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 272LL))(v2) != 0;
  }
  return v1;
}
