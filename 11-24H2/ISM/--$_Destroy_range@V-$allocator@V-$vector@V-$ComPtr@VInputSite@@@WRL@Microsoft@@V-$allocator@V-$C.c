/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@YAXPEAV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@0@QEAV10@AEAV?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@0@@Z @ 0x1800493B0
 * Callers:
 *     ??$_Emplace_reallocate@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAAPEAV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x18001B550 (--$_Emplace_reallocate@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VI.c)
 *     _std::vector_std::vector_Microsoft::WRL::ComPtr_InputSite__std::allocator_Microsoft::WRL::ComPtr_InputSite______std::allocator_std::vector_Microsoft::WRL::ComPtr_InputSite__std::allocator_Microsoft::WRL::ComPtr_InputSite_________::_Emplace_reallocate_std::vector_Microsoft::WRL::ComPtr_InputSite__std::allocator_Microsoft::WRL::ComPtr_InputSite________::_1_::catch$1 @ 0x1801D0300 (_std--vector_std--vector_Microsoft--WRL--ComPtr_InputSite__std--allocator_Microsoft--WRL--ComPtr.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Destroy_range<std::allocator<std::vector<Microsoft::WRL::ComPtr<InputSite>>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  char *v4; // rdi
  char *i; // rsi
  char *v6; // rcx
  const struct std::nothrow_t *v7; // rdx
  __int64 v8; // rcx
  char *v9; // r8
  char *v10; // rcx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(char **)v3;
      if ( *(_QWORD *)v3 )
      {
        for ( i = *(char **)(v3 + 8); v4 != i; v4 += 8 )
        {
          v8 = *(_QWORD *)v4;
          if ( *(_QWORD *)v4 )
          {
            *(_QWORD *)v4 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
          }
        }
        v6 = *(char **)v3;
        v7 = (const struct std::nothrow_t *)((*(_QWORD *)(v3 + 16) - *(_QWORD *)v3) & 0xFFFFFFFFFFFFFFF8uLL);
        if ( (unsigned __int64)v7 >= 0x1000 )
        {
          v7 = (const struct std::nothrow_t *)((char *)v7 + 39);
          v9 = (char *)*((_QWORD *)v6 - 1);
          v10 = (char *)(v6 - v9);
          if ( (unsigned __int64)(v10 - 8) > 0x1F )
          {
            _o__invalid_parameter_noinfo_noreturn(v10, v7);
            __debugbreak();
            JUMPOUT(0x18004947FLL);
          }
          v6 = v9;
        }
        operator delete(v6, v7);
        *(_QWORD *)v3 = 0LL;
        *(_QWORD *)(v3 + 8) = 0LL;
        *(_QWORD *)(v3 + 16) = 0LL;
      }
      v3 += 24LL;
    }
    while ( v3 != a2 );
  }
}
