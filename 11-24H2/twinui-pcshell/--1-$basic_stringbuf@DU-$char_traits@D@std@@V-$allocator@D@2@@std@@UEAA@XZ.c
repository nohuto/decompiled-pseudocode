/*
 * XREFs of ??1?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x1804F8C94
 * Callers:
 *     ??1?$basic_ostringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x1804F8C30 (--1-$basic_ostringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ.c)
 *     ??_E?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z @ 0x1804FA010 (--_E-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::stringbuf::~stringbuf(__int64 a1)
{
  bool v1; // zf
  __int64 v3; // rcx
  __int64 v4; // rdx

  v1 = (*(_BYTE *)(a1 + 112) & 1) == 0;
  *(_QWORD *)a1 = &std::stringbuf::`vftable';
  if ( !v1 )
  {
    v3 = **(_QWORD **)(a1 + 64);
    if ( v3 )
      v4 = v3 + **(int **)(a1 + 88);
    else
      v4 = **(_QWORD **)(a1 + 56) + **(int **)(a1 + 80);
    std::_Deallocate<16,0>(**(void ***)(a1 + 24), (const struct std::nothrow_t *)(v4 - **(_QWORD **)(a1 + 24)));
  }
  **(_QWORD **)(a1 + 24) = 0LL;
  **(_QWORD **)(a1 + 56) = 0LL;
  **(_DWORD **)(a1 + 80) = 0;
  **(_QWORD **)(a1 + 32) = 0LL;
  **(_QWORD **)(a1 + 64) = 0LL;
  **(_DWORD **)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) &= ~1u;
  return std::streambuf::~streambuf<char,std::char_traits<char>>(a1);
}
