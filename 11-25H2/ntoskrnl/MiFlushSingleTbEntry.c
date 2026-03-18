/*
 * XREFs of MiFlushSingleTbEntry @ 0x140219200
 * Callers:
 *     MiMapSinglePage @ 0x140225164 (MiMapSinglePage.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 *     MiWsleFlush @ 0x1402479D4 (MiWsleFlush.c)
 *     MiZeroPhysicalPage @ 0x14024D560 (MiZeroPhysicalPage.c)
 *     MiFillPhysicalPages @ 0x14024D8D0 (MiFillPhysicalPages.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiAbortCombineScan @ 0x1403B7B64 (MiAbortCombineScan.c)
 *     MiSwapStackPageNoDpc @ 0x1403DBFD8 (MiSwapStackPageNoDpc.c)
 *     MiNoFaultFound @ 0x1403E2AA0 (MiNoFaultFound.c)
 *     MiLargePageFault @ 0x1403EC554 (MiLargePageFault.c)
 *     MiValidateInPage @ 0x1403F3C40 (MiValidateInPage.c)
 *     MiTradeActivePage @ 0x1403FE5A0 (MiTradeActivePage.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1403FF808 (MiUpdateImagePfnImportRelocations.c)
 *     MmStealTopLevelPage @ 0x14040B140 (MmStealTopLevelPage.c)
 *     MiPrivateFixup @ 0x140439BB4 (MiPrivateFixup.c)
 *     MiPrepareToTradeUsingAccessedBit @ 0x14045496C (MiPrepareToTradeUsingAccessedBit.c)
 *     MiLockPagedAddress @ 0x140478BA0 (MiLockPagedAddress.c)
 *     MiValidFault @ 0x1404EECA0 (MiValidFault.c)
 *     MiCopyKstack @ 0x1406696F8 (MiCopyKstack.c)
 *     MiReleaseFaultPte @ 0x14066CDE0 (MiReleaseFaultPte.c)
 *     MiMarkBootGuardPage @ 0x1406746AC (MiMarkBootGuardPage.c)
 *     MmReadProcessPageTables @ 0x140674938 (MmReadProcessPageTables.c)
 *     MiRelocateImagePfn @ 0x140945ED0 (MiRelocateImagePfn.c)
 *     MmInvalidateDumpAddresses @ 0x140B53080 (MmInvalidateDumpAddresses.c)
 *     MiProtectSharedUserPage @ 0x140C3EF24 (MiProtectSharedUserPage.c)
 *     MxCopyPage @ 0x140C41244 (MxCopyPage.c)
 *     MiInitializeBootShadowStackPage @ 0x140C45E4C (MiInitializeBootShadowStackPage.c)
 *     MiTradeBootImagePage @ 0x140C4A804 (MiTradeBootImagePage.c)
 * Callees:
 *     MiSystemVaTypeToVm @ 0x140219640 (MiSystemVaTypeToVm.c)
 *     MiGetSystemRegionType @ 0x140219770 (MiGetSystemRegionType.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiCompressTbFlushList @ 0x1404C7DF8 (MiCompressTbFlushList.c)
 *     qsort @ 0x1404FC5A0 (qsort.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall MiFlushSingleTbEntry(unsigned __int64 a1, int a2, int a3)
{
  unsigned __int64 v5; // rbx
  unsigned int SystemRegionType; // eax
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  int v9; // r9d
  int v10; // r8d
  BOOL v11; // ecx
  unsigned int v12; // r10d
  __int64 v13; // r11
  __int64 v14; // r8
  char v15; // r14
  unsigned __int64 v16; // rbx
  __int64 v17; // rdi
  int v18; // r15d
  unsigned __int64 *v19; // rsi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r9
  unsigned __int64 *v22; // r9
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v26; // rcx
  char v27; // al
  unsigned __int64 v28; // [rsp+20h] [rbp-A9h] BYREF
  BOOL v29; // [rsp+28h] [rbp-A1h]
  int v30; // [rsp+2Ch] [rbp-9Dh]
  unsigned int v31; // [rsp+30h] [rbp-99h]
  int v32; // [rsp+34h] [rbp-95h]
  bool v33; // [rsp+38h] [rbp-91h]
  __int16 v34; // [rsp+39h] [rbp-90h]
  char v35; // [rsp+3Bh] [rbp-8Eh]
  unsigned int v36; // [rsp+3Ch] [rbp-8Dh]
  __int64 v37; // [rsp+40h] [rbp-89h]
  __int64 Base; // [rsp+48h] [rbp-81h] BYREF
  __int128 v39; // [rsp+50h] [rbp-79h]
  __int128 v40; // [rsp+60h] [rbp-69h]
  __int128 v41; // [rsp+70h] [rbp-59h]
  __int128 v42; // [rsp+80h] [rbp-49h]
  __int128 v43; // [rsp+90h] [rbp-39h]
  __int128 v44; // [rsp+A0h] [rbp-29h]
  __int128 v45; // [rsp+B0h] [rbp-19h]
  __int128 v46; // [rsp+C0h] [rbp-9h]
  __int128 v47; // [rsp+D0h] [rbp+7h]
  __int64 i; // [rsp+E0h] [rbp+17h]

  v39 = 0LL;
  v35 = 0;
  v40 = 0LL;
  v41 = 0LL;
  v5 = a1;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  for ( i = 0LL; a1 >= 0xFFFFF68000000000uLL; a1 = (__int64)(a1 << 25) >> 16 )
  {
    if ( a1 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  if ( a1 >= 0xFFFF800000000000uLL && (a1 < qword_140E2F040 || a1 > qword_140E2F050) )
    SystemRegionType = MiGetSystemRegionType(a1);
  else
    SystemRegionType = 1;
  v7 = MiSystemVaTypeToVm(SystemRegionType);
  v30 = 20;
  v32 = a3;
  v8 = (unsigned __int64)&unk_140E37EC0;
  if ( v7 )
    v8 = v7;
  v28 = v8;
  v9 = ((a2 == -1) + 8) | 4;
  if ( a2 != 2 )
    v9 = (a2 == -1) + 8;
  v31 = v9;
  v33 = (*(_DWORD *)(v8 + 184) & 0x800) != 0;
  if ( (*(_DWORD *)(v8 + 184) & 0xF) != 0
    || (struct _LIST_ENTRY **)v8 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
  {
    v10 = v31;
    v11 = (*(_DWORD *)(v8 + 184) & 0xF) == 0;
  }
  else
  {
    v11 = 0;
    v10 = v31 | 9;
  }
  v12 = 0;
  v29 = v11;
  v13 = 0LL;
  v34 = 0;
  v14 = v10 & 0xFFFFFFDB;
  v36 = 0;
  v15 = 0;
  v37 = 0LL;
  v31 = v14;
  if ( (v9 & 4) != 0 )
  {
    v14 = (unsigned int)v14 | 4;
    v31 = v14;
  }
  v16 = v5 & 0xFFFFFFFFFFFFF000uLL;
  Base = 0LL;
  v17 = 1LL;
  if ( !v11 && (v14 & 4) == 0 && v16 >= 0xFFFFF68000000000uLL && v16 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v14 = (unsigned int)v14 | 4;
    v31 = v14;
  }
LABEL_19:
  v18 = 0;
  while ( 1 )
  {
    if ( v12 )
    {
      if ( (v14 & 2) == 0 )
      {
        v19 = (unsigned __int64 *)(&Base + v12 - 1);
        v20 = *v19;
        if ( (*v19 & 0xC00) == 0 )
        {
          v21 = *v19 & 0x3FF;
          v8 = (v20 & 0xFFFFFFFFFFFFF000uLL) + ((v21 + 1) << 12);
          if ( v8 == v16 && v21 + v17 <= 0x3FF && v21 + v17 > v21 )
          {
            v37 = v17 + v13;
            v8 = (v20 + v17) ^ (v20 ^ (v20 + v17)) & 0xFFFFFFFFFFFFFC00uLL;
            *v19 = v8;
            return MiFlushTbList(&v28, v8, v14);
          }
        }
      }
      if ( (v14 & 2) == 0 )
      {
        v22 = (unsigned __int64 *)(&Base + v12 - 1);
        v23 = *v22;
        if ( (*v22 & 0xC00) == 0 )
        {
          v14 = v17 << 12;
          v8 = (v17 << 12) + v16;
          if ( (v23 & 0xFFFFFFFFFFFFF000uLL) == v8 )
          {
            v26 = *v22 & 0x3FF;
            v8 = v26 + v17;
            if ( v26 + v17 <= 0x3FF && v8 > v26 )
            {
              v37 = v17 + v13;
              v8 = (v23 - v14 + v17) ^ ((v23 - v14) ^ (v23 - v14 + v17)) & 0xFFFFFFFFFFFFFC00uLL;
              *v22 = v8;
              return MiFlushTbList(&v28, v8, v14);
            }
          }
        }
      }
    }
    if ( v12 != v30 )
      break;
    if ( v18 )
    {
      v27 = v15;
      if ( !v15 )
        v27 = 1;
      LOBYTE(v34) = v27;
      return MiFlushTbList(&v28, v8, v14);
    }
    if ( v15 )
      return MiFlushTbList(&v28, v8, v14);
    qsort(&Base, v12, 8uLL, MiTbFlushSort);
    MiCompressTbFlushList(&v28);
    v13 = v37;
    v18 = 1;
    v12 = v36;
    v14 = v31;
    v15 = v34;
  }
  while ( v17 )
  {
    v8 = 1024LL;
    if ( (unsigned __int64)(v17 - 1) <= 0x3FF )
      v8 = v17;
    v24 = v16 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v8 - 1) & 0x3FF;
    v16 += v8 << 12;
    *(&Base + v12) = v24;
    v12 = v36 + 1;
    v13 = v8 + v37;
    ++v36;
    v37 += v8;
    v17 -= v8;
    if ( v17 && v12 == v30 )
    {
      v15 = v34;
      v14 = v31;
      goto LABEL_19;
    }
  }
  return MiFlushTbList(&v28, v8, v14);
}
