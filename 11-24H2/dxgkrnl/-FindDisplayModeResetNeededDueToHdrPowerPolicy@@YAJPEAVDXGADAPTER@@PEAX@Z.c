/*
 * XREFs of ?FindDisplayModeResetNeededDueToHdrPowerPolicy@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403988A4
 * Callers:
 *     ?AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z @ 0x140397F80 (-AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?DmmNeedDisplayModeResetDueToHdrPowerPolicy@@YA_NPEAVDXGADAPTER@@@Z @ 0x140398964 (-DmmNeedDisplayModeResetDueToHdrPowerPolicy@@YA_NPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall FindDisplayModeResetNeededDueToHdrPowerPolicy(struct DXGADAPTER *a1, _BYTE *a2)
{
  unsigned int v2; // ebx
  _BYTE v6[8]; // [rsp+50h] [rbp-28h] BYREF
  struct DXGADAPTER *v7; // [rsp+58h] [rbp-20h]
  char v8; // [rsp+60h] [rbp-18h]

  v2 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7294;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pDxgAdapter != NULL", 7294LL, 0LL, 0LL, 0LL, 0LL);
  }
  v7 = a1;
  v8 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v6);
  if ( *((_DWORD *)a1 + 50) == 1 && DmmNeedDisplayModeResetDueToHdrPowerPolicy(a1) )
  {
    *a2 = 1;
    v2 = -2147483622;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v6);
  return v2;
}
