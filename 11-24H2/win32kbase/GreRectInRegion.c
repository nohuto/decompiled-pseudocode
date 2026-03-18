/*
 * XREFs of GreRectInRegion @ 0x1400D1D60
 * Callers:
 *     NtGdiRectInRegion @ 0x1400D1C40 (NtGdiRectInRegion.c)
 * Callees:
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x140029120 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x14002D0C0 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14002D140 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreRectInRegion(HRGN a1, _DWORD *a2)
{
  unsigned int v3; // esi
  struct REGION_CORE *v4; // rdx
  char *SystemArgument1; // r15
  REGION_CORE *v6; // rdi
  struct SCAN *pScan; // rax
  int v8; // r8d
  struct SCAN *v9; // rdx
  __int64 v10; // r9
  _DWORD *v11; // rax
  unsigned __int64 v12; // rcx
  int v13; // edi
  _QWORD v15[8]; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v15, a1, 1, 0);
  if ( a2 && v15[0] )
  {
    SystemArgument1 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1;
    v6 = (REGION_CORE *)((v15[0] + 24LL) & -(__int64)(v15[0] != 0LL));
    if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(SystemArgument1 + 8, 2LL);
      v13 = (*(__int64 (__fastcall **)(REGION_CORE *, _DWORD *))(*(_QWORD *)SystemArgument1 + 120LL))(v6, a2);
      ExReleasePushLockSharedEx(SystemArgument1 + 8, 2LL);
      KeLeaveCriticalRegion();
      if ( v13 == 2 )
LABEL_17:
        v3 = 1;
    }
    else if ( *a2 < *(_DWORD *)(((v15[0] + 24LL) & -(__int64)(v15[0] != 0LL)) + 0x24)
           && a2[2] > *(_DWORD *)(((v15[0] + 24LL) & -(__int64)(v15[0] != 0LL)) + 0x1C)
           && a2[1] < *(_DWORD *)(((v15[0] + 24LL) & -(__int64)(v15[0] != 0LL)) + 0x28)
           && a2[3] > *(_DWORD *)(((v15[0] + 24LL) & -(__int64)(v15[0] != 0LL)) + 0x20) )
    {
      pScan = REGION_CORE::get_pScan(v6, v4);
      v8 = *((_DWORD *)v6 + 6);
      v9 = pScan;
      if ( v8 )
      {
        do
        {
          if ( a2[1] < *((_DWORD *)v9 + 2) )
            break;
          v9 = (struct SCAN *)((char *)v9 + (unsigned int)(4 * *(_DWORD *)v9 + 16));
          --v8;
        }
        while ( v8 );
        while ( v8 && a2[3] > *((_DWORD *)v9 + 1) )
        {
          v10 = *(unsigned int *)v9;
          v11 = (_DWORD *)((char *)v9 + 12);
          v12 = (unsigned __int64)v9 + 4 * v10 + 12;
          if ( (unsigned __int64)v9 + 12 < v12 )
          {
            while ( *a2 >= v11[1] )
            {
              v11 += 2;
              if ( (unsigned __int64)v11 >= v12 )
                goto LABEL_15;
            }
            if ( a2[2] > *v11 )
              goto LABEL_17;
          }
LABEL_15:
          v9 = (struct SCAN *)((char *)v9 + (unsigned int)(4 * v10 + 16));
          --v8;
        }
      }
    }
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v15);
  return v3;
}
