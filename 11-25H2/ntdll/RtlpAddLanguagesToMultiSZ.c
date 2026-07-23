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
  PVOID Heap; // rax
  unsigned __int16 Length; // bx
  int v15; // r14d
  unsigned int v16; // eax
  SIZE_T v17; // rax
  PVOID v18; // rax
  PVOID v19; // rbx
  char *v20; // rsi
  int v21; // eax
  _QWORD *v22; // r14
  __int64 v23; // rsi
  unsigned __int16 v24; // bx
  int v25; // eax
  __int128 *v26; // r9
  _UNICODE_STRING v27; // [rsp+40h] [rbp-61h] BYREF
  __int64 v28; // [rsp+50h] [rbp-51h]
  wchar_t **v29; // [rsp+58h] [rbp-49h]
  __int64 v30; // [rsp+60h] [rbp-41h]
  PVOID BaseAddress; // [rsp+68h] [rbp-39h]
  __int128 v32; // [rsp+70h] [rbp-31h] BYREF
  __int64 v33; // [rsp+80h] [rbp-21h]
  int v34; // [rsp+88h] [rbp-19h]

  v29 = (wchar_t **)a1;
  v30 = a5;
  v28 = a6;
  *(_DWORD *)(&v27.MaximumLength + 1) = 0;
  v33 = 0LL;
  v9 = 1;
  v34 = 0;
  v32 = 0LL;
  if ( a1 && a2 && a3 && a4 && a5 && a6 )
  {
    if ( a7 > 2u )
      return 1;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
    BaseAddress = Heap;
    if ( !Heap )
      return v9;
    v27.Buffer = (wchar_t *)Heap;
    *(_DWORD *)&v27.Length = 11141120;
    if ( (int)RtlpGetNameFromLangInfoNode(a5, (__int64)a4, &v27) >= 0 )
    {
      Length = v27.Length;
      v15 = v27.Length;
      v16 = *a2 + v27.Length + 4;
      if ( v16 >= v27.Length && v16 >= *a2 )
      {
        if ( v16 <= *a3 )
          goto LABEL_17;
        v17 = LdrpCalcAllocSize(*a3, 2uLL);
        if ( v17 )
        {
          v18 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v17);
          v19 = v18;
          if ( v18 )
          {
            memmove(v18, *a1, *a2);
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)*a1);
            *a1 = v19;
            Length = v27.Length;
            *a3 *= 2;
LABEL_17:
            v20 = (char *)*v29 + *a2;
            if ( RtlpLangNameInMultiSzString(*v29, v27.Buffer) )
            {
              v22 = (_QWORD *)v28;
            }
            else
            {
              memmove(v20, v27.Buffer, Length);
              v21 = v15 + 2;
              v22 = (_QWORD *)v28;
              *(_WORD *)&v20[Length] = 0;
              *a2 += v21;
              ++*v22;
            }
            if ( (*a4 & 0x402) != 0 )
            {
              v23 = v30;
              v24 = 0;
              while ( 1 )
              {
                v25 = ((unsigned __int16)a4[4] >> (2 * v24)) & 3;
                if ( v25 == 2 )
                  break;
                if ( v25 == 1 )
                {
                  WORD2(v32) = a4[v24 + 6];
                  goto LABEL_28;
                }
                if ( v25 == 3 )
                {
                  WORD3(v32) = a4[v24 + 6];
LABEL_28:
                  v26 = &v32;
LABEL_30:
                  v9 = RtlpAddLanguagesToMultiSZ(
                         (_DWORD)v29,
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
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, 0LL);
        }
      }
    }
LABEL_32:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    return v9;
  }
  return 0;
}
