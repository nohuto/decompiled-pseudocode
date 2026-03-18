/*
 * XREFs of ?EnsureRemovedFromReadyList@CDataSourceReader@@AEAAXXZ @ 0x1802919FC
 * Callers:
 *     ??1CDataSourceReader@@UEAA@XZ @ 0x18029191C (--1CDataSourceReader@@UEAA@XZ.c)
 * Callees:
 *     ?shrink_to_fit@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@QEAAXXZ @ 0x18022D9B0 (-shrink_to_fit@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@std@@Q.c)
 *     __std_find_trivial_8 @ 0x180250770 (__std_find_trivial_8.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

void __fastcall CDataSourceReader::EnsureRemovedFromReadyList(CDataSourceReader *this)
{
  __int64 v2; // rdx
  const __m128i *v3; // rsi
  _QWORD *v4; // rdi
  const __m128i *trivial_8; // rax
  __int64 *v6; // rcx

  if ( (*((_BYTE *)this + 88) & 2) != 0 )
  {
    v2 = *(_QWORD *)(*((_QWORD *)this + 3) + 6400LL);
    v3 = *(const __m128i **)(v2 + 112);
    v4 = (_QWORD *)(v2 + 104);
    trivial_8 = _std_find_trivial_8(*(const __m128i **)(v2 + 104), v3, (unsigned __int64)this);
    v6 = (__int64 *)trivial_8;
    if ( trivial_8 != v3 )
    {
      while ( 1 )
      {
        trivial_8 = (const __m128i *)((char *)trivial_8 + 8);
        if ( trivial_8 == v3 )
          break;
        if ( (CDataSourceReader *)trivial_8->m128i_i64[0] != this )
          *v6++ = trivial_8->m128i_i64[0];
      }
    }
    memmove_0(v6, v6 + 1, v4[1] - (_QWORD)(v6 + 1));
    v4[1] -= 8LL;
    std::vector<CDataSourceReader *>::shrink_to_fit(v4);
    *((_BYTE *)this + 88) &= ~2u;
  }
}
