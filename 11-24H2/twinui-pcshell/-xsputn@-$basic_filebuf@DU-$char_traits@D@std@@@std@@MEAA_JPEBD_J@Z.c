/*
 * XREFs of ?xsputn@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAA_JPEBD_J@Z @ 0x1806172E0
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_0 @ 0x1806CA2DC (memcpy_0.c)
 */

__int64 __fastcall std::filebuf::xsputn(__int64 a1, char *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v8; // rax
  size_t v9; // rbp
  void *v10; // rax
  __int64 v11; // r9

  v3 = a3;
  if ( *(_QWORD *)(a1 + 104) )
    return std::streambuf::xsputn();
  v8 = std::streambuf::_Pnavail();
  v9 = v8;
  if ( v3 > 0 )
  {
    if ( v8 <= 0 )
      goto LABEL_8;
    if ( v3 < v8 )
      v9 = v3;
    v10 = (void *)std::streambuf::pptr(a1);
    memcpy_0(v10, a2, v9);
    a2 += v9;
    v3 -= v9;
    std::streambuf::pbump(a1, (unsigned int)v9);
    if ( v3 > 0 )
    {
LABEL_8:
      v11 = *(_QWORD *)(a1 + 128);
      if ( v11 )
        v3 -= _o_fwrite(a2, 1LL, v3, v11);
    }
  }
  return a3 - v3;
}
