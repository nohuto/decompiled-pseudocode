/*
 * XREFs of ResFwGetContext @ 0x140BA19D8
 * Callers:
 *     BgGetContext @ 0x140BA06A8 (BgGetContext.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x140329CF0 (MmMapLockedPagesSpecifyCache.c)
 *     MmAllocatePagesForMdlEx @ 0x1404154A0 (MmAllocatePagesForMdlEx.c)
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
  v4 = dword_140EEFD90;
  *a1 = 0LL;
  if ( (v4 & 1) == 0 )
    return 3221225473LL;
  v5 = dword_140EEFDAC;
  if ( dword_140EEFDB0 >= (unsigned int)dword_140EEFDAC )
    v5 = dword_140EEFDB0;
  v6 = (dword_140EEFDBC + v5 + dword_140EEFDB8 + 20479) & 0xFFFFF000;
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
  v11 = qword_140EEFDC0;
  *(_QWORD *)(qword_140EEFDC0 + 8) = v9;
  *(_QWORD *)(v11 + 16) = MappedSystemVa;
  if ( MappedSystemVa )
    v1 = &MappedSystemVa[v7];
  *(_DWORD *)(v11 + 24) = MappedSystemVa != 0LL ? v6 + v7 : 0;
  *(_DWORD *)(v11 + 248) = MappedSystemVa != 0LL ? v6 : 0;
  *(_QWORD *)(v11 + 240) = v1;
  BgpAnimationRegionSave = qword_140EEFE50;
  BgpTextRegionSave = qword_140EEFE58;
  result = 0LL;
  *a1 = v11;
  return result;
}
