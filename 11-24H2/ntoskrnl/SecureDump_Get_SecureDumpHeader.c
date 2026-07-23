/*
 * XREFs of SecureDump_Get_SecureDumpHeader @ 0x14059EAA0
 * Callers:
 *     IopLiveDumpWriteDumpFile @ 0x1404957D4 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14059B7D0 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall SecureDump_Get_SecureDumpHeader(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 v5; // rdi
  int v6; // eax
  unsigned int v7; // edx
  int v8; // eax

  if ( !byte_140E661D4 )
    return 3221225485LL;
  if ( a3 < dword_140E66220 )
    return 3221225485LL;
  v5 = a3;
  if ( a3 < pcbResult + (unsigned __int64)*(&dwFlags + 1) + 4184 )
    return 3221225485LL;
  memset_0(a2, 0, a3);
  a2[2] = 1;
  a2[3] = dword_140E66220;
  *a2 = *(_DWORD *)a1;
  a2[1] = *(_DWORD *)(a1 + 4);
  a2[12] = *(_DWORD *)(a1 + 48);
  a2[998] = *(_DWORD *)(a1 + 3992);
  *((_QWORD *)a2 + 500) = (v5 + *(_QWORD *)(a1 + 4000) + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
  a2[1044] = *(_DWORD *)(a1 + 4176) | 0x100;
  v6 = *(_DWORD *)(a1 + 56);
  *((_QWORD *)a2 + 8) = 0LL;
  *((_QWORD *)a2 + 9) = 0LL;
  *((_QWORD *)a2 + 10) = 0LL;
  *((_QWORD *)a2 + 11) = 0LL;
  a2[14] = v6;
  a2[5] = 4184;
  a2[4] = pcbResult;
  memmove(a2 + 1046, qword_140E661F8, pcbResult);
  v7 = a2[4] + a2[5];
  a2[10] = pbInput;
  v8 = dword_140E66218;
  a2[7] = v7;
  a2[8] = v8;
  a2[6] = *(&dwFlags + 1);
  memmove((char *)a2 + v7, *((const void **)&dwFlags + 1), *(&dwFlags + 1));
  a2[9] = dword_140E6621C;
  return 0LL;
}
