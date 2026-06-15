/*
 * XREFs of ?EnumerateInterfaces@EndpointInfo@@QEAAX$$QEAV?$function@$$A6A_NV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z@std@@@Z @ 0x1800E84EC
 * Callers:
 *     ?SetAssignedResourceGroup@ResourceGroupInstance@@AEAAJH@Z @ 0x1800EA5F4 (-SetAssignedResourceGroup@ResourceGroupInstance@@AEAAJH@Z.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180014F20 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x18004E910 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1800540F8 (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180054280 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180079BB8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@AEBV21@@Z @ 0x1800E5C64 (--$_Emplace_reallocate@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vecto.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall EndpointInfo::EnumerateInterfaces(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 ***v4; // r12
  __int64 v5; // r14
  char *i; // rsi
  __int64 *v7; // r15
  __int64 *v8; // rax
  __int64 v9; // r11
  char *v10; // r10
  __int64 v11; // r10
  __int64 v12; // rax
  unsigned __int16 *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r13
  __int64 v16; // rcx
  char v17; // bl
  __int128 v18; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+30h] [rbp-38h]
  char v20[48]; // [rsp+38h] [rbp-30h] BYREF
  __int64 *v21; // [rsp+B0h] [rbp+48h]
  __int64 ***v23; // [rsp+C0h] [rbp+58h]

  v2 = a2;
  v18 = 0LL;
  v3 = 0LL;
  v19 = 0LL;
  v4 = *(__int64 ****)(a1 + 104);
  v23 = *(__int64 ****)(a1 + 112);
  v5 = 0LL;
  for ( i = 0LL; v4 != v23; ++v4 )
  {
    v7 = **v4;
    v8 = (*v4)[1];
    v21 = v8;
    while ( v7 != v8 )
    {
      v9 = *v7;
      v10 = i;
      if ( i != (char *)v5 )
      {
        do
        {
          std::wstring::c_str(v9);
          v12 = std::wstring::c_str(v11);
          if ( v14 == *(_QWORD *)(v9 + 16) && !(unsigned int)std::_WChar_traits<unsigned short>::compare(v12, v13, v14) )
            break;
          v10 += 32;
        }
        while ( v10 != (char *)v5 );
        v8 = v21;
      }
      if ( v10 == (char *)v5 )
      {
        if ( v5 == v3 )
        {
          std::vector<std::wstring>::_Emplace_reallocate<std::wstring const &>((__int64 *)&v18, v5, v9);
          v3 = v19;
          v5 = *((_QWORD *)&v18 + 1);
          i = (char *)v18;
        }
        else
        {
          std::wstring::wstring(v5, v9);
          v5 += 32LL;
          *((_QWORD *)&v18 + 1) = v5;
        }
        v15 = std::wstring::wstring((__int64)v20, *v7);
        v16 = *(_QWORD *)(v2 + 56);
        if ( !v16 )
        {
          std::_Xbad_function_call();
          JUMPOUT(0x1800E865ELL);
        }
        v17 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 16LL))(v16, v15);
        std::wstring::_Tidy_deallocate(v15);
        if ( !v17 )
          goto LABEL_18;
        v8 = v21;
        v2 = a2;
      }
      ++v7;
    }
  }
LABEL_18:
  if ( i )
  {
    std::_Destroy_range<std::allocator<std::wstring>>((__int64)i, v5);
    std::_Deallocate<16,0>(i, (const struct std::nothrow_t *)((v3 - (_QWORD)i) & 0xFFFFFFFFFFFFFFE0uLL));
  }
}
