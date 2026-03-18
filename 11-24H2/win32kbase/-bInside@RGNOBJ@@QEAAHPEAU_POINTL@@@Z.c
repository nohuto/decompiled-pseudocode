/*
 * XREFs of ?bInside@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1400CFDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x140029144 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJ::bInside(RGNOBJ *this, struct _POINTL *a2)
{
  char *SystemArgument1; // r15
  Win32kRS *v4; // rdi
  LONG y; // ecx
  unsigned int v6; // esi
  struct SCAN *pScan_mut; // rdx
  int v8; // r9d
  LONG v10; // eax
  int v11; // r8d
  __int64 v12; // rcx

  SystemArgument1 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1;
  v4 = (Win32kRS *)((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL));
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(SystemArgument1 + 8, 2LL);
    v6 = (*(__int64 (__fastcall **)(Win32kRS *, struct _POINTL *))(*(_QWORD *)SystemArgument1 + 112LL))(v4, a2);
    ExReleasePushLockSharedEx(SystemArgument1 + 8, 2LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    if ( a2->x < *(_DWORD *)(((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL)) + 0x1C) )
      return 1;
    y = a2->y;
    if ( y >= *((_DWORD *)v4 + 10) || a2->x >= *((_DWORD *)v4 + 9) || y < *((_DWORD *)v4 + 8) )
    {
      return 1;
    }
    else
    {
      v6 = LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) + 1;
      if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
        pScan_mut = Win32kRS::RegionCore_get_pScan_mut(v4, (struct REGION_CORE *)a2);
      else
        pScan_mut = *(struct SCAN **)v4;
      v8 = *((_DWORD *)v4 + 6);
      while ( v8-- )
      {
        v10 = a2->y;
        if ( *((_DWORD *)pScan_mut + 1) > v10 )
          break;
        if ( *((_DWORD *)pScan_mut + 2) > v10 )
        {
          v11 = 0;
          while ( v11 != *(_DWORD *)pScan_mut )
          {
            v12 = v11++;
            if ( *((_DWORD *)pScan_mut + v12 + 3) > a2->x )
              return v6;
            v6 ^= 3u;
          }
        }
        pScan_mut = (struct SCAN *)((char *)pScan_mut + (unsigned int)(4 * *(_DWORD *)pScan_mut + 16));
      }
    }
  }
  return v6;
}
