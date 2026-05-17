/*
 * XREFs of EtwpGetRegDwordValue @ 0x1800B532C
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x1800B3D70 (EtwpAddLogHeaderToLogFile.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     StringCopyWorkerW @ 0x18010C78C (StringCopyWorkerW.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenKey @ 0x180161ED0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180161F70 (NtQueryValueKey.c)
 */

__int64 __fastcall EtwpGetRegDwordValue(__int64 a1, __int64 a2, _DWORD *a3)
{
  wchar_t *Heap; // rsi
  size_t v5; // rax
  int v6; // ebx
  size_t v7; // rdx
  unsigned __int64 v8; // rdi
  size_t *v9; // r8
  const wchar_t *v10; // r9
  size_t v12; // rax
  size_t v13; // [rsp+20h] [rbp-60h]
  _WORD v14[2]; // [rsp+30h] [rbp-50h] BYREF
  int v15; // [rsp+34h] [rbp-4Ch]
  const wchar_t *v16; // [rsp+38h] [rbp-48h]
  _WORD v17[2]; // [rsp+40h] [rbp-40h] BYREF
  int v18; // [rsp+44h] [rbp-3Ch]
  wchar_t *v19; // [rsp+48h] [rbp-38h]
  int v20; // [rsp+50h] [rbp-30h] BYREF
  int v21; // [rsp+54h] [rbp-2Ch]
  __int64 v22; // [rsp+58h] [rbp-28h]
  _WORD *v23; // [rsp+60h] [rbp-20h]
  int v24; // [rsp+68h] [rbp-18h]
  int v25; // [rsp+6Ch] [rbp-14h]
  __int128 v26; // [rsp+70h] [rbp-10h]
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF
  int v28; // [rsp+B8h] [rbp+38h] BYREF
  int v29; // [rsp+BCh] [rbp+3Ch]

  v29 = HIDWORD(a2);
  v28 = 0;
  Handle = (HANDLE)-1LL;
  v21 = 0;
  Heap = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x1000uLL);
  if ( !Heap )
    return 3221225495LL;
  v15 = 0;
  v16 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control";
  v5 = 2 * wcslen(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
  v20 = 48;
  v24 = 64;
  if ( v5 >= 0xFFFE )
    LOWORD(v5) = -4;
  v21 = 0;
  v25 = 0;
  v22 = 0LL;
  v14[0] = v5;
  v14[1] = v5 + 2;
  v23 = v14;
  v26 = 0LL;
  v6 = NtOpenKey(&Handle, 131097LL, &v20);
  if ( v6 >= 0 )
  {
    v8 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x10uLL);
    if ( v8 )
    {
      StringCopyWorkerW(Heap, v7, v9, v10, v13);
      v18 = 0;
      v19 = Heap;
      v12 = 2 * wcslen(Heap);
      if ( v12 >= 0xFFFE )
        LOWORD(v12) = -4;
      v17[0] = v12;
      v17[1] = v12 + 2;
      v6 = NtQueryValueKey(Handle, v17, 2LL, v8, 16, &v28);
      if ( v6 >= 0 )
        *a3 = *(_DWORD *)(v8 + 12);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
    }
    else
    {
      v6 = -1073741801;
    }
    NtClose(Handle);
  }
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
  return (unsigned int)v6;
}
