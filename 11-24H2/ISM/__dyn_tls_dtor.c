/*
 * XREFs of __dyn_tls_dtor @ 0x18009E980
 * Callers:
 *     <none>
 * Callees:
 *     _free_base @ 0x18009D41E (_free_base.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall _dyn_tls_dtor(__int64 a1, int a2)
{
  __int64 v2; // r14
  _QWORD *v3; // rdi
  int v4; // ebx
  void (**v5)(void); // rsi
  _QWORD *v6; // rbx

  if ( a2 == 3 || !a2 )
  {
    v2 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
    v3 = *(_QWORD **)(v2 + 48);
    if ( v3 )
    {
      while ( 1 )
      {
        v4 = *(_DWORD *)v3 - 1;
        if ( v4 >= 0 )
        {
          v5 = (void (**)(void))&v3[v4 + 2];
          do
          {
            if ( *v5 )
              (*v5)();
            --v5;
            --v4;
          }
          while ( v4 >= 0 );
        }
        v6 = (_QWORD *)v3[1];
        if ( !v6 )
          break;
        free_base(v3);
        *(_QWORD *)(v2 + 48) = v6;
        v3 = v6;
      }
      *(_QWORD *)(v2 + 48) = 0LL;
    }
  }
}
