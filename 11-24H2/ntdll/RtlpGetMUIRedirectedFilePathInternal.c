/*
 * XREFs of RtlpGetMUIRedirectedFilePathInternal @ 0x180092FD0
 * Callers:
 *     RtlpGetMUIRedirectedFilePath @ 0x1800946E8 (RtlpGetMUIRedirectedFilePath.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlAppendUnicodeToString @ 0x18007F450 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x180092390 (RtlAppendUnicodeStringToString.c)
 *     RtlDoesFileExists_UEx @ 0x1800935F0 (RtlDoesFileExists_UEx.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall RtlpGetMUIRedirectedFilePathInternal(
        PCUNICODE_STRING Source,
        PCWSTR a2,
        PCWSTR a3,
        _DWORD *a4,
        char a5,
        void *a6)
{
  wchar_t *v10; // rdi
  unsigned __int64 v11; // rax
  NTSTATUS appended; // ebx
  wchar_t *Heap; // rax
  __int64 v15; // rdx
  wchar_t *Buffer; // rsi
  unsigned __int64 v17; // r15
  unsigned int v18; // [rsp+20h] [rbp-48h]
  _UNICODE_STRING Destination; // [rsp+28h] [rbp-40h] BYREF

  v10 = 0LL;
  if ( !a2 || !a3 )
  {
    appended = -1073741811;
    goto LABEL_7;
  }
  v11 = -1LL;
  do
    ++v11;
  while ( a2[v11] );
  if ( v11 >= 0x104 )
  {
    appended = -1073741306;
LABEL_7:
    v18 = appended;
    goto LABEL_8;
  }
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
  v10 = Heap;
  if ( !Heap )
  {
    appended = -1073741801;
    goto LABEL_7;
  }
  *(_QWORD *)&Destination.Length = 34078720LL;
  Destination.Buffer = Heap;
  appended = RtlAppendUnicodeToString(&Destination, a2);
  v18 = appended;
  if ( appended >= 0 )
  {
    appended = RtlAppendUnicodeToString(&Destination, L"\\");
    v18 = appended;
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeStringToString(&Destination, Source);
      v18 = appended;
      if ( appended >= 0 )
      {
        appended = RtlAppendUnicodeToString(&Destination, L"\\");
        v18 = appended;
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString(&Destination, a3);
          v18 = appended;
          if ( appended >= 0 )
          {
            if ( !a5 || (appended = RtlAppendUnicodeToString(&Destination, L".mui"), v18 = appended, appended >= 0) )
            {
              LOBYTE(v15) = 1;
              Buffer = Destination.Buffer;
              if ( (unsigned __int8)RtlDoesFileExists_UEx(Destination.Buffer, v15) )
              {
                if ( a6 )
                {
                  v17 = (unsigned __int64)Destination.Length >> 1;
                  if ( (unsigned int)*a4 < v17 + 1 )
                  {
                    *a4 = v17 + 1;
                    appended = -1073741789;
                    v18 = -1073741789;
                  }
                  else
                  {
                    memmove(a6, Buffer, Destination.Length);
                    *((_WORD *)a6 + v17) = 0;
                  }
                }
                else if ( a4 )
                {
                  *a4 = (Destination.Length >> 1) + 1;
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
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    return v18;
  }
  return (unsigned int)appended;
}
