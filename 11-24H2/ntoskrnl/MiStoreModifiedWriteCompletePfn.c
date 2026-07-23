/*
 * XREFs of MiStoreModifiedWriteCompletePfn @ 0x140215DB8
 * Callers:
 *     MiWriteComplete @ 0x1402ED400 (MiWriteComplete.c)
 * Callees:
 *     MiSetPfnModified @ 0x140215EC0 (MiSetPfnModified.c)
 */

__int64 __fastcall MiStoreModifiedWriteCompletePfn(__int64 a1, int *a2)
{
  __int64 result; // rax
  __int64 v4; // r9
  int v5; // r8d
  int v6; // r8d
  int v7; // [rsp+30h] [rbp+8h]

  result = (*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL;
  v4 = *((_QWORD *)qword_140E300C8 + result);
  v5 = *a2;
  if ( (*a2 & 2) == 0 )
  {
    result = *(_QWORD *)(a1 + 24);
    if ( (result & 0x4000000000000000LL) == 0 )
    {
      if ( (unsigned __int16)*(_DWORD *)(a1 + 32) > 1u )
      {
        result = MiSetPfnModified(a1, 1LL);
        *a2 |= 2u;
      }
      else
      {
        v7 = *(_DWORD *)(a1 + 32);
        BYTE2(v7) = BYTE2(v7) & 0xF8 | 2;
        *(_DWORD *)(a1 + 32) = v7;
        result = *(unsigned int *)(v4 + 1708);
        if ( (result & 1) != 0 )
          v6 = v5 | 4;
        else
          v6 = v5 | 8;
        *a2 = v6;
      }
    }
  }
  return result;
}
