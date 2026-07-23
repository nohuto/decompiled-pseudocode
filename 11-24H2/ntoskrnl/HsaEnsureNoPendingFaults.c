/*
 * XREFs of HsaEnsureNoPendingFaults @ 0x14056FEC8
 * Callers:
 *     HsaSetPasidAddressSpace @ 0x140570D50 (HsaSetPasidAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HsaEnsureNoPendingFaults(__int64 *a1, int a2)
{
  unsigned __int64 v2; // r11
  __int64 v3; // rdi
  __int64 v5; // rcx
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r8
  unsigned int v12; // edx

  v2 = a1[14];
  v3 = a1[12];
  v5 = *a1;
  v6 = v2 >> 4;
  v7 = *(_QWORD *)(v5 + 8240);
  v8 = (*(_QWORD *)(v5 + 8248) >> 4) & 0x7FFFLL;
  while ( 1 )
  {
    v9 = v7 >> 4;
    v10 = (v7 >> 4) & 0x7FFF;
    if ( v10 == v8 )
      break;
    v11 = v3 + 16 * v10;
    if ( *(_QWORD *)v11 >> 60 == 1
      && *(unsigned __int16 *)(v11 + 2) == a2
      && (*(_QWORD *)v11 & 0x24020000000000LL) != 0x20000000000LL )
    {
      return v11;
    }
    v12 = 0;
    if ( (v9 & 0x7FFF) + 1 != (_DWORD)v6 )
      v12 = (v9 & 0x7FFF) + 1;
    v7 = (16LL * v12) ^ ((16LL * v12) ^ v7) & 0xFFFFFFFFFFF8000FuLL;
  }
  return 0LL;
}
