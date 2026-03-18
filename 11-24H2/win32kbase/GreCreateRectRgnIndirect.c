/*
 * XREFs of GreCreateRectRgnIndirect @ 0x14002D480
 * Callers:
 *     CreateEmptyRgnPublic @ 0x140010E60 (CreateEmptyRgnPublic.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x14002C870 (SetOrCreateRectRgnIndirectPublic.c)
 *     CreateMonitorRegionForDpi @ 0x140045D90 (CreateMonitorRegionForDpi.c)
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 *     GetMonitorDC @ 0x14009B3A0 (GetMonitorDC.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400A2D78 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     CreateEmptyRgn @ 0x1400EBFD0 (CreateEmptyRgn.c)
 *     UserValidateCopyRgn @ 0x140113380 (UserValidateCopyRgn.c)
 *     NtUserGetDC @ 0x14016C9E0 (NtUserGetDC.c)
 * Callees:
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14001DDB4 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x14001DDE0 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     HmgInsertObjectInternal @ 0x14001E500 (HmgInsertObjectInternal.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400281B0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?RegionCore_set_to_null_scan@Win32kRS@@YAXPEAVREGION_CORE@@@Z @ 0x140028934 (-RegionCore_set_to_null_scan@Win32kRS@@YAXPEAVREGION_CORE@@@Z.c)
 *     ?RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z @ 0x140029090 (-RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z.c)
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x140029144 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?RegionCore_set_to_rect@Win32kRS@@YAXPEAVREGION_CORE@@PEBU_RECTL@@@Z @ 0x14002AE28 (-RegionCore_set_to_rect@Win32kRS@@YAXPEAVREGION_CORE@@PEBU_RECTL@@@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x14002B150 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x14002B9D0 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 *     ?RustOnZeroSizedScanCallback@@YAXXZ @ 0x14019D440 (-RustOnZeroSizedScanCallback@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

struct HOBJ__ *__fastcall GreCreateRectRgnIndirect(struct REGION_CORE *a1)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v3; // rdi
  unsigned int v4; // eax
  int v5; // r9d
  unsigned __int64 v6; // rdx
  int v7; // eax
  int v8; // r10d
  int v9; // r8d
  __int64 *SystemArgument1; // rsi
  unsigned __int64 v11; // rcx
  char *v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rsi
  struct HOBJ__ *v15; // rbx
  struct HOBJ__ *inserted; // rax
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v17; // rcx
  __int64 v18; // rbx
  struct REGION_CORE *v19; // rdx
  struct SCAN *v20; // rdx
  unsigned __int64 v21; // rax
  bool v22; // zf
  struct SCAN *v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  struct SCAN *pScan_mut; // rax
  _DWORD *v27; // rdx
  _BYTE v28[32]; // [rsp+50h] [rbp-48h] BYREF
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v29; // [rsp+70h] [rbp-28h]
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v30; // [rsp+A0h] [rbp+8h] BYREF

  if ( (*(_DWORD *)a1 & 0xF8000000) != 0 && (*(_DWORD *)a1 & 0xF8000000) != -134217728
    || (((*((_DWORD *)a1 + 3) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((*((_DWORD *)a1 + 2) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (*((_DWORD *)a1 + 1) & 0xF8000000) != 0 && (*((_DWORD *)a1 + 1) & 0xF8000000) != -134217728 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v30);
    v3 = v30;
    if ( v30 )
    {
      v4 = *(_DWORD *)a1;
      v5 = *(_DWORD *)a1;
      v6 = *((unsigned int *)a1 + 2);
      if ( *(_DWORD *)a1 > (int)v6 )
      {
        *(_DWORD *)a1 = v6;
        v5 = v6;
        v6 = v4;
        *((_DWORD *)a1 + 2) = v4;
      }
      v7 = *((_DWORD *)a1 + 1);
      v8 = v7;
      v9 = *((_DWORD *)a1 + 3);
      if ( v7 > v9 )
      {
        *((_DWORD *)a1 + 1) = v9;
        v8 = v9;
        v9 = v7;
        *((_DWORD *)a1 + 3) = v7;
      }
      SystemArgument1 = (__int64 *)WPP_MAIN_CB.Dpc.SystemArgument1;
      v11 = (unsigned __int64)v3 + 24;
      if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
      {
        v12 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8;
        v13 = v11 & -(__int64)(v3 != 0LL);
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(SystemArgument1 + 1, 2LL);
        v14 = *SystemArgument1;
        (*(void (__fastcall **)(__int64, struct REGION_CORE *))(v14 + 176))(v13, a1);
        if ( !(*(unsigned int (__fastcall **)(__int64))(v14 + 216))(v13) )
          DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, v13, 0LL, 0LL, 0LL, 0LL, 0);
        ExReleasePushLockSharedEx(v12, 2LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        v18 = v11 & -(__int64)(v3 != 0LL);
        if ( v5 == (_DWORD)v6 || v8 == v9 )
        {
          if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
          {
            Win32kRS::RegionCore_set_to_null_scan((Win32kRS *)(v11 & -(__int64)(v3 != 0LL)), (struct REGION_CORE *)v6);
          }
          else
          {
            v25 = *(_QWORD *)((v11 & -(__int64)(v3 != 0LL)) + 8);
            *(_QWORD *)((v11 & -(__int64)(v3 != 0LL)) + 0x10) = 16LL;
            if ( v25 < 0x10 )
            {
              *(_QWORD *)((v11 & -(__int64)(v3 != 0LL)) + 0x10) = v25;
              RustOnZeroSizedScanCallback();
              SystemArgument1 = (__int64 *)WPP_MAIN_CB.Dpc.SystemArgument1;
            }
            *(_DWORD *)(v18 + 24) = 1;
            *(_OWORD *)(v18 + 28) = 0LL;
            if ( SystemArgument1 )
              pScan_mut = Win32kRS::RegionCore_get_pScan_mut((Win32kRS *)v18, (struct REGION_CORE *)v6);
            else
              pScan_mut = *(struct SCAN **)v18;
            *(_DWORD *)pScan_mut = 0;
            *((_DWORD *)pScan_mut + 1) = 0x80000000;
            *((_QWORD *)pScan_mut + 1) = 0x7FFFFFFFLL;
          }
        }
        else
        {
          *(_OWORD *)((v11 & -(__int64)(v3 != 0LL)) + 0x1C) = *(_OWORD *)a1;
          if ( (unsigned int)REGION_CORE::get_sizeScan((REGION_CORE *)(v11 & -(__int64)(v3 != 0LL))) == 56 )
          {
            if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
              v20 = Win32kRS::RegionCore_get_pScan_mut((Win32kRS *)v18, v19);
            else
              v20 = *(struct SCAN **)v18;
            *((_DWORD *)v20 + 2) = *((_DWORD *)a1 + 1);
            v27 = (_DWORD *)((char *)v20 + (unsigned int)(4 * *(_DWORD *)v20 + 16));
            v27[1] = *((_DWORD *)a1 + 1);
            v27[2] = *((_DWORD *)a1 + 3);
            v27[3] = *(_DWORD *)a1;
            v27[4] = *((_DWORD *)a1 + 2);
            *(_DWORD *)((char *)v27 + (unsigned int)(4 * *v27 + 16) + 4) = *((_DWORD *)a1 + 3);
          }
          else
          {
            if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
            {
              Win32kRS::RegionCore_set_sizeScan((Win32kRS *)v18, (struct REGION_CORE *)0x38);
            }
            else
            {
              v21 = *(_QWORD *)(v18 + 8);
              *(_QWORD *)(v18 + 16) = 56LL;
              if ( v21 < 0x38 )
              {
                *(_QWORD *)(v18 + 16) = v21;
                RustOnZeroSizedScanCallback();
              }
            }
            v22 = WPP_MAIN_CB.Dpc.SystemArgument1 == 0LL;
            *(_DWORD *)(v18 + 24) = 3;
            if ( v22 )
              v23 = *(struct SCAN **)v18;
            else
              v23 = Win32kRS::RegionCore_get_pScan_mut((Win32kRS *)v18, v19);
            *(_DWORD *)v23 = 0;
            *((_DWORD *)v23 + 1) = 0x80000000;
            *((_DWORD *)v23 + 2) = *((_DWORD *)a1 + 1);
            *((_DWORD *)v23 + 3) = 0;
            *((_DWORD *)v23 + 4) = 2;
            *((_DWORD *)v23 + 5) = *((_DWORD *)a1 + 1);
            *((_DWORD *)v23 + 6) = *((_DWORD *)a1 + 3);
            *((_DWORD *)v23 + 7) = *(_DWORD *)a1;
            *((_DWORD *)v23 + 8) = *((_DWORD *)a1 + 2);
            *((_DWORD *)v23 + 9) = 2;
            v24 = (unsigned int)(4 * *((_DWORD *)v23 + 4) + 16);
            *(_DWORD *)((char *)v23 + v24 + 16) = 0;
            *(_DWORD *)((char *)v23 + v24 + 20) = *((_DWORD *)a1 + 3);
            *(_QWORD *)((char *)v23 + v24 + 24) = 0x7FFFFFFFLL;
          }
        }
      }
      HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v28);
      v15 = 0LL;
      if ( !v29 )
      {
        inserted = HmgInsertObjectInternal(v3, 1, 4u);
        v17 = v29;
        v15 = inserted;
        if ( inserted )
          v17 = v3;
        v29 = v17;
      }
      HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v28);
      if ( !v15 )
        RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)&v30);
    }
    else
    {
      EngSetLastError(8u);
      return 0LL;
    }
    return v15;
  }
}
