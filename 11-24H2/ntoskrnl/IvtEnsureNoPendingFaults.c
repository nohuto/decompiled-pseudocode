/*
 * XREFs of IvtEnsureNoPendingFaults @ 0x14056B71C
 * Callers:
 *     IvtLegacySetPasidAddressSpace @ 0x14056E0E0 (IvtLegacySetPasidAddressSpace.c)
 *     IvtSetPasidAddressSpace @ 0x14056E740 (IvtSetPasidAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IvtEnsureNoPendingFaults(_QWORD *a1, unsigned int a2)
{
  unsigned __int64 v2; // r11
  __int64 v3; // rdi
  __int64 v4; // rcx
  unsigned __int64 v5; // r11
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // r9
  unsigned int v12; // edx

  v2 = a1[20];
  v3 = a1[18];
  v4 = a1[1];
  v5 = v2 >> 5;
  v6 = a2;
  v7 = *(_QWORD *)(v4 + 192);
  v8 = (*(_QWORD *)(v4 + 200) >> 5) & 0x3FFFLL;
  while ( 1 )
  {
    v9 = v7 >> 5;
    v10 = (v7 >> 5) & 0x3FFF;
    if ( v10 == v8 )
      break;
    v11 = v3 + 32 * v10;
    if ( (HIDWORD(*(_QWORD *)v11) & 0xFFFFF) == v6 && (*(_BYTE *)(v11 + 8) & 3) != 0 )
      return v11;
    v12 = 0;
    if ( (v9 & 0x3FFF) + 1 != (_DWORD)v5 )
      v12 = (v9 & 0x3FFF) + 1;
    v7 = (32LL * v12) ^ ((32LL * v12) ^ v7) & 0xFFFFFFFFFFF8001FuLL;
  }
  return 0LL;
}
