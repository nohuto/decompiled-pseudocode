/*
 * XREFs of VslFastFlushSecureRangeList @ 0x1403AF954
 * Callers:
 *     HvlFlushRangeListTb @ 0x1403AEEF0 (HvlFlushRangeListTb.c)
 *     HvlpFastFlushListTbEx @ 0x1403C9B54 (HvlpFastFlushListTbEx.c)
 *     HvlpSecureFlushLargeRangeList @ 0x1406A0EC0 (HvlpSecureFlushLargeRangeList.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall VslFastFlushSecureRangeList(int a1, _QWORD *a2, unsigned int a3, _BYTE *a4)
{
  unsigned int v8; // edx
  char v9; // cl
  char *v10; // r8
  __int64 v11; // r9
  bool v12; // cc
  __int64 result; // rax
  _BYTE v14[8]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 SecureHandle; // [rsp+28h] [rbp-80h]
  char v16; // [rsp+30h] [rbp-78h] BYREF

  memset_0(v14, 0, 0x68uLL);
  if ( KeGetCurrentIrql() > 2u )
  {
    result = 255LL;
LABEL_18:
    *a4 = 0;
    return result;
  }
  v8 = 0;
  v9 = 0;
  if ( a3 )
  {
    v10 = &v16;
    v11 = a3;
    v8 = a3;
    do
    {
      v12 = *a2 <= 0x7FFFFFFEFFFFuLL;
      *(_QWORD *)v10 = *a2++;
      if ( v12 )
        v9 = 1;
      v10 += 8;
      --v11;
    }
    while ( v11 );
  }
  if ( a1 != 1 )
  {
    SecureHandle = 0LL;
    goto LABEL_10;
  }
  if ( !v9 )
  {
    result = 0LL;
    goto LABEL_18;
  }
  SecureHandle = KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle;
LABEL_10:
  if ( v8 < 0xB )
    *(&SecureHandle + v8 + 1) = 0LL;
  result = VslpEnterIumSecureMode(2u, 241LL, 0, (__int64)v14);
  if ( (int)result >= 0 )
    *a4 = v16;
  return result;
}
