/*
 * XREFs of IopIoRateStartRateControl @ 0x140398E40
 * Callers:
 *     IoStartIoRateControl @ 0x140398CF4 (IoStartIoRateControl.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     IoDiskIoAttributionQuery @ 0x140314874 (IoDiskIoAttributionQuery.c)
 *     ExGetExtensionTable @ 0x140398F94 (ExGetExtensionTable.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopIoRateStartRateControl(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  int v7; // ebx
  __int128 v9; // [rsp+58h] [rbp-59h] BYREF
  __int128 v10; // [rsp+68h] [rbp-49h]
  __int128 v11; // [rsp+78h] [rbp-39h] BYREF
  __m128i v12; // [rsp+88h] [rbp-29h]
  __int64 v13; // [rsp+98h] [rbp-19h]
  __int64 v14; // [rsp+A0h] [rbp-11h]
  __int64 v15; // [rsp+A8h] [rbp-9h]
  unsigned __int64 v16; // [rsp+B0h] [rbp-1h]

  v11 = 0LL;
  v12 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( ExGetExtensionTable(IopIoRateExtensionHost) )
  {
    IoDiskIoAttributionQuery(a5, &v11, &v9);
    v15 = *((_QWORD *)&v10 + 1) + v12.m128i_i64[0];
    v16 = *((_QWORD *)&v10 + 1) + _mm_srli_si128(v12, 8).m128i_u64[0];
    v13 = v9 + v11;
    v14 = *((_QWORD *)&v9 + 1) + *((_QWORD *)&v11 + 1);
    v7 = guard_dispatch_icall_no_overrides(a1, 15LL);
    if ( v7 >= 0 )
    {
      v7 = 0;
      *a6 = 0LL;
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 88));
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return (unsigned int)v7;
}
