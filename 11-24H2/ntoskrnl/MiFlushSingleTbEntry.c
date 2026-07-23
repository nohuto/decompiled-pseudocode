/*
 * XREFs of MiFlushSingleTbEntry @ 0x1402FDA50
 * Callers:
 *     MiWsleFlush @ 0x140201004 (MiWsleFlush.c)
 *     MiNoFaultFound @ 0x140203670 (MiNoFaultFound.c)
 *     MiTradeActivePage @ 0x1402172BC (MiTradeActivePage.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiZeroPhysicalPage @ 0x14024B990 (MiZeroPhysicalPage.c)
 *     MiFillPhysicalPages @ 0x14024BCF0 (MiFillPhysicalPages.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiPrepareToTradeUsingAccessedBit @ 0x1402FD038 (MiPrepareToTradeUsingAccessedBit.c)
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiPrivateFixup @ 0x14034FB30 (MiPrivateFixup.c)
 *     MiAbortCombineScan @ 0x1403A9DB0 (MiAbortCombineScan.c)
 *     MiMapSinglePage @ 0x1403F14B0 (MiMapSinglePage.c)
 *     MmStealTopLevelPage @ 0x1403F4960 (MmStealTopLevelPage.c)
 *     MiSwapStackPageNoDpc @ 0x1404221A4 (MiSwapStackPageNoDpc.c)
 *     MiValidateInPage @ 0x1404291F0 (MiValidateInPage.c)
 *     MiUpdateImagePfnImportRelocations @ 0x14043A5B4 (MiUpdateImagePfnImportRelocations.c)
 *     MiLockPagedAddress @ 0x14047499C (MiLockPagedAddress.c)
 *     MiLargePageFault @ 0x1404C1204 (MiLargePageFault.c)
 *     MiValidFault @ 0x1404F0710 (MiValidFault.c)
 *     MiCopyKstack @ 0x140676328 (MiCopyKstack.c)
 *     MiReleaseFaultPte @ 0x140679878 (MiReleaseFaultPte.c)
 *     MiMarkBootGuardPage @ 0x1406810CC (MiMarkBootGuardPage.c)
 *     MmReadProcessPageTables @ 0x140681358 (MmReadProcessPageTables.c)
 *     MiRelocateImagePfn @ 0x14093B6F8 (MiRelocateImagePfn.c)
 *     MmInvalidateDumpAddresses @ 0x140B65280 (MmInvalidateDumpAddresses.c)
 *     MiProtectSharedUserPage @ 0x140C522E4 (MiProtectSharedUserPage.c)
 *     MxCopyPage @ 0x140C54604 (MxCopyPage.c)
 *     MiInitializeBootShadowStackPage @ 0x140C592BC (MiInitializeBootShadowStackPage.c)
 *     MiTradeBootImagePage @ 0x140C5DD20 (MiTradeBootImagePage.c)
 * Callees:
 *     MiCompressTbFlushList @ 0x140215218 (MiCompressTbFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiSystemVaTypeToVm @ 0x1402FDE60 (MiSystemVaTypeToVm.c)
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall MiFlushSingleTbEntry(unsigned __int64 a1, int a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 i; // rcx
  unsigned int SystemRegionType; // eax
  __int64 v10; // rax
  struct _LIST_ENTRY **v11; // rdx
  int v12; // r9d
  int v13; // r8d
  BOOL v14; // ecx
  unsigned int v15; // r10d
  __int64 v16; // r11
  unsigned int v17; // r8d
  unsigned __int64 v18; // rbx
  __int64 v19; // rdi
  int j; // r14d
  unsigned __int64 *v21; // rsi
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r9
  unsigned __int64 *v24; // r9
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rcx
  struct _LIST_ENTRY **v29; // [rsp+20h] [rbp-A9h] BYREF
  BOOL v30; // [rsp+28h] [rbp-A1h]
  int v31; // [rsp+2Ch] [rbp-9Dh]
  int v32; // [rsp+30h] [rbp-99h]
  int v33; // [rsp+34h] [rbp-95h]
  bool v34; // [rsp+38h] [rbp-91h]
  __int16 v35; // [rsp+39h] [rbp-90h]
  char v36; // [rsp+3Bh] [rbp-8Eh]
  unsigned int v37; // [rsp+3Ch] [rbp-8Dh]
  __int64 v38; // [rsp+40h] [rbp-89h]
  __int64 Base; // [rsp+48h] [rbp-81h] BYREF
  char v40[160]; // [rsp+50h] [rbp-79h] BYREF

  v36 = 0;
  memset_0(v40, 0, 0x98uLL);
  for ( i = a1; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
  {
    if ( i > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  if ( i >= 0xFFFF800000000000uLL && (i < qword_140E2F3C0 || i > qword_140E2F3D0) )
    SystemRegionType = MiGetSystemRegionType(i, v6, v7);
  else
    SystemRegionType = 1;
  v10 = MiSystemVaTypeToVm(SystemRegionType);
  v31 = 20;
  v33 = a3;
  v11 = (struct _LIST_ENTRY **)&unk_140E38240;
  if ( v10 )
    v11 = (struct _LIST_ENTRY **)v10;
  v29 = v11;
  v12 = ((a2 == -1) + 8) | 4;
  if ( a2 != 2 )
    v12 = (a2 == -1) + 8;
  v32 = v12;
  v34 = ((_DWORD)v11[23] & 0x800) != 0;
  if ( ((_DWORD)v11[23] & 0xF) != 0 || v11 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
  {
    v13 = v32;
    v14 = ((_DWORD)v11[23] & 0xF) == 0;
  }
  else
  {
    v14 = 0;
    v13 = v32 | 9;
  }
  v15 = 0;
  v30 = v14;
  v16 = 0LL;
  v35 = 0;
  v17 = v13 & 0xFFFFFFDB;
  v37 = 0;
  v38 = 0LL;
  v32 = v17;
  if ( (v12 & 4) != 0 )
  {
    v17 |= 4u;
    v32 = v17;
  }
  v18 = a1 & 0xFFFFFFFFFFFFF000uLL;
  Base = 0LL;
  v19 = 1LL;
  if ( !v14 && (v17 & 4) == 0 && v18 >= 0xFFFFF68000000000uLL && v18 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v17 |= 4u;
    v32 = v17;
  }
LABEL_19:
  for ( j = 0; ; j = 1 )
  {
    if ( v15 )
    {
      if ( (v17 & 2) == 0 )
      {
        v21 = (unsigned __int64 *)(&Base + v15 - 1);
        v22 = *v21;
        if ( (*v21 & 0xC00) == 0 )
        {
          v23 = *v21 & 0x3FF;
          if ( (v22 & 0xFFFFFFFFFFFFF000uLL) + ((v23 + 1) << 12) == v18 && v23 + v19 <= 0x3FF && v23 + v19 > v23 )
          {
            v38 = v19 + v16;
            *v21 = (v22 + v19) ^ (v22 ^ (v22 + v19)) & 0xFFFFFFFFFFFFFC00uLL;
            goto LABEL_38;
          }
        }
      }
      if ( (v17 & 2) == 0 )
      {
        v24 = (unsigned __int64 *)(&Base + v15 - 1);
        v25 = *v24;
        if ( (*v24 & 0xC00) == 0 && (v25 & 0xFFFFFFFFFFFFF000uLL) == (v19 << 12) + v18 )
        {
          v28 = *v24 & 0x3FF;
          if ( v28 + v19 <= 0x3FF && v28 + v19 > v28 )
          {
            v38 = v19 + v16;
            *v24 = (v25 - (v19 << 12) + v19) ^ ((v25 - (v19 << 12)) ^ (v25 - (v19 << 12) + v19)) & 0xFFFFFFFFFFFFFC00uLL;
            goto LABEL_38;
          }
        }
      }
    }
    if ( v15 != v31 )
      break;
    if ( j )
    {
      if ( !(_BYTE)v35 )
        LOBYTE(v35) = 1;
      goto LABEL_38;
    }
    if ( (_BYTE)v35 )
      goto LABEL_38;
    qsort(&Base, v15, 8uLL, MiTbFlushSort);
    MiCompressTbFlushList((__int64)&v29);
    v16 = v38;
    v15 = v37;
    LOBYTE(v17) = v32;
  }
  while ( v19 )
  {
    v26 = 1024LL;
    if ( (unsigned __int64)(v19 - 1) <= 0x3FF )
      v26 = v19;
    v27 = v18 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v26 - 1) & 0x3FF;
    v18 += v26 << 12;
    *(_QWORD *)&v40[8 * v15 - 8] = v27;
    v15 = v37 + 1;
    v16 = v26 + v38;
    ++v37;
    v38 += v26;
    v19 -= v26;
    if ( v19 && v15 == v31 )
    {
      LOBYTE(v17) = v32;
      goto LABEL_19;
    }
  }
LABEL_38:
  MiFlushTbList((__int64)&v29);
}
