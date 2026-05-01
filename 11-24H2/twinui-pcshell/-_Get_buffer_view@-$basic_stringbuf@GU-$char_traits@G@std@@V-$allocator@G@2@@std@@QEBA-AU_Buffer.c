/*
 * XREFs of ?_Get_buffer_view@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AU_Buffer_view@12@XZ @ 0x18035F680
 * Callers:
 *     ?str@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x1803613E8 (-str@-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string@GU-$c.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::basic_stringbuf<unsigned short>::_Get_buffer_view(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  if ( (*(_DWORD *)(a1 + 112) & 0x22) != 2 && std::basic_streambuf<unsigned short>::pptr(a1) )
  {
    v4 = std::basic_streambuf<unsigned short>::pbase(a1);
    *(_QWORD *)a2 = v4;
    v5 = v4;
    v6 = std::basic_streambuf<unsigned short>::pptr(a1);
    if ( v6 < *(_QWORD *)(a1 + 104) )
      v6 = *(_QWORD *)(a1 + 104);
    *(_QWORD *)(a2 + 8) = (__int64)(v6 - v5) >> 1;
    v7 = (std::basic_streambuf<unsigned short>::epptr(a1) - v5) >> 1;
    goto LABEL_9;
  }
  if ( (*(_BYTE *)(a1 + 112) & 4) == 0 && std::basic_streambuf<unsigned short>::gptr(a1) )
  {
    v8 = std::basic_streambuf<unsigned short>::eback(a1);
    *(_QWORD *)a2 = v8;
    v7 = (std::basic_streambuf<unsigned short>::egptr(a1) - v8) >> 1;
    *(_QWORD *)(a2 + 8) = v7;
LABEL_9:
    *(_QWORD *)(a2 + 16) = v7;
  }
  return a2;
}
