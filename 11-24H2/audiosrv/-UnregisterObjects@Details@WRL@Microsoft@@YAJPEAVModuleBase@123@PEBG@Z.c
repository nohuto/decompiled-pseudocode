/*
 * XREFs of ?UnregisterObjects@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEBG@Z @ 0x1800CFF0C
 * Callers:
 *     ?DisconnectCallback@ServiceModule@Internal@Windows@@UEAAJXZ @ 0x1800CC4C0 (-DisconnectCallback@ServiceModule@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180021540 (--3@YAXPEAX@Z.c)
 *     ?CountObjectEntries@Details@WRL@Microsoft@@YAIPEAPEBUCreatorMap@123@0PEBG@Z @ 0x1800A24C8 (-CountObjectEntries@Details@WRL@Microsoft@@YAIPEAPEBUCreatorMap@123@0PEBG@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42AC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IsServerNameEqual@Details@WRL@Microsoft@@YA_NPEBUCreatorMap@123@PEBG@Z @ 0x1800CE55C (-IsServerNameEqual@Details@WRL@Microsoft@@YA_NPEBUCreatorMap@123@PEBG@Z.c)
 *     ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x1800CFC4C (-TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::UnregisterObjects(
        Microsoft::WRL::Details *this,
        const struct Microsoft::WRL::Details::CreatorMap **a2,
        const unsigned __int16 *a3)
{
  int v5; // esi
  Microsoft::WRL::Details *v6; // rbx
  const struct Microsoft::WRL::Details::CreatorMap **v7; // r13
  const unsigned __int16 *v8; // r9
  unsigned int v9; // eax
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rax
  const unsigned __int16 *v12; // r8
  _DWORD *v13; // r15
  Microsoft::WRL::Details **v14; // rbx
  Microsoft::WRL::Details **i; // r9
  __int64 v16; // r10
  __int64 v17; // r11
  const unsigned __int16 *v18; // r8
  __int64 v19; // r9
  __int64 v20; // r10
  unsigned __int64 v21; // rbp
  const unsigned __int16 *v22; // r8
  Microsoft::WRL::Details **v23; // rbx
  Microsoft::WRL::Details **j; // r9
  const unsigned __int16 *v25; // r8
  __int64 v26; // r9

  v5 = 0;
  v6 = (Microsoft::WRL::Details *)(*(__int64 (__fastcall **)(Microsoft::WRL::Details *, const struct Microsoft::WRL::Details::CreatorMap **, const unsigned __int16 *))(*(_QWORD *)this + 32LL))(
                                    this,
                                    a2,
                                    a3);
  v7 = (const struct Microsoft::WRL::Details::CreatorMap **)(*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 40LL))(this);
  v9 = Microsoft::WRL::Details::CountObjectEntries(v6, v7, a2, v8);
  v10 = v9;
  if ( !v9 )
    goto LABEL_18;
  v11 = 4LL * v9;
  if ( !is_mul_ok(v10, 4uLL) )
    v11 = -1LL;
  v13 = operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
  if ( v13 )
  {
    v14 = (Microsoft::WRL::Details **)((char *)v6 + 8);
    for ( i = v14; i < v7; ++i )
    {
      if ( *i
        && Microsoft::WRL::Details::IsServerNameEqual(*i, (const struct Microsoft::WRL::Details::CreatorMap *)a2, v12) )
      {
        v13[v17] = *(_DWORD *)(*(_QWORD *)(v16 + 24) + 8LL);
      }
    }
    v5 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *, const struct Microsoft::WRL::Details::CreatorMap **, _DWORD *, _QWORD))(*(_QWORD *)this + 88LL))(
           this,
           a2,
           v13,
           (unsigned int)v10);
    while ( v14 < v7 )
    {
      if ( *v14
        && Microsoft::WRL::Details::IsServerNameEqual(*v14, (const struct Microsoft::WRL::Details::CreatorMap *)a2, v18) )
      {
        *(_DWORD *)(*(_QWORD *)(v19 + 24) + 8LL) = v13[v20];
      }
      ++v14;
    }
  }
  else
  {
    v5 = -2147024882;
  }
  operator delete(v13);
  if ( v5 >= 0 )
  {
LABEL_18:
    v21 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 48LL))(this);
    v23 = v7 + 1;
    for ( j = v7 + 1; (unsigned __int64)j < v21; ++j )
    {
      if ( *j
        && Microsoft::WRL::Details::IsServerNameEqual(*j, (const struct Microsoft::WRL::Details::CreatorMap *)a2, v22) )
      {
        _mm_lfence();
        v5 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *, const struct Microsoft::WRL::Details::CreatorMap **, _QWORD))(*(_QWORD *)this + 72LL))(
               this,
               a2,
               *(_QWORD *)(*((_QWORD *)*j + 3) + 8LL));
        if ( v5 >= 0 )
        {
          while ( (unsigned __int64)v23 < v21 )
          {
            if ( *v23
              && Microsoft::WRL::Details::IsServerNameEqual(
                   *v23,
                   (const struct Microsoft::WRL::Details::CreatorMap *)a2,
                   v25) )
            {
              *(_QWORD *)(*(_QWORD *)(v26 + 24) + 8LL) = 0LL;
            }
            ++v23;
          }
        }
        break;
      }
    }
  }
  Microsoft::WRL::Details::TerminateMap(this, (struct Microsoft::WRL::Details::ModuleBase *)a2, 0LL);
  return (unsigned int)v5;
}
