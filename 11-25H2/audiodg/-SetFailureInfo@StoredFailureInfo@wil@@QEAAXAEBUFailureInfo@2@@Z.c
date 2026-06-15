/*
 * XREFs of ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x14005E258
 * Callers:
 *     ?ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x14005E630 (-ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x14005BC54 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x14005BCC8 (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBD@Z @ 0x14005DF6C (-ResultStringSize@details@wil@@YA_KPEBD@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBG@Z @ 0x14005DF98 (-ResultStringSize@details@wil@@YA_KPEBG@Z.c)
 *     ?assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z @ 0x14005E99C (-assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x14005EB28 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::StoredFailureInfo::SetFailureInfo(wil::StoredFailureInfo *this, const struct wil::FailureInfo *a2)
{
  __int64 v4; // rsi
  const unsigned __int16 *v5; // rdx
  __int64 v6; // rsi
  const unsigned __int16 *v7; // rdx
  __int64 v8; // rsi
  const char *v9; // rdx
  __int64 v10; // rsi
  const char *v11; // rdx
  __int64 v12; // rsi
  const char *v13; // rdx
  __int64 v14; // rsi
  const char *v15; // rdx
  __int64 v16; // rsi
  const char *v17; // rdx
  __int64 v18; // rsi
  const char *v19; // rdx
  __int64 v20; // rsi
  const char *v21; // rdx
  unsigned __int64 v22; // rsi
  _DWORD *v23; // rax
  HANDLE ProcessHeap; // rax
  int *v25; // rax
  unsigned __int16 *v26; // rcx
  const unsigned __int16 *v27; // rbx
  char *v28; // rax
  char *v29; // rax
  char *v30; // rax
  char *v31; // rax
  char *v32; // rax
  char *v33; // rax
  unsigned __int16 *v34; // rax
  char *v35; // rax
  unsigned __int16 *v36; // rax
  char *v37; // rax

  *(_OWORD *)this = *(_OWORD *)a2;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)this + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)this + 6) = *((_OWORD *)a2 + 6);
  *((_OWORD *)this + 7) = *((_OWORD *)a2 + 7);
  *((_OWORD *)this + 8) = *((_OWORD *)a2 + 8);
  *((_QWORD *)this + 18) = *((_QWORD *)a2 + 18);
  v4 = wil::details::ResultStringSize(*((wil::details **)a2 + 15), (const unsigned __int16 *)a2);
  v6 = wil::details::ResultStringSize(*((wil::details **)a2 + 12), v5) + v4;
  v8 = wil::details::ResultStringSize(*((wil::details **)a2 + 3), v7) + v6;
  v10 = wil::details::ResultStringSize(*((wil::details **)a2 + 14), v9) + v8;
  v12 = wil::details::ResultStringSize(*((wil::details **)a2 + 11), v11) + v10;
  v14 = wil::details::ResultStringSize(*((wil::details **)a2 + 9), v13) + v12;
  v16 = wil::details::ResultStringSize(*((wil::details **)a2 + 7), v15) + v14;
  v18 = wil::details::ResultStringSize(*((wil::details **)a2 + 6), v17) + v16;
  v20 = wil::details::ResultStringSize(*((wil::details **)a2 + 5), v19) + v18;
  v22 = wil::details::ResultStringSize(*((wil::details **)a2 + 16), v21) + v20;
  v23 = (_DWORD *)*((_QWORD *)this + 19);
  if ( !v23 || *v23 != 1 || *((_QWORD *)this + 20) < v22 )
  {
    wil::details::shared_buffer::reset((wil::StoredFailureInfo *)((char *)this + 152));
    if ( v22 )
    {
      ProcessHeap = GetProcessHeap();
      v25 = (int *)HeapAlloc(ProcessHeap, 0, v22 + 4);
      if ( v25 )
      {
        *v25 = 0;
        wil::details::shared_buffer::assign((wil::StoredFailureInfo *)((char *)this + 152), v25, v22);
      }
    }
    else
    {
      wil::details::shared_buffer::reset((wil::StoredFailureInfo *)((char *)this + 152));
    }
  }
  v26 = (unsigned __int16 *)((*((_QWORD *)this + 19) + 4LL) & -(__int64)(*((_QWORD *)this + 19) != 0LL));
  if ( v26 )
  {
    v27 = (unsigned __int16 *)((char *)v26 + *((_QWORD *)this + 20));
    v28 = wil::details::WriteResultString<unsigned short const *>(
            v26,
            v27,
            *((wil::details **)a2 + 3),
            (unsigned __int16 **)this + 3);
    v29 = wil::details::WriteResultString<char const *>(
            v28,
            (const char *)v27,
            *((wil::details **)a2 + 5),
            (char **)this + 5);
    v30 = wil::details::WriteResultString<char const *>(
            v29,
            (const char *)v27,
            *((wil::details **)a2 + 6),
            (char **)this + 6);
    v31 = wil::details::WriteResultString<char const *>(
            v30,
            (const char *)v27,
            *((wil::details **)a2 + 7),
            (char **)this + 7);
    v32 = wil::details::WriteResultString<char const *>(
            v31,
            (const char *)v27,
            *((wil::details **)a2 + 9),
            (char **)this + 9);
    v33 = wil::details::WriteResultString<char const *>(
            v32,
            (const char *)v27,
            *((wil::details **)a2 + 16),
            (char **)this + 16);
    v34 = (unsigned __int16 *)wil::details::WriteResultString<char const *>(
                                v33,
                                (const char *)v27,
                                *((wil::details **)a2 + 14),
                                (char **)this + 14);
    v35 = wil::details::WriteResultString<unsigned short const *>(
            v34,
            v27,
            *((wil::details **)a2 + 15),
            (unsigned __int16 **)this + 15);
    v36 = (unsigned __int16 *)wil::details::WriteResultString<char const *>(
                                v35,
                                (const char *)v27,
                                *((wil::details **)a2 + 11),
                                (char **)this + 11);
    v37 = wil::details::WriteResultString<unsigned short const *>(
            v36,
            v27,
            *((wil::details **)a2 + 12),
            (unsigned __int16 **)this + 12);
    memset_0(v37, 0, (char *)v27 - v37);
  }
}
