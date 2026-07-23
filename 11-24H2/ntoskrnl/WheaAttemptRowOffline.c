/*
 * XREFs of WheaAttemptRowOffline @ 0x14065B230
 * Callers:
 *     WheapOfflineRow @ 0x1407C8518 (WheapOfflineRow.c)
 *     WheapExecuteRowFailureCheck @ 0x1407C93D8 (WheapExecuteRowFailureCheck.c)
 * Callees:
 *     WheaPersistBadPageToBcd @ 0x14065B5B0 (WheaPersistBadPageToBcd.c)
 *     WheaPersistBadPageToRegistry @ 0x14065B76C (WheaPersistBadPageToRegistry.c)
 *     WheaLogInternalEvent @ 0x14065C840 (WheaLogInternalEvent.c)
 *     MmGetPageBadStatus @ 0x140675C80 (MmGetPageBadStatus.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140675D20 (MmMarkPhysicalMemoryAsBad.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     WheaAddressTranslateAndAddToDefectList @ 0x1407C75FC (WheaAddressTranslateAndAddToDefectList.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x1407C8038 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheapLogPageOfflineAttemptEvent @ 0x1407C8A78 (WheapLogPageOfflineAttemptEvent.c)
 */

__int64 __fastcall WheaAttemptRowOffline(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  _BYTE *v4; // rdi
  __int64 v5; // r12
  __int64 v7; // r13
  __int64 v9; // rsi
  __int64 v10; // r13
  char *v11; // rbx
  int PageBadStatus; // eax
  int v13; // eax
  bool v14; // sf
  char v15; // al
  char v16; // al
  __int64 result; // rax
  unsigned int i; // ebx
  char v19; // r14
  int v20; // edx
  int v21; // r9d
  __int64 v22; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-31h]
  __int64 v24; // [rsp+40h] [rbp-29h] BYREF
  __int64 v25; // [rsp+48h] [rbp-21h]
  __int128 Src; // [rsp+50h] [rbp-19h] BYREF
  __int128 v27; // [rsp+60h] [rbp-9h]
  _TBYTE v28; // [rsp+70h] [rbp+7h]

  v22 = 0LL;
  v4 = (_BYTE *)(a4 + 49);
  v5 = a3;
  v23 = a3;
  v25 = a2;
  v28 = 0.0;
  v7 = a2;
  Src = 0LL;
  v27 = 0LL;
  if ( a3 )
  {
    v9 = a1 << 12;
    v10 = ~a4;
    v11 = (char *)(a4 + 49);
    do
    {
      v22 = v9;
      PageBadStatus = MmGetPageBadStatus(&v22);
      *(_DWORD *)(v11 - 9) = PageBadStatus;
      if ( !PageBadStatus )
      {
        v22 |= 1uLL;
        v24 = 4096LL;
        v13 = MmMarkPhysicalMemoryAsBad(&v22, &v24);
        v14 = v13 < 0;
        v15 = v13 == 0;
        if ( v14 )
          v15 = -1;
        *v11 = v15;
        if ( v15 )
        {
          v16 = -64;
        }
        else
        {
          v11[v10 + a4] = 0;
          v16 = 64;
        }
        *(v11 - 1) = v16;
      }
      v9 += 4096LL;
      v11 += 24;
      --v5;
    }
    while ( v5 );
    LODWORD(v5) = v23;
    v7 = v25;
  }
  result = WheapCallInUsePageNotificationCallbacks(a1, 0LL, (unsigned int)v5, a4);
  for ( i = 0; i < (unsigned int)v5; v4 += 24 )
  {
    if ( *(int *)(v4 - 9) >= 0 )
    {
      BYTE4(v28) = *v4;
      *(_DWORD *)((char *)&v28 + 5) = a1 + i;
      *(_QWORD *)&Src = 0x1674C6857LL;
      *((_QWORD *)&Src + 1) = 42LL;
      *(_QWORD *)&v27 = 0x800000064C4E524BuLL;
      *((_QWORD *)&v27 + 1) = 0xA00000002LL;
      LODWORD(v28) = 1;
      HIBYTE(v28) = 1;
      WheaLogInternalEvent(&Src);
      v19 = 0;
      if ( *(_BYTE *)off_140E095C8 )
      {
        if ( *(_DWORD *)off_140E09788 == 1 )
        {
          WheaPersistBadPageToBcd(a1);
        }
        else if ( *(_DWORD *)off_140E09788 == 2 )
        {
          WheaPersistBadPageToRegistry(a1 + i);
        }
        v19 = 1;
      }
      v22 = (a1 + i) << 12;
      WheaAddressTranslateAndAddToDefectList(&v22, v7);
      if ( *v4 == 0xFF )
        LOBYTE(v20) = -1;
      else
        LOBYTE(v20) = *v4 == 0;
      LOBYTE(v21) = v19;
      result = WheapLogPageOfflineAttemptEvent(((unsigned int)a1 + i) << 12, v20, 0, v21, 0);
    }
    ++i;
  }
  return result;
}
