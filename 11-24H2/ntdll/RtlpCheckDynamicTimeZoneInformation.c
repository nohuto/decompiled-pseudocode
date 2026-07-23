/*
 * XREFs of RtlpCheckDynamicTimeZoneInformation @ 0x180082570
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x180082744 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     RtlpFindRegTziForCurrentYear @ 0x1800838E4 (RtlpFindRegTziForCurrentYear.c)
 *     RtlpRegTziFormatToTzi @ 0x180083B5C (RtlpRegTziFormatToTzi.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memcmp @ 0x180165A90 (memcmp.c)
 */

char __fastcall RtlpCheckDynamicTimeZoneInformation(_OWORD *Buf2, unsigned __int16 a2)
{
  char v4; // di
  __int128 v6; // xmm1
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  char *v22; // rbx
  __int64 v23; // rax
  __int128 v24; // xmm1
  HANDLE Handle; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v26[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+48h] [rbp-B8h]
  int v28; // [rsp+50h] [rbp-B0h]
  __int128 Buf1; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v30; // [rsp+70h] [rbp-90h]
  __int128 v31; // [rsp+80h] [rbp-80h]
  __int128 v32; // [rsp+90h] [rbp-70h]
  __int128 v33; // [rsp+A0h] [rbp-60h]
  __int128 v34; // [rsp+B0h] [rbp-50h]
  __int128 v35; // [rsp+C0h] [rbp-40h]
  __int128 v36; // [rsp+D0h] [rbp-30h]
  __int128 v37; // [rsp+E0h] [rbp-20h]
  __int128 v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+100h] [rbp+0h]
  int v40; // [rsp+108h] [rbp+8h]

  v27 = 0LL;
  v28 = 0;
  v4 = 0;
  Handle = 0LL;
  memset(v26, 0, sizeof(v26));
  if ( (int)RtlpGetDynamicTimeZoneInfoHandle((char *)Buf2 + 172, &Handle) >= 0 )
  {
    if ( (int)RtlpFindRegTziForCurrentYear(v26, Handle, a2) >= 0 )
    {
      v6 = Buf2[1];
      Buf1 = *Buf2;
      v7 = *((_QWORD *)Buf2 + 20);
      v8 = Buf2[2];
      v30 = v6;
      v9 = Buf2[3];
      v31 = v8;
      v10 = Buf2[4];
      v32 = v9;
      v11 = Buf2[5];
      v33 = v10;
      v12 = Buf2[6];
      v34 = v11;
      v13 = Buf2[8];
      v35 = v12;
      v36 = Buf2[7];
      v14 = Buf2[9];
      v37 = v13;
      v38 = v14;
      v39 = v7;
      v40 = *((_DWORD *)Buf2 + 42);
      RtlpRegTziFormatToTzi(&Buf1, v26);
      if ( memcmp(&Buf1, Buf2, 0xACuLL) )
      {
        v4 = 1;
        v15 = v30;
        *Buf2 = Buf1;
        v16 = v31;
        Buf2[1] = v15;
        v17 = v32;
        Buf2[2] = v16;
        v18 = v33;
        Buf2[3] = v17;
        v19 = v34;
        Buf2[4] = v18;
        v20 = v35;
        Buf2[5] = v19;
        v21 = v36;
        Buf2[6] = v20;
        v22 = (char *)(Buf2 + 8);
        *((_OWORD *)v22 - 1) = v21;
        v23 = v39;
        v24 = v38;
        *(_OWORD *)v22 = v37;
        *((_OWORD *)v22 + 1) = v24;
        *((_QWORD *)v22 + 4) = v23;
        *((_DWORD *)v22 + 10) = v40;
      }
    }
    NtClose(Handle);
  }
  return v4;
}
