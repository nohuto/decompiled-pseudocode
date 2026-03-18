/*
 * XREFs of ?InvalidateWeakRef@CResourceWeakRef@@UEAAXXZ @ 0x180132FA0
 * Callers:
 *     ?Delete@CResource@@IEAAXXZ @ 0x180132B80 (-Delete@CResource@@IEAAXXZ.c)
 *     ??1CResource@@MEAA@XZ @ 0x180132ECC (--1CResource@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180041D40 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CResourceWeakRef::InvalidateWeakRef(CResourceWeakRef *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // r14
  _QWORD *v3; // rsi
  char *v4; // rdi
  unsigned __int64 v5; // rbx
  _QWORD *v6; // r15
  SIZE_T size_of; // rax
  _QWORD *v8; // rax
  const void *v9; // rdx
  signed __int64 v10; // rbx
  _QWORD *i; // rbx

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v3 = 0LL;
  v4 = 0LL;
  v5 = (__int64)(*((_QWORD *)this + 10) - *((_QWORD *)this + 9)) >> 3;
  v6 = 0LL;
  if ( v5 )
  {
    if ( v5 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    size_of = std::_Get_size_of_n<8>((__int64)(*((_QWORD *)this + 10) - *((_QWORD *)this + 9)) >> 3);
    v8 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v9 = (const void *)*((_QWORD *)this + 9);
    v3 = v8;
    v4 = (char *)&v8[v5];
    v10 = *((_QWORD *)this + 10) - (_QWORD)v9;
    memmove_0(v8, v9, v10);
    v6 = &v3[v10 >> 3];
  }
  EnterCriticalSection(v1);
  *((_QWORD *)this + 7) = 0LL;
  if ( v1 )
    LeaveCriticalSection(v1);
  *((_QWORD *)this + 8) = 0LL;
  LeaveCriticalSection(v1);
  for ( i = v3; i != v6; ++i )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*i + 80LL))(*i, 0LL, 0LL);
  if ( v3 )
    std::_Deallocate<16,0>(v3, (v4 - (char *)v3) & 0xFFFFFFFFFFFFFFF8uLL);
}
