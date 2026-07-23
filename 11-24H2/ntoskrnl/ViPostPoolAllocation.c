/*
 * XREFs of ViPostPoolAllocation @ 0x140B938F0
 * Callers:
 *     VfHandlePoolAlloc @ 0x140BAAAA0 (VfHandlePoolAlloc.c)
 * Callees:
 *     ExpSizeHeapPool @ 0x140658B18 (ExpSizeHeapPool.c)
 */

unsigned __int64 __fastcall ViPostPoolAllocation(unsigned __int64 *a1, char a2)
{
  unsigned __int64 v2; // rdi
  __int64 v5; // rbx
  unsigned __int64 v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int32 v10; // eax
  unsigned __int64 v11; // rax
  unsigned int v12; // eax
  unsigned __int64 v13; // rax
  unsigned __int32 v14; // eax
  unsigned __int64 v15; // rdx
  unsigned int v16; // ecx
  unsigned __int64 result; // rax

  v2 = *a1;
  v5 = *(_QWORD *)(((unsigned __int64)a1 & 0xFFFFFFFFFFFFF000uLL) + 8);
  if ( (*a1 & 1) != 0 )
  {
    v2 &= ~1uLL;
    *a1 = v2;
    v6 = a1[2];
    *(_DWORD *)(v2 & 0xFFFFFFFFFFFFF000uLL) |= 0x4000u;
    v7 = (_QWORD *)((v2 & 0xFFFFFFFFFFFFF000uLL) + 16);
  }
  else
  {
    v8 = ExpSizeHeapPool(v2);
    v6 = v8;
    if ( a1[2] <= 0xFE0 )
      v6 = v8 - 16;
    v7 = (_QWORD *)(v6 + v2 - 8);
  }
  *a1 = v2;
  a1[2] = v6;
  if ( (a2 & 1) != 0 )
  {
    v9 = v6 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 128), v6);
    if ( v9 > *(_QWORD *)(v5 + 144) )
      *(_QWORD *)(v5 + 144) = v9;
    v10 = _InterlockedIncrement((volatile signed __int32 *)(v5 + 112));
    if ( v10 > *(_DWORD *)(v5 + 120) )
      *(_DWORD *)(v5 + 120) = v10;
    v11 = v6 + _InterlockedExchangeAdd64(&qword_140F04838, v6);
    if ( v11 > qword_140F04848 )
      qword_140F04848 = v11;
    v12 = _InterlockedIncrement(&dword_140F04824);
    if ( v12 > dword_140F0482C )
      dword_140F0482C = v12;
  }
  else
  {
    v13 = v6 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 136), v6);
    if ( v13 > *(_QWORD *)(v5 + 152) )
      *(_QWORD *)(v5 + 152) = v13;
    v14 = _InterlockedIncrement((volatile signed __int32 *)(v5 + 116));
    if ( v14 > *(_DWORD *)(v5 + 124) )
      *(_DWORD *)(v5 + 124) = v14;
    v15 = v6 + _InterlockedExchangeAdd64(&qword_140F04840, v6);
    if ( v15 > qword_140F04850 )
      qword_140F04850 = v15;
    v16 = _InterlockedIncrement(&dword_140F04828);
    if ( v16 > dword_140F04830 )
      dword_140F04830 = v16;
  }
  result = v2;
  *v7 = a1;
  return result;
}
