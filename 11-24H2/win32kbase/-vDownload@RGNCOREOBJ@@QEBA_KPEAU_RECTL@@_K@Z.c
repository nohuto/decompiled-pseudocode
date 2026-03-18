/*
 * XREFs of ?vDownload@RGNCOREOBJ@@QEBA_KPEAU_RECTL@@_K@Z @ 0x1400C2864
 * Callers:
 *     ??$GrepGetRegionData@$0A@VRGNCOREOBJ@@@@YAKAEAVRGNCOREOBJ@@KPEAU_RGNDATA@@@Z @ 0x1401CF260 (--$GrepGetRegionData@$0A@VRGNCOREOBJ@@@@YAKAEAVRGNCOREOBJ@@KPEAU_RGNDATA@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNCOREOBJ::vDownload(unsigned int ***this, struct _RECTL *a2, __int64 a3)
{
  char *SystemArgument1; // rdi
  unsigned int **v5; // rsi
  unsigned int *v7; // r8
  __int64 v8; // r9
  int v9; // r10d
  unsigned __int64 v10; // r11
  unsigned int v11; // edi
  int v12; // ebx
  struct _RECTL *v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // rax
  char *v17; // rcx
  __int64 v18; // rdi
  struct _RECTL v19; // [rsp+20h] [rbp-18h]

  SystemArgument1 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1;
  v5 = *this;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(SystemArgument1 + 8, 2LL);
    v16 = (*(__int64 (__fastcall **)(unsigned int **, struct _RECTL *, __int64))(*(_QWORD *)SystemArgument1 + 296LL))(
            v5,
            a2,
            a3);
    v17 = SystemArgument1 + 8;
    v18 = v16;
    ExReleasePushLockSharedEx(v17, 2LL);
    KeLeaveCriticalRegion();
    return v18;
  }
  else
  {
    v7 = *v5;
    v8 = 0LL;
    v9 = *((_DWORD *)*this + 6);
    while ( v9 )
    {
      --v9;
      v19.top = v7[1];
      v10 = (unsigned __int64)*v7 >> 1;
      v19.bottom = v7[2];
      if ( v10 >= a3 - v8 )
        v10 = a3 - v8;
      v11 = 0;
      if ( v10 )
      {
        v12 = 0;
        v13 = &a2[v8];
        do
        {
          v14 = v12;
          ++v11;
          ++v8;
          v12 += 2;
          v19.left = v7[v14 + 3];
          v19.right = v7[v14 + 4];
          *v13++ = v19;
        }
        while ( v11 < v10 );
      }
      v7 += *v7 + 4;
    }
    return v8;
  }
}
