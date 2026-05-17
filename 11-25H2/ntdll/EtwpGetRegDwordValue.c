/*
 * XREFs of EtwpGetRegDwordValue @ 0x180083A7C
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x1800824C0 (EtwpAddLogHeaderToLogFile.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     StringCopyWorkerW @ 0x18010E90C (StringCopyWorkerW.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 */

__int64 __fastcall EtwpGetRegDwordValue(__int64 a1, __int64 a2, _DWORD *a3)
{
  wchar_t *Heap; // rsi
  size_t v5; // rax
  int v6; // ebx
  __int64 v7; // r9
  size_t v8; // rdx
  __int64 v9; // rdi
  size_t *v10; // r8
  const wchar_t *v11; // r9
  size_t v13; // rax
  __int64 v14; // r9
  size_t v15; // [rsp+20h] [rbp-60h]
  _WORD v16[2]; // [rsp+30h] [rbp-50h] BYREF
  int v17; // [rsp+34h] [rbp-4Ch]
  const wchar_t *v18; // [rsp+38h] [rbp-48h]
  _WORD v19[2]; // [rsp+40h] [rbp-40h] BYREF
  int v20; // [rsp+44h] [rbp-3Ch]
  wchar_t *v21; // [rsp+48h] [rbp-38h]
  int v22; // [rsp+50h] [rbp-30h] BYREF
  int v23; // [rsp+54h] [rbp-2Ch]
  __int64 v24; // [rsp+58h] [rbp-28h]
  _WORD *v25; // [rsp+60h] [rbp-20h]
  int v26; // [rsp+68h] [rbp-18h]
  int v27; // [rsp+6Ch] [rbp-14h]
  __int128 v28; // [rsp+70h] [rbp-10h]
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF
  int v30; // [rsp+B8h] [rbp+38h] BYREF
  int v31; // [rsp+BCh] [rbp+3Ch]

  v31 = HIDWORD(a2);
  v30 = 0;
  Handle = (HANDLE)-1LL;
  v23 = 0;
  Heap = (wchar_t *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, 0x1000uLL);
  if ( !Heap )
    return 3221225495LL;
  v17 = 0;
  v18 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control";
  v5 = 2 * wcslen(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
  v22 = 48;
  v26 = 64;
  if ( v5 >= 0xFFFE )
    LOWORD(v5) = -4;
  v23 = 0;
  v27 = 0;
  v24 = 0LL;
  v16[0] = v5;
  v16[1] = v5 + 2;
  v25 = v16;
  v28 = 0LL;
  v6 = NtOpenKey(&Handle, 131097LL, &v22);
  if ( v6 >= 0 )
  {
    v9 = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, 0x10uLL);
    if ( v9 )
    {
      StringCopyWorkerW(Heap, v8, v10, v11, v15);
      v20 = 0;
      v21 = Heap;
      v13 = 2 * wcslen(Heap);
      if ( v13 >= 0xFFFE )
        LOWORD(v13) = -4;
      v19[0] = v13;
      v19[1] = v13 + 2;
      v6 = NtQueryValueKey(Handle, v19, 2LL, v9, 16, &v30);
      if ( v6 >= 0 )
        *a3 = *(_DWORD *)(v9 + 12);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9, v14);
    }
    else
    {
      v6 = -1073741801;
    }
    NtClose(Handle);
  }
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap, v7);
  return (unsigned int)v6;
}
