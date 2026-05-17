/*
 * XREFs of EtwpQueryRegString @ 0x1800B5184
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x1800B3D70 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpAddDebugInfoEvents @ 0x1800B4BBC (EtwpAddDebugInfoEvents.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenKey @ 0x180161ED0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180161F70 (NtQueryValueKey.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall EtwpQueryRegString(const wchar_t *a1, const wchar_t *a2, void *a3, unsigned int a4)
{
  size_t v6; // rax
  int v7; // ebx
  unsigned __int64 v8; // rax
  unsigned int v10; // ebx
  unsigned __int64 Heap; // rdi
  size_t v12; // rax
  _QWORD v13[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-40h] BYREF
  int v15; // [rsp+50h] [rbp-30h] BYREF
  int v16; // [rsp+54h] [rbp-2Ch]
  __int64 v17; // [rsp+58h] [rbp-28h]
  _QWORD *v18; // [rsp+60h] [rbp-20h]
  int v19; // [rsp+68h] [rbp-18h]
  int v20; // [rsp+6Ch] [rbp-14h]
  __int128 v21; // [rsp+70h] [rbp-10h]
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF
  unsigned int v23; // [rsp+C8h] [rbp+48h] BYREF

  v23 = a4;
  Handle = 0LL;
  v13[0] = 0LL;
  v16 = 0;
  v13[1] = a1;
  if ( a1 )
  {
    v6 = 2 * wcslen(a1);
    if ( v6 >= 0xFFFE )
      LOWORD(v6) = -4;
    LOWORD(v13[0]) = v6;
    WORD1(v13[0]) = v6 + 2;
  }
  v16 = 0;
  v20 = 0;
  v17 = 0LL;
  v18 = v13;
  v15 = 48;
  v21 = 0LL;
  v19 = 64;
  v7 = NtOpenKey(&Handle, 131097LL, &v15);
  if ( v7 >= 0 )
  {
    v8 = 2LL * v23;
    if ( v8 > 0xFFFFFFFF || (v10 = v8 + 12, (int)v8 + 12 < (unsigned int)v8) )
    {
      NtClose(Handle);
      return 3221225621LL;
    }
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v10);
    if ( Heap )
    {
      v14[0] = 0LL;
      v14[1] = a2;
      if ( a2 )
      {
        v12 = 2 * wcslen(a2);
        if ( v12 >= 0xFFFE )
          LOWORD(v12) = -4;
        LOWORD(v14[0]) = v12;
        WORD1(v14[0]) = v12 + 2;
      }
      v7 = NtQueryValueKey(Handle, v14, 2LL, Heap, v10, &v23);
      if ( v7 >= 0 )
        memmove(a3, (const void *)(Heap + 12), *(unsigned int *)(Heap + 8));
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
    }
    else
    {
      v7 = -1073741801;
    }
    NtClose(Handle);
  }
  return (unsigned int)v7;
}
