/*
 * XREFs of ??0RefreshRateInfo@@QEAA@URational@Numerics@Foundation@Windows@@00I@Z @ 0x18023AEBC
 * Callers:
 *     ?GetRateInfoForTarget@CDDisplayManager@@QEAAJPEAUIDisplayTarget@Core@Display@Devices@Windows@@PEAVRefreshRateInfo@@@Z @ 0x18023087C (-GetRateInfoForTarget@CDDisplayManager@@QEAAJPEAUIDisplayTarget@Core@Display@Devices@Windows@@PE.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RefreshRateInfo::RefreshRateInfo(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5)
{
  LONGLONG v6; // rbx
  LONGLONG v8; // r9
  LONGLONG v9; // rax
  LONGLONG v10; // rcx
  _QWORD *result; // rax

  v6 = 0LL;
  *a1 = a2;
  a1[3] = 1LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  v8 = (__int64)(g_qpcFrequency.QuadPart * HIDWORD(a4)) / (unsigned int)a4;
  v9 = (__int64)(g_qpcFrequency.QuadPart * HIDWORD(a3)) / (unsigned int)a3;
  if ( v8 == v9 )
  {
    v10 = 0LL;
  }
  else
  {
    v6 = (__int64)(g_qpcFrequency.QuadPart * HIDWORD(a3)) / (unsigned int)a3;
    v10 = v8;
  }
  if ( v8 == v9 )
    a5 = 1;
  a1[2] = v6;
  result = a1;
  *((_DWORD *)a1 + 6) = a5;
  a1[1] = v10;
  return result;
}
