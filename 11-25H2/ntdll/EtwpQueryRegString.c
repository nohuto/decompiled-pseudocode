/*
 * XREFs of EtwpQueryRegString @ 0x1800838D4
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x1800824C0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpAddDebugInfoEvents @ 0x18008330C (EtwpAddDebugInfoEvents.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall EtwpQueryRegString(const wchar_t *a1, const wchar_t *a2, void *a3, unsigned int a4)
{
  size_t v6; // rax
  int v7; // ebx
  unsigned __int64 v8; // rax
  unsigned int v10; // ebx
  __int64 Heap; // rdi
  size_t v12; // rax
  __int64 v13; // r9
  _QWORD v14[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v15[2]; // [rsp+40h] [rbp-40h] BYREF
  int v16; // [rsp+50h] [rbp-30h] BYREF
  int v17; // [rsp+54h] [rbp-2Ch]
  __int64 v18; // [rsp+58h] [rbp-28h]
  _QWORD *v19; // [rsp+60h] [rbp-20h]
  int v20; // [rsp+68h] [rbp-18h]
  int v21; // [rsp+6Ch] [rbp-14h]
  __int128 v22; // [rsp+70h] [rbp-10h]
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF
  unsigned int v24; // [rsp+C8h] [rbp+48h] BYREF

  v24 = a4;
  Handle = 0LL;
  v14[0] = 0LL;
  v17 = 0;
  v14[1] = a1;
  if ( a1 )
  {
    v6 = 2 * wcslen(a1);
    if ( v6 >= 0xFFFE )
      LOWORD(v6) = -4;
    LOWORD(v14[0]) = v6;
    WORD1(v14[0]) = v6 + 2;
  }
  v17 = 0;
  v21 = 0;
  v18 = 0LL;
  v19 = v14;
  v16 = 48;
  v22 = 0LL;
  v20 = 64;
  v7 = NtOpenKey(&Handle, 131097LL, &v16);
  if ( v7 >= 0 )
  {
    v8 = 2LL * v24;
    if ( v8 > 0xFFFFFFFF || (v10 = v8 + 12, (int)v8 + 12 < (unsigned int)v8) )
    {
      NtClose(Handle);
      return 3221225621LL;
    }
    Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, v10);
    if ( Heap )
    {
      v15[0] = 0LL;
      v15[1] = a2;
      if ( a2 )
      {
        v12 = 2 * wcslen(a2);
        if ( v12 >= 0xFFFE )
          LOWORD(v12) = -4;
        LOWORD(v15[0]) = v12;
        WORD1(v15[0]) = v12 + 2;
      }
      v7 = NtQueryValueKey(Handle, v15, 2LL, Heap, v10, &v24);
      if ( v7 >= 0 )
        memmove(a3, (const void *)(Heap + 12), *(unsigned int *)(Heap + 8));
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap, v13);
    }
    else
    {
      v7 = -1073741801;
    }
    NtClose(Handle);
  }
  return (unsigned int)v7;
}
