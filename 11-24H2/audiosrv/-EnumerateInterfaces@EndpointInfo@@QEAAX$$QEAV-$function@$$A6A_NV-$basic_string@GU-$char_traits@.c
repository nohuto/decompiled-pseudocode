/*
 * XREFs of ?EnumerateInterfaces@EndpointInfo@@QEAAX$$QEAV?$function@$$A6A_NV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z@std@@@Z @ 0x1800EC93C
 * Callers:
 *     ?SetAssignedResourceGroup@ResourceGroupInstance@@AEAAJH@Z @ 0x1800EF4AC (-SetAssignedResourceGroup@ResourceGroupInstance@@AEAAJH@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18000D870 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x180042DA0 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18004DC2C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x18004F608 (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 *     ??$_Emplace_reallocate@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@AEBV21@@Z @ 0x1800EA0B0 (--$_Emplace_reallocate@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vecto.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall EndpointInfo::EnumerateInterfaces(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned __int16 *v3; // rbx
  __int64 v4; // rdi
  __int64 ***v5; // r12
  __int64 v6; // r14
  char *i; // rsi
  __int64 *v8; // r15
  __int64 *v9; // rax
  __int64 v10; // r11
  char *v11; // r10
  __int64 v12; // rax
  __int64 v13; // r10
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r13
  __int64 v17; // rcx
  char v18; // bl
  __int64 v19; // rdx
  __int128 v20; // [rsp+20h] [rbp-48h] BYREF
  __int64 v21; // [rsp+30h] [rbp-38h]
  char v22[48]; // [rsp+38h] [rbp-30h] BYREF
  __int64 *v23; // [rsp+B0h] [rbp+48h]
  __int64 ***v25; // [rsp+C0h] [rbp+58h]

  v3 = a2;
  v20 = 0LL;
  v4 = 0LL;
  v21 = 0LL;
  v5 = *(__int64 ****)(a1 + 104);
  v25 = *(__int64 ****)(a1 + 112);
  v6 = 0LL;
  for ( i = 0LL; v5 != v25; ++v5 )
  {
    v8 = **v5;
    v9 = (*v5)[1];
    v23 = v9;
    while ( v8 != v9 )
    {
      v10 = *v8;
      v11 = i;
      if ( i != (char *)v6 )
      {
        do
        {
          v12 = std::wstring::c_str(v10, (__int64)a2);
          v14 = std::wstring::c_str(v13, v12);
          if ( a3 == *(_QWORD *)(v10 + 16) && !(unsigned int)std::_WChar_traits<unsigned short>::compare(v14, a2, a3) )
            break;
          v11 += 32;
        }
        while ( v11 != (char *)v6 );
        v9 = v23;
      }
      if ( v11 == (char *)v6 )
      {
        if ( v6 == v4 )
        {
          std::vector<std::wstring>::_Emplace_reallocate<std::wstring const &>((__int64 *)&v20, v6, v10);
          v4 = v21;
          v6 = *((_QWORD *)&v20 + 1);
          i = (char *)v20;
        }
        else
        {
          std::wstring::wstring(v6, v10, a3);
          v6 += 32LL;
          *((_QWORD *)&v20 + 1) = v6;
        }
        v16 = std::wstring::wstring((__int64)v22, *v8, v15);
        v17 = *((_QWORD *)v3 + 7);
        if ( !v17 )
        {
          std::_Xbad_function_call();
          JUMPOUT(0x1800ECAAELL);
        }
        v18 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 16LL))(v17, v16);
        std::wstring::_Tidy_deallocate(v16, v19);
        if ( !v18 )
          goto LABEL_18;
        v9 = v23;
        v3 = a2;
      }
      ++v8;
    }
  }
LABEL_18:
  if ( i )
  {
    std::_Destroy_range<std::allocator<std::wstring>>((__int64)i, v6);
    std::_Deallocate<16,0>(i, (const struct std::nothrow_t *)((v4 - (_QWORD)i) & 0xFFFFFFFFFFFFFFE0uLL));
  }
}
