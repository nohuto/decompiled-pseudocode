/*
 * XREFs of WmipInitializeDataStructs @ 0x140C3ED3C
 * Callers:
 *     WmipDriverEntry @ 0x140C3EB10 (WmipDriverEntry.c)
 * Callees:
 *     WmipAllocRegEntry @ 0x1404A6FCC (WmipAllocRegEntry.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     WmipAddMofResource @ 0x1407A59E8 (WmipAddMofResource.c)
 *     WmipAddDataSource @ 0x1409B01A8 (WmipAddDataSource.c)
 */

__int64 WmipInitializeDataStructs()
{
  _QWORD *v0; // rbx
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 *i; // rax
  char v4[8]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v5; // [rsp+38h] [rbp-31h]
  _DWORD v6[14]; // [rsp+50h] [rbp-19h] BYREF
  __int128 v7; // [rsp+88h] [rbp+1Fh]

  *(_QWORD *)&v5 = 0x11D23915E3DFF7BDLL;
  WmipDSHeadPtr = (__int64)&WmipDSHead;
  qword_140EFF8A8 = (__int64)&WmipDSHead;
  WmipDSHead = (__int64)&WmipDSHead;
  WmipGEHeadPtr = (__int64)&WmipGEHead;
  qword_140EFF898 = (__int64)&WmipGEHead;
  WmipGEHead = (__int64)&WmipGEHead;
  WmipMRHeadPtr = (__int64)&WmipMRHead;
  qword_140EFF878 = (__int64)&WmipMRHead;
  WmipMRHead = (__int64)&WmipMRHead;
  *((_QWORD *)&v5 + 1) = 0xA298B94FC0000391uLL;
  v4[0] = 0;
  v0 = WmipAllocRegEntry(-1LL, 1342177280);
  if ( !v0 )
    return 3221225626LL;
  memset_0(v6, 0, 0x58uLL);
  v6[0] = 88;
  v6[4] = 2;
  v6[6] = -943770160;
  v6[7] = 298953435;
  v6[8] = -1610593601;
  v6[9] = 271124169;
  v7 = v5;
  result = WmipAddDataSource((__int64)v0, (__int64)v6, 88, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v2 = WmipGEHeadPtr;
    for ( i = *(__int64 **)WmipGEHeadPtr; i != (__int64 *)v2; i = (__int64 *)*i )
      *((_DWORD *)i + 4) |= 1u;
    result = WmipAddMofResource(v0[4], L"kernelbase.dll", 1, L"MofResourceName", v4);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
