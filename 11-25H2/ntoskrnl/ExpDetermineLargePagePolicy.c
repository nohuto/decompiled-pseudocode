/*
 * XREFs of ExpDetermineLargePagePolicy @ 0x14064E244
 * Callers:
 *     ExInitializePoolHeapManagement @ 0x14064DFE0 (ExInitializePoolHeapManagement.c)
 * Callees:
 *     MmGetNumberOfPhysicalPages @ 0x140A0A990 (MmGetNumberOfPhysicalPages.c)
 */

__int64 __fastcall ExpDetermineLargePagePolicy(__int64 a1)
{
  unsigned __int64 NumberOfPhysicalPages; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8
  __int64 result; // rax

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_BYTE *)(a1 + 16) = 80;
  NumberOfPhysicalPages = MmGetNumberOfPhysicalPages(0LL);
  v3 = NumberOfPhysicalPages >> 9;
  v4 = NumberOfPhysicalPages >> 8;
  *(_QWORD *)a1 = NumberOfPhysicalPages >> 9;
  if ( NumberOfPhysicalPages >> 8 >= 0x1000 )
  {
    if ( v4 < 0x4000 )
      v3 = ((v3 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64)
         + ((unsigned __int64)(v3 - ((v3 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64)) >> 1);
    v5 = v3 >> 4;
  }
  else
  {
    v5 = NumberOfPhysicalPages >> 14;
  }
  *(_QWORD *)a1 = v5;
  result = a1;
  *(_QWORD *)(a1 + 8) = -1LL;
  if ( v4 > 0x200 )
  {
    if ( v4 < 0x800 )
      *(_QWORD *)(a1 + 8) = 2LL;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  return result;
}
