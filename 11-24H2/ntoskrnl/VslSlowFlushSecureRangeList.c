/*
 * XREFs of VslSlowFlushSecureRangeList @ 0x14039E058
 * Callers:
 *     HvlFlushRangeListTb @ 0x14039D700 (HvlFlushRangeListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x1403A4E4C (HvlpSlowFlushListTbEx.c)
 *     HvlpSecureFlushLargeRangeList @ 0x1406A1F18 (HvlpSecureFlushLargeRangeList.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslSlowFlushSecureRangeList(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        _BYTE *a6)
{
  __int64 v7; // rsi
  __int64 v10; // rcx
  __int64 result; // rax
  _BYTE v12[8]; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int64 SecureHandle; // [rsp+28h] [rbp-90h]
  __int64 v14; // [rsp+30h] [rbp-88h]
  __int64 v15; // [rsp+38h] [rbp-80h]
  __int64 v16; // [rsp+40h] [rbp-78h]

  v7 = a4;
  memset_0(v12, 0, 0x68uLL);
  if ( KeGetCurrentIrql() > 2u )
  {
    result = 255LL;
LABEL_9:
    *a6 = 0;
    return result;
  }
  if ( a3 == 1 )
  {
    v10 = 0LL;
    SecureHandle = KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle;
    while ( (unsigned int)v10 < (unsigned int)v7 )
    {
      if ( *(_QWORD *)(a5 + a2 + 8 * v10) <= 0x7FFFFFFEFFFFuLL )
        goto LABEL_3;
      v10 = (unsigned int)(v10 + 1);
    }
    result = 0LL;
    goto LABEL_9;
  }
LABEL_3:
  v16 = a5;
  v14 = a1;
  v15 = v7;
  LOBYTE(v10) = 2;
  result = VslpEnterIumSecureMode(v10, 242LL, 0LL, v12);
  if ( (int)result >= 0 )
    *a6 = v14;
  return result;
}
