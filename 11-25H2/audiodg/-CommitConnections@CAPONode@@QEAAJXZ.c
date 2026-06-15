/*
 * XREFs of ?CommitConnections@CAPONode@@QEAAJXZ @ 0x14000BA90
 * Callers:
 *     ?CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14000AC20 (-CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CallConstructors@?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@CAXPEAPEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@_K@Z @ 0x14000C2CC (-CallConstructors@-$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V-$CElementTraits@PEAUAPO_.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x14000C454 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     memmove_s @ 0x14000C4A0 (memmove_s.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005626C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAPONode::CommitConnections(CAPONode *this)
{
  size_t v2; // rsi
  size_t v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // r8
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // rcx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  size_t v15; // r15
  void *v16; // rax
  void *v17; // r12
  errno_t v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r8
  _QWORD *v24; // rcx
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  size_t v28; // r15
  void *v29; // rax
  void *v30; // r12
  errno_t v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r8
  _QWORD *v36; // rcx
  __int64 v37; // rdx
  size_t v39; // rcx
  size_t v40; // r15
  void *v41; // rax
  void *v42; // r12
  errno_t v43; // ecx
  unsigned __int64 v44; // rcx
  size_t v45; // r15
  void *v46; // rax
  void *v47; // r12
  errno_t v48; // eax
  void *v49; // rcx
  void *v50; // rcx
  void *v51; // rax
  void *v52; // rax
  void *v53; // rax
  void *v54; // rax
  void *v55; // rcx
  void *v56; // rcx
  int v57; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v59; // [rsp+50h] [rbp+8h]

  try
  {
    v2 = *((_QWORD *)this + 16);
    if ( !v2 )
    {
      v49 = (void *)*((_QWORD *)this + 7);
      if ( v49 )
      {
        free(v49);
        *((_QWORD *)this + 7) = 0LL;
      }
      *((_QWORD *)this + 9) = 0LL;
      v2 = 0LL;
LABEL_6:
      *((_QWORD *)this + 8) = v2;
      v4 = *((_QWORD *)this + 16);
      v5 = *((_QWORD *)this + 15);
      v6 = (_QWORD *)*((_QWORD *)this + 7);
      if ( v4 )
      {
        v5 -= (__int64)v6;
        do
        {
          *v6 = *(_QWORD *)((char *)v6 + v5);
          ++v6;
          --v4;
        }
        while ( v4 );
      }
      v7 = *((_QWORD *)this + 20);
      if ( !v7 )
      {
        v50 = (void *)*((_QWORD *)this + 11);
        if ( v50 )
        {
          free(v50);
          *((_QWORD *)this + 11) = 0LL;
        }
        *((_QWORD *)this + 13) = 0LL;
        v7 = 0LL;
LABEL_13:
        *((_QWORD *)this + 12) = v7;
        v9 = *((_QWORD *)this + 20);
        v10 = *((_QWORD *)this + 19);
        v11 = (_QWORD *)*((_QWORD *)this + 11);
        if ( v9 )
        {
          v10 -= (__int64)v11;
          do
          {
            *v11 = *(_QWORD *)((char *)v11 + v10);
            ++v11;
            --v9;
          }
          while ( v9 );
        }
        v12 = *((_QWORD *)this + 32);
        if ( v12 )
        {
          v13 = *((_QWORD *)this + 25);
          if ( v12 > v13 )
          {
            v14 = *((int *)this + 52);
            if ( *((_QWORD *)this + 23) )
            {
              if ( !*((_DWORD *)this + 52) )
              {
                v14 = v13 >> 1;
                if ( v12 - v13 > v13 >> 1 )
                  v14 = v12 - v13;
              }
              v15 = *((_QWORD *)this + 32);
              if ( v12 < v13 + v14 )
                v15 = v13 + v14;
              v16 = calloc(v15, 8uLL);
              v17 = v16;
              if ( v16 )
              {
                v18 = memmove_s(
                        v16,
                        8LL * *((_QWORD *)this + 24),
                        *((const void *const *)this + 23),
                        8LL * *((_QWORD *)this + 24));
                ATL::AtlCrtErrorCheck(v18);
                free(*((void **)this + 23));
                *((_QWORD *)this + 23) = v17;
LABEL_26:
                *((_QWORD *)this + 25) = v15;
                ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::CallConstructors(
                  v20,
                  v19,
                  v21);
                goto LABEL_27;
              }
            }
            else
            {
              v15 = *((_QWORD *)this + 32);
              if ( v14 > v12 )
                v15 = *((int *)this + 52);
              v51 = calloc(v15, 8uLL);
              *((_QWORD *)this + 23) = v51;
              if ( v51 )
                goto LABEL_26;
            }
            ATL::AtlThrowImpl(-2147024882);
          }
          if ( v12 > *((_QWORD *)this + 24) )
            ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::CallConstructors(
              v11,
              v13,
              v10);
        }
        else
        {
          v55 = (void *)*((_QWORD *)this + 23);
          if ( v55 )
          {
            free(v55);
            *((_QWORD *)this + 23) = 0LL;
          }
          *((_QWORD *)this + 25) = 0LL;
          v12 = 0LL;
        }
LABEL_27:
        *((_QWORD *)this + 24) = v12;
        v22 = *((_QWORD *)this + 32);
        v23 = *((_QWORD *)this + 31);
        v24 = (_QWORD *)*((_QWORD *)this + 23);
        if ( v22 )
        {
          v23 -= (__int64)v24;
          do
          {
            *v24 = *(_QWORD *)((char *)v24 + v23);
            ++v24;
            --v22;
          }
          while ( v22 );
        }
        v25 = *((_QWORD *)this + 36);
        if ( !v25 )
        {
          v56 = (void *)*((_QWORD *)this + 27);
          if ( v56 )
          {
            free(v56);
            *((_QWORD *)this + 27) = 0LL;
          }
          *((_QWORD *)this + 29) = 0LL;
          v25 = 0LL;
          goto LABEL_41;
        }
        v26 = *((_QWORD *)this + 29);
        if ( v25 <= v26 )
        {
          if ( v25 > *((_QWORD *)this + 28) )
            ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::CallConstructors(
              v24,
              v26,
              v23);
          goto LABEL_41;
        }
        v27 = *((int *)this + 60);
        if ( *((_QWORD *)this + 27) )
        {
          if ( !*((_DWORD *)this + 60) )
          {
            v27 = v26 >> 1;
            if ( v25 - v26 > v26 >> 1 )
              v27 = v25 - v26;
          }
          v28 = *((_QWORD *)this + 36);
          if ( v25 < v26 + v27 )
            v28 = v26 + v27;
          v29 = calloc(v28, 8uLL);
          v30 = v29;
          if ( v29 )
          {
            v31 = memmove_s(
                    v29,
                    8LL * *((_QWORD *)this + 28),
                    *((const void *const *)this + 27),
                    8LL * *((_QWORD *)this + 28));
            ATL::AtlCrtErrorCheck(v31);
            free(*((void **)this + 27));
            *((_QWORD *)this + 27) = v30;
LABEL_40:
            *((_QWORD *)this + 29) = v28;
            ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::CallConstructors(
              v33,
              v32,
              v34);
LABEL_41:
            *((_QWORD *)this + 28) = v25;
            v35 = *((_QWORD *)this + 36);
            v36 = (_QWORD *)*((_QWORD *)this + 27);
            if ( v35 )
            {
              v37 = *((_QWORD *)this + 35) - (_QWORD)v36;
              do
              {
                *v36 = *(_QWORD *)((char *)v36 + v37);
                ++v36;
                --v35;
              }
              while ( v35 );
            }
            return 0LL;
          }
        }
        else
        {
          v28 = *((_QWORD *)this + 36);
          if ( v27 > v25 )
            v28 = *((int *)this + 60);
          v52 = calloc(v28, 8uLL);
          *((_QWORD *)this + 27) = v52;
          if ( v52 )
            goto LABEL_40;
        }
        ATL::AtlThrowImpl(-2147024882);
      }
      v8 = *((_QWORD *)this + 13);
      if ( v7 <= v8 )
      {
        if ( v7 > *((_QWORD *)this + 12) )
          ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::CallConstructors(
            v6,
            v8,
            v5);
        goto LABEL_13;
      }
      v44 = *((int *)this + 28);
      if ( *((_QWORD *)this + 11) )
      {
        if ( !*((_DWORD *)this + 28) )
        {
          v44 = v8 >> 1;
          if ( v7 - v8 > v8 >> 1 )
            v44 = v7 - v8;
        }
        v45 = *((_QWORD *)this + 20);
        if ( v7 < v8 + v44 )
          v45 = v8 + v44;
        v46 = calloc(v45, 8uLL);
        v47 = v46;
        if ( v46 )
        {
          v48 = memmove_s(
                  v46,
                  8LL * *((_QWORD *)this + 12),
                  *((const void *const *)this + 11),
                  8LL * *((_QWORD *)this + 12));
          ATL::AtlCrtErrorCheck(v48);
          free(*((void **)this + 11));
          *((_QWORD *)this + 11) = v47;
LABEL_63:
          *((_QWORD *)this + 13) = v45;
          ((void (*)(void))ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::CallConstructors)();
          goto LABEL_13;
        }
      }
      else
      {
        v45 = *((_QWORD *)this + 20);
        if ( v44 > v7 )
          v45 = *((int *)this + 28);
        v53 = calloc(v45, 8uLL);
        *((_QWORD *)this + 11) = v53;
        if ( v53 )
          goto LABEL_63;
      }
      ATL::AtlThrowImpl(-2147024882);
    }
    v3 = *((_QWORD *)this + 9);
    if ( v2 <= v3 )
    {
      if ( v2 > *((_QWORD *)this + 8) )
        ((void (*)(void))ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::CallConstructors)();
      goto LABEL_6;
    }
    v39 = *((int *)this + 20);
    if ( *((_QWORD *)this + 7) )
    {
      if ( !v39 )
      {
        v39 = v3 >> 1;
        if ( v2 - v3 > v3 >> 1 )
          v39 = v2 - v3;
      }
      v40 = v2;
      if ( v2 < v3 + v39 )
        v40 = v3 + v39;
      v41 = calloc(v40, 8uLL);
      v42 = v41;
      if ( v41 )
      {
        v43 = memmove_s(v41, 8LL * *((_QWORD *)this + 8), *((const void *const *)this + 7), 8LL * *((_QWORD *)this + 8));
        ATL::AtlCrtErrorCheck(v43);
        free(*((void **)this + 7));
        *((_QWORD *)this + 7) = v42;
LABEL_54:
        *((_QWORD *)this + 9) = v40;
        ((void (*)(void))ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::CallConstructors)();
        goto LABEL_6;
      }
    }
    else
    {
      v40 = v2;
      if ( v39 > v2 )
        v40 = v39;
      v54 = calloc(v40, 8uLL);
      *((_QWORD *)this + 7) = v54;
      if ( v54 )
        goto LABEL_54;
    }
    ATL::AtlThrowImpl(-2147024882);
  }
  catch ( ATL::CAtlException v57 )
  {
    v59 = v57;
    if ( v57 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1EA,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp",
      (const char *)(unsigned int)v57);
    return v59;
  }
  return 0LL;
}
