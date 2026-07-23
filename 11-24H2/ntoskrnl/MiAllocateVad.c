/*
 * XREFs of MiAllocateVad @ 0x1408DC6F8
 * Callers:
 *     MiFreeVadRange @ 0x14026731C (MiFreeVadRange.c)
 *     MiCreatePlaceholderStorage @ 0x1408DC630 (MiCreatePlaceholderStorage.c)
 *     MiAllocateProcessVads @ 0x14091B168 (MiAllocateProcessVads.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiUpdateVadStartVpn @ 0x140441BA4 (MiUpdateVadStartVpn.c)
 *     MiAddSecureEntry @ 0x1408DC0A0 (MiAddSecureEntry.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateVad(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  __int64 Pool; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // r8d
  unsigned int v11; // r8d
  unsigned __int64 v12; // rdx

  Pool = MiAllocatePool(0x40uLL, 0x40uLL, 1399087446);
  v7 = Pool;
  if ( Pool )
  {
    *(_QWORD *)(Pool + 16) = -2LL;
    MiUpdateVadStartVpn(Pool, a1 >> 12);
    v10 = *(_DWORD *)(v9 + 48);
    *(_QWORD *)(v9 + 40) = 0LL;
    v11 = v10 & 0xFFFFF0FF;
    *(_DWORD *)(v9 + 28) = a2 >> 12;
    *(_BYTE *)(v9 + 33) = a2 >> 44;
    *(_DWORD *)(v8 + 48) = v11 | 0x80;
    if ( (a3 & 1) != 0 )
    {
      v12 = ((unsigned int)(a2 >> 12) | ((unsigned __int64)(unsigned __int8)(a2 >> 44) << 32))
          - (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32))
          + 1;
      *(_DWORD *)(v7 + 48) = v11 | 0x2000080;
    }
    else if ( (a3 & 2) != 0 )
    {
      v12 = 0x7FFFFFFFDLL;
      *(_DWORD *)(v8 + 48) = v11 & 0xFFFFF07F | 0xC00;
    }
    else
    {
      v12 = 0x7FFFFFFFFLL;
    }
    *(_DWORD *)(v7 + 52) = v12;
    *(_BYTE *)(v7 + 34) = BYTE4(v12);
    *(_DWORD *)(v7 + 48) |= 0x200000u;
    if ( (a3 & 2) != 0 || MiAddSecureEntry(v7, a1, a2, -2147483647, 0) )
      return v7;
    ExFreePoolWithTag((PVOID)v7, 0);
  }
  return 0LL;
}
