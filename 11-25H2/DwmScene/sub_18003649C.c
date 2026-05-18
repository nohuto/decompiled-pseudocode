/*
 * XREFs of sub_18003649C @ 0x18003649C
 * Callers:
 *     sub_18003279C @ 0x18003279C (sub_18003279C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003649C(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  if ( (*(_DWORD *)(a1 + 112) & 0x22) != 2 && ((__int64 (*)(void))std::wstreambuf::pptr)() )
  {
    v4 = std::wstreambuf::pbase(a1);
    *(_QWORD *)a2 = v4;
    v5 = v4;
    v6 = std::wstreambuf::pptr(a1);
    if ( v6 < *(_QWORD *)(a1 + 104) )
      v6 = *(_QWORD *)(a1 + 104);
    *(_QWORD *)(a2 + 8) = (__int64)(v6 - v5) >> 1;
    v7 = (std::wstreambuf::epptr(a1) - v5) >> 1;
    goto LABEL_9;
  }
  if ( (*(_BYTE *)(a1 + 112) & 4) == 0 && std::wstreambuf::gptr(a1) )
  {
    v8 = std::wstreambuf::eback(a1);
    *(_QWORD *)a2 = v8;
    v7 = (std::wstreambuf::egptr(a1) - v8) >> 1;
    *(_QWORD *)(a2 + 8) = v7;
LABEL_9:
    *(_QWORD *)(a2 + 16) = v7;
  }
  return a2;
}
