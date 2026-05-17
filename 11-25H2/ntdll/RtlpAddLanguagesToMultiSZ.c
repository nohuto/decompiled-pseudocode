/*
 * XREFs of RtlpAddLanguagesToMultiSZ @ 0x18014080C
 * Callers:
 *     RtlpAddLanguagesToMultiSZ @ 0x18014080C (RtlpAddLanguagesToMultiSZ.c)
 *     RtlpMUIGetAllInstalledLang @ 0x18014173C (RtlpMUIGetAllInstalledLang.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpLangNameInMultiSzString @ 0x180089AE0 (RtlpLangNameInMultiSzString.c)
 *     LdrpCalcAllocSize @ 0x1800AA61C (LdrpCalcAllocSize.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1800DE3D0 (RtlpGetNameFromLangInfoNode.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x18014080C (RtlpAddLanguagesToMultiSZ.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
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
  __int64 v14; // r9
  unsigned __int16 v15; // bx
  int v16; // r14d
  unsigned int v17; // eax
  unsigned __int64 v18; // rax
  void *v19; // rax
  __int64 v20; // r9
  const void *v21; // rbx
  __int64 v22; // r9
  char *v23; // rsi
  int v24; // eax
  _QWORD *v25; // r14
  __int64 v26; // rsi
  unsigned __int16 v27; // bx
  int v28; // eax
  __int128 *v29; // r9
  _DWORD v30[2]; // [rsp+40h] [rbp-61h] BYREF
  void *Src; // [rsp+48h] [rbp-59h]
  __int64 v32; // [rsp+50h] [rbp-51h]
  wchar_t **v33; // [rsp+58h] [rbp-49h]
  __int64 v34; // [rsp+60h] [rbp-41h]
  __int64 v35; // [rsp+68h] [rbp-39h]
  __int128 v36; // [rsp+70h] [rbp-31h] BYREF
  __int64 v37; // [rsp+80h] [rbp-21h]
  int v38; // [rsp+88h] [rbp-19h]

  v33 = (wchar_t **)a1;
  v34 = a5;
  v32 = a6;
  v30[1] = 0;
  v37 = 0LL;
  v9 = 1;
  v38 = 0;
  v36 = 0LL;
  if ( a1 && a2 && a3 && a4 && a5 && a6 )
  {
    if ( a7 > 2u )
      return 1;
    Heap = (void *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
    v35 = (__int64)Heap;
    if ( !Heap )
      return v9;
    Src = Heap;
    v30[0] = 11141120;
    if ( (int)RtlpGetNameFromLangInfoNode(a5, (__int64)a4, (__int64)v30) >= 0 )
    {
      v15 = v30[0];
      v16 = LOWORD(v30[0]);
      v17 = *a2 + LOWORD(v30[0]) + 4;
      if ( v17 >= LOWORD(v30[0]) && v17 >= *a2 )
      {
        if ( v17 <= *a3 )
          goto LABEL_17;
        v18 = LdrpCalcAllocSize(*a3, 2uLL);
        if ( v18 )
        {
          v19 = (void *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, v18);
          v21 = v19;
          if ( v19 )
          {
            memmove(v19, *a1, *a2);
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)*a1, v22);
            *a1 = v21;
            v15 = v30[0];
            *a3 *= 2;
LABEL_17:
            v23 = (char *)*v33 + *a2;
            if ( RtlpLangNameInMultiSzString(*v33, (wchar_t *)Src) )
            {
              v25 = (_QWORD *)v32;
            }
            else
            {
              memmove(v23, Src, v15);
              v24 = v16 + 2;
              v25 = (_QWORD *)v32;
              *(_WORD *)&v23[v15] = 0;
              *a2 += v24;
              ++*v25;
            }
            if ( (*a4 & 0x402) != 0 )
            {
              v26 = v34;
              v27 = 0;
              while ( 1 )
              {
                v28 = ((unsigned __int16)a4[4] >> (2 * v27)) & 3;
                if ( v28 == 2 )
                  break;
                if ( v28 == 1 )
                {
                  WORD2(v36) = a4[v27 + 6];
                  goto LABEL_28;
                }
                if ( v28 == 3 )
                {
                  WORD3(v36) = a4[v27 + 6];
LABEL_28:
                  v29 = &v36;
LABEL_30:
                  v9 = RtlpAddLanguagesToMultiSZ(
                         (_DWORD)v33,
                         (_DWORD)a2,
                         (_DWORD)a3,
                         (_DWORD)v29,
                         v26,
                         (__int64)v25,
                         a7 + 1);
                  if ( !v9 )
                    goto LABEL_32;
                }
                if ( ++v27 >= 4u )
                  goto LABEL_32;
              }
              v29 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(v26 + 24) + 16LL) + 28LL * (__int16)a4[v27 + 6]);
              goto LABEL_30;
            }
            goto LABEL_32;
          }
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0LL, v20);
        }
      }
    }
LABEL_32:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v35, v14);
    return v9;
  }
  return 0;
}
