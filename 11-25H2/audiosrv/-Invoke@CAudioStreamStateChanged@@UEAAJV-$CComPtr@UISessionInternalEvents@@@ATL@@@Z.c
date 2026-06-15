/*
 * XREFs of ?Invoke@CAudioStreamStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180058E20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStreamStateChanged::Invoke(__int64 a1, __int64 **a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 result; // rax
  unsigned int v10; // ebx

  v3 = *a2;
  v4 = **a2;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = v5 + 8;
  if ( !v5 )
    v7 = 0LL;
  v8 = v6 + 8;
  if ( !v6 )
    v8 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, __int64))(v4 + 80))(
             v3,
             v8,
             *(unsigned int *)(a1 + 16),
             *(unsigned int *)(a1 + 20),
             v7);
  v10 = result;
  if ( *a2 )
  {
    (*(void (__fastcall **)(__int64 *))(**a2 + 16))(*a2);
    return v10;
  }
  return result;
}
