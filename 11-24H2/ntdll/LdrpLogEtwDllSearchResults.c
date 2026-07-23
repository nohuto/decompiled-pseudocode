/*
 * XREFs of LdrpLogEtwDllSearchResults @ 0x180092B74
 * Callers:
 *     LdrpMapDllSearchPath @ 0x180091810 (LdrpMapDllSearchPath.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlFreeAnsiString @ 0x180081430 (RtlFreeAnsiString.c)
 *     LdrpEventAddUnicodeString @ 0x1800D4D60 (LdrpEventAddUnicodeString.c)
 *     LdrpMakeUnicodeStringFromPathElement @ 0x18015ED14 (LdrpMakeUnicodeStringFromPathElement.c)
 *     NtTraceEvent @ 0x180160C00 (NtTraceEvent.c)
 */

void __fastcall LdrpLogEtwDllSearchResults(int a1, __int64 a2)
{
  void *ProcessHeap; // rcx
  char *Heap; // rax
  void *v6; // rbx
  unsigned int v7; // r14d
  __int64 v8; // rsi
  char *v9; // rcx
  int UnicodeStringFromPathElement; // eax
  __int64 v11; // rcx
  int v12; // r12d
  int v13; // r13d
  char *v14; // rax
  char *v15; // r14
  char *v16; // rbx
  unsigned int v17; // edi
  unsigned int v18; // r15d
  char *v19; // rbx
  unsigned int v20; // edi
  unsigned int v21; // r15d
  char *v22; // rbx
  unsigned int v23; // r15d
  ULONG v24; // r15d
  _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-40h] BYREF
  _UNICODE_STRING v26; // [rsp+30h] [rbp-30h] BYREF
  _UNICODE_STRING v27; // [rsp+40h] [rbp-20h] BYREF
  _UNICODE_STRING v28; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v29; // [rsp+B0h] [rbp+50h] BYREF
  int v30; // [rsp+B8h] [rbp+58h]

  v29 = 0;
  v26 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  UnicodeString = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  Heap = (char *)RtlAllocateHeap(ProcessHeap, 0, 0x248uLL);
  v6 = Heap;
  if ( Heap )
  {
    *((_WORD *)Heap + 3) = 5332;
    *((_DWORD *)Heap + 8) = *(_DWORD *)(a2 + 32);
    *((_DWORD *)Heap + 9) = *(_DWORD *)(*(_QWORD *)(a2 + 16) + 24LL);
    *((_DWORD *)Heap + 10) = a1;
    *((_DWORD *)Heap + 11) = *(_DWORD *)(a2 + 36);
    LdrpEventAddUnicodeString(a2, Heap + 48, 532LL, &v29);
    v7 = v29;
    v8 = 2147353476LL;
    v9 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 554 : (char *)2147353476;
    NtTraceEvent((HANDLE)(unsigned __int8)*v9, 0x402u, v7 + 16, v6);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    if ( (a1 & 0x100) != 0 && (int)LdrpMakeUnicodeStringFromPathElement(*(_QWORD *)(a2 + 16), 4LL, &UnicodeString) >= 0 )
    {
      UnicodeStringFromPathElement = LdrpMakeUnicodeStringFromPathElement(*(_QWORD *)(a2 + 16), 1LL, &v26);
      v11 = *(_QWORD *)(a2 + 16);
      v30 = UnicodeStringFromPathElement;
      v12 = LdrpMakeUnicodeStringFromPathElement(v11, 0LL, &v28);
      v13 = LdrpMakeUnicodeStringFromPathElement(*(_QWORD *)(a2 + 16), 5LL, &v27);
      v14 = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xCA0uLL);
      v15 = v14;
      if ( v14 )
      {
        v29 = 0;
        v16 = v14 + 36;
        *((_WORD *)v14 + 3) = 5333;
        *((_DWORD *)v14 + 8) = a1;
        LdrpEventAddUnicodeString(&UnicodeString, v14 + 36, 3192LL, &v29);
        v17 = 3192 - v29;
        v18 = v29 + 4;
        v19 = &v16[2 * ((unsigned __int64)v29 >> 1)];
        LdrpEventAddUnicodeString(&v26, v19, 3192 - v29, &v29);
        v20 = v17 - v29;
        v21 = v29 + v18;
        v22 = &v19[2 * ((unsigned __int64)v29 >> 1)];
        LdrpEventAddUnicodeString(&v28, v22, v20, &v29);
        v23 = v29 + v21;
        LdrpEventAddUnicodeString(&v27, &v22[2 * ((unsigned __int64)v29 >> 1)], v20 - v29, &v29);
        v24 = v29 + v23;
        if ( RtlGetCurrentServiceSessionId() )
          v8 = (__int64)NtCurrentPeb()->SharedData + 554;
        NtTraceEvent((HANDLE)*(unsigned __int8 *)v8, 0x402u, v24, v15);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
      }
      RtlFreeAnsiString(&UnicodeString);
      if ( v30 >= 0 )
        RtlFreeAnsiString(&v26);
      if ( v13 >= 0 )
        RtlFreeAnsiString(&v27);
      if ( v12 >= 0 )
        RtlFreeAnsiString(&v28);
    }
  }
}
