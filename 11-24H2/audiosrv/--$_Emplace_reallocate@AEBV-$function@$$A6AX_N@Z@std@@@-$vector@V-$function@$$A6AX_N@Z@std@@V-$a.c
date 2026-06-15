/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@AEAAPEAV?$function@$$A6AX_N@Z@1@QEAV21@AEBV21@@Z @ 0x1800DA534
 * Callers:
 *     ?NotifyStreamChange@CBtAudioResourceManagerBase@@IEAAX_N@Z @ 0x1800DF1FC (-NotifyStreamChange@CBtAudioResourceManagerBase@@IEAAX_N@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@std@@YAPEAV?$function@$$A6AX_N@Z@0@AEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@0@AEA_K@Z @ 0x1800DA278 (--$_Allocate_at_least_helper@V-$allocator@V-$function@$$A6AX_N@Z@std@@@std@@@std@@YAPEAV-$functi.c)
 *     ??$_Destroy_range@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@std@@YAXPEAV?$function@$$A6AX_N@Z@0@QEAV10@AEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@0@@Z @ 0x1800DA2D0 (--$_Destroy_range@V-$allocator@V-$function@$$A6AX_N@Z@std@@@std@@@std@@YAXPEAV-$function@$$A6AX_.c)
 *     ??$_Uninitialized_move@PEAV?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@YAPEAV?$function@$$A6AX_N@Z@0@QEAV10@0PEAV10@AEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@0@@Z @ 0x1800DA9AC (--$_Uninitialized_move@PEAV-$function@$$A6AX_N@Z@std@@V-$allocator@V-$function@$$A6AX_N@Z@std@@@.c)
 *     ??$construct@V?$function@$$A6AX_N@Z@std@@AEBV12@@?$_Default_allocator_traits@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@std@@SAXAEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@1@QEAV?$function@$$A6AX_N@Z@1@AEBV31@@Z @ 0x1800DAB30 (--$construct@V-$function@$$A6AX_N@Z@std@@AEBV12@@-$_Default_allocator_traits@V-$allocator@V-$fun.c)
 */

__int64 __fastcall std::vector<std::function<void (bool)>>::_Emplace_reallocate<std::function<void (bool)> const &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // rbx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  char *v12; // rsi
  __int64 v13; // r15
  __int64 v14; // rdx
  char *v15; // r8
  __int64 v16; // rcx
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF
  __int64 v19; // [rsp+78h] [rbp+10h]
  __int64 v20; // [rsp+80h] [rbp+18h]
  __int64 v21; // [rsp+88h] [rbp+20h]

  v20 = a3;
  v5 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 6;
  v7 = 0x3FFFFFFFFFFFFFFLL;
  if ( v6 == 0x3FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = (a1[2] - *a1) >> 6;
  v10 = v9 >> 1;
  if ( v9 <= 0x3FFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v8;
  }
  v19 = v7;
  v18 = v7;
  v12 = (char *)std::_Allocate_at_least_helper<std::allocator<std::function<void (bool)>>>(v9, &v18);
  v13 = (__int64)&v12[v5 & 0xFFFFFFFFFFFFFFC0uLL];
  v21 = v13 + 64;
  v18 = v13 + 64;
  try
  {
    std::_Default_allocator_traits<std::allocator<std::function<void (bool)>>>::construct<std::function<void (bool)>,std::function<void (bool)> const &>(
      v11,
      v13,
      v20);
    v18 = v13;
    v14 = a1[1];
    v15 = v12;
    v16 = *a1;
    if ( a2 != v14 )
    {
      std::_Uninitialized_move<std::function<void (bool)> *,std::allocator<std::function<void (bool)>>>(v16, a2, v12);
      v18 = (__int64)v12;
      v15 = (char *)(v13 + 64);
      v14 = a1[1];
      v16 = a2;
    }
    std::_Uninitialized_move<std::function<void (bool)> *,std::allocator<std::function<void (bool)>>>(v16, v14, v15);
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::function<void (bool)>>>(v18, v21);
    std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)(v19 << 6));
    throw;
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<std::function<void (bool)>>>(*a1, a1[1]);
    std::_Deallocate<16,0>((char *)*a1, (const struct std::nothrow_t *)((a1[2] - *a1) & 0xFFFFFFFFFFFFFFC0uLL));
  }
  *a1 = (__int64)v12;
  a1[1] = (__int64)&v12[64 * v8];
  a1[2] = (__int64)&v12[64 * v7];
  return v13;
}
