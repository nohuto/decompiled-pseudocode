/*
 * XREFs of ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1401D3328
 * Callers:
 *     DriverEntry @ 0x140435078 (DriverEntry.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGGLOBAL@@AEAA@XZ @ 0x1401D2020 (--0DXGGLOBAL@@AEAA@XZ.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1401D37FC (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1401D4724 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 */

__int64 __fastcall DXGGLOBAL::CreateGlobal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  char *v5; // rax
  DXGGLOBAL *v6; // rax
  unsigned int v7; // ebx

  if ( *(_QWORD *)&DXGGLOBAL::m_pGlobal )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = -1073741823LL;
    result = 3221225473LL;
    WdLogGlobalForLineNumber = 1265;
    return result;
  }
  v5 = (char *)operator new(0x4AB10uLL, 0x4B677844u, 64LL);
  if ( !v5 )
  {
    *(_QWORD *)&DXGGLOBAL::m_pGlobal = 0LL;
    goto LABEL_8;
  }
  v6 = DXGGLOBAL::DXGGLOBAL(v5);
  *(_QWORD *)&DXGGLOBAL::m_pGlobal = v6;
  if ( !v6 )
  {
LABEL_8:
    v7 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 1277;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate DXGGLOBAL returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return v7;
  }
  result = DXGGLOBAL::Initialize(v6);
  v7 = result;
  if ( (int)result >= 0 )
    return result;
  DXGGLOBAL::DestroyGlobal();
  return v7;
}
