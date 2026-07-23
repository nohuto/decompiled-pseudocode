/*
 * XREFs of IpmiLibAddSelErrorRecord @ 0x1406A0E80
 * Callers:
 *     WheaSelLogError @ 0x140659AF8 (WheaSelLogError.c)
 * Callees:
 *     IpmiHwContextInitialized @ 0x1406A0770 (IpmiHwContextInitialized.c)
 *     IpmiLibAddSelRecord @ 0x1406A0F0C (IpmiLibAddSelRecord.c)
 *     IpmiLibpAddSelRawData @ 0x1406A0FA4 (IpmiLibpAddSelRawData.c)
 */

__int64 __fastcall IpmiLibAddSelErrorRecord(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  int v6; // r8d
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+30h] [rbp-8h]
  __int16 v12; // [rsp+48h] [rbp+10h] BYREF
  char v13; // [rsp+4Ah] [rbp+12h]

  v12 = 0;
  v13 = 0;
  if ( !IpmiHwContextInitialized((__int64)&WheaIpmiContext) )
    return 3221225473LL;
  *(_QWORD *)&v10 = 13631488LL;
  HIDWORD(v10) = v6;
  *(_WORD *)((char *)&v10 + 7) = 311;
  BYTE9(v10) = 0;
  WORD5(v10) = 10;
  result = IpmiLibAddSelRecord(v5, &v10, &v12);
  if ( (int)result >= 0 )
  {
    if ( a4 )
    {
      LOBYTE(v8) = -64;
      return IpmiLibpAddSelRawData(v9, v8, a4, 12LL, v10, *((_QWORD *)&v10 + 1), v11);
    }
  }
  return result;
}
