/*
 * XREFs of RtlpAddLanguagesToMultiSZ @ 0x18013F11C
 * Callers:
 *     RtlpAddLanguagesToMultiSZ @ 0x18013F11C (RtlpAddLanguagesToMultiSZ.c)
 *     RtlpMUIGetAllInstalledLang @ 0x18014004C (RtlpMUIGetAllInstalledLang.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpLangNameInMultiSzString @ 0x18007D7B0 (RtlpLangNameInMultiSzString.c)
 *     LdrpCalcAllocSize @ 0x18007EF4C (LdrpCalcAllocSize.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1800E1030 (RtlpGetNameFromLangInfoNode.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x18013F11C (RtlpAddLanguagesToMultiSZ.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

char __fastcall RtlpAddLanguagesToMultiSZ(
        const void **a1,
        unsigned int *a2,
        unsigned int *a3,
        _WORD *a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 a7)
{
  char v9; // r13
  void *Heap; // rax
  unsigned __int16 v14; // bx
  int v15; // r14d
  unsigned int v16; // eax
  unsigned __int64 v17; // rax
  void *v18; // rax
  const void *v19; // rbx
  char *v20; // rsi
  int v21; // eax
  _QWORD *v22; // r14
  __int64 v23; // rsi
  unsigned __int16 v24; // bx
  int v25; // eax
  __int128 *v26; // r9
  _DWORD v27[2]; // [rsp+40h] [rbp-61h] BYREF
  void *Src; // [rsp+48h] [rbp-59h]
  __int64 v29; // [rsp+50h] [rbp-51h]
  wchar_t **v30; // [rsp+58h] [rbp-49h]
  __int64 v31; // [rsp+60h] [rbp-41h]
  unsigned __int64 v32; // [rsp+68h] [rbp-39h]
  __int128 v33; // [rsp+70h] [rbp-31h] BYREF
  __int64 v34; // [rsp+80h] [rbp-21h]
  int v35; // [rsp+88h] [rbp-19h]

  v30 = (wchar_t **)a1;
  v31 = a5;
  v29 = a6;
  v27[1] = 0;
  v34 = 0LL;
  v9 = 1;
  v35 = 0;
  v33 = 0LL;
  if ( a1 && a2 && a3 && a4 && a5 && a6 )
  {
    if ( a7 > 2u )
      return 1;
    Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
    v32 = (unsigned __int64)Heap;
    if ( !Heap )
      return v9;
    Src = Heap;
    v27[0] = 11141120;
    if ( (int)RtlpGetNameFromLangInfoNode(a5, (__int64)a4, (__int64)v27) >= 0 )
    {
      v14 = v27[0];
      v15 = LOWORD(v27[0]);
      v16 = *a2 + LOWORD(v27[0]) + 4;
      if ( v16 >= LOWORD(v27[0]) && v16 >= *a2 )
      {
        if ( v16 <= *a3 )
          goto LABEL_17;
        v17 = LdrpCalcAllocSize(*a3, 2uLL);
        if ( v17 )
        {
          v18 = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v17);
          v19 = v18;
          if ( v18 )
          {
            memmove(v18, *a1, *a2);
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)*a1);
            *a1 = v19;
            v14 = v27[0];
            *a3 *= 2;
LABEL_17:
            v20 = (char *)*v30 + *a2;
            if ( RtlpLangNameInMultiSzString(*v30, (wchar_t *)Src) )
            {
              v22 = (_QWORD *)v29;
            }
            else
            {
              memmove(v20, Src, v14);
              v21 = v15 + 2;
              v22 = (_QWORD *)v29;
              *(_WORD *)&v20[v14] = 0;
              *a2 += v21;
              ++*v22;
            }
            if ( (*a4 & 0x402) != 0 )
            {
              v23 = v31;
              v24 = 0;
              while ( 1 )
              {
                v25 = ((unsigned __int16)a4[4] >> (2 * v24)) & 3;
                if ( v25 == 2 )
                  break;
                if ( v25 == 1 )
                {
                  WORD2(v33) = a4[v24 + 6];
                  goto LABEL_28;
                }
                if ( v25 == 3 )
                {
                  WORD3(v33) = a4[v24 + 6];
LABEL_28:
                  v26 = &v33;
LABEL_30:
                  v9 = RtlpAddLanguagesToMultiSZ(
                         (_DWORD)v30,
                         (_DWORD)a2,
                         (_DWORD)a3,
                         (_DWORD)v26,
                         v23,
                         (__int64)v22,
                         a7 + 1);
                  if ( !v9 )
                    goto LABEL_32;
                }
                if ( ++v24 >= 4u )
                  goto LABEL_32;
              }
              v26 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(v23 + 24) + 16LL) + 28LL * (__int16)a4[v24 + 6]);
              goto LABEL_30;
            }
            goto LABEL_32;
          }
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0LL);
        }
      }
    }
LABEL_32:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v32);
    return v9;
  }
  return 0;
}
