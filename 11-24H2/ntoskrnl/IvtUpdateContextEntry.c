/*
 * XREFs of IvtUpdateContextEntry @ 0x1404C1800
 * Callers:
 *     IvtUpdateTranslationStructures @ 0x1404F59EC (IvtUpdateTranslationStructures.c)
 *     IvtLegacyUpdateTranslationStructures @ 0x14056E58C (IvtLegacyUpdateTranslationStructures.c)
 * Callees:
 *     IvtGetBlockedDomain @ 0x1404C1988 (IvtGetBlockedDomain.c)
 *     IvtInvalidateContextEntry @ 0x14056C9C4 (IvtInvalidateContextEntry.c)
 */

__int64 __fastcall IvtUpdateContextEntry(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r10
  unsigned int v7; // edx
  _QWORD *v9; // rax
  char v10; // bp
  int v11; // r15d
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rdx
  int BlockedDomain; // eax
  int v16; // ebx
  __int64 v17; // rcx
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  unsigned int v20; // r8d
  __int64 result; // rax
  __int64 v22; // rcx
  int v23; // r9d
  __int64 v24; // [rsp+60h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 32);
  v7 = *a2;
  if ( *(_BYTE *)(a1 + 320) )
    v9 = (_QWORD *)(v5 + 8 * (2 * (v7 >> 8) + (unsigned __int64)((v7 & 0xF8) >= 0x80)));
  else
    v9 = (_QWORD *)(v5 + 16LL * (v7 >> 8));
  v10 = 0;
  v11 = 0x10000;
  v12 = *v9 + 16LL * (unsigned __int8)v7;
  if ( (*(_OWORD *)v12 & 1) != 0 && !a5 )
  {
    v10 = 1;
    v11 = (unsigned __int16)((unsigned int)*(_QWORD *)(v12 + 8) >> 8);
  }
  v13 = *(_DWORD *)(a3 + 4);
  v14 = 0LL;
  v24 = 0LL;
  if ( v13 == 1 )
  {
    BlockedDomain = IvtGetBlockedDomain(a1, a2, &v24);
    v14 = v24;
    v16 = BlockedDomain;
    v17 = 0LL;
  }
  else
  {
    v16 = *(_DWORD *)(a3 + 48);
    if ( v13 )
    {
      v14 = *(_QWORD *)(a3 + 40) >> 12;
      v24 = v14;
      v17 = 0LL;
    }
    else
    {
      v17 = 2LL;
    }
  }
  v18 = ((unsigned __int64)(unsigned __int16)v16 << 8) | *(_DWORD *)(a1 + 248) & 7;
  v19 = (4 * (v17 | (v14 << 10))) | 1;
  v20 = 1 << a2[1];
  result = (unsigned int)(1 << (3 - *((_BYTE *)a2 + 4)));
  if ( v20 )
  {
    result *= 16LL;
    v22 = v20;
    do
    {
      *(_QWORD *)(v12 + 8) = v18;
      *(_QWORD *)v12 = v19;
      v12 += result;
      --v22;
    }
    while ( v22 );
  }
  if ( v10 )
  {
    IvtInvalidateContextEntry(a1, (_DWORD)a2, v11, v18, 1);
    return IvtInvalidateContextEntry(a1, (_DWORD)a2, v16, v23, 1);
  }
  return result;
}
