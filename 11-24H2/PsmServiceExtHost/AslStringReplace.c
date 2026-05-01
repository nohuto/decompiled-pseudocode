/*
 * XREFs of AslStringReplace @ 0x18009E7AC
 * Callers:
 *     AslStringReplaceArray @ 0x18009EA00 (AslStringReplaceArray.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x180092224 (RtlStringCchLengthW.c)
 *     AslFree @ 0x18009D9EC (AslFree.c)
 *     AslStringDuplicate @ 0x18009E508 (AslStringDuplicate.c)
 *     memcpy_0 @ 0x1800A7AF2 (memcpy_0.c)
 */

__int64 __fastcall AslStringReplace(_QWORD *a1, __int64 a2, const wchar_t *a3, const void *a4)
{
  const wchar_t *v6; // rdi
  int v8; // ebx
  unsigned int v9; // r11d
  unsigned int v10; // r11d
  unsigned __int64 v11; // rbp
  __int64 v12; // rbx
  __int64 v13; // r14
  wchar_t *v14; // rax
  unsigned __int64 v15; // rbx
  char *Heap; // rax
  PVOID v17; // r14
  char *v18; // r15
  wchar_t *v19; // r12
  size_t v20; // r14
  char *v21; // r15
  __int64 v23; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-50h] BYREF
  PVOID v25; // [rsp+30h] [rbp-48h]
  __int64 v26; // [rsp+38h] [rbp-40h]
  unsigned __int64 v28; // [rsp+88h] [rbp+10h] BYREF

  v26 = a2;
  v28 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v6 = (const wchar_t *)a2;
  if ( !a2 )
  {
    v8 = 0;
LABEL_22:
    AslFree(NtCurrentPeb()->ProcessHeap, 0LL);
    return (unsigned int)v8;
  }
  if ( a3 && a4 )
  {
    v8 = RtlStringCchLengthW(a2, 0x7FFFLL, &v28);
    if ( v8 < 0 )
      goto LABEL_22;
    if ( (int)RtlStringCchLengthW((__int64)a3, v9, &v24) >= 0 )
    {
      v11 = v24;
      if ( v24 )
      {
        if ( v24 <= v28 && (int)RtlStringCchLengthW((__int64)a4, v10, &v23) >= 0 )
        {
          v12 = v23;
          if ( v23 )
          {
            v13 = 0LL;
            v14 = wcsstr(v6, a3);
            if ( v14 )
            {
              do
              {
                ++v13;
                v14 = wcsstr(&v14[v11], a3);
              }
              while ( v14 );
              if ( v13 )
              {
                v15 = v28 + v13 * (v12 - v11);
                if ( v15 )
                {
                  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2 * v15 + 2);
                  v25 = Heap;
                  v17 = Heap;
                  if ( Heap )
                  {
                    v18 = Heap;
                    v19 = wcsstr(v6, a3);
                    if ( v19 )
                    {
                      v20 = 2 * v23;
                      do
                      {
                        memcpy_0(v18, v6, 2 * (v19 - v6));
                        v21 = &v18[2 * (v19 - v6)];
                        memcpy_0(v21, a4, v20);
                        v6 = &v19[v11];
                        v18 = &v21[v20];
                        v19 = wcsstr(v6, a3);
                      }
                      while ( v19 );
                      v17 = v25;
                    }
                    memcpy_0(v18, v6, 2 * (v28 - (((__int64)v6 - v26) >> 1)));
                    v8 = 0;
                    *a1 = v17;
                  }
                  else
                  {
                    v8 = -1073741801;
                  }
                  goto LABEL_22;
                }
              }
            }
          }
        }
      }
    }
  }
  return AslStringDuplicate(a1, (__int64)v6);
}
