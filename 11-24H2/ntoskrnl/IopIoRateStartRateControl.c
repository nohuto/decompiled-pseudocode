/*
 * XREFs of IopIoRateStartRateControl @ 0x1403AA3DC
 * Callers:
 *     IoStartIoRateControl @ 0x1403AA290 (IoStartIoRateControl.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     IoDiskIoAttributionQuery @ 0x14030A994 (IoDiskIoAttributionQuery.c)
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopIoRateStartRateControl(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  int v9; // ebx
  __int128 v11; // [rsp+58h] [rbp-59h] BYREF
  __int128 v12; // [rsp+68h] [rbp-49h]
  __int128 v13; // [rsp+78h] [rbp-39h] BYREF
  __m128i v14; // [rsp+88h] [rbp-29h]
  __int64 v15; // [rsp+98h] [rbp-19h]
  __int64 v16; // [rsp+A0h] [rbp-11h]
  __int64 v17; // [rsp+A8h] [rbp-9h]
  unsigned __int64 v18; // [rsp+B0h] [rbp-1h]

  v13 = 0LL;
  v14 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( ExGetExtensionTable(IopIoRateExtensionHost) )
  {
    IoDiskIoAttributionQuery(a5, &v13, &v11);
    v17 = *((_QWORD *)&v12 + 1) + v14.m128i_i64[0];
    v18 = *((_QWORD *)&v12 + 1) + _mm_srli_si128(v14, 8).m128i_u64[0];
    v15 = v11 + v13;
    v16 = *((_QWORD *)&v11 + 1) + *((_QWORD *)&v13 + 1);
    v9 = guard_dispatch_icall_no_overrides(a1, 15LL, a3, a4);
    if ( v9 >= 0 )
    {
      v9 = 0;
      *a6 = 0LL;
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 88));
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return (unsigned int)v9;
}
