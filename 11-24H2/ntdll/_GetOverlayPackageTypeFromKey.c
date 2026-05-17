/*
 * XREFs of _GetOverlayPackageTypeFromKey @ 0x1800B2D20
 * Callers:
 *     GetOverlayFilePathUsingChecksum @ 0x1800B25C0 (GetOverlayFilePathUsingChecksum.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     NtQueryValueKey @ 0x180161F70 (NtQueryValueKey.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall GetOverlayPackageTypeFromKey(__int64 a1, _DWORD *a2)
{
  int v3; // esi
  size_t v5; // rax
  _DWORD *Heap; // rdi
  int v7; // eax
  int v8; // ebx
  unsigned int v9; // eax
  _WORD v11[2]; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+34h] [rbp-24h]
  const wchar_t *v13; // [rsp+38h] [rbp-20h]
  int v14; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  v12 = 0;
  v13 = L"Type";
  v5 = 2 * wcslen(L"Type");
  if ( v5 >= 0xFFFE )
    LOWORD(v5) = -4;
  v14 = 0;
  v11[0] = v5;
  v11[1] = v5 + 2;
  Heap = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x10uLL);
  if ( !Heap )
    return (unsigned int)-1073741670;
  v7 = NtQueryValueKey(a1, v11, 2LL, Heap, 16, &v14);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = Heap[2];
    if ( !v9 )
    {
      v8 = -1073741811;
      goto LABEL_12;
    }
    if ( v9 <= 4 )
    {
      if ( a2 )
        memmove(a2, Heap + 3, v9);
      v3 = Heap[1];
      goto LABEL_12;
    }
    goto LABEL_20;
  }
  if ( v7 == -2147483643 || v7 == -1073741789 )
LABEL_20:
    v8 = -1073741789;
LABEL_12:
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
  if ( v8 == -1073741772 )
  {
    *a2 = 0;
    return 0;
  }
  else if ( v8 >= 0 && v3 != 4 )
  {
    return (unsigned int)-1073741788;
  }
  return (unsigned int)v8;
}
