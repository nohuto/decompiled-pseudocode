/*
 * XREFs of UpdateTopLevelWindowDPITransform @ 0x14019BAB8
 * Callers:
 *     UpdateWindowMonitor @ 0x140045CB0 (UpdateWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 * Callees:
 *     GetMonitorTransform @ 0x1400256BC (GetMonitorTransform.c)
 *     ResetWindowTransform @ 0x14019BB70 (ResetWindowTransform.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

_OWORD *__fastcall UpdateTopLevelWindowDPITransform(const struct tagWND *a1, __int64 a2)
{
  _OWORD *result; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  _OWORD v8[4]; // [rsp+20h] [rbp-48h] BYREF

  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 )
    return (_OWORD *)ResetWindowTransform(a1);
  memset_0(v8, 0, sizeof(v8));
  if ( !(unsigned int)GetMonitorTransform(a2, a1, (__int64)v8) )
    return (_OWORD *)ResetWindowTransform(a1);
  result = (_OWORD *)*((_QWORD *)a1 + 27);
  if ( !result )
  {
    result = (_OWORD *)Win32AllocPoolWithQuotaZInit(64LL, 2020438869LL);
    *((_QWORD *)a1 + 27) = result;
    if ( !result )
      return (_OWORD *)ResetWindowTransform(a1);
  }
  v5 = v8[1];
  *result = v8[0];
  v6 = v8[2];
  result[1] = v5;
  v7 = v8[3];
  result[2] = v6;
  result[3] = v7;
  return result;
}
