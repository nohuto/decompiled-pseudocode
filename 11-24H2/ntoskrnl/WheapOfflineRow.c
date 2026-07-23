/*
 * XREFs of WheapOfflineRow @ 0x1407C8518
 * Callers:
 *     WheaPageOfflineAndPersist @ 0x1407C79A4 (WheaPageOfflineAndPersist.c)
 * Callees:
 *     WheaAttemptRowOffline @ 0x14065B230 (WheaAttemptRowOffline.c)
 *     WheaLogInternalEvent @ 0x14065C840 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     WheapAttemptPhysicalPageOffline @ 0x1407C7DBC (WheapAttemptPhysicalPageOffline.c)
 */

__int64 __fastcall WheapOfflineRow(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  int v6; // r15d
  __int64 v7; // rdx
  int MemoryDetails; // r14d
  __int128 v9; // xmm0
  int v10; // eax
  __int128 v11; // xmm1
  int v12; // eax
  __int64 v13; // rsi
  __int64 v15; // [rsp+40h] [rbp-69h] BYREF
  __int64 v16; // [rsp+48h] [rbp-61h] BYREF
  __int128 v17; // [rsp+50h] [rbp-59h] BYREF
  char v18; // [rsp+60h] [rbp-49h]
  __int128 v19; // [rsp+68h] [rbp-41h] BYREF
  __int128 v20; // [rsp+78h] [rbp-31h]
  int v21; // [rsp+88h] [rbp-21h]
  _DWORD Src[8]; // [rsp+90h] [rbp-19h] BYREF
  __int64 v23; // [rsp+B0h] [rbp+7h]
  __int64 v24; // [rsp+B8h] [rbp+Fh]
  int v25; // [rsp+C0h] [rbp+17h]
  int v26; // [rsp+C4h] [rbp+1Bh]
  int v27; // [rsp+C8h] [rbp+1Fh]

  v15 = 0LL;
  v16 = 0LL;
  v3 = -1LL;
  v21 = 0;
  v19 = 0LL;
  v4 = -1LL;
  v18 = 0;
  v20 = 0LL;
  v6 = 0;
  v17 = 0LL;
  MemoryDetails = PshedGetMemoryDetails(&v17);
  if ( MemoryDetails < 0 )
  {
    v6 = 1;
    goto LABEL_37;
  }
  if ( ((*(_DWORD *)((char *)&v17 + 2) >> 1) & 1) != 0 && BYTE8(v17) )
  {
    v6 = 5;
LABEL_6:
    MemoryDetails = -1073741637;
    goto LABEL_37;
  }
  v7 = 4LL;
  if ( (BYTE2(v17) & 4) == 0
    || (BYTE2(v17) & 8) == 0
    || ((*(_DWORD *)((char *)&v17 + 2) >> 1) & 1) == 0
    || (BYTE2(v17) & 1) == 0 )
  {
    v6 = 7;
    goto LABEL_36;
  }
  v9 = *(_OWORD *)a1;
  v10 = *(_DWORD *)(a1 + 32);
  v11 = *(_OWORD *)(a1 + 16);
  v21 = v10;
  v19 = v9;
  v20 = v11;
  if ( WORD3(v17) == 4 )
  {
    if ( v10 != 1 )
    {
LABEL_13:
      v6 = 10;
LABEL_36:
      MemoryDetails = -1073741823;
      goto LABEL_37;
    }
    LODWORD(v20) = 0;
    HIDWORD(v20) |= 0x400u;
  }
  else
  {
    if ( WORD3(v17) != 5 )
      goto LABEL_34;
    if ( v10 != 3 )
      goto LABEL_13;
    LODWORD(v20) = 0;
    HIDWORD(v20) |= 0x800u;
  }
  MemoryDetails = PshedTranslateDimmAddress((char *)&v19 + 4, &v15);
  if ( MemoryDetails < 0 )
  {
    v6 = 3;
    goto LABEL_37;
  }
  if ( WORD3(v17) == 4 )
  {
    v12 = *(unsigned __int16 *)((char *)&v17 + 9) - 1;
    HIDWORD(v20) |= 0x400u;
    goto LABEL_24;
  }
  if ( WORD3(v17) != 5 )
  {
LABEL_34:
    v6 = 9;
    goto LABEL_6;
  }
  v12 = *(unsigned __int16 *)((char *)&v17 + 9) - 1;
  HIDWORD(v20) |= 0x800u;
LABEL_24:
  LODWORD(v20) = v12;
  MemoryDetails = PshedTranslateDimmAddress((char *)&v19 + 4, &v16);
  if ( MemoryDetails < 0 )
  {
    v6 = 4;
    goto LABEL_37;
  }
  v4 = v16 >> 12;
  v3 = v15 >> 12;
  if ( (v16 >> 12) - (v15 >> 12) + 1 > *(unsigned __int16 *)((char *)&v17 + 11) )
  {
    v6 = 6;
    goto LABEL_36;
  }
  if ( *(_BYTE *)off_140E09848 )
  {
    WheaAttemptRowOffline(v15 >> 12, (__int64)&v19, v4 - v3 + 1, a2);
  }
  else if ( v3 <= v4 )
  {
    v13 = v15 >> 12;
    do
    {
      WheapAttemptPhysicalPageOffline((LARGE_INTEGER)(v13 << 12), v13, &v19, 1, 0, 0, 0, a2);
      ++v13;
    }
    while ( v13 <= v4 );
  }
LABEL_37:
  Src[3] = 0;
  v24 = v4;
  v25 = v4 - v3;
  Src[0] = 1733060695;
  Src[1] = 1;
  Src[2] = 60;
  Src[5] = -2147483548;
  Src[4] = 1280201291;
  Src[6] = 2;
  Src[7] = 28;
  v23 = v3;
  v26 = MemoryDetails;
  v27 = v6;
  WheaLogInternalEvent(Src, v7);
  return (unsigned int)MemoryDetails;
}
