/*
 * XREFs of ?Copy@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAXAEBV12@@Z @ 0x14000C080
 * Callers:
 *     ??4CAPONode@@QEAAXAEAV0@@Z @ 0x14000B5AC (--4CAPONode@@QEAAXAEAV0@@Z.c)
 *     ?CancelConnections@CAPONode@@QEAAJXZ @ 0x14006BBDC (-CancelConnections@CAPONode@@QEAAJXZ.c)
 * Callees:
 *     ?CallConstructors@?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@CAXPEAPEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@_K@Z @ 0x14000C2CC (-CallConstructors@-$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V-$CElementTraits@PEAUAPO_.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x14000C454 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     memmove_s @ 0x14000C4A0 (memmove_s.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005626C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

_QWORD *__fastcall ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::Copy(__int64 a1, _QWORD *a2, __int64 a3)
{
  size_t v3; // rdi
  size_t v6; // rcx
  __int64 v7; // rdx
  _QWORD *result; // rax
  __int64 v9; // r8
  size_t v10; // rbp
  void *v11; // rax
  void *v12; // r14
  errno_t v13; // eax
  void *v14; // rcx
  void *v15; // rax

  v3 = a2[1];
  if ( v3 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    if ( v3 <= v6 )
    {
      if ( v3 <= *(_QWORD *)(a1 + 8) )
        goto LABEL_5;
      goto LABEL_4;
    }
    v10 = *(int *)(a1 + 24);
    if ( *(_QWORD *)a1 )
    {
      if ( !*(_DWORD *)(a1 + 24) )
      {
        v10 = v6 >> 1;
        if ( v3 - v6 > v6 >> 1 )
          v10 = v3 - v6;
      }
      v10 += v6;
      if ( v3 >= v10 )
        v10 = a2[1];
      v11 = calloc(v10, 8uLL);
      v12 = v11;
      if ( v11 )
      {
        v13 = memmove_s(v11, 8LL * *(_QWORD *)(a1 + 8), *(const void *const *)a1, 8LL * *(_QWORD *)(a1 + 8));
        ATL::AtlCrtErrorCheck(v13);
        free(*(void **)a1);
        *(_QWORD *)a1 = v12;
LABEL_17:
        *(_QWORD *)(a1 + 16) = v10;
LABEL_4:
        ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::CallConstructors(
          v6,
          a2,
          a3);
        goto LABEL_5;
      }
    }
    else
    {
      if ( v10 <= v3 )
        v10 = a2[1];
      v15 = calloc(v10, 8uLL);
      *(_QWORD *)a1 = v15;
      if ( v15 )
        goto LABEL_17;
    }
    ATL::AtlThrowImpl(-2147024882);
  }
  v14 = *(void **)a1;
  v3 = 0LL;
  if ( v14 )
  {
    free(v14);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 16) = 0LL;
LABEL_5:
  *(_QWORD *)(a1 + 8) = v3;
  v7 = a2[1];
  result = *(_QWORD **)a1;
  if ( v7 )
  {
    v9 = *a2 - (_QWORD)result;
    do
    {
      *result = *(_QWORD *)((char *)result + v9);
      ++result;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
