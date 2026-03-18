/*
 * XREFs of ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400281B0
 * Callers:
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1400259B0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     GreCombineRgn @ 0x140025D30 (GreCombineRgn.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14002689C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x14002BA00 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreCreateRectRgnIndirect @ 0x14002D480 (GreCreateRectRgnIndirect.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x14002E270 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     GrepDeleteDC @ 0x140034C20 (GrepDeleteDC.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x140035220 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z @ 0x14003605C (-GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1400364AC (-vReleaseVis@DC@@QEAAXXZ.c)
 *     NtGdiCreateRectRgn @ 0x140039620 (NtGdiCreateRectRgn.c)
 *     ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x14003D180 (-vUpdateScaledRegions@DC@@QEAAXXZ.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x14003D278 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x140066420 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     GreExtCreateRegion @ 0x140066D70 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x14006AC5C (GreCreatePolyPolygonRgnInternal.c)
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 *     GreCreateRectRgn @ 0x1400EF5F0 (GreCreateRectRgn.c)
 *     vRestoreRegion @ 0x1400F3410 (vRestoreRegion.c)
 *     EngDeleteClip @ 0x1400F83B0 (EngDeleteClip.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1401272A4 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x1401549C0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x140174490 (-bCompute@DC@@QEAAHXZ.c)
 *     ?CleanUpRegion@@YAXPEAVREGION@@@Z @ 0x1401C1300 (-CleanUpRegion@@YAXPEAVREGION@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x140028890 (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z.c)
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x140029144 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x140040DAC (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x140040EBC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?get_sizeScanAlloc@REGION_CORE@@IEBAKXZ @ 0x140065B50 (-get_sizeScanAlloc@REGION_CORE@@IEBAKXZ.c)
 *     ?Remove@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x140198FAC (-Remove@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NS.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall RGNOBJ::vDeleteRGNOBJ(ULONG_PTR *this)
{
  ULONG_PTR v1; // rbp
  struct REGION_CORE *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r14
  char *SystemArgument1; // rsi
  int v7; // r15d
  struct SCAN *pScan_mut; // r15
  unsigned int *v9; // rsi
  __int64 UserSessionState; // rax
  void *v11; // r8
  __int64 v12; // rbx
  __int64 *v13; // rdi
  __int64 v14; // r12
  __int64 *i; // r14
  __int64 *v16; // r15
  unsigned __int64 v17; // r10
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned __int64 v20; // r8
  __int64 v21; // rbx
  ULONG v22; // esi
  __int64 v23; // rbx
  __int64 *v24; // rcx
  __int64 **v25; // rax
  _QWORD *v26; // rax
  struct REGION_CORE *v27; // rdx
  char *v28; // rax
  NSInstrumentation::CPointerHashTable *v29; // rcx
  void *v30; // r8
  void *v31; // [rsp+60h] [rbp+8h] BYREF

  v1 = *this;
  v5 = *(_QWORD *)(W32GetSessionState(this) + 88);
  if ( v1 && v1 != *(_QWORD *)(v5 + 4160) )
  {
    SystemArgument1 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1;
    if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(SystemArgument1 + 8, 2LL);
      (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SystemArgument1 + 152LL))(v1 + 24);
      ExReleasePushLockSharedEx(SystemArgument1 + 8, 2LL);
      KeLeaveCriticalRegion();
    }
    else if ( *(_QWORD *)(v1 + 24) )
    {
      if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(8LL, 2LL);
        v7 = (*(__int64 (__fastcall **)(ULONG_PTR))(MEMORY[0] + 224LL))(v1 + 24);
        ExReleasePushLockSharedEx(8LL, 2LL);
        KeLeaveCriticalRegion();
        SystemArgument1 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1;
      }
      else
      {
        v7 = *(_DWORD *)(v1 + 32);
      }
      if ( v7 == 112 )
      {
        if ( SystemArgument1 )
          pScan_mut = Win32kRS::RegionCore_get_pScan_mut((Win32kRS *)(v1 + 24), v3);
        else
          pScan_mut = *(struct SCAN **)(v1 + 24);
        v9 = *(unsigned int **)(v5 + 4136);
        UserSessionState = W32GetUserSessionState(v4);
        v12 = UserSessionState;
        if ( *((_BYTE *)v9 + 5) )
        {
          v29 = *(NSInstrumentation::CPointerHashTable **)(UserSessionState + 72376);
          v31 = 0LL;
          if ( NSInstrumentation::CPointerHashTable::Remove(v29, (char *)pScan_mut - 16, &v31) )
          {
            NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*(NSInstrumentation::CPrioritizedWriterLock **)(v12 + 72392));
            _InterlockedIncrement64((volatile signed __int64 *)(v12 + 72424));
            NSInstrumentation::PlatformFreeToPagedLookasideList(
              (NSInstrumentation *)(v9 + 4),
              (char *)pScan_mut - 16,
              v30);
          }
        }
        else
        {
          if ( (*(_DWORD *)(UserSessionState + 72288) & 0xFFFFFFFD) != 0 )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *(NSInstrumentation::CPointerHashTable **)(UserSessionState + 72296),
              (const void *)*v9);
            pScan_mut = (struct SCAN *)((char *)pScan_mut - 16);
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v12 + 72408));
          NSInstrumentation::PlatformFreeToPagedLookasideList((NSInstrumentation *)(v9 + 4), pScan_mut, v11);
        }
      }
      else if ( REGION_CORE::get_sizeScanAlloc((REGION_CORE *)(v1 + 24)) > 0x70 )
      {
        if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
          v28 = (char *)Win32kRS::RegionCore_get_pScan_mut((Win32kRS *)(v1 + 24), v27);
        else
          v28 = *(char **)(v1 + 24);
        GreDeleteFastMutex(v28);
      }
      *(_QWORD *)(v1 + 24) = 0LL;
    }
    v13 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(v4) + 88) + 4272LL) + 56LL);
    if ( v13 )
    {
      if ( *((_BYTE *)v13 + 36) )
      {
        memset((void *)v1, 0, 0x70uLL);
        ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)v13[3], (PVOID)v1);
      }
      else
      {
        v14 = v13[2];
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(v14, 0LL);
        for ( i = (__int64 *)*v13; ; i = (__int64 *)*i )
        {
          if ( i == v13 )
          {
            ExReleasePushLockSharedEx(v14, 0LL);
            KeLeaveCriticalRegion();
            KeBugCheckEx(0x164u, 0x21uLL, v1, 0LL, 0LL);
          }
          v16 = (__int64 *)i[4];
          v17 = v16[1];
          v18 = v16[2];
          if ( v1 >= (v18 ^ v17) && v1 < (v18 ^ v17) + 28672 )
            break;
        }
        v19 = ((v1 & 0xFFF) * (unsigned __int128)0x2492492492492493uLL) >> 64;
        v20 = (v19 + (((v1 & 0xFFF) - v19) >> 1)) >> 6;
        if ( (v1 & 0xFFF) != 112 * v20 )
          KeBugCheckEx(0x164u, 0x22uLL, v1, 0LL, 0LL);
        if ( !RtlTestBit(
                (PRTL_BITMAP)(v16[3] ^ v18),
                v20 + 36 * (((unsigned int)v1 - ((unsigned int)v17 ^ (unsigned int)v18)) >> 12)) )
          KeBugCheckEx(0x164u, 0x23uLL, v1, 0LL, 0LL);
        v21 = *v16;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v21, 0LL);
        v22 = (v1 & 0xFFF) / 0x70 + 36 * ((unsigned int)(v1 - (*((_DWORD *)v16 + 2) ^ *((_DWORD *)v16 + 4))) >> 12);
        RtlClearBit((PRTL_BITMAP)(v16[2] ^ v16[3]), v22);
        *(_OWORD *)v1 = 0LL;
        *(_OWORD *)(v1 + 16) = 0LL;
        *(_OWORD *)(v1 + 32) = 0LL;
        *(_OWORD *)(v1 + 48) = 0LL;
        *(_OWORD *)(v1 + 64) = 0LL;
        *(_OWORD *)(v1 + 80) = 0LL;
        *(_OWORD *)(v1 + 96) = 0LL;
        *((_DWORD *)v16 + 8) = v22;
        ExReleasePushLockExclusiveEx(v21, 0LL);
        KeLeaveCriticalRegion();
        if ( i == (__int64 *)*v13 )
        {
          ExReleasePushLockSharedEx(v14, 0LL);
          KeLeaveCriticalRegion();
        }
        else
        {
          ExReleasePushLockSharedEx(v14, 0LL);
          KeLeaveCriticalRegion();
          v23 = v13[2];
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v23, 0LL);
          v24 = (__int64 *)*i;
          if ( *(__int64 **)(*i + 8) != i
            || (v25 = (__int64 **)i[1], *v25 != i)
            || (*v25 = v24, v24[1] = (__int64)v25, v26 = (_QWORD *)*v13, *(__int64 **)(*v13 + 8) != v13) )
          {
            __fastfail(3u);
          }
          *i = (__int64)v26;
          i[1] = (__int64)v13;
          v26[1] = i;
          *v13 = (__int64)i;
          ExReleasePushLockExclusiveEx(v23, 0LL);
          KeLeaveCriticalRegion();
        }
      }
    }
  }
  *this = 0LL;
}
