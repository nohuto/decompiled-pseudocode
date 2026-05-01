/*
 * XREFs of ??$?RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z @ 0x1800DDAE4
 * Callers:
 *     ??$?RV?$nvp@_N@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@_N@1@@Z @ 0x180329CB0 (--$-RV-$nvp@_N@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@_N@1@@Z.c)
 * Callees:
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x1800DE248 (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x1800DE5DC (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1802C0840 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     memcpy_s_3 @ 0x1802DFCA8 (memcpy_s_3.c)
 */

__int64 __fastcall tson::output_archive::operator()<bool &>(__int64 a1, char *a2)
{
  __int64 v2; // rax
  char v3; // r12
  _DWORD *v5; // rsi
  __int64 v6; // rbx
  tson::write_buffer *v7; // rbx
  char *v9; // r14
  tson::write_buffer **v10; // rsi
  tson::write_buffer *v11; // rbx
  tson::write_buffer **v12; // rbp
  char *v13; // r15
  tson::write_buffer *v14; // rbx
  char v15; // al
  tson::write_buffer *v16; // rbx
  rsize_t v17; // rbp
  const void *v18; // r14
  tson::write_buffer *v19; // rbx
  tson::write_buffer *v20; // rsi
  char *v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  rsize_t v25; // rbp
  char *v26; // rax
  char *v27; // r14
  __int64 v28; // rbx
  const void *v29; // r8
  rsize_t v30; // rbx

  v2 = *(_QWORD *)(a1 + 128);
  v3 = *a2;
  if ( v2 )
  {
    v5 = (_DWORD *)(a1 + 24 + 4 * v2);
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 1;
    v5 = (_DWORD *)(a1 + 28);
  }
  if ( *v5 == 2 )
  {
    *v5 = 3;
    v28 = *(_QWORD *)(a1 + 144);
    if ( *(_QWORD *)(v28 + 2072) < *(_QWORD *)(v28 + 2080)
      || tson::write_buffer::reserve(*(tson::write_buffer **)(a1 + 144), 1uLL) )
    {
      *(_BYTE *)(*(_QWORD *)(v28 + 2072))++ = 3;
    }
    tson::write_buffer::push_back(*(tson::write_buffer **)(a1 + 144), (const void *)(a1 + 10), 2uLL);
    *(_WORD *)(a1 + 10) = 0;
  }
  else if ( !*v5 )
  {
    *v5 = 1;
    v6 = *(_QWORD *)(a1 + 144);
    if ( *(_QWORD *)(v6 + 2072) < *(_QWORD *)(v6 + 2080)
      || tson::write_buffer::reserve(*(tson::write_buffer **)(a1 + 144), 1uLL) )
    {
      *(_BYTE *)(*(_QWORD *)(v6 + 2072))++ = 1;
    }
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( *v5 == 3 )
  {
    v10 = (tson::write_buffer **)(a1 + 144);
  }
  else
  {
    if ( !v3 )
    {
      v7 = *(tson::write_buffer **)(a1 + 144);
      *(_QWORD *)a1 = 0LL;
      if ( *((_QWORD *)v7 + 259) < *((_QWORD *)v7 + 260) || tson::write_buffer::reserve(v7, 1uLL) )
        *(_BYTE *)(*((_QWORD *)v7 + 259))++ = 6;
      return a1;
    }
    v9 = (char *)(a1 + 8);
    if ( !*(_QWORD *)a1 )
    {
      *v9 = 1;
      *(_QWORD *)a1 = "-";
    }
    v10 = (tson::write_buffer **)(a1 + 144);
    v11 = *(tson::write_buffer **)(a1 + 144);
    *(_QWORD *)(a1 + 16) = *((_QWORD *)v11 + 259) - *((_QWORD *)v11 + 258);
    if ( *((_QWORD *)v11 + 259) < *((_QWORD *)v11 + 260)
      || (v12 = (tson::write_buffer **)(a1 + 144), v13 = (char *)(a1 + 8), tson::write_buffer::reserve(v11, 1uLL)) )
    {
      v12 = (tson::write_buffer **)(a1 + 144);
      v13 = (char *)(a1 + 8);
      *(_BYTE *)(*((_QWORD *)v11 + 259))++ = 5;
    }
    v14 = *v10;
    if ( *((_QWORD *)*v10 + 259) < *((_QWORD *)*v10 + 260) || tson::write_buffer::reserve(*v10, 1uLL) )
    {
      v15 = *v9;
      v10 = v12;
      v9 = v13;
      *(_BYTE *)(*((_QWORD *)v14 + 259))++ = v15;
    }
    v16 = *v10;
    v17 = (unsigned __int8)*v9;
    v18 = *(const void **)a1;
    if ( *((_QWORD *)*v10 + 260) - *((_QWORD *)*v10 + 259) >= v17 || tson::write_buffer::reserve(*v10, v17) )
    {
      memcpy_s_3(*((void *const *)v16 + 259), *((_QWORD *)v16 + 260) - *((_QWORD *)v16 + 259), v18, v17);
      *((_QWORD *)v16 + 259) += v17;
    }
    *(_QWORD *)a1 = 0LL;
  }
  v19 = *v10;
  if ( *((_QWORD *)*v10 + 259) < *((_QWORD *)*v10 + 260) || tson::write_buffer::reserve(*v10, 1uLL) )
    *(_BYTE *)(*((_QWORD *)v19 + 259))++ = 10;
  v20 = *v10;
  v21 = (char *)*((_QWORD *)v20 + 259);
  v22 = *((_QWORD *)v20 + 260);
  if ( (unsigned __int64)v21 >= v22 )
  {
    v23 = v22 - *((_QWORD *)v20 + 258);
    v24 = 1LL;
    if ( v23 > 1 )
      v24 = v23;
    v25 = 2 * v24;
    v26 = (char *)CoTaskMemAlloc(2 * v24);
    v27 = v26;
    if ( !v26 )
    {
      *((_BYTE *)v20 + 8) = 1;
      return a1;
    }
    v29 = (const void *)*((_QWORD *)v20 + 258);
    v30 = *((_QWORD *)v20 + 259) - (_QWORD)v29;
    memcpy_s_3(v26, v25, v29, v30);
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      v20,
      v27);
    v21 = &v27[v30];
    *((_QWORD *)v20 + 258) = v27;
    *((_QWORD *)v20 + 259) = &v27[v30];
    *((_QWORD *)v20 + 260) = &v27[v25];
  }
  *v21 = v3;
  ++*((_QWORD *)v20 + 259);
  return a1;
}
