/*
 * XREFs of ?GetRegionData@CRegion@@UEAAJPEAKPEAUtagRECT@@PEAW4Type@IRegion@@@Z @ 0x14007BAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x140029144 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?RegionCore_numRect@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x14007BE84 (-RegionCore_numRect@Win32kRS@@YAKPEBVREGION_CORE@@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CRegion::GetRegionData(
        CRegion *this,
        const struct REGION_CORE *a2,
        struct tagRECT *a3,
        enum IRegion::Type *a4)
{
  __int64 v4; // rbp
  unsigned int v5; // esi
  int v8; // r9d
  unsigned int v9; // r10d
  int v10; // r9d
  char *SystemArgument1; // r14
  unsigned int **v12; // rdi
  unsigned int v13; // eax
  unsigned int i; // edx
  int v16; // ebx
  unsigned int *v17; // rdx
  int v18; // r9d
  unsigned int v19; // ebx
  unsigned __int64 v20; // r10
  int v21; // r11d
  struct tagRECT *v22; // r8
  __int64 v23; // rcx
  unsigned int *v24; // r8
  struct tagRECT v25; // [rsp+20h] [rbp-28h]

  v4 = *(unsigned int *)a2;
  v5 = 0;
  *(_DWORD *)a4 = *((_DWORD *)this + 3);
  v8 = *((_DWORD *)this + 3);
  v9 = -1073741823;
  if ( v8 && (v10 = v8 - 1) != 0 )
  {
    if ( v10 == 1 )
    {
      SystemArgument1 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1;
      v12 = (unsigned int **)*((_QWORD *)this + 2);
      if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
      {
        v13 = Win32kRS::RegionCore_numRect(*((Win32kRS **)this + 2), a2);
        SystemArgument1 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1;
        i = v13;
      }
      else
      {
        v16 = *((_DWORD *)v12 + 6);
        v24 = *v12;
        for ( i = 0; v16; --v16 )
        {
          i += *v24 >> 1;
          v24 += *v24 + 4;
        }
      }
      if ( i > (unsigned int)v4 )
      {
        v9 = -1073741789;
      }
      else
      {
        if ( SystemArgument1 )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockSharedEx(SystemArgument1 + 8, 2LL);
          LODWORD(v12) = (*(__int64 (__fastcall **)(unsigned int **, struct tagRECT *, __int64))(*(_QWORD *)SystemArgument1
                                                                                               + 296LL))(
                           v12,
                           a3,
                           v4);
          ExReleasePushLockSharedEx(SystemArgument1 + 8, 2LL);
          KeLeaveCriticalRegion();
        }
        else
        {
          v17 = *v12;
          v18 = *((_DWORD *)v12 + 6);
          v12 = 0LL;
          while ( v18 )
          {
            --v18;
            v19 = 0;
            v25.top = v17[1];
            v20 = (unsigned __int64)*v17 >> 1;
            v25.bottom = v17[2];
            if ( v20 >= v4 - (__int64)v12 )
              v20 = v4 - (_QWORD)v12;
            if ( v20 )
            {
              v21 = 0;
              v22 = &a3[(_QWORD)v12];
              do
              {
                v23 = v21;
                ++v19;
                v12 = (unsigned int **)((char *)v12 + 1);
                v21 += 2;
                v25.left = v17[v23 + 3];
                v25.right = v17[v23 + 4];
                *v22++ = v25;
              }
              while ( v19 < v20 );
            }
            v17 += *v17 + 4;
          }
        }
        v9 = 0;
        v5 = (unsigned int)v12;
      }
      *(_DWORD *)a2 = v5;
    }
  }
  else
  {
    *(_DWORD *)a2 = 0;
    return 0;
  }
  return v9;
}
