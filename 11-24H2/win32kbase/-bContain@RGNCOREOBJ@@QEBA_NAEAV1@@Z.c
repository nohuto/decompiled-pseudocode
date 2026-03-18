/*
 * XREFs of ?bContain@RGNCOREOBJ@@QEBA_NAEAV1@@Z @ 0x1400CF208
 * Callers:
 *     RGNCOREOBJ::iCombine_RGNCOREOBJ__RGNCOREOBJ::iCombine_::_2_::_lambda_1___ @ 0x1400F313C (RGNCOREOBJ--iCombine_RGNCOREOBJ__RGNCOREOBJ--iCombine_--_2_--_lambda_1___.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

char __fastcall RGNCOREOBJ::bContain(RGNCOREOBJ *this, struct RGNCOREOBJ *a2)
{
  char *SystemArgument1; // r14
  char v3; // bp
  _DWORD *v4; // rdi
  _DWORD *v5; // rsi
  int v7; // edi

  SystemArgument1 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1;
  v3 = 0;
  v4 = *(_DWORD **)a2;
  v5 = *(_DWORD **)this;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(SystemArgument1 + 8, 2LL);
    v7 = (*(__int64 (__fastcall **)(_DWORD *, _DWORD *))(*(_QWORD *)SystemArgument1 + 56LL))(v5, v4);
    ExReleasePushLockSharedEx(SystemArgument1 + 8, 2LL);
    KeLeaveCriticalRegion();
    return v7 != 0;
  }
  else
  {
    if ( v5[7] <= v4[7] && v5[9] >= v4[9] && v5[8] <= v4[8] )
      return v5[10] >= v4[10];
    return v3;
  }
}
