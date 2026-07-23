/*
 * XREFs of RtlpCheckDynamicTimeZoneInformation @ 0x1407821EC
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140A7981C (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     RtlpFindRegTziForCurrentYear @ 0x1405E6A04 (RtlpFindRegTziForCurrentYear.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x140782428 (RtlpGetDynamicTimeZoneInfoHandle.c)
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
  __int128 v23; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v24; // [rsp+38h] [rbp-C8h]
  __int64 v25; // [rsp+48h] [rbp-B8h]
  int v26; // [rsp+50h] [rbp-B0h]
  __int128 Buf1; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v28; // [rsp+70h] [rbp-90h]
  __int128 v29; // [rsp+80h] [rbp-80h]
  __int128 v30; // [rsp+90h] [rbp-70h]
  __m256i v31; // [rsp+A0h] [rbp-60h]
  __int128 v32; // [rsp+C0h] [rbp-40h]
  __int128 v33; // [rsp+D0h] [rbp-30h]
  __int128 v34; // [rsp+E0h] [rbp-20h]
  _BYTE v35[24]; // [rsp+F0h] [rbp-10h]
  int v36; // [rsp+108h] [rbp+8h]

  v25 = 0LL;
  v26 = 0;
  v4 = 0;
  v23 = 0LL;
  v24 = 0LL;
  if ( (int)RtlpGetDynamicTimeZoneInfoHandle((NTSTRSAFE_PCWSTR)Buf2 + 86) >= 0 )
  {
    if ( (int)RtlpFindRegTziForCurrentYear(&v23, 0LL, a2) >= 0 )
    {
      v5 = *((_OWORD *)Buf2 + 1);
      Buf1 = *(_OWORD *)Buf2;
      v6 = *((_OWORD *)Buf2 + 2);
      v28 = v5;
      v29 = v6;
      v7 = *((_OWORD *)Buf2 + 4);
      v30 = *((_OWORD *)Buf2 + 3);
      v8 = *((_OWORD *)Buf2 + 5);
      *(_OWORD *)v31.m256i_i8 = v7;
      v9 = *((_OWORD *)Buf2 + 6);
      *(_OWORD *)&v31.m256i_u64[2] = v8;
      v10 = *((_OWORD *)Buf2 + 8);
      v32 = v9;
      v33 = *((_OWORD *)Buf2 + 7);
      v11 = *((_OWORD *)Buf2 + 9);
      v34 = v10;
      *(_QWORD *)v35 = v11;
      v31.m256i_i32[5] = DWORD1(v23);
      LODWORD(Buf1) = v23;
      v31.m256i_i32[1] = HIDWORD(v23);
      v36 = DWORD2(v23);
      v31.m256i_i16[4] = WORD1(v24);
      v31.m256i_i16[9] = v24;
      *(__int64 *)((char *)&v31.m256i_i64[1] + 2) = *(_QWORD *)((char *)&v24 + 4);
      *(_DWORD *)&v35[8] = HIDWORD(v24);
      *(_WORD *)&v35[12] = WORD1(v25);
      *(_WORD *)&v35[22] = v25;
      *(_DWORD *)&v35[14] = HIDWORD(v25);
      *(_DWORD *)&v35[18] = v26;
      if ( memcmp(&Buf1, Buf2, 0xACuLL) )
      {
        v4 = 1;
        v12 = v28;
        *(_OWORD *)Buf2 = Buf1;
        v13 = v29;
        *((_OWORD *)Buf2 + 1) = v12;
        v14 = v30;
        *((_OWORD *)Buf2 + 2) = v13;
        v15 = *(_OWORD *)v31.m256i_i8;
        *((_OWORD *)Buf2 + 3) = v14;
        v16 = *(_OWORD *)&v31.m256i_u64[2];
        *((_OWORD *)Buf2 + 4) = v15;
        v17 = v32;
        *((_OWORD *)Buf2 + 5) = v16;
        v18 = v33;
        *((_OWORD *)Buf2 + 6) = v17;
        v19 = Buf2 + 128;
        *((_OWORD *)v19 - 1) = v18;
        v20 = *(_QWORD *)&v35[16];
        v21 = *(_OWORD *)v35;
        *(_OWORD *)v19 = v34;
        *((_OWORD *)v19 + 1) = v21;
        *((_QWORD *)v19 + 4) = v20;
        *((_DWORD *)v19 + 10) = v36;
      }
    }
    ZwClose(0LL);
  }
  return v4;
}
