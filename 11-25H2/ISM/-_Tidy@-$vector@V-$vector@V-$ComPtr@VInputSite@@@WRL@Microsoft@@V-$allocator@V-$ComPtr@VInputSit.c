/*
 * XREFs of ?_Tidy@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x18004BE50
 * Callers:
 *     ??4HitTestResult@@QEAAAEAU0@$$QEAU0@@Z @ 0x180148808 (--4HitTestResult@@QEAAAEAU0@$$QEAU0@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Tidy(char **a1)
{
  char *v2; // rbx
  char *i; // rbp
  char *v4; // rdi
  char *j; // rsi
  char *v6; // rcx
  const struct std::nothrow_t *v7; // rdx
  char *v8; // rcx
  __int64 v9; // rcx
  char *v10; // r8
  char *v11; // rcx
  char *v12; // r8

  v2 = *a1;
  if ( *a1 )
  {
    for ( i = a1[1]; v2 != i; v2 += 24 )
    {
      v4 = *(char **)v2;
      if ( *(_QWORD *)v2 )
      {
        for ( j = (char *)*((_QWORD *)v2 + 1); v4 != j; v4 += 8 )
        {
          v9 = *(_QWORD *)v4;
          if ( *(_QWORD *)v4 )
          {
            *(_QWORD *)v4 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
          }
        }
        v6 = *(char **)v2;
        v7 = (const struct std::nothrow_t *)((*((_QWORD *)v2 + 2) - *(_QWORD *)v2) & 0xFFFFFFFFFFFFFFF8uLL);
        if ( (unsigned __int64)v7 >= 0x1000 )
        {
          v7 = (const struct std::nothrow_t *)((char *)v7 + 39);
          v10 = (char *)*((_QWORD *)v6 - 1);
          v11 = (char *)(v6 - v10);
          if ( (unsigned __int64)(v11 - 8) > 0x1F )
            goto LABEL_19;
          v6 = v10;
        }
        operator delete(v6, v7);
        *(_QWORD *)v2 = 0LL;
        *((_QWORD *)v2 + 1) = 0LL;
        *((_QWORD *)v2 + 2) = 0LL;
      }
    }
    v8 = *a1;
    v7 = (const struct std::nothrow_t *)(8 * ((a1[2] - *a1) >> 3));
    if ( (unsigned __int64)v7 >= 0x1000 )
    {
      v7 = (const struct std::nothrow_t *)((char *)v7 + 39);
      v12 = (char *)*((_QWORD *)v8 - 1);
      v11 = (char *)(v8 - v12);
      if ( (unsigned __int64)(v11 - 8) > 0x1F )
      {
LABEL_19:
        _o__invalid_parameter_noinfo_noreturn(v11, v7);
        __debugbreak();
        JUMPOUT(0x18004BF90LL);
      }
      v8 = v12;
    }
    operator delete(v8, v7);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
