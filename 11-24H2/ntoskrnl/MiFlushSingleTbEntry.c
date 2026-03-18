/*
 * XREFs of MiFlushSingleTbEntry @ 0x14022A7E0
 * Callers:
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiZeroPhysicalPage @ 0x14021EC40 (MiZeroPhysicalPage.c)
 *     MiFillPhysicalPages @ 0x14021EFA0 (MiFillPhysicalPages.c)
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiPrepareToTradeUsingAccessedBit @ 0x140229DC8 (MiPrepareToTradeUsingAccessedBit.c)
 *     MiNoFaultFound @ 0x140233220 (MiNoFaultFound.c)
 *     MiAbortCombineScan @ 0x140265104 (MiAbortCombineScan.c)
 *     MiWsleFlush @ 0x140286410 (MiWsleFlush.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1402C89A4 (MiUpdateImagePfnImportRelocations.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiPrivateFixup @ 0x1402EE4F0 (MiPrivateFixup.c)
 *     MiSharePages @ 0x1402FA880 (MiSharePages.c)
 *     MmStealTopLevelPage @ 0x1403116F0 (MmStealTopLevelPage.c)
 *     MiMapSinglePage @ 0x140314164 (MiMapSinglePage.c)
 *     MiTradeActivePage @ 0x1403A0758 (MiTradeActivePage.c)
 *     MiLargePageFault @ 0x1403F38B4 (MiLargePageFault.c)
 *     MiSwapStackPageNoDpc @ 0x1404307F4 (MiSwapStackPageNoDpc.c)
 *     MiValidateInPage @ 0x140436770 (MiValidateInPage.c)
 *     MiLockPagedAddress @ 0x14047910C (MiLockPagedAddress.c)
 *     MiValidFault @ 0x1404F2C70 (MiValidFault.c)
 *     MiCopyKstack @ 0x140675158 (MiCopyKstack.c)
 *     MiReleaseFaultPte @ 0x1406786EC (MiReleaseFaultPte.c)
 *     MiMarkBootGuardPage @ 0x14067FECC (MiMarkBootGuardPage.c)
 *     MmReadProcessPageTables @ 0x140680158 (MmReadProcessPageTables.c)
 *     MiRelocateImagePfn @ 0x1409587A8 (MiRelocateImagePfn.c)
 *     MmInvalidateDumpAddresses @ 0x140B631B0 (MmInvalidateDumpAddresses.c)
 *     MiProtectSharedUserPage @ 0x140C50154 (MiProtectSharedUserPage.c)
 *     MxCopyPage @ 0x140C52474 (MxCopyPage.c)
 *     MiInitializeBootShadowStackPage @ 0x140C5712C (MiInitializeBootShadowStackPage.c)
 *     MiTradeBootImagePage @ 0x140C5BB90 (MiTradeBootImagePage.c)
 * Callees:
 *     MiSystemVaTypeToVm @ 0x14022ABF0 (MiSystemVaTypeToVm.c)
 *     MiGetSystemRegionType @ 0x14022AD20 (MiGetSystemRegionType.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     MiCompressTbFlushList @ 0x140432A2C (MiCompressTbFlushList.c)
 *     qsort @ 0x1404FED20 (qsort.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiFlushSingleTbEntry(unsigned __int64 a1, int a2, int a3)
{
  unsigned __int64 i; // rcx
  unsigned int SystemRegionType; // eax
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  int v10; // r9d
  int v11; // r8d
  BOOL v12; // ecx
  unsigned int v13; // r10d
  __int64 v14; // r11
  unsigned int v15; // r8d
  unsigned __int64 v16; // rbx
  __int64 v17; // rdi
  int j; // r14d
  unsigned __int64 *v19; // rsi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r9
  unsigned __int64 *v22; // r9
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // [rsp+20h] [rbp-A9h] BYREF
  BOOL v28; // [rsp+28h] [rbp-A1h]
  int v29; // [rsp+2Ch] [rbp-9Dh]
  int v30; // [rsp+30h] [rbp-99h]
  int v31; // [rsp+34h] [rbp-95h]
  bool v32; // [rsp+38h] [rbp-91h]
  __int16 v33; // [rsp+39h] [rbp-90h]
  char v34; // [rsp+3Bh] [rbp-8Eh]
  unsigned int v35; // [rsp+3Ch] [rbp-8Dh]
  __int64 v36; // [rsp+40h] [rbp-89h]
  __int64 Base; // [rsp+48h] [rbp-81h] BYREF
  char v38[160]; // [rsp+50h] [rbp-79h] BYREF

  v34 = 0;
  memset_0(v38, 0, 0x98uLL);
  for ( i = a1; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
  {
    if ( i > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  if ( i >= 0xFFFF800000000000uLL && (i < qword_140E2F280 || i > qword_140E2F290) )
    SystemRegionType = MiGetSystemRegionType(i);
  else
    SystemRegionType = 1;
  v8 = MiSystemVaTypeToVm(SystemRegionType);
  v29 = 20;
  v31 = a3;
  v9 = (unsigned __int64)&unk_140E38100;
  if ( v8 )
    v9 = v8;
  v27 = v9;
  v10 = ((a2 == -1) + 8) | 4;
  if ( a2 != 2 )
    v10 = (a2 == -1) + 8;
  v30 = v10;
  v32 = (*(_DWORD *)(v9 + 184) & 0x800) != 0;
  if ( (*(_DWORD *)(v9 + 184) & 0xF) != 0
    || (struct _LIST_ENTRY **)v9 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
  {
    v11 = v30;
    v12 = (*(_DWORD *)(v9 + 184) & 0xF) == 0;
  }
  else
  {
    v12 = 0;
    v11 = v30 | 9;
  }
  v13 = 0;
  v28 = v12;
  v14 = 0LL;
  v33 = 0;
  v15 = v11 & 0xFFFFFFDB;
  v35 = 0;
  v36 = 0LL;
  v30 = v15;
  if ( (v10 & 4) != 0 )
  {
    v15 |= 4u;
    v30 = v15;
  }
  v16 = a1 & 0xFFFFFFFFFFFFF000uLL;
  Base = 0LL;
  v17 = 1LL;
  if ( !v12 && (v15 & 4) == 0 && v16 >= 0xFFFFF68000000000uLL && v16 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v15 |= 4u;
    v30 = v15;
  }
LABEL_19:
  for ( j = 0; ; j = 1 )
  {
    if ( v13 )
    {
      if ( (v15 & 2) == 0 )
      {
        v19 = (unsigned __int64 *)(&Base + v13 - 1);
        v20 = *v19;
        if ( (*v19 & 0xC00) == 0 )
        {
          v21 = *v19 & 0x3FF;
          v9 = (v20 & 0xFFFFFFFFFFFFF000uLL) + ((v21 + 1) << 12);
          if ( v9 == v16 && v21 + v17 <= 0x3FF && v21 + v17 > v21 )
          {
            v36 = v17 + v14;
            v9 = (v20 + v17) ^ (v20 ^ (v20 + v17)) & 0xFFFFFFFFFFFFFC00uLL;
            *v19 = v9;
            return MiFlushTbList(&v27, v9);
          }
        }
      }
      if ( (v15 & 2) == 0 )
      {
        v22 = (unsigned __int64 *)(&Base + v13 - 1);
        v23 = *v22;
        if ( (*v22 & 0xC00) == 0 )
        {
          v9 = (v17 << 12) + v16;
          if ( (v23 & 0xFFFFFFFFFFFFF000uLL) == v9 )
          {
            v26 = *v22 & 0x3FF;
            v9 = v26 + v17;
            if ( v26 + v17 <= 0x3FF && v9 > v26 )
            {
              v36 = v17 + v14;
              v9 = (v23 - (v17 << 12) + v17) ^ ((v23 - (v17 << 12)) ^ (v23 - (v17 << 12) + v17)) & 0xFFFFFFFFFFFFFC00uLL;
              *v22 = v9;
              return MiFlushTbList(&v27, v9);
            }
          }
        }
      }
    }
    if ( v13 != v29 )
      break;
    if ( j )
    {
      if ( !(_BYTE)v33 )
        LOBYTE(v33) = 1;
      return MiFlushTbList(&v27, v9);
    }
    if ( (_BYTE)v33 )
      return MiFlushTbList(&v27, v9);
    qsort(&Base, v13, 8uLL, MiTbFlushSort);
    MiCompressTbFlushList(&v27);
    v14 = v36;
    v13 = v35;
    LOBYTE(v15) = v30;
  }
  while ( v17 )
  {
    v9 = 1024LL;
    if ( (unsigned __int64)(v17 - 1) <= 0x3FF )
      v9 = v17;
    v24 = v16 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v9 - 1) & 0x3FF;
    v16 += v9 << 12;
    *(_QWORD *)&v38[8 * v13 - 8] = v24;
    v13 = v35 + 1;
    v14 = v9 + v36;
    ++v35;
    v36 += v9;
    v17 -= v9;
    if ( v17 && v13 == v29 )
    {
      LOBYTE(v15) = v30;
      goto LABEL_19;
    }
  }
  return MiFlushTbList(&v27, v9);
}
