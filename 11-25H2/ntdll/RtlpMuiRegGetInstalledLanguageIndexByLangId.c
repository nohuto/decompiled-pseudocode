/*
 * XREFs of RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18005B950
 * Callers:
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18005AD70 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x18005B490 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlLCIDToCultureName @ 0x18005B640 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180089F60 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlGetUILanguageInfo @ 0x18008A190 (RtlGetUILanguageInfo.c)
 *     LdrpMergeLangFallbackLists @ 0x18008D050 (LdrpMergeLangFallbackLists.c)
 *     RtlpRefreshCachedUILanguage @ 0x18014B180 (RtlpRefreshCachedUILanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x18014C210 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlLCIDToCultureName @ 0x18005B640 (RtlLCIDToCultureName.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     _wcsicmp @ 0x180124750 (_wcsicmp.c)
 */

__int64 __fastcall RtlpMuiRegGetInstalledLanguageIndexByLangId(__int64 a1, unsigned __int16 a2, char a3, _WORD *a4)
{
  char v4; // r11
  LCID v5; // ebx
  unsigned int v9; // edi
  __int64 v10; // r9
  char v11; // r13
  int i; // eax
  _WORD *v13; // r8
  wchar_t *Heap; // rax
  wchar_t *v15; // rbp
  wchar_t *Buffer; // r14
  __int64 v18; // r12
  __int64 v19; // rsi
  int v20; // ebx
  __int64 v21; // rdi
  const wchar_t *v22; // rcx
  int j; // ecx
  _WORD *v24; // rdx
  _UNICODE_STRING String; // [rsp+20h] [rbp-38h] BYREF
  char v26; // [rsp+60h] [rbp+8h]

  v4 = 0;
  v5 = a2;
  v26 = 0;
  v9 = -1073741772;
  String = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( a2 == 4096 )
    return 3221225524LL;
  v10 = *(_QWORD *)(a1 + 24);
  v11 = 0;
  for ( i = 0; ; ++i )
  {
    if ( i >= *(unsigned __int16 *)(v10 + 6) )
    {
      Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
      v15 = Heap;
      if ( Heap )
      {
        String.Buffer = Heap;
        *(_DWORD *)&String.Length = 11141120;
        if ( a3 && RtlLCIDToCultureName(v5, &String) )
        {
          Buffer = String.Buffer;
          if ( String.Buffer )
          {
            v18 = *(_QWORD *)(a1 + 24);
            if ( !*String.Buffer )
              goto LABEL_43;
            v19 = *(_QWORD *)(a1 + 32);
            if ( v19 )
            {
              v20 = 0;
              v21 = 0LL;
              while ( v20 < *(unsigned __int16 *)(v19 + 6) )
              {
                v22 = (const wchar_t *)(*(_QWORD *)(v19 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v19 + 16) + v21));
                if ( v22 == Buffer || !wcsicmp(v22, Buffer) )
                {
                  if ( v20 < 0 )
                    break;
                  goto LABEL_32;
                }
                ++v20;
                v21 += 2LL;
              }
            }
            LOWORD(v20) = -1;
LABEL_32:
            if ( (v20 & 0x8000u) != 0 )
              goto LABEL_43;
            for ( j = 0; j < *(unsigned __int16 *)(v18 + 6); ++j )
            {
              v24 = (_WORD *)(*(_QWORD *)(v18 + 16) + 28LL * j);
              if ( v24[3] == (_WORD)v20 )
              {
                if ( (*v24 & 0x1020) == 0x20 )
                {
                  if ( a4 )
                  {
                    *a4 = j;
                    v9 = 0;
                    goto LABEL_10;
                  }
                }
                else if ( (*v24 & 0x1000) != 0 )
                {
                  v11 = 1;
                }
              }
            }
            if ( v11 )
              v9 = -1073741637;
            else
LABEL_43:
              v9 = -1073741772;
          }
          else
          {
            v9 = -1073741811;
          }
        }
LABEL_10:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
        if ( v26 && v9 == -1073741772 )
          return 3221225659LL;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
      return v9;
    }
    v13 = (_WORD *)(*(_QWORD *)(v10 + 16) + 28LL * i);
    if ( v13[2] == a2 )
      break;
LABEL_7:
    ;
  }
  if ( (*v13 & 0x1020) != 0x20 )
  {
    if ( (*v13 & 0x1000) != 0 )
      v4 = 1;
    v26 = v4;
    goto LABEL_7;
  }
  if ( a4 )
    *a4 = i;
  return 0LL;
}
