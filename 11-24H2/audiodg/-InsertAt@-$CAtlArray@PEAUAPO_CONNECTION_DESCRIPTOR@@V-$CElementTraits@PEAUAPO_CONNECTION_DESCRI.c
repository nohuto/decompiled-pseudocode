/*
 * XREFs of ?InsertAt@?$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V?$CElementTraits@PEAUAPO_CONNECTION_DESCRIPTOR@@@ATL@@@ATL@@QEAAX_KAEBQEAUAPO_CONNECTION_DESCRIPTOR@@0@Z @ 0x140030CD8
 * Callers:
 *     ?ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z @ 0x1400303A0 (-ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z.c)
 * Callees:
 *     ?CallConstructors@?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@CAXPEAPEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@_K@Z @ 0x14000C2FC (-CallConstructors@-$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V-$CElementTraits@PEAUAPO_.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x14000C484 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     memmove_s @ 0x14000C4D0 (memmove_s.c)
 *     ?SetCount@?$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V?$CElementTraits@PEAUAPO_CONNECTION_DESCRIPTOR@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x140030DE8 (-SetCount@-$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V-$CElementTraits@PEAUAPO_CONNECTION_DESCRI.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005619C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

unsigned __int64 __fastcall ATL::CAtlArray<APO_CONNECTION_DESCRIPTOR *,ATL::CElementTraits<APO_CONNECTION_DESCRIPTOR *>>::InsertAt(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 result; // rax
  __int64 v11; // r12
  errno_t v12; // eax
  errno_t v13; // eax
  __int64 v16; // [rsp+68h] [rbp+20h]

  v6 = a1[1];
  if ( a2 < v6 )
  {
    v16 = a1[1];
    if ( !(unsigned __int8)ATL::CAtlArray<APO_CONNECTION_DESCRIPTOR *,ATL::CElementTraits<APO_CONNECTION_DESCRIPTOR *>>::SetCount(
                             a1,
                             v6 + 1) )
LABEL_3:
      ATL::AtlThrowImpl(-2147024882);
    v11 = 8 * a2;
    v7 = a2 + 1;
    v12 = memmove_s((void *const)(*a1 + 8 * (a2 + 1)), 8 * (v6 - a2), (const void *const)(*a1 + 8 * a2), 8 * (v6 - a2));
    ATL::AtlCrtErrorCheck(v12);
    try
    {
      ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::CallConstructors();
    }
    catch ( ... )
    {
      v13 = memmove_s(
              (void *const)(*a1 + 8 * a2),
              8 * (v16 - a2),
              (const void *const)(*a1 + 8 * (a2 + 1)),
              8 * (v16 - a2));
      ATL::AtlCrtErrorCheck(v13);
      ATL::CAtlArray<APO_CONNECTION_DESCRIPTOR *,ATL::CElementTraits<APO_CONNECTION_DESCRIPTOR *>>::SetCount(a1, v16);
      throw;
    }
  }
  else
  {
    v7 = a2 + 1;
    if ( !(unsigned __int8)ATL::CAtlArray<APO_CONNECTION_DESCRIPTOR *,ATL::CElementTraits<APO_CONNECTION_DESCRIPTOR *>>::SetCount(
                             a1,
                             a2 + 1) )
      goto LABEL_3;
    v11 = 8 * a2;
  }
  v9 = a2;
  result = v7 - a2;
  if ( a2 < v7 )
  {
    if ( result < 2 )
      goto LABEL_26;
    v8 = v11 + *a1;
    if ( v8 <= (unsigned __int64)a1 && v8 >= (unsigned __int64)a1 )
      goto LABEL_26;
    if ( v8 <= (unsigned __int64)a3 && v8 >= (unsigned __int64)a3 )
      goto LABEL_26;
    do
    {
      v9 += 2LL;
      result = v9;
    }
    while ( v9 < a2 );
    if ( v9 < v7 )
    {
LABEL_26:
      do
      {
        result = *a3;
        *(_QWORD *)(*a1 + 8 * v9++) = *a3;
      }
      while ( v9 < v7 );
    }
  }
  return result;
}
