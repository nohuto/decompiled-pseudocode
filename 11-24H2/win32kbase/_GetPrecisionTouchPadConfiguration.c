/*
 * XREFs of _GetPrecisionTouchPadConfiguration @ 0x140166620
 * Callers:
 *     xxxSystemParametersInfo @ 0x140173780 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140069000 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     IsLegacyTouchPad @ 0x140121938 (IsLegacyTouchPad.c)
 *     UpdateTPCurrentActiveState @ 0x14012BEC0 (UpdateTPCurrentActiveState.c)
 *     TryUpdatePTPConfigFromRegistry @ 0x140141C74 (TryUpdatePTPConfigFromRegistry.c)
 *     Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage @ 0x1401B17E8 (Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage.c)
 */

__int64 __fastcall GetPrecisionTouchPadConfiguration(unsigned int *a1)
{
  __int64 v2; // rcx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned int v8; // ecx
  __int64 v9; // rcx
  struct W32_PUSH_LOCK *v10; // rbx
  __int64 v11; // rcx
  __int64 i; // rbp
  int v13; // eax
  int v14; // edx
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // ecx
  unsigned int v18; // edx
  unsigned int v19; // r8d
  unsigned int v20; // ecx
  unsigned int v21; // edx
  unsigned int v22; // ecx
  unsigned int v23; // edx
  int v24; // eax
  unsigned int v25; // edx
  unsigned int v26; // edx
  unsigned int v27; // r8d
  unsigned int v28; // edx
  unsigned int v29; // r8d
  unsigned int v30; // edx
  unsigned int v31; // ecx
  unsigned int v32; // edx
  int v33; // eax
  unsigned int v34; // eax
  int v35; // ecx

  Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage();
  if ( a1 && *a1 > 3 )
    return 0LL;
  TryUpdatePTPConfigFromRegistry(v2);
  UserSessionState = W32GetUserSessionState(v4);
  v6 = UserSessionState + 16768;
  *(_DWORD *)(UserSessionState + 16772) = 0;
  *(_DWORD *)(UserSessionState + 16780) &= 0xFFFFFFFC;
  v8 = *(_DWORD *)(UserSessionState + 16780) & 0xFFFFFF97 ^ (8
                                                           * (unsigned __int8)*(_DWORD *)(W32GetUserSessionState(v7)
                                                                                        + 328)) & 8;
  *(_DWORD *)(v6 + 44) &= 0xFFFFFFF8;
  *(_DWORD *)(v6 + 12) = v8;
  Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage();
  *(_DWORD *)(v6 + 48) |= 1u;
  v10 = *(struct W32_PUSH_LOCK **)(*(_QWORD *)(W32GetUserSessionState(v9) + 16840) + 1232LL);
  W32AcquirePushLockSharedEx(v10, 0);
  for ( i = **(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v11) + 16840) + 1240LL); i; i = *(_QWORD *)(i + 56) )
  {
    LOBYTE(v13) = IsLegacyTouchPad(i);
    if ( v13 )
    {
      *(_DWORD *)(v6 + 12) |= 2u;
    }
    else if ( (*(_DWORD *)(i + 184) & 0x80u) != 0 && *(_DWORD *)(*(_QWORD *)(i + 456) + 24LL) == 7 )
    {
      v14 = *(_DWORD *)(v6 + 12) | 1;
      *(_DWORD *)(v6 + 12) = v14;
      v15 = *(_DWORD *)(v6 + 4);
      if ( v15 <= *(_DWORD *)(*(_QWORD *)(i + 456) + 776LL) - 1 )
        v15 = *(_DWORD *)(*(_QWORD *)(i + 456) + 776LL) - 1;
      *(_DWORD *)(v6 + 4) = v15;
      if ( (*(_DWORD *)(i + 184) & 0x400) != 0 )
      {
        v14 |= 0x20u;
        *(_DWORD *)(v6 + 12) = v14;
      }
      if ( (*(_DWORD *)(i + 184) & 0x800) != 0 )
        *(_DWORD *)(v6 + 12) = v14 | 0x40;
      if ( (*(_DWORD *)(i + 184) & 0x1000) != 0 )
        *(_DWORD *)(v6 + 44) |= 1u;
      if ( (*(_DWORD *)(i + 184) & 0x2000) != 0 )
        *(_DWORD *)(v6 + 44) |= 2u;
      if ( (*(_DWORD *)(i + 184) & 0x4000) != 0 )
        *(_DWORD *)(v6 + 44) |= 4u;
      Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage();
      if ( !*(_DWORD *)(*(_QWORD *)(i + 456) + 272LL) )
        *(_DWORD *)(v6 + 48) &= ~1u;
    }
  }
  ExReleasePushLockSharedEx(v10, 0LL);
  KeLeaveCriticalRegion();
  Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage();
  if ( (*(_DWORD *)(v6 + 12) & 1) == 0 )
    *(_DWORD *)(v6 + 48) &= ~1u;
  UpdateTPCurrentActiveState(v16);
  if ( a1 )
  {
    if ( *a1 )
    {
      Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage();
      v34 = *a1;
      *(_OWORD *)a1 = *(_OWORD *)v6;
      *((_OWORD *)a1 + 1) = *(_OWORD *)(v6 + 16);
      if ( v34 == 1 )
      {
        *((_QWORD *)a1 + 4) = *(_QWORD *)(v6 + 32);
        a1[10] = *(_DWORD *)(v6 + 40);
        *a1 = 1;
      }
      else
      {
        *((_OWORD *)a1 + 2) = *(_OWORD *)(v6 + 32);
        if ( v34 == 2 )
          *a1 = 2;
        else
          a1[12] = *(_DWORD *)(v6 + 48);
      }
      if ( *(_DWORD *)(v6 + 20) == 4 )
      {
        v35 = *(_DWORD *)(v6 + 12);
        if ( (v35 & 2) != 0 && (v35 & 1) == 0 )
          a1[5] = 3;
      }
    }
    else
    {
      a1[1] = *(_DWORD *)(v6 + 8);
      v17 = (*(int *)(v6 + 12) >> 3) ^ (a1[3] ^ (*(int *)(v6 + 12) >> 3)) & 0xFFFFFFFE;
      a1[3] = v17;
      v18 = (8 * *(_DWORD *)(v6 + 12)) ^ (v17 ^ (8 * *(_DWORD *)(v6 + 12))) & 0xFFFFFFEF;
      a1[3] = v18;
      v19 = (32 * *(_DWORD *)(v6 + 16)) ^ (v18 ^ (32 * *(_DWORD *)(v6 + 16))) & 0xFFFFFFBF;
      a1[3] = v19;
      v20 = (*(int *)(v6 + 12) >> 1) ^ (a1[5] ^ (*(int *)(v6 + 12) >> 1)) & 0xFFFFFFF7;
      a1[5] = v20;
      v21 = (4 * *(_DWORD *)(v6 + 12)) ^ (v20 ^ (4 * *(_DWORD *)(v6 + 12))) & 0xFFFFFFEF;
      a1[5] = v21;
      v19 &= 0xFFFFFFD9;
      v22 = v21 & 0xFFFFFFDF | (*(_DWORD *)(v6 + 4) >= 4u ? 0x20 : 0);
      a1[5] = v22;
      v23 = (4 * *(_DWORD *)(v6 + 12)) ^ (v22 ^ (4 * *(_DWORD *)(v6 + 12))) & 0xFFFFFF7F;
      a1[5] = v23;
      v24 = *(_DWORD *)(v6 + 12) << 19;
      a1[3] = v19;
      a1[5] = v24 ^ (v24 ^ v23) & 0xFDFFFFFF;
      a1[2] = *(_DWORD *)(v6 + 20);
      a1[4] = *(_DWORD *)(v6 + 24);
      *((_BYTE *)a1 + 21) = *(_BYTE *)(v6 + 28);
      *((_BYTE *)a1 + 22) = *(_BYTE *)(v6 + 32);
      v25 = *(_DWORD *)(v6 + 16) ^ (a1[5] ^ *(_DWORD *)(v6 + 16)) & 0xFFFFFFFE;
      a1[5] = v25;
      v26 = (*(_DWORD *)(v6 + 16) << 23) ^ ((*(_DWORD *)(v6 + 16) << 23) ^ v25) & 0xFEFFFFFF;
      a1[5] = v26;
      v27 = (*(_DWORD *)(v6 + 16) << 7) ^ ((*(_DWORD *)(v6 + 16) << 7) ^ v19) & 0xFFFFFDFF;
      a1[3] = v27;
      v28 = (*(int *)(v6 + 16) >> 1) ^ ((*(int *)(v6 + 16) >> 1) ^ v26) & 0xFFFFFFFB;
      a1[5] = v28;
      v29 = (*(_DWORD *)(v6 + 16) << 6) ^ ((*(_DWORD *)(v6 + 16) << 6) ^ v27) & 0xFFFFFBFF;
      a1[3] = v29;
      v30 = (*(int *)(v6 + 16) >> 4) ^ ((*(int *)(v6 + 16) >> 4) ^ v28) & 0xFFFFFFFD;
      a1[5] = v30;
      a1[5] = *(_DWORD *)(v6 + 16) ^ (v30 ^ *(_DWORD *)(v6 + 16)) & 0xFFFFFFBF;
      v31 = *(_DWORD *)(v6 + 16) ^ (v29 ^ *(_DWORD *)(v6 + 16)) & 0xFFFFFF7F;
      a1[3] = v31;
      v32 = *(_DWORD *)(v6 + 16) ^ (v31 ^ *(_DWORD *)(v6 + 16)) & 0xFFFFFEFF;
      a1[3] = v32;
      a1[3] = (*(int *)(v6 + 16) >> 6) ^ ((*(int *)(v6 + 16) >> 6) ^ v32) & 0xFFFFFFF7;
      if ( *(_DWORD *)(v6 + 20) == 4 )
      {
        v33 = *(_DWORD *)(v6 + 12);
        if ( (v33 & 2) != 0 && (v33 & 1) == 0 )
          a1[2] = 3;
      }
    }
  }
  return 1LL;
}
