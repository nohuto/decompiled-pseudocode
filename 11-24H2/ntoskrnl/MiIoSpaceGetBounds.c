/*
 * XREFs of MiIoSpaceGetBounds @ 0x14038F8B0
 * Callers:
 *     MiReferenceIoPages @ 0x140238698 (MiReferenceIoPages.c)
 *     MiFillSystemPtes @ 0x1402A0630 (MiFillSystemPtes.c)
 *     MiDereferenceIoPages @ 0x14038E760 (MiDereferenceIoPages.c)
 *     MiLookupIoPageNode @ 0x14038F750 (MiLookupIoPageNode.c)
 *     MiMapMdlWithLargePages @ 0x1404C0630 (MiMapMdlWithLargePages.c)
 *     MiMapMdlCommon @ 0x1404EDDA4 (MiMapMdlCommon.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiIoSpaceGetBounds(__int64 a1, unsigned __int64 a2)
{
  __int64 *v3; // rcx
  unsigned __int64 v4; // r9
  _QWORD *result; // rax
  unsigned __int64 v6; // r9
  int v7; // ecx
  unsigned __int64 v8; // rax

  if ( stru_140E300F0.Buffer && _bittest64((const signed __int64 *)stru_140E300F0.Buffer, (a2 >> 18) & 0x3FFFFF) )
  {
    *(_QWORD *)a1 = a2 & 0xFFFFFFFFFFFC0000uLL;
    v8 = a2 + 0x40000;
    if ( a2 != ((a2 + 0x3FFFF) & 0xFFFFFFFFFFFC0000uLL) )
      v8 = (a2 + 0x3FFFF) & 0xFFFFFFFFFFFC0000uLL;
    v7 = 1;
    result = (_QWORD *)(v8 - 1);
    *(_QWORD *)(a1 + 8) = result;
  }
  else
  {
    v3 = (__int64 *)xmmword_140E37340;
    while ( v3 )
    {
      if ( a2 < v3[3] )
      {
        v3 = (__int64 *)*v3;
      }
      else
      {
        if ( a2 <= v3[4] )
          break;
        v3 = (__int64 *)v3[1];
      }
    }
    if ( v3 )
    {
      *(_QWORD *)a1 = v3[3];
      result = (_QWORD *)v3[4];
      v7 = *((_DWORD *)v3 + 10);
      *(_QWORD *)(a1 + 8) = result;
      *(_DWORD *)(a1 + 20) = 2;
      goto LABEL_16;
    }
    v4 = a2 + 0x40000;
    if ( a2 != ((a2 + 0x3FFFF) & 0xFFFFFFFFFFFC0000uLL) )
      v4 = (a2 + 0x3FFFF) & 0xFFFFFFFFFFFC0000uLL;
    result = (_QWORD *)xmmword_140E37340;
    v6 = v4 - 1;
    while ( result )
    {
      if ( v6 < result[3] )
      {
        result = (_QWORD *)*result;
      }
      else
      {
        if ( a2 <= result[4] )
          break;
        result = (_QWORD *)result[1];
      }
    }
    if ( result )
      v6 = result[3] - 1LL;
    *(_QWORD *)(a1 + 8) = v6;
    v7 = 3;
    *(_QWORD *)a1 = a2;
  }
  *(_DWORD *)(a1 + 20) = v7;
LABEL_16:
  *(_DWORD *)(a1 + 16) = v7;
  return result;
}
