/*
 * XREFs of ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1401169EC
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401C6C88 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     DrvGetDeviceFromName @ 0x140017410 (DrvGetDeviceFromName.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     PALLOCMEM @ 0x14008F85C (PALLOCMEM.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x140116CF0 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x140145934 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 */

__int64 __fastcall CheckAndNotifyDualView(const UNICODE_STRING *a1, __int64 a2)
{
  int v4; // ebx
  int v5; // r12d
  int v6; // r14d
  __int64 v7; // rsi
  __int64 v8; // rcx
  unsigned int v10; // ebx
  __int64 DeviceFromName; // rax
  struct tagGRAPHICS_DEVICE *v12; // r14
  bool v13; // zf
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rbx
  unsigned int v19; // ebp
  unsigned __int16 v20; // dx
  unsigned int v21; // eax
  __int64 v22; // r8
  __int64 v23; // rax
  BOOL v24; // eax
  _DWORD *v25; // rcx
  __int64 v26; // rdx
  __int64 i; // rax
  int v28; // ecx
  unsigned int j; // edx
  __int64 v30; // r15
  unsigned int *v31; // rsi
  unsigned int v32[18]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v33; // [rsp+80h] [rbp+18h] BYREF
  int v34; // [rsp+88h] [rbp+20h]

  v32[0] = 0;
  v33 = 0;
  v4 = 0;
  v34 = 0;
  v5 = 0;
  v6 = 1;
  v7 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v8 = *(_QWORD *)(v7 + 1096);
  if ( !v8 )
    return 0LL;
  do
  {
    v13 = (*(_DWORD *)(v8 + 160) & 0x20800000) == 0;
    v14 = v4 + 1;
    v8 = *(_QWORD *)(v8 + 128);
    if ( v13 )
      v14 = v4;
    v4 = v14;
  }
  while ( v8 );
  if ( !v14 )
    return 0LL;
  v17 = PALLOCMEM((unsigned int)(16 * v14), 0x73726447u);
  if ( !v17 )
    return 3LL;
  v18 = *(_QWORD *)(v7 + 1096);
  v19 = 0;
  while ( 1 )
  {
    if ( !v18 )
    {
      if ( v6 )
      {
        for ( i = *(_QWORD *)(v7 + 1096); i; i = *(_QWORD *)(i + 128) )
        {
          v28 = *(_DWORD *)(i + 160);
          if ( (v28 & 0x2000008) == 0 )
          {
            v10 = 1;
            if ( (v28 & 0x800000) != 0 )
              *(_DWORD *)(v17 + 12) = 1;
            goto LABEL_5;
          }
        }
      }
      v10 = 1;
LABEL_5:
      if ( a1 )
      {
        DeviceFromName = DrvGetDeviceFromName(a1, v15);
        v12 = (struct tagGRAPHICS_DEVICE *)DeviceFromName;
        if ( DeviceFromName )
        {
          for ( j = 0; j < v19; ++j )
          {
            if ( DeviceFromName == *(_QWORD *)(v17 + 16LL * j) )
            {
              if ( *(_DWORD *)(v17 + 16LL * j + 8) == *(_DWORD *)(v17 + 16LL * j + 12) && a2 )
                break;
              v30 = v19;
              v5 = 1;
              v31 = (unsigned int *)(v17 + 8);
              v10 = 3;
              if ( !a2 )
                goto LABEL_8;
              if ( v19 )
              {
                v10 = 1;
                do
                {
                  DrvUpdateAttachFlag(v12, *v31);
                  v31 += 4;
                  --v30;
                }
                while ( v30 );
                goto LABEL_10;
              }
              goto LABEL_13;
            }
          }
        }
      }
      else if ( v19 )
      {
        v25 = (_DWORD *)(v17 + 8);
        v26 = v19;
        do
        {
          if ( *v25 != v25[1] || !a2 )
            v5 = 1;
          v25 += 4;
          --v26;
        }
        while ( v26 );
        if ( v5 )
        {
LABEL_13:
          GreDeleteFastMutex((char *)v17);
          return v10;
        }
      }
      v10 = 0;
LABEL_8:
      if ( v19 )
      {
        v10 = 1;
LABEL_10:
        if ( !v5 && !v34 )
          v10 = 2;
      }
      goto LABEL_13;
    }
    v20 = *(_DWORD *)(v7 + 1128) ? -1 : *(_WORD *)(W32GetUserSessionState(v16) + 69008);
    if ( !(unsigned int)GetPrimaryAttachFlags((struct tagGRAPHICS_DEVICE *)v18, v20, v32, &v33) )
      break;
    v15 = 0LL;
    if ( v33 )
      v6 = 0;
    if ( a2 )
    {
      v21 = *(_DWORD *)(a2 + 20);
      if ( v21 )
      {
        v16 = a2 + 40;
        v22 = v21;
        do
        {
          v23 = *(_QWORD *)v16;
          v16 += 56LL;
          if ( *(_QWORD *)(v23 + 2568) == v18 )
            v15 = 1LL;
          --v22;
        }
        while ( v22 );
      }
      v24 = v33 && !(_DWORD)v15;
      v34 |= v24;
    }
    if ( (*(_DWORD *)(v18 + 160) & 0x2800008) == 0x800000 )
    {
      v16 = 2LL * v19;
      *(_QWORD *)(v17 + 8 * v16) = v18;
      *(_DWORD *)(v17 + 8 * v16 + 12) = v33 != 0;
      ++v19;
      *(_DWORD *)(v17 + 8 * v16 + 8) = v15 != 0;
    }
    v18 = *(_QWORD *)(v18 + 128);
  }
  GreDeleteFastMutex((char *)v17);
  return 3LL;
}
