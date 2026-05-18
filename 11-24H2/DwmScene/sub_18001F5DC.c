/*
 * XREFs of sub_18001F5DC @ 0x18001F5DC
 * Callers:
 *     ?str@?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEGBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18001FCD8 (-str@-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEGBA-AV-$basic_string@D.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001F5DC(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  if ( (*(_DWORD *)(a1 + 112) & 0x22) != 2 && ((__int64 (*)(void))std::streambuf::pptr)() )
  {
    v4 = std::streambuf::pbase(a1);
    *(_QWORD *)a2 = v4;
    v5 = v4;
    v6 = std::streambuf::pptr(a1);
    if ( v6 < *(_QWORD *)(a1 + 104) )
      v6 = *(_QWORD *)(a1 + 104);
    *(_QWORD *)(a2 + 8) = v6 - v5;
    v7 = std::streambuf::epptr(a1) - v5;
    goto LABEL_9;
  }
  if ( (*(_BYTE *)(a1 + 112) & 4) == 0 && std::streambuf::gptr(a1) )
  {
    v8 = std::streambuf::eback(a1);
    *(_QWORD *)a2 = v8;
    v7 = std::streambuf::egptr(a1) - v8;
    *(_QWORD *)(a2 + 8) = v7;
LABEL_9:
    *(_QWORD *)(a2 + 16) = v7;
  }
  return a2;
}
