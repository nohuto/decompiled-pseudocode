/*
 * XREFs of ??$RegisterObjects@$01@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBG@Z @ 0x180008988
 * Callers:
 *     ?ConnectCallback@ServiceModule@Internal@Windows@@UEAAJXZ @ 0x1800CCCB0 (-ConnectCallback@ServiceModule@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?CountObjectEntries@Details@WRL@Microsoft@@YAIPEAPEBUCreatorMap@123@0PEBG@Z @ 0x1800A608C (-CountObjectEntries@Details@WRL@Microsoft@@YAIPEAPEBUCreatorMap@123@0PEBG@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IsServerNameEqual@Details@WRL@Microsoft@@YA_NPEBUCreatorMap@123@PEBG@Z @ 0x1800CD9EC (-IsServerNameEqual@Details@WRL@Microsoft@@YA_NPEBUCreatorMap@123@PEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RegisterObjects<2>(
        __int64 a1,
        const struct Microsoft::WRL::Details::CreatorMap **a2)
{
  int v4; // edi
  Microsoft::WRL::Details *v5; // r14
  const struct Microsoft::WRL::Details::CreatorMap **v6; // r15
  const unsigned __int16 *v7; // r9
  unsigned int v8; // eax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // kr00_8
  unsigned __int64 v12; // rax
  _QWORD *v13; // rbp
  unsigned __int64 v14; // rax
  void *v15; // rax
  const unsigned __int16 *v16; // r8
  void *v17; // rcx
  __int64 v18; // rbx
  Microsoft::WRL::Details **v19; // r14
  Microsoft::WRL::Details **v20; // rsi
  __int64 (__fastcall **v21)(__int64 *, _QWORD, GUID *, _QWORD *); // r10
  const unsigned __int16 *v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rsi
  const struct Microsoft::WRL::Details::CreatorMap **v25; // rsi
  const unsigned __int16 *v26; // r9
  unsigned int v27; // eax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // kr10_8
  const unsigned __int16 *v30; // r8
  _QWORD *v31; // r14
  __int64 v32; // rbp
  Microsoft::WRL::Details **v33; // rbx
  Microsoft::WRL::Details **i; // rdi
  __int64 v35; // r9
  const unsigned __int16 *v36; // r8
  __int64 v37; // r9
  _DWORD *v39; // [rsp+40h] [rbp-48h]
  _QWORD v40[8]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v41; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v42; // [rsp+A0h] [rbp+18h]
  void *v43; // [rsp+A8h] [rbp+20h]

  v4 = 0;
  v5 = (Microsoft::WRL::Details *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  v6 = (const struct Microsoft::WRL::Details::CreatorMap **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
  v8 = Microsoft::WRL::Details::CountObjectEntries(v5, v6, a2, v7);
  v42 = v8;
  if ( v8 )
  {
    v9 = v8;
    v11 = v8;
    v10 = 4LL * v8;
    if ( !is_mul_ok(v11, 4uLL) )
      v10 = -1LL;
    v39 = operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
    v12 = 8 * v9;
    if ( !is_mul_ok(v9, 8uLL) )
      v12 = -1LL;
    v13 = operator new[](v12, (const struct std::nothrow_t *)&std::nothrow);
    v14 = 16 * v9;
    if ( !is_mul_ok(v9, 0x10uLL) )
      v14 = -1LL;
    v15 = operator new[](v14, (const struct std::nothrow_t *)&std::nothrow);
    v17 = v15;
    v43 = v15;
    if ( v39 && v13 && v15 )
    {
      v18 = 0LL;
      v19 = (Microsoft::WRL::Details **)((char *)v5 + 8);
      v20 = v19;
      if ( v19 >= v6 )
      {
LABEL_20:
        v4 = (*(__int64 (__fastcall **)(__int64, const struct Microsoft::WRL::Details::CreatorMap **, void *, _QWORD *, _DWORD *, unsigned int))(*(_QWORD *)a1 + 80LL))(
               a1,
               a2,
               v17,
               v13,
               v39,
               v42);
        if ( v4 >= 0 )
        {
          v18 = 0LL;
          if ( v19 >= v6 )
            goto LABEL_31;
          do
          {
            if ( *v19
              && Microsoft::WRL::Details::IsServerNameEqual(
                   *v19,
                   (const struct Microsoft::WRL::Details::CreatorMap *)a2,
                   v22) )
            {
              *(_DWORD *)(*(_QWORD *)(v23 + 24) + 8LL) = v39[v18];
              v18 = (unsigned int)(v18 + 1);
            }
            ++v19;
          }
          while ( v19 < v6 );
        }
      }
      else
      {
        while ( v4 >= 0 )
        {
          if ( *v20 )
          {
            if ( Microsoft::WRL::Details::IsServerNameEqual(
                   *v20,
                   (const struct Microsoft::WRL::Details::CreatorMap *)a2,
                   v16)
              && (LODWORD(v41) = 2,
                  v40[0] = 0LL,
                  v4 = (*v21)(&v41, v21, &GUID_00000001_0000_0000_c000_000000000046, v40),
                  v4 >= 0) )
            {
              v13[v18] = v40[0];
              v16 = (const unsigned __int16 *)(2LL * (unsigned int)v18);
              v17 = v43;
              *((_OWORD *)v43 + (unsigned int)v18) = *(_OWORD *)*((_QWORD *)*v20 + 1);
              v18 = (unsigned int)(v18 + 1);
            }
            else
            {
              v17 = v43;
            }
          }
          if ( ++v20 >= v6 )
          {
            if ( v4 < 0 )
              break;
            goto LABEL_20;
          }
        }
      }
      if ( (_DWORD)v18 )
      {
        v24 = v13;
        do
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v24 + 16LL))(*v24);
          ++v24;
          --v18;
        }
        while ( v18 );
      }
    }
    else
    {
      v4 = -2147024882;
    }
LABEL_31:
    operator delete(v39);
    operator delete(v43);
    operator delete(v13);
    if ( v4 < 0 )
      return (unsigned int)v4;
  }
  v25 = (const struct Microsoft::WRL::Details::CreatorMap **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  v27 = Microsoft::WRL::Details::CountObjectEntries((Microsoft::WRL::Details *)v6, v25, a2, v26);
  if ( v27 )
  {
    v29 = v27;
    v28 = 8LL * v27;
    if ( !is_mul_ok(v29, 8uLL) )
      v28 = -1LL;
    v31 = operator new[](v28, (const struct std::nothrow_t *)&std::nothrow);
    if ( v31 )
    {
      v41 = 0LL;
      v32 = 0LL;
      v33 = v6 + 1;
      for ( i = v6 + 1; i < v25; ++i )
      {
        if ( *i
          && Microsoft::WRL::Details::IsServerNameEqual(*i, (const struct Microsoft::WRL::Details::CreatorMap *)a2, v30) )
        {
          v31[v32] = (*(__int64 (**)(void))(v35 + 8))();
          v32 = (unsigned int)(v32 + 1);
        }
      }
      v4 = (*(__int64 (__fastcall **)(__int64, const struct Microsoft::WRL::Details::CreatorMap **, _QWORD *, __int64 *, _DWORD))(*(_QWORD *)a1 + 64LL))(
             a1,
             a2,
             v31,
             &v41,
             v32);
      if ( v4 >= 0 )
      {
        while ( v33 < v25 )
        {
          if ( *v33
            && Microsoft::WRL::Details::IsServerNameEqual(
                 *v33,
                 (const struct Microsoft::WRL::Details::CreatorMap *)a2,
                 v36) )
          {
            *(_QWORD *)(*(_QWORD *)(v37 + 24) + 8LL) = v41;
          }
          ++v33;
        }
      }
    }
    else
    {
      v4 = -2147024882;
    }
    operator delete(v31);
  }
  return (unsigned int)v4;
}
