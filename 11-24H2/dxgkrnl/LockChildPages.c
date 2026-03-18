/*
 * XREFs of LockChildPages @ 0x140231AB0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 LockChildPages(__int64 a1, char a2, _DWORD *a3, int a4, ...)
{
  int v4; // eax
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // r9
  __int64 v11; // rdi
  int v12; // eax
  _BYTE v14[32]; // [rsp+50h] [rbp-38h] BYREF
  _DWORD *v15; // [rsp+90h] [rbp+8h] BYREF
  va_list va; // [rsp+B0h] [rbp+28h] BYREF

  va_start(va, a4);
  v4 = *(_DWORD *)(a1 + 408);
  if ( (v4 & 0x100) != 0 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 592) + 592LL);
LABEL_3:
    v9 = v8 + 160;
    goto LABEL_7;
  }
  if ( (v4 & 0x80u) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 592);
    goto LABEL_3;
  }
  v9 = 0LL;
LABEL_7:
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v14, (struct _KTHREAD **)(v9 + 16));
  LODWORD(v11) = -1073741823;
  if ( *(_BYTE *)(v9 + 68) )
  {
    v15 = a3;
    LOBYTE(v10) = a2;
    *a3 = a4;
    v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64, int, _DWORD **, char *))qword_140160600)(
            *(_QWORD *)v9,
            0LL,
            0LL,
            v10,
            1,
            &v15,
            va);
    v11 = v12;
    if ( v12 >= 0 )
    {
      _InterlockedIncrement(&g_VgpuNumLockedChildRanges);
    }
    else
    {
      WdLogSingleEntry1(2LL, v12);
      WdLogGlobalForLineNumber = 16187;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"VmbChannelLockChildPages failed: 0x%I64x",
        v11,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14);
  return (unsigned int)v11;
}
