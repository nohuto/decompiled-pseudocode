/*
 * XREFs of ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180005A08
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x180004400 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 * Callees:
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x18000377C (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     ??$WriteResultString@PEB_W@details@wil@@YAPEAEPEAE0PEB_WPEAPEB_W@Z @ 0x1800037FC (--$WriteResultString@PEB_W@details@wil@@YAPEAEPEAE0PEB_WPEAPEB_W@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x180005150 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     memset_0 @ 0x18000F242 (memset_0.c)
 */

void __fastcall wil::details_abi::ThreadLocalData::SetLastError(
        wil::details_abi::ThreadLocalData *this,
        const struct wil::FailureInfo *a2)
{
  int v2; // edi
  _WORD *v5; // rax
  _WORD *v6; // rcx
  _DWORD *v7; // r9
  _DWORD *v8; // rcx
  _DWORD *v9; // rdx
  __int64 v10; // r8
  unsigned __int16 v11; // dx
  _DWORD *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rcx
  _WORD **v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned __int64 v22; // rbp
  LPVOID v23; // r15
  void *v24; // rbx
  HANDLE ProcessHeap; // rax
  char *v26; // rcx
  char *v27; // rbx
  char *v28; // rax
  char *v29; // rax
  char *v30; // rax

  v2 = *((_DWORD *)this + 4);
  if ( !*((_QWORD *)this + 3) )
  {
    if ( v2 )
    {
      v5 = wil::details::ProcessHeapAlloc(8u, 0x190uLL);
      *((_QWORD *)this + 3) = v5;
      if ( v5 )
      {
        *((_DWORD *)this + 8) = 5;
        v6 = v5 + 200;
        while ( v5 != v6 )
        {
          *v5 = 80;
          v5 += 40;
        }
      }
    }
  }
  v7 = (_DWORD *)*((_QWORD *)this + 3);
  if ( !v7 )
    return;
  if ( !v2 || (v8 = &v7[20 * *((unsigned __int16 *)this + 16)], v7 == v8) )
  {
LABEL_14:
    v10 = 1LL;
    v11 = ((unsigned int)*((unsigned __int16 *)this + 17) + 1) % *((unsigned __int16 *)this + 16);
    *((_WORD *)this + 17) = v11;
    v12 = &v7[20 * v11];
    v13 = -1LL;
    v12[1] = _InterlockedIncrement(*((volatile signed __int32 **)this + 1));
    v12[2] = *((_DWORD *)a2 + 2);
    *((_QWORD *)v12 + 2) = 0LL;
    *((_WORD *)v12 + 12) = *((_WORD *)a2 + 32);
    *((_BYTE *)v12 + 26) = *(_BYTE *)a2;
    *((_QWORD *)v12 + 4) = 0LL;
    *((_QWORD *)v12 + 5) = *((_QWORD *)a2 + 17);
    *((_QWORD *)v12 + 6) = *((_QWORD *)a2 + 18);
    *((_QWORD *)v12 + 7) = 0LL;
    v14 = *((_QWORD *)a2 + 7);
    if ( v14 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( *(_BYTE *)(v14 + v16) );
      v15 = v16 + 1;
    }
    else
    {
      v15 = 1LL;
    }
    v17 = *((_QWORD *)a2 + 16);
    if ( v17 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( *(_BYTE *)(v17 + v18) );
      v10 = v18 + 1;
    }
    v19 = (_WORD **)((char *)a2 + 24);
    v20 = *((_QWORD *)a2 + 3);
    if ( v20 )
    {
      do
        ++v13;
      while ( *(_WORD *)(v20 + 2 * v13) );
      v21 = 2 * v13 + 2;
    }
    else
    {
      v21 = 2LL;
    }
    v22 = v15 + v21 + v10;
    if ( *((_QWORD *)v12 + 8) )
    {
      if ( *((_QWORD *)v12 + 9) >= v22 )
      {
LABEL_32:
        v26 = (char *)*((_QWORD *)v12 + 8);
        if ( v26 )
        {
          v27 = &v26[*((_QWORD *)v12 + 9)];
          v28 = wil::details::WriteResultString<char const *>(v26, v27, *((_BYTE **)a2 + 7), (_QWORD *)v12 + 2);
          v29 = wil::details::WriteResultString<char const *>(v28, v27, *((_BYTE **)a2 + 16), (_QWORD *)v12 + 4);
          v30 = wil::details::WriteResultString<wchar_t const *>(v29, v27, *v19, (_QWORD *)v12 + 7);
          memset_0(v30, 0, v27 - v30);
        }
        return;
      }
      v19 = (_WORD **)((char *)a2 + 24);
    }
    v23 = wil::details::ProcessHeapAlloc(8u, v15 + v21 + v10);
    if ( v23 )
    {
      v24 = (void *)*((_QWORD *)v12 + 8);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v24);
      *((_QWORD *)v12 + 8) = v23;
      *((_QWORD *)v12 + 9) = v22;
    }
    goto LABEL_32;
  }
  v9 = v7 + 2;
  while ( *(v9 - 1) <= *((_DWORD *)this + 4) || *v9 != *((_DWORD *)a2 + 2) )
  {
    v9 += 20;
    if ( v9 - 2 == v8 )
      goto LABEL_14;
  }
}
