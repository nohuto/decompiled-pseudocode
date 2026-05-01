/*
 * XREFs of ??$getline@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@YAAEAV?$basic_istream@GU?$char_traits@G@std@@@0@$$QEAV10@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@G@Z @ 0x18013B34C
 * Callers:
 *     ?GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@UShellViewAnimationProperties@3UI@WindowsUdk@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180275210 (-GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@W.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180048A38 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802CF544 (-_Xlen_string@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1806CA2DC (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::getline<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(
        __int64 a1,
        __int64 a2,
        __int16 a3)
{
  __int16 v3; // r12
  __int64 v5; // rdi
  unsigned int v6; // r14d
  char v7; // bl
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  _WORD *v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rcx
  _WORD *v16; // rax
  __int64 v17; // rax
  __int16 v18; // dx
  __int64 v19; // r8
  unsigned __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rbx
  size_t size_of; // rax
  char *v24; // r13
  size_t v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  void *v29; // rbx
  __int16 v30; // [rsp+20h] [rbp-58h]
  unsigned int v31; // [rsp+24h] [rbp-54h]
  unsigned __int64 v32; // [rsp+28h] [rbp-50h]
  char Size; // [rsp+98h] [rbp+20h]
  __int64 Sizea; // [rsp+98h] [rbp+20h]

  v3 = a3;
  v5 = a1;
  v6 = 0;
  v31 = 0;
  v7 = 0;
  Size = 0;
  v8 = a1;
  v9 = std::basic_ios<unsigned short>::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
  v11 = v9;
  if ( v9 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, v9);
  LOBYTE(v11) = 1;
  if ( !(unsigned __int8)std::basic_istream<unsigned short>::_Ipfx(v5, v11, v10) )
    goto LABEL_32;
  v12 = (_WORD *)a2;
  if ( *(_QWORD *)(a2 + 24) > 7uLL )
    v12 = *(_WORD **)a2;
  *(_QWORD *)(a2 + 16) = 0LL;
  *v12 = 0;
  v13 = std::basic_ios<unsigned short>::rdbuf(v5 + *(int *)(*(_QWORD *)v5 + 4LL));
  try
  {
    v18 = std::basic_streambuf<unsigned short>::sgetc(v13);
    v30 = v18;
    while ( 1 )
    {
      if ( v18 == -1 )
      {
        v6 = 1;
        goto LABEL_28;
      }
      if ( v18 == v3 )
      {
        v7 = 1;
        Size = 1;
        v26 = std::basic_ios<unsigned short>::rdbuf(v5 + *(int *)(*(_QWORD *)v5 + 4LL));
        std::basic_streambuf<unsigned short>::sbumpc(v26);
        goto LABEL_35;
      }
      v14 = *(_QWORD *)(a2 + 16);
      if ( v14 >= 0x7FFFFFFFFFFFFFFELL )
        break;
      v15 = *(_QWORD *)(a2 + 24);
      v32 = v15;
      if ( v14 >= v15 )
      {
        v20 = (v14 + 1) | 7;
        if ( v20 > 0x7FFFFFFFFFFFFFFELL || (v21 = v15 >> 1, v15 > 0x7FFFFFFFFFFFFFFELL - (v15 >> 1)) )
        {
          v22 = 0x7FFFFFFFFFFFFFFELL;
        }
        else
        {
          v22 = v21 + v15;
          if ( v20 >= v21 + v15 )
            v22 = (v14 + 1) | 7;
        }
        size_of = std::_Get_size_of_n<2>(v22 + 1);
        v24 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
        *(_QWORD *)(a2 + 16) = v14 + 1;
        *(_QWORD *)(a2 + 24) = v22;
        v25 = 2 * v14;
        Sizea = 2 * v14;
        if ( v32 > 7 )
        {
          v29 = *(void **)a2;
          memcpy_0(v24, *(const void **)a2, Sizea);
          *(_WORD *)&v24[Sizea] = v30;
          *(_WORD *)&v24[Sizea + 2] = 0;
          std::_Deallocate<16,0>(v29, (const struct std::nothrow_t *)(2 * v32 + 2));
        }
        else
        {
          memcpy_0(v24, (const void *)a2, v25);
          *(_WORD *)&v24[v25] = v30;
          *(_WORD *)&v24[v25 + 2] = 0;
        }
        *(_QWORD *)a2 = v24;
      }
      else
      {
        *(_QWORD *)(a2 + 16) = v14 + 1;
        v16 = (_WORD *)a2;
        if ( v15 > 7 )
          v16 = *(_WORD **)a2;
        v16[v14] = v18;
        v16[v14 + 1] = 0;
      }
      v7 = 1;
      Size = 1;
      v17 = std::basic_ios<unsigned short>::rdbuf(v5 + *(int *)(*(_QWORD *)v5 + 4LL));
      v18 = std::basic_streambuf<unsigned short>::snextc(v17);
      v30 = v18;
      v3 = a3;
    }
    v6 = 2;
LABEL_28:
    v31 = v6;
  }
  catch ( ... )
  {
    LOBYTE(v19) = 1;
    std::basic_ios<unsigned short>::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), 4LL, v19);
    v5 = a1;
    v6 = v31;
    v7 = Size;
  }
LABEL_35:
  v8 = a1;
  if ( !v7 )
LABEL_32:
    v6 |= 2u;
  std::basic_ios<unsigned short>::setstate(v5 + *(int *)(*(_QWORD *)v5 + 4LL), v6, 0LL);
  v27 = std::basic_ios<unsigned short>::rdbuf(v8 + *(int *)(*(_QWORD *)v8 + 4LL));
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  return v5;
}
