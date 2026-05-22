/*
 * XREFs of ?CheckForShellGesture@ShellGesturesRecognizer@@AEAAXAEAURecognitionState@1@_N@Z @ 0x1800664DC
 * Callers:
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180088DB0 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180083784 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 */

void __fastcall ShellGesturesRecognizer::CheckForShellGesture(
        ShellGesturesRecognizer *this,
        struct ShellGesturesRecognizer::RecognitionState *a2,
        char a3)
{
  __int64 **v6; // r10
  int v7; // esi
  __int64 *i; // r9
  __int64 **v9; // r8
  __int64 *j; // rdx
  __int64 v11; // rax
  int v12; // r8d
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // r8
  _QWORD *k; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rcx
  __int64 v22; // rax
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  const wchar_t *v26; // rax
  __int64 v27; // [rsp+40h] [rbp-28h] BYREF
  int v28; // [rsp+78h] [rbp+10h] BYREF
  const wchar_t *v29; // [rsp+88h] [rbp+20h] BYREF

  if ( *(_DWORD *)a2 == 2 )
  {
    v6 = (__int64 **)*((_QWORD *)this + 18);
    v7 = dword_1802460D4;
    for ( i = *v6; i != (__int64 *)v6; i = (__int64 *)*i )
    {
      v9 = (__int64 **)*((_QWORD *)this + 18);
      for ( j = *v9; j != (__int64 *)v9; j = (__int64 *)*j )
      {
        if ( *((_DWORD *)i + 4) != *((_DWORD *)j + 4) )
        {
          v11 = j[4];
          if ( (int)((i[4] - v11) * (i[4] - v11) + (HIDWORD(i[4]) - HIDWORD(v11)) * (HIDWORD(i[4]) - HIDWORD(v11))) >= (unsigned __int64)(unsigned int)(v7 * v7) )
          {
            *(_DWORD *)a2 = 1;
            *((_DWORD *)a2 + 1) = 5;
            v7 = dword_1802460D4;
          }
        }
      }
    }
    v12 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 == 2 && *((_DWORD *)this + 24) != *((_QWORD *)this + 19) )
    {
      *(_DWORD *)a2 = 1;
      v12 = 1;
      *((_DWORD *)a2 + 1) = 6;
    }
    if ( *((_DWORD *)this + 30) < 2u && *((_DWORD *)this + 24) >= 2u )
    {
      *((_QWORD *)a2 + 1) = (*((_QWORD *)this + 14) - *((_QWORD *)this + 13)) / 1000000LL;
      if ( *((_DWORD *)this + 25) == 1 )
      {
        v13 = 0LL;
      }
      else
      {
        v14 = *((_QWORD *)this + 16) - *((_QWORD *)this + 13);
        v13 = ((__int64)((unsigned __int128)(v14 * (__int128)0x431BDE82D7B634DBLL) >> 64) >> 18)
            + ((unsigned __int64)((unsigned __int128)(v14 * (__int128)0x431BDE82D7B634DBLL) >> 64) >> 63)
            + 1;
      }
      *((_QWORD *)a2 + 3) = v13;
    }
    if ( *((_DWORD *)this + 30) < 3u && *((_DWORD *)this + 24) >= 3u )
    {
      *((_QWORD *)a2 + 2) = (*((_QWORD *)this + 14) - *((_QWORD *)this + 13)) / 1000000LL;
      if ( *((_DWORD *)this + 25) == 1 )
      {
        v15 = 0LL;
      }
      else
      {
        v16 = *((_QWORD *)this + 16) - *((_QWORD *)this + 13);
        v15 = ((__int64)((unsigned __int128)(v16 * (__int128)0x431BDE82D7B634DBLL) >> 64) >> 18)
            + ((unsigned __int64)((unsigned __int128)(v16 * (__int128)0x431BDE82D7B634DBLL) >> 64) >> 63)
            + 1;
      }
      *((_QWORD *)a2 + 4) = v15;
    }
    if ( v12 == 2 )
    {
      if ( *((_DWORD *)this + 24) == 1 )
      {
        if ( a3 )
        {
          v21 = (_QWORD *)**((_QWORD **)this + 18);
          if ( v21[6] - v21[5] >= 1000000 * ShellGesturesRecognizer::s_thresholds )
          {
            *(_DWORD *)a2 = 1;
            *((_DWORD *)a2 + 1) = 1;
          }
          v22 = v21[3];
          if ( (int)((v21[4] - v22) * (v21[4] - v22)
                   + (HIDWORD(v21[4]) - HIDWORD(v22)) * (HIDWORD(v21[4]) - HIDWORD(v22))) >= (unsigned __int64)(unsigned int)(dword_1802460B8 * dword_1802460B8) )
          {
            *((_DWORD *)a2 + 1) = 2;
LABEL_46:
            *(_DWORD *)a2 = 1;
          }
        }
      }
      else if ( *((_DWORD *)this + 24) == 2 )
      {
        if ( a3 )
        {
          v17 = (_QWORD *)*((_QWORD *)this + 18);
          for ( k = (_QWORD *)*v17; k != v17; k = (_QWORD *)*k )
          {
            v19 = k[6] - k[5];
            if ( *((_BYTE *)this + 216) )
            {
              if ( v19 >= 1000000 * qword_1802460C8 )
                goto LABEL_29;
            }
            else if ( v19 >= 1000000 * qword_1802460C0 )
            {
              *((_DWORD *)a2 + 1) = 3;
              goto LABEL_46;
            }
            v20 = k[3];
            if ( (int)((k[4] - v20) * (k[4] - v20) + (HIDWORD(k[4]) - HIDWORD(v20)) * (HIDWORD(k[4]) - HIDWORD(v20))) >= (unsigned __int64)(unsigned int)(dword_1802460D0 * dword_1802460D0) )
            {
              *((_DWORD *)a2 + 1) = 4;
              goto LABEL_46;
            }
          }
        }
      }
      else
      {
LABEL_29:
        *(_DWORD *)a2 = 3;
      }
    }
    if ( *(_DWORD *)a2 == 3 )
    {
      *((_DWORD *)a2 + 10) = *((_DWORD *)this + 24);
    }
    else if ( *(_DWORD *)a2 != 1 )
    {
      return;
    }
    if ( (unsigned int)dword_180244248 > 5 && tlgKeywordOn((__int64)&dword_180244248, 0x200000000000LL) )
    {
      v28 = *((_DWORD *)this + 24);
      if ( v24 )
      {
        if ( !--v24 )
        {
          v26 = L"GestureNotRecognized";
          goto LABEL_62;
        }
        if ( !--v24 )
        {
          v26 = L"GestureRecognitionInProgress";
          goto LABEL_62;
        }
        if ( !--v24 )
        {
          v26 = L"GestureRecognized";
          goto LABEL_62;
        }
        if ( v24 == 1 )
        {
          v26 = L"GestureInProgress";
LABEL_62:
          v29 = v26;
          v27 = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
            v23,
            (unsigned int)&unk_180218DD2,
            v24,
            v25,
            (__int64)&v27,
            (__int64)&v29,
            (__int64)&v28);
          return;
        }
      }
      v26 = L"None";
      goto LABEL_62;
    }
  }
}
