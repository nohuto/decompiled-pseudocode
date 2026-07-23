/*
 * XREFs of WheaPageOfflineAndPersist @ 0x1407C79A4
 * Callers:
 *     WheapWmiExecuteMethod @ 0x14065DB18 (WheapWmiExecuteMethod.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     WheapAttemptPhysicalPageOffline @ 0x1407C7DBC (WheapAttemptPhysicalPageOffline.c)
 *     WheapOfflinePage @ 0x1407C83C0 (WheapOfflinePage.c)
 *     WheapOfflineRow @ 0x1407C8518 (WheapOfflineRow.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WheaPageOfflineAndPersist(__int64 a1)
{
  unsigned __int8 v2; // cl
  unsigned int v3; // ebx
  void *Pool2; // rdi
  int v5; // r9d
  char v6; // al
  int v7; // ecx
  __int128 v8; // xmm1
  unsigned int v9; // eax
  __int128 v11; // [rsp+40h] [rbp-38h] BYREF
  __int128 v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+60h] [rbp-18h]

  v13 = 0;
  v2 = *(_BYTE *)(a1 + 52);
  v3 = 0;
  v11 = 0LL;
  v12 = 0LL;
  if ( (v2 & 3) == 0 || (v2 & 3) == 3 || v2 >= 4u )
    return (unsigned int)-1073741811;
  Pool2 = (void *)ExAllocatePool2(0x100uLL, 0x1828uLL, 0x61656857u);
  if ( Pool2 )
  {
    v6 = *(_BYTE *)(a1 + 52) & 3;
    if ( v6 == 2 )
    {
      v7 = *(_DWORD *)(a1 + 48);
      v13 = v7;
      v8 = *(_OWORD *)(a1 + 32);
      v11 = *(_OWORD *)(a1 + 16);
      v12 = v8;
      if ( !v7 )
        goto LABEL_10;
      if ( v7 == 1 )
        goto LABEL_13;
      if ( (unsigned int)(v7 - 2) <= 1 )
      {
LABEL_10:
        if ( ((v7 - 1) & 0xFFFFFFFD) != 0 )
        {
          if ( (v7 & 0xFFFFFFFD) != 0 )
          {
LABEL_18:
            ExFreePoolWithTag(Pool2, 0x61656857u);
            return v3;
          }
          v9 = WheapOfflinePage(&v11, Pool2);
LABEL_14:
          v3 = v9;
          goto LABEL_18;
        }
LABEL_13:
        v9 = WheapOfflineRow(&v11, Pool2);
        goto LABEL_14;
      }
    }
    else if ( v6 == 1 )
    {
      LOBYTE(v5) = 1;
      WheapAttemptPhysicalPageOffline(*(_QWORD *)(a1 + 8), *(__int64 *)(a1 + 8) >> 12, 0, v5, 0, 0, 0, (__int64)Pool2);
      goto LABEL_18;
    }
    v3 = -1073741811;
    goto LABEL_18;
  }
  return (unsigned int)-1073741670;
}
