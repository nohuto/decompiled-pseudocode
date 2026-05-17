/*
 * XREFs of RtlpGetMUIRedirectedFilePathInternal @ 0x1800766F0
 * Callers:
 *     RtlpGetMUIRedirectedFilePath @ 0x180077E08 (RtlpGetMUIRedirectedFilePath.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAppendUnicodeStringToString @ 0x180075AB0 (RtlAppendUnicodeStringToString.c)
 *     RtlDoesFileExists_UEx @ 0x180076D10 (RtlDoesFileExists_UEx.c)
 *     RtlAppendUnicodeToString @ 0x1800B2BB0 (RtlAppendUnicodeToString.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlpGetMUIRedirectedFilePathInternal(
        const void **a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        char a5,
        void *a6)
{
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rax
  int appended; // ebx
  void *Heap; // rax
  __int64 v15; // rdx
  const void *v16; // rsi
  unsigned __int64 v17; // r15
  unsigned int v18; // [rsp+20h] [rbp-48h]
  void *Src[2]; // [rsp+28h] [rbp-40h] BYREF

  v10 = 0LL;
  if ( !a2 || !a3 )
  {
    appended = -1073741811;
    goto LABEL_7;
  }
  v11 = -1LL;
  do
    ++v11;
  while ( *(_WORD *)(a2 + 2 * v11) );
  if ( v11 >= 0x104 )
  {
    appended = -1073741306;
LABEL_7:
    v18 = appended;
    goto LABEL_8;
  }
  Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
  v10 = (unsigned __int64)Heap;
  if ( !Heap )
  {
    appended = -1073741801;
    goto LABEL_7;
  }
  Src[0] = (void *)34078720;
  Src[1] = Heap;
  appended = RtlAppendUnicodeToString(Src, a2);
  v18 = appended;
  if ( appended >= 0 )
  {
    appended = RtlAppendUnicodeToString(Src, L"\\");
    v18 = appended;
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeStringToString((unsigned __int16 *)Src, a1);
      v18 = appended;
      if ( appended >= 0 )
      {
        appended = RtlAppendUnicodeToString(Src, L"\\");
        v18 = appended;
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString(Src, a3);
          v18 = appended;
          if ( appended >= 0 )
          {
            if ( !a5 || (appended = RtlAppendUnicodeToString(Src, L".mui"), v18 = appended, appended >= 0) )
            {
              LOBYTE(v15) = 1;
              v16 = Src[1];
              if ( (unsigned __int8)RtlDoesFileExists_UEx(Src[1], v15) )
              {
                if ( a6 )
                {
                  v17 = (unsigned __int64)LOWORD(Src[0]) >> 1;
                  if ( (unsigned int)*a4 < v17 + 1 )
                  {
                    *a4 = v17 + 1;
                    appended = -1073741789;
                    v18 = -1073741789;
                  }
                  else
                  {
                    memmove(a6, v16, LOWORD(Src[0]));
                    *((_WORD *)a6 + v17) = 0;
                  }
                }
                else if ( a4 )
                {
                  *a4 = (LOWORD(Src[0]) >> 1) + 1;
                }
              }
              else
              {
                appended = -1073741809;
                v18 = -1073741809;
              }
            }
          }
        }
      }
    }
  }
LABEL_8:
  if ( v10 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
    return v18;
  }
  return (unsigned int)appended;
}
