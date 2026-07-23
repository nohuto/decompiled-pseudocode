/*
 * XREFs of RtlpHpLfhSubsegmentWalk @ 0x1800D0870
 * Callers:
 *     RtlpHpSegWalk @ 0x18002B478 (RtlpHpSegWalk.c)
 * Callees:
 *     RtlpHpLfhSubsegmentSizeBlockInternal @ 0x1800D0A40 (RtlpHpLfhSubsegmentSizeBlockInternal.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180164700 (_alloca_probe.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

unsigned __int64 __fastcall RtlpHpLfhSubsegmentWalk(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _DWORD *a6,
        __int64 a7)
{
  unsigned int v7; // r12d
  unsigned __int64 v8; // rdi
  unsigned int v10; // ebx
  unsigned int v11; // esi
  size_t v12; // r8
  __int64 v13; // rax
  void *v14; // rsp
  _DWORD *v15; // r15
  unsigned __int16 v16; // r10
  unsigned int v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int v21; // eax
  unsigned int v22; // r8d
  __int64 v23; // rdx
  _DWORD v24[2]; // [rsp+20h] [rbp+0h] BYREF

  v7 = *(unsigned __int16 *)(a2 + 34);
  v8 = 0LL;
  v10 = qword_1801CCEC8 ^ *(_DWORD *)(a2 + 40) ^ (a2 >> 12);
  v24[0] = v10;
  if ( a3 == a2 )
  {
    v11 = 0;
  }
  else
  {
    v22 = a3 - (a2 + HIWORD(v24[0]));
    v23 = a1 + ((unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6);
    if ( v22 != (unsigned __int16)v10 * ((v22 * (unsigned __int64)*(unsigned int *)(v23 + 72)) >> 32) )
      return v8;
    v11 = ((v22 * (unsigned __int64)*(unsigned int *)(v23 + 72)) >> 32) + 1;
    if ( v11 >= v7 )
      return v8;
  }
  if ( *(_WORD *)(a2 + 18) )
  {
    v12 = 8 * (unsigned int)*(unsigned __int8 *)(a2 + 24) - 64;
    v13 = v12 + 15;
    if ( v12 + 15 <= v12 )
      v13 = 0xFFFFFFFFFFFFFF0LL;
    v14 = alloca(v13 & 0xFFFFFFFFFFFFFFF0uLL);
    v15 = v24;
    memmove(v24, (const void *)(a2 + 64), v12);
    v16 = *(_WORD *)(a2 + 16);
    while ( v16 )
    {
      v17 = v16 - 1;
      v18 = __ROL8__(0xFFFFFFFEFFFFFFFEuLL, (v16 - 1) & 0x1F);
      v16 = *(_WORD *)((unsigned __int16)v10 * v17 + a2 + ((unsigned __int64)v10 >> 16));
      *(_QWORD *)&v24[2 * ((unsigned __int64)v17 >> 5)] &= v18;
    }
  }
  else
  {
    v15 = (_DWORD *)(a2 + 64);
  }
  while ( v11 < v7 )
  {
    v19 = (unsigned int)v15[2 * ((unsigned __int64)v11 >> 5)];
    if ( _bittest64(&v19, v11 & 0x1F) )
    {
      v8 = a2 + HIWORD(v24[0]) + v11 * (unsigned __int16)v10;
      v21 = RtlpHpLfhSubsegmentSizeBlockInternal(a2, v8, v11, a7, v24[0]);
      *a5 = v21;
      *a6 = (unsigned __int16)v10 - v21;
      return v8;
    }
    ++v11;
  }
  return v8;
}
