/*
 * XREFs of ?bContain@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1400C654C
 * Callers:
 *     RGNCOREOBJ::iCombine_RGNOBJ__RGNOBJ::iCombine_::_2_::_lambda_1___ @ 0x1401C0F70 (RGNCOREOBJ--iCombine_RGNOBJ__RGNOBJ--iCombine_--_2_--_lambda_1___.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJ::bContain(RGNOBJ *this, struct RGNOBJ *a2)
{
  char *SystemArgument1; // r14
  _DWORD *v3; // rdi
  __int64 v4; // rcx
  unsigned int v5; // ebp
  __int64 v6; // rsi
  int v7; // edi

  SystemArgument1 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1;
  v3 = (_DWORD *)((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL));
  v4 = *(_QWORD *)a2 + 24LL;
  v5 = 0;
  v6 = v4 & -(__int64)(*(_QWORD *)a2 != 0LL);
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(SystemArgument1 + 8, 2LL);
    v7 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)SystemArgument1 + 56LL))(v3, v6);
    ExReleasePushLockSharedEx(SystemArgument1 + 8, 2LL);
    KeLeaveCriticalRegion();
    LOBYTE(v5) = v7 != 0;
  }
  else if ( v3[7] <= *(_DWORD *)((v4 & -(__int64)(*(_QWORD *)a2 != 0LL)) + 0x1C)
         && v3[9] >= *(_DWORD *)((v4 & -(__int64)(*(_QWORD *)a2 != 0LL)) + 0x24)
         && v3[8] <= *(_DWORD *)((v4 & -(__int64)(*(_QWORD *)a2 != 0LL)) + 0x20)
         && v3[10] >= *(_DWORD *)((v4 & -(__int64)(*(_QWORD *)a2 != 0LL)) + 0x28) )
  {
    return (unsigned int)(LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) + 1);
  }
  return v5;
}
