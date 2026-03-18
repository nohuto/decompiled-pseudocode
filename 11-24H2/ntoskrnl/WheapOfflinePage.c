/*
 * XREFs of WheapOfflinePage @ 0x1407C7F20
 * Callers:
 *     WheaPageOfflineAndPersist @ 0x1407C7504 (WheaPageOfflineAndPersist.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x14065E070 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     WheapAttemptPhysicalPageOffline @ 0x1407C791C (WheapAttemptPhysicalPageOffline.c)
 */

__int64 __fastcall WheapOfflinePage(__int64 a1, __int64 a2)
{
  int v4; // edi
  int MemoryDetails; // ebx
  LARGE_INTEGER v7; // [rsp+40h] [rbp-19h] BYREF
  __int128 v8; // [rsp+48h] [rbp-11h] BYREF
  char v9; // [rsp+58h] [rbp-1h]
  _DWORD Src[8]; // [rsp+60h] [rbp+7h] BYREF
  unsigned __int64 v11; // [rsp+80h] [rbp+27h]
  int v12; // [rsp+88h] [rbp+2Fh]
  int v13; // [rsp+8Ch] [rbp+33h]

  v7.QuadPart = -1LL;
  v8 = 0LL;
  v9 = 0;
  v4 = 0;
  MemoryDetails = PshedGetMemoryDetails(&v8);
  if ( MemoryDetails < 0 )
  {
    v4 = 1;
    goto LABEL_14;
  }
  if ( (BYTE2(v8) & 1) == 0 )
  {
    v4 = 7;
LABEL_5:
    MemoryDetails = -1073741823;
    goto LABEL_14;
  }
  if ( WORD3(v8) == 4 && *(_DWORD *)(a1 + 32) || WORD3(v8) == 5 && *(_DWORD *)(a1 + 32) != 2 )
  {
    v4 = 10;
    goto LABEL_5;
  }
  MemoryDetails = PshedTranslateDimmAddress(a1 + 4, &v7);
  if ( MemoryDetails >= 0 )
    WheapAttemptPhysicalPageOffline(v7, v7.QuadPart >> 12, (__int128 *)a1, 1, 0, 0, 0, a2);
  else
    v4 = 2;
LABEL_14:
  Src[3] = 0;
  v11 = (unsigned __int64)v7.QuadPart >> 12;
  Src[0] = 1733060695;
  Src[1] = 1;
  Src[2] = 48;
  Src[5] = -2147483547;
  Src[4] = 1280201291;
  Src[6] = 2;
  Src[7] = 16;
  v12 = MemoryDetails;
  v13 = v4;
  WheaLogInternalEvent(Src);
  return (unsigned int)MemoryDetails;
}
