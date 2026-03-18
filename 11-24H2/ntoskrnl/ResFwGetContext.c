/*
 * XREFs of ResFwGetContext @ 0x140BB19D8
 * Callers:
 *     BgGetContext @ 0x140BB06A8 (BgGetContext.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14028F9F0 (MmMapLockedPagesSpecifyCache.c)
 *     MmAllocatePagesForMdlEx @ 0x140411F30 (MmAllocatePagesForMdlEx.c)
 */

__int64 __fastcall ResFwGetContext(__int64 *a1)
{
  char *v1; // rbx
  __int64 result; // rax
  char v4; // al
  int v5; // ecx
  unsigned int v6; // r14d
  unsigned int v7; // ebp
  PMDL PagesForMdl; // rax
  PMDL v9; // rdi
  char *MappedSystemVa; // rdx
  __int64 v11; // r8

  v1 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  v4 = dword_140EF0050;
  *a1 = 0LL;
  if ( (v4 & 1) == 0 )
    return 3221225473LL;
  v5 = dword_140EF006C;
  if ( dword_140EF0070 >= (unsigned int)dword_140EF006C )
    v5 = dword_140EF0070;
  v6 = (dword_140EF007C + v5 + dword_140EF0078 + 20479) & 0xFFFFF000;
  v7 = ((v6 >> 3) + 4095) & 0xFFFFF000;
  PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, v6 + v7, MmCached, 5u);
  v9 = PagesForMdl;
  if ( PagesForMdl )
  {
    if ( (PagesForMdl->MdlFlags & 5) != 0 )
      MappedSystemVa = (char *)PagesForMdl->MappedSystemVa;
    else
      MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u);
  }
  else
  {
    MappedSystemVa = 0LL;
  }
  v11 = qword_140EF0080;
  *(_QWORD *)(qword_140EF0080 + 8) = v9;
  *(_QWORD *)(v11 + 16) = MappedSystemVa;
  if ( MappedSystemVa )
    v1 = &MappedSystemVa[v7];
  *(_DWORD *)(v11 + 24) = MappedSystemVa != 0LL ? v6 + v7 : 0;
  *(_DWORD *)(v11 + 248) = MappedSystemVa != 0LL ? v6 : 0;
  *(_QWORD *)(v11 + 240) = v1;
  BgpAnimationRegionSave = qword_140EF0110;
  BgpTextRegionSave = qword_140EF0118;
  result = 0LL;
  *a1 = v11;
  return result;
}
