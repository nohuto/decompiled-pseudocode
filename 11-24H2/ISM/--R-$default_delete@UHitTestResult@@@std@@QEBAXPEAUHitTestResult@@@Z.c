/*
 * XREFs of ??R?$default_delete@UHitTestResult@@@std@@QEBAXPEAUHitTestResult@@@Z @ 0x18004AFE0
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180019290 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ??$?4U?$default_delete@UHitTestResult@@@std@@$0A@@?$unique_ptr@UHitTestResult@@U?$default_delete@UHitTestResult@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18005A678 (--$-4U-$default_delete@UHitTestResult@@@std@@$0A@@-$unique_ptr@UHitTestResult@@U-$default_delete.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::default_delete<HitTestResult>::operator()(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 i; // rbp
  char *v5; // rdi
  char *j; // rsi
  char *v7; // rcx
  const struct std::nothrow_t *v8; // rdx
  char *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  char *v12; // r8
  char *v13; // rcx
  char *v14; // r8

  if ( a2 )
  {
    v3 = a2[12];
    if ( v3 )
    {
      for ( i = a2[13]; v3 != i; v3 += 24LL )
      {
        v5 = *(char **)v3;
        if ( *(_QWORD *)v3 )
        {
          for ( j = *(char **)(v3 + 8); v5 != j; v5 += 8 )
          {
            v11 = *(_QWORD *)v5;
            if ( *(_QWORD *)v5 )
            {
              *(_QWORD *)v5 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
            }
          }
          v7 = *(char **)v3;
          v8 = (const struct std::nothrow_t *)((*(_QWORD *)(v3 + 16) - *(_QWORD *)v3) & 0xFFFFFFFFFFFFFFF8uLL);
          if ( (unsigned __int64)v8 >= 0x1000 )
          {
            v8 = (const struct std::nothrow_t *)((char *)v8 + 39);
            v12 = (char *)*((_QWORD *)v7 - 1);
            v13 = (char *)(v7 - v12);
            if ( (unsigned __int64)(v13 - 8) > 0x1F )
              goto LABEL_22;
            v7 = v12;
          }
          operator delete(v7, v8);
          *(_QWORD *)v3 = 0LL;
          *(_QWORD *)(v3 + 8) = 0LL;
          *(_QWORD *)(v3 + 16) = 0LL;
        }
      }
      v9 = (char *)a2[12];
      v8 = (const struct std::nothrow_t *)(8 * ((__int64)(a2[14] - (_QWORD)v9) >> 3));
      if ( (unsigned __int64)v8 >= 0x1000 )
      {
        v8 = (const struct std::nothrow_t *)((char *)v8 + 39);
        v14 = (char *)*((_QWORD *)v9 - 1);
        v13 = (char *)(v9 - v14);
        if ( (unsigned __int64)(v13 - 8) > 0x1F )
        {
LABEL_22:
          _o__invalid_parameter_noinfo_noreturn(v13, v8);
          __debugbreak();
          goto LABEL_23;
        }
        v9 = v14;
      }
      operator delete(v9, v8);
      a2[12] = 0LL;
      a2[13] = 0LL;
      a2[14] = 0LL;
    }
    v10 = a2[1];
    if ( (unsigned __int64)(v10 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
LABEL_12:
      operator delete(a2, (const struct std::nothrow_t *)0x78);
      return;
    }
LABEL_23:
    NtCloseCompositionInputSink(v10, a2);
    goto LABEL_12;
  }
}
