/*
 * XREFs of ?UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x1802726DC
 * Callers:
 *     ??1CDataSourceReader@@UEAA@XZ @ 0x18029191C (--1CDataSourceReader@@UEAA@XZ.c)
 * Callees:
 *     ?Create@?$CWeakReference@VCResource@@@@SAXPEAVCResource@@PEAPEAV1@@Z @ 0x1801DB908 (-Create@-$CWeakReference@VCResource@@@@SAXPEAVCResource@@PEAPEAV1@@Z.c)
 *     __std_find_trivial_8 @ 0x180250770 (__std_find_trivial_8.c)
 *     ??$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z @ 0x18025E7B4 (--$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DataSourceProxy::UnregisterReader(const __m128i **this, struct CDataSourceReader *a2)
{
  unsigned __int64 v3; // rsi
  const __m128i *trivial_8; // rax
  __m128i *v5; // rbx
  const __m128i *v6; // rbx
  __int64 Unique; // rax
  __int64 v8; // rax
  unsigned __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  if ( this[26] != this[25] )
  {
    v10 = 0LL;
    CWeakReference<CResource>::Create((__int64)a2, &v10);
    v3 = v10;
    trivial_8 = _std_find_trivial_8(this[25], this[26], v10);
    v5 = (__m128i *)trivial_8;
    if ( trivial_8 != this[26] )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)trivial_8->m128i_i64[0] + 16LL))(trivial_8->m128i_i64[0]);
      memmove_0(v5, &v5->m128i_u64[1], (char *)this[26] - (char *)&v5->m128i_u64[1]);
      this[26] = (const __m128i *)((char *)this[26] - 8);
      v6 = this[24];
      Unique = DataProviderHelper::GetUniqueId<DataSourceProxy>((__int64)this);
      (*(void (__fastcall **)(__int64 *, __int64))(v6->m128i_i64[1] + 32))(&v6->m128i_i64[1], Unique);
      v8 = v6->m128i_i64[1];
      --v6[4].m128i_i32[0];
      (*(void (__fastcall **)(__int64 *))(v8 + 88))(&v6->m128i_i64[1]);
      if ( !v6[4].m128i_i32[0] )
        (*(void (__fastcall **)(__int64 *))(v6->m128i_i64[1] + 40))(&v6->m128i_i64[1]);
    }
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return 0LL;
}
