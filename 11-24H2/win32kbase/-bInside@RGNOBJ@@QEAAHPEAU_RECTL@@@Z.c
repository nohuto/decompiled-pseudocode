/*
 * XREFs of ?bInside@RGNOBJ@@QEAAHPEAU_RECTL@@@Z @ 0x1400DB6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x140029120 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJ::bInside(RGNOBJ *this, struct _RECTL *a2)
{
  __int64 v2; // rax
  char *SystemArgument1; // r14
  __int64 v5; // rcx
  __int64 v6; // rax
  REGION_CORE *v7; // rdi
  struct SCAN *pScan; // rax
  int v9; // r8d
  struct SCAN *v10; // rdx
  __int64 v11; // r9
  LONG *v12; // rax
  unsigned __int64 v13; // rcx
  unsigned int v14; // edi

  v2 = *(_QWORD *)this;
  SystemArgument1 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1;
  v5 = *(_QWORD *)this + 24LL;
  v6 = -v2;
  v7 = (REGION_CORE *)(v5 & -(__int64)(v6 != 0));
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(SystemArgument1 + 8, 2LL);
    v14 = (*(__int64 (__fastcall **)(REGION_CORE *, struct _RECTL *))(*(_QWORD *)SystemArgument1 + 120LL))(v7, a2);
    ExReleasePushLockSharedEx(SystemArgument1 + 8, 2LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    if ( a2->left < *(_DWORD *)((v5 & -(__int64)(v6 != 0)) + 0x24)
      && a2->right > *(_DWORD *)((v5 & -(__int64)(v6 != 0)) + 0x1C)
      && a2->top < *(_DWORD *)((v5 & -(__int64)(v6 != 0)) + 0x28)
      && a2->bottom > *(_DWORD *)((v5 & -(__int64)(v6 != 0)) + 0x20) )
    {
      pScan = REGION_CORE::get_pScan(v7, (struct REGION_CORE *)a2);
      v9 = *((_DWORD *)v7 + 6);
      v10 = pScan;
      if ( v9 )
      {
        do
        {
          if ( a2->top < *((_DWORD *)v10 + 2) )
            break;
          v10 = (struct SCAN *)((char *)v10 + (unsigned int)(4 * *(_DWORD *)v10 + 16));
          --v9;
        }
        while ( v9 );
        while ( v9 && a2->bottom > *((_DWORD *)v10 + 1) )
        {
          v11 = *(unsigned int *)v10;
          v12 = (LONG *)((char *)v10 + 12);
          v13 = (unsigned __int64)v10 + 4 * v11 + 12;
          if ( (unsigned __int64)v10 + 12 < v13 )
          {
            while ( a2->left >= v12[1] )
            {
              v12 += 2;
              if ( (unsigned __int64)v12 >= v13 )
                goto LABEL_16;
            }
            if ( a2->right > *v12 )
              return 2;
          }
LABEL_16:
          v10 = (struct SCAN *)((char *)v10 + (unsigned int)(4 * v11 + 16));
          --v9;
        }
      }
    }
    return 1;
  }
  return v14;
}
