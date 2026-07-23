/*
 * XREFs of RtlpCheckDynamicTimeZoneInformation @ 0x14077300C
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140993940 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     RtlpFindRegTziForCurrentYear @ 0x1405DD364 (RtlpFindRegTziForCurrentYear.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x140773248 (RtlpGetDynamicTimeZoneInfoHandle.c)
 */

char __fastcall RtlpCheckDynamicTimeZoneInformation(char *Buf2, __int16 a2)
{
  char v4; // di
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  char *v19; // rbx
  __int64 v20; // rax
  __int128 v21; // xmm1
  HANDLE Handle; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v24; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v25; // [rsp+38h] [rbp-C8h]
  __int64 v26; // [rsp+48h] [rbp-B8h]
  int v27; // [rsp+50h] [rbp-B0h]
  __int128 Buf1; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v29; // [rsp+70h] [rbp-90h]
  __int128 v30; // [rsp+80h] [rbp-80h]
  __int128 v31; // [rsp+90h] [rbp-70h]
  __m256i v32; // [rsp+A0h] [rbp-60h]
  __int128 v33; // [rsp+C0h] [rbp-40h]
  __int128 v34; // [rsp+D0h] [rbp-30h]
  __int128 v35; // [rsp+E0h] [rbp-20h]
  _BYTE v36[24]; // [rsp+F0h] [rbp-10h]
  int v37; // [rsp+108h] [rbp+8h]

  v26 = 0LL;
  v27 = 0;
  v4 = 0;
  Handle = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  if ( (int)RtlpGetDynamicTimeZoneInfoHandle(Buf2 + 172, &Handle) >= 0 )
  {
    if ( (int)RtlpFindRegTziForCurrentYear(&v24, (const WCHAR *)Handle, a2) >= 0 )
    {
      v5 = *((_OWORD *)Buf2 + 1);
      Buf1 = *(_OWORD *)Buf2;
      v6 = *((_OWORD *)Buf2 + 2);
      v29 = v5;
      v30 = v6;
      v7 = *((_OWORD *)Buf2 + 4);
      v31 = *((_OWORD *)Buf2 + 3);
      v8 = *((_OWORD *)Buf2 + 5);
      *(_OWORD *)v32.m256i_i8 = v7;
      v9 = *((_OWORD *)Buf2 + 6);
      *(_OWORD *)&v32.m256i_u64[2] = v8;
      v10 = *((_OWORD *)Buf2 + 8);
      v33 = v9;
      v34 = *((_OWORD *)Buf2 + 7);
      v11 = *((_OWORD *)Buf2 + 9);
      v35 = v10;
      *(_QWORD *)v36 = v11;
      v32.m256i_i32[5] = DWORD1(v24);
      LODWORD(Buf1) = v24;
      v32.m256i_i32[1] = HIDWORD(v24);
      v37 = DWORD2(v24);
      v32.m256i_i16[4] = WORD1(v25);
      v32.m256i_i16[9] = v25;
      *(__int64 *)((char *)&v32.m256i_i64[1] + 2) = *(_QWORD *)((char *)&v25 + 4);
      *(_DWORD *)&v36[8] = HIDWORD(v25);
      *(_WORD *)&v36[12] = WORD1(v26);
      *(_WORD *)&v36[22] = v26;
      *(_DWORD *)&v36[14] = HIDWORD(v26);
      *(_DWORD *)&v36[18] = v27;
      if ( memcmp(&Buf1, Buf2, 0xACuLL) )
      {
        v4 = 1;
        v12 = v29;
        *(_OWORD *)Buf2 = Buf1;
        v13 = v30;
        *((_OWORD *)Buf2 + 1) = v12;
        v14 = v31;
        *((_OWORD *)Buf2 + 2) = v13;
        v15 = *(_OWORD *)v32.m256i_i8;
        *((_OWORD *)Buf2 + 3) = v14;
        v16 = *(_OWORD *)&v32.m256i_u64[2];
        *((_OWORD *)Buf2 + 4) = v15;
        v17 = v33;
        *((_OWORD *)Buf2 + 5) = v16;
        v18 = v34;
        *((_OWORD *)Buf2 + 6) = v17;
        v19 = Buf2 + 128;
        *((_OWORD *)v19 - 1) = v18;
        v20 = *(_QWORD *)&v36[16];
        v21 = *(_OWORD *)v36;
        *(_OWORD *)v19 = v35;
        *((_OWORD *)v19 + 1) = v21;
        *((_QWORD *)v19 + 4) = v20;
        *((_DWORD *)v19 + 10) = v37;
      }
    }
    ZwClose(Handle);
  }
  return v4;
}
