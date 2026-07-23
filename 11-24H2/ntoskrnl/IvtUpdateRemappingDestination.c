/*
 * XREFs of IvtUpdateRemappingDestination @ 0x14056EA20
 * Callers:
 *     <none>
 * Callees:
 *     IvtInvalidateRemappingTableEntries @ 0x140374EC0 (IvtInvalidateRemappingTableEntries.c)
 *     IvtUpdateSingleTargetExtendedDestination @ 0x14056EB4C (IvtUpdateSingleTargetExtendedDestination.c)
 */

__int64 __fastcall IvtUpdateRemappingDestination(__int64 a1, char a2, int a3, int a4, int a5)
{
  unsigned int i; // ebp
  unsigned __int64 *v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  bool v10; // dl
  unsigned int updated; // r12d
  int v12; // r15d
  unsigned int v13; // edi
  int v14; // r14d
  char v16; // [rsp+68h] [rbp+10h]

  v16 = a2;
  for ( i = 0; i < *(_DWORD *)(a1 + 304); ++i )
  {
    v7 = (unsigned __int64 *)(*(_QWORD *)(a1 + 288) + 16LL * i);
    if ( (*v7 & 1) != 0 && (!a2 || (*v7 & 0x100) != 0) )
    {
      v8 = *v7 & 4;
      v9 = HIDWORD(*v7);
      v10 = v8 != 0;
      if ( v8 )
      {
        v12 = (unsigned __int16)v9;
        v13 = v9 & 0xFFFF0000;
        updated = 0;
        v14 = 1;
        while ( v12 )
        {
          if ( (v14 & v12) != 0 )
          {
            v13 = v14 | v13 & 0xFFFF0000;
            v12 &= ~v14;
            updated |= IvtUpdateSingleTargetExtendedDestination(v13, v10, a3, a4, a5);
          }
          v14 *= 2;
        }
      }
      else
      {
        updated = IvtUpdateSingleTargetExtendedDestination(v9, v10, a3, a4, a5);
      }
      if ( HIDWORD(*v7) != updated )
        *v7 = ((unsigned __int64)updated << 32) | (unsigned int)*v7;
      a2 = v16;
    }
  }
  return IvtInvalidateRemappingTableEntries(a1, 0LL);
}
