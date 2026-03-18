/*
 * XREFs of ?vDeleteREGION@REGION@@AEAAXXZ @ 0x140027B90
 * Callers:
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140026B80 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1400271F0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z @ 0x1401C1200 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z.c)
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

void __fastcall REGION::vDeleteREGION(REGION *this)
{
  struct REGION_CORE *v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r14
  char *SystemArgument1; // rsi
  int v6; // r15d
  struct SCAN *pScan_mut; // r15
  unsigned int *v8; // rsi
  __int64 UserSessionState; // rax
  void *v10; // r8
  __int64 v11; // rbx
  __int64 *v12; // rdi
  __int64 v13; // r12
  __int64 *i; // r14
  __int64 *v15; // r15
  unsigned __int64 v16; // r10
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned __int64 v19; // r8
  __int64 v20; // rbx
  ULONG v21; // esi
  __int64 v22; // rbx
  __int64 *v23; // rcx
  __int64 **v24; // rax
  _QWORD *v25; // rax
  struct REGION_CORE *v26; // rdx
  char *v27; // rax
  NSInstrumentation::CPointerHashTable *v28; // rcx
  void *v29; // r8
  void *v30; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(W32GetSessionState(this) + 88);
  if ( this && this != *(REGION **)(v4 + 4160) )
  {
    SystemArgument1 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1;
    if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(SystemArgument1 + 8, 2LL);
      (*(void (__fastcall **)(char *))(*(_QWORD *)SystemArgument1 + 152LL))((char *)this + 24);
      ExReleasePushLockSharedEx(SystemArgument1 + 8, 2LL);
      KeLeaveCriticalRegion();
    }
    else if ( *((_QWORD *)this + 3) )
    {
      if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(8LL, 2LL);
        v6 = (*(__int64 (__fastcall **)(char *))(MEMORY[0] + 224LL))((char *)this + 24);
        ExReleasePushLockSharedEx(8LL, 2LL);
        KeLeaveCriticalRegion();
        SystemArgument1 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1;
      }
      else
      {
        v6 = *((_DWORD *)this + 8);
      }
      if ( v6 == 112 )
      {
        if ( SystemArgument1 )
          pScan_mut = Win32kRS::RegionCore_get_pScan_mut((REGION *)((char *)this + 24), v2);
        else
          pScan_mut = (struct SCAN *)*((_QWORD *)this + 3);
        v8 = *(unsigned int **)(v4 + 4136);
        UserSessionState = W32GetUserSessionState(v3);
        v11 = UserSessionState;
        if ( *((_BYTE *)v8 + 5) )
        {
          v28 = *(NSInstrumentation::CPointerHashTable **)(UserSessionState + 72376);
          v30 = 0LL;
          if ( NSInstrumentation::CPointerHashTable::Remove(v28, (char *)pScan_mut - 16, &v30) )
          {
            NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(*(NSInstrumentation::CPrioritizedWriterLock **)(v11 + 72392));
            _InterlockedIncrement64((volatile signed __int64 *)(v11 + 72424));
            NSInstrumentation::PlatformFreeToPagedLookasideList(
              (NSInstrumentation *)(v8 + 4),
              (char *)pScan_mut - 16,
              v29);
          }
        }
        else
        {
          if ( (*(_DWORD *)(UserSessionState + 72288) & 0xFFFFFFFD) != 0 )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *(NSInstrumentation::CPointerHashTable **)(UserSessionState + 72296),
              (const void *)*v8);
            pScan_mut = (struct SCAN *)((char *)pScan_mut - 16);
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v11 + 72408));
          NSInstrumentation::PlatformFreeToPagedLookasideList((NSInstrumentation *)(v8 + 4), pScan_mut, v10);
        }
      }
      else if ( REGION_CORE::get_sizeScanAlloc((REGION *)((char *)this + 24)) > 0x70 )
      {
        if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
          v27 = (char *)Win32kRS::RegionCore_get_pScan_mut((REGION *)((char *)this + 24), v26);
        else
          v27 = (char *)*((_QWORD *)this + 3);
        GreDeleteFastMutex(v27);
      }
      *((_QWORD *)this + 3) = 0LL;
    }
    v12 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(v3) + 88) + 4272LL) + 56LL);
    if ( v12 )
    {
      if ( *((_BYTE *)v12 + 36) )
      {
        memset(this, 0, 0x70uLL);
        ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)v12[3], this);
      }
      else
      {
        v13 = v12[2];
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(v13, 0LL);
        for ( i = (__int64 *)*v12; ; i = (__int64 *)*i )
        {
          if ( i == v12 )
          {
            ExReleasePushLockSharedEx(v13, 0LL);
            KeLeaveCriticalRegion();
            KeBugCheckEx(0x164u, 0x21uLL, (ULONG_PTR)this, 0LL, 0LL);
          }
          v15 = (__int64 *)i[4];
          v16 = v15[1];
          v17 = v15[2];
          if ( (unsigned __int64)this >= (v17 ^ v16) && (unsigned __int64)this < (v17 ^ v16) + 28672 )
            break;
        }
        v18 = (((unsigned __int16)this & 0xFFF) * (unsigned __int128)0x2492492492492493uLL) >> 64;
        v19 = (v18 + (((unsigned __int64)((unsigned __int16)this & 0xFFF) - v18) >> 1)) >> 6;
        if ( ((unsigned __int16)this & 0xFFF) != 112 * v19 )
          KeBugCheckEx(0x164u, 0x22uLL, (ULONG_PTR)this, 0LL, 0LL);
        if ( !RtlTestBit(
                (PRTL_BITMAP)(v15[3] ^ v17),
                v19 + 36 * (((unsigned int)this - ((unsigned int)v16 ^ (unsigned int)v17)) >> 12)) )
          KeBugCheckEx(0x164u, 0x23uLL, (ULONG_PTR)this, 0LL, 0LL);
        v20 = *v15;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v20, 0LL);
        v21 = ((unsigned __int16)this & 0xFFFu) / 0x70
            + 36 * ((unsigned int)((_DWORD)this - (*((_DWORD *)v15 + 4) ^ *((_DWORD *)v15 + 2))) >> 12);
        RtlClearBit((PRTL_BITMAP)(v15[2] ^ v15[3]), v21);
        *(_OWORD *)this = 0LL;
        *((_OWORD *)this + 1) = 0LL;
        *((_OWORD *)this + 2) = 0LL;
        *((_OWORD *)this + 3) = 0LL;
        *((_OWORD *)this + 4) = 0LL;
        *((_OWORD *)this + 5) = 0LL;
        *((_OWORD *)this + 6) = 0LL;
        *((_DWORD *)v15 + 8) = v21;
        ExReleasePushLockExclusiveEx(v20, 0LL);
        KeLeaveCriticalRegion();
        if ( i == (__int64 *)*v12 )
        {
          ExReleasePushLockSharedEx(v13, 0LL);
        }
        else
        {
          ExReleasePushLockSharedEx(v13, 0LL);
          KeLeaveCriticalRegion();
          v22 = v12[2];
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v22, 0LL);
          v23 = (__int64 *)*i;
          if ( *(__int64 **)(*i + 8) != i
            || (v24 = (__int64 **)i[1], *v24 != i)
            || (*v24 = v23, v23[1] = (__int64)v24, v25 = (_QWORD *)*v12, *(__int64 **)(*v12 + 8) != v12) )
          {
            __fastfail(3u);
          }
          *i = (__int64)v25;
          i[1] = (__int64)v12;
          v25[1] = i;
          *v12 = (__int64)i;
          ExReleasePushLockExclusiveEx(v22, 0LL);
        }
        KeLeaveCriticalRegion();
      }
    }
  }
}
