/*
 * XREFs of GrePtInRegion @ 0x14002B1F0
 * Callers:
 *     NtGdiPtInRegion @ 0x14011FEB0 (NtGdiPtInRegion.c)
 * Callees:
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x140029144 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x14002D0C0 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14002D140 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrePtInRegion(HRGN a1, int a2, int a3)
{
  struct REGION_CORE *v5; // rdx
  unsigned int v6; // ebp
  char *SystemArgument1; // r15
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // esi
  struct SCAN *pScan_mut; // rax
  struct SCAN *v13; // rdx
  int v14; // r8d
  int v15; // eax
  int v16; // ecx
  __int64 v17; // rax
  _QWORD v18[8]; // [rsp+20h] [rbp-58h] BYREF
  int v19; // [rsp+98h] [rbp+20h] BYREF
  int v20; // [rsp+9Ch] [rbp+24h]

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v18, a1, 1, 0);
  v6 = 0;
  if ( v18[0] )
  {
    SystemArgument1 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1;
    v8 = v18[0] + 24LL;
    v19 = a2;
    v20 = a3;
    v9 = (v18[0] + 24LL) & -(__int64)(v18[0] != 0LL);
    if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(SystemArgument1 + 8, 2LL);
      v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)SystemArgument1 + 112LL))(v9, &v19);
      ExReleasePushLockSharedEx(SystemArgument1 + 8, 2LL);
      KeLeaveCriticalRegion();
    }
    else if ( a2 < *(_DWORD *)((v8 & -(__int64)(v18[0] != 0LL)) + 0x1C)
           || a3 >= *(_DWORD *)((v8 & -(__int64)(v18[0] != 0LL)) + 0x28)
           || a2 >= *(_DWORD *)((v8 & -(__int64)(v18[0] != 0LL)) + 0x24)
           || a3 < *(_DWORD *)((v8 & -(__int64)(v18[0] != 0LL)) + 0x20) )
    {
      v10 = 1;
    }
    else
    {
      v10 = 1;
      if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
      {
        pScan_mut = Win32kRS::RegionCore_get_pScan_mut((Win32kRS *)(v8 & -(__int64)(v18[0] != 0LL)), v5);
        a3 = v20;
        v13 = pScan_mut;
        a2 = v19;
      }
      else
      {
        v13 = *(struct SCAN **)v9;
      }
      v14 = *(_DWORD *)(v9 + 24);
      while ( 1 )
      {
        v15 = v14--;
        if ( !v15 || *((_DWORD *)v13 + 1) > a3 )
          break;
        if ( *((_DWORD *)v13 + 2) > a3 )
        {
          v16 = 0;
          while ( v16 != *(_DWORD *)v13 )
          {
            v17 = v16++;
            if ( *((_DWORD *)v13 + v17 + 3) > a2 )
              goto LABEL_4;
            v10 ^= 3u;
          }
        }
        v13 = (struct SCAN *)((char *)v13 + (unsigned int)(4 * *(_DWORD *)v13 + 16));
      }
    }
LABEL_4:
    LOBYTE(v6) = v10 == 2;
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v18);
    return v6;
  }
  else
  {
    EngSetLastError(6u);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v18);
    return 0LL;
  }
}
