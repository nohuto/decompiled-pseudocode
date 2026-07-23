/*
 * XREFs of HvlpFastFlushListTbEx @ 0x1403A46F4
 * Callers:
 *     HvlpFlushRangeListTbEx @ 0x1403A45E0 (HvlpFlushRangeListTbEx.c)
 * Callees:
 *     HvcallFastExtended @ 0x14039DBD0 (HvcallFastExtended.c)
 *     HvlpCopyFlushVaList @ 0x14039E000 (HvlpCopyFlushVaList.c)
 *     VslFastFlushSecureRangeList @ 0x14039E164 (VslFastFlushSecureRangeList.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1403A4864 (HvlpAffinityToHvProcessorSet.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall HvlpFastFlushListTbEx(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        unsigned int a5,
        __int64 *a6,
        int a7)
{
  __int64 result; // rax
  __int64 v11; // rdx
  int v12; // eax
  int v13; // ebx
  _BYTE v14[8]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+38h] [rbp-A0h]
  __int64 v16; // [rsp+40h] [rbp-98h] BYREF
  __int64 v17; // [rsp+48h] [rbp-90h]
  _BYTE v18[96]; // [rsp+50h] [rbp-88h] BYREF

  result = a3;
  if ( !a3 || (v14[0] = 0, result = VslFastFlushSecureRangeList(a3, a6, a5, v14), !v14[0]) )
  {
    if ( a4 )
    {
      v11 = a1[1];
      v16 = *a1;
      v17 = v11;
      if ( (HvlpFlags & 0x2000) == 0 )
        v17 = v11 | 8;
      v12 = HvlpAffinityToHvProcessorSet(a2, v18, 80LL);
      v13 = v12 + 32;
      LODWORD(v15) = ((v12 + 7) << 14) & 0x3FE0000 | 0x14;
      HIDWORD(v15) = a7 & 0xFFF;
      HvlpCopyFlushVaList(a5, a6, (HvlpFlags & 0x2000) != 0, (__int64)&v16 + (unsigned int)(v12 + 32));
      LODWORD(v15) = v15 | 0x10000;
      return HvcallFastExtended(v15, (__int64)&v16, v13 + 8 * a7, 0LL, 0);
    }
  }
  return result;
}
