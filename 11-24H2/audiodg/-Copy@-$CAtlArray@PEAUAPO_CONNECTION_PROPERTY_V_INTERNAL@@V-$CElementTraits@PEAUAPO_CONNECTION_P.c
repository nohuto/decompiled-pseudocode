/*
 * XREFs of ?Copy@?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@QEAAXAEBV12@@Z @ 0x14000C310
 * Callers:
 *     ??4CAPONode@@QEAAXAEAV0@@Z @ 0x14000B5DC (--4CAPONode@@QEAAXAEAV0@@Z.c)
 *     ?CancelConnections@CAPONode@@QEAAJXZ @ 0x14006BB6C (-CancelConnections@CAPONode@@QEAAJXZ.c)
 * Callees:
 *     ?CallConstructors@?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@CAXPEAPEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@_K@Z @ 0x14000C2FC (-CallConstructors@-$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V-$CElementTraits@PEAUAPO_.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x14000C484 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     memmove_s @ 0x14000C4D0 (memmove_s.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005619C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

_QWORD *__fastcall ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::Copy(
        __int64 a1,
        _QWORD *a2)
{
  size_t v2; // rdi
  unsigned __int64 v5; // rcx
  size_t v6; // rsi
  void *v7; // rax
  void *v8; // rbp
  errno_t v9; // eax
  __int64 v10; // rdx
  _QWORD *result; // rax
  __int64 v12; // r8
  void *v13; // rax
  void *v14; // rcx

  v2 = a2[1];
  if ( v2 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( v2 > v5 )
    {
      v6 = *(int *)(a1 + 24);
      if ( *(_QWORD *)a1 )
      {
        if ( !*(_DWORD *)(a1 + 24) )
        {
          v6 = v5 >> 1;
          if ( v2 - v5 > v5 >> 1 )
            v6 = v2 - v5;
        }
        v6 += v5;
        if ( v2 >= v6 )
          v6 = a2[1];
        v7 = calloc(v6, 8uLL);
        v8 = v7;
        if ( v7 )
        {
          v9 = memmove_s(v7, 8LL * *(_QWORD *)(a1 + 8), *(const void *const *)a1, 8LL * *(_QWORD *)(a1 + 8));
          ATL::AtlCrtErrorCheck(v9);
          free(*(void **)a1);
          *(_QWORD *)a1 = v8;
LABEL_11:
          *(_QWORD *)(a1 + 16) = v6;
LABEL_12:
          ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::CallConstructors();
          goto LABEL_13;
        }
      }
      else
      {
        if ( v6 <= v2 )
          v6 = a2[1];
        v13 = calloc(v6, 8uLL);
        *(_QWORD *)a1 = v13;
        if ( v13 )
          goto LABEL_11;
      }
      ATL::AtlThrowImpl(-2147024882);
    }
    if ( v2 > *(_QWORD *)(a1 + 8) )
      goto LABEL_12;
  }
  else
  {
    v14 = *(void **)a1;
    v2 = 0LL;
    if ( v14 )
    {
      free(v14);
      *(_QWORD *)a1 = 0LL;
    }
    *(_QWORD *)(a1 + 16) = 0LL;
  }
LABEL_13:
  *(_QWORD *)(a1 + 8) = v2;
  v10 = a2[1];
  result = *(_QWORD **)a1;
  if ( v10 )
  {
    v12 = *a2 - (_QWORD)result;
    do
    {
      *result = *(_QWORD *)((char *)result + v12);
      ++result;
      --v10;
    }
    while ( v10 );
  }
  return result;
}
