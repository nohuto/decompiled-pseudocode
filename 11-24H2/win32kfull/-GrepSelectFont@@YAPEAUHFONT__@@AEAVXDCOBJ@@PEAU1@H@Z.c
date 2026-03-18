/*
 * XREFs of ?GrepSelectFont@@YAPEAUHFONT__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x140037860
 * Callers:
 *     GreSelectFont @ 0x1400377A0 (GreSelectFont.c)
 *     NtGdiSelectFont @ 0x140037800 (NtGdiSelectFont.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x140172FB0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ??1?$HmgShareLockResult@VLFONT@@@@QEAA@XZ @ 0x14030D978 (--1-$HmgShareLockResult@VLFONT@@@@QEAA@XZ.c)
 */

HFONT __fastcall GrepSelectFont(struct XDCOBJ *a1, HFONT a2, int a3)
{
  HFONT v3; // rbx
  HFONT v4; // rsi
  HFONT *v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v10[3]; // [rsp+28h] [rbp-30h] BYREF

  v3 = 0LL;
  v4 = a2;
  if ( a3 || (*(_DWORD *)(HmgPentryFromPobj(*(_QWORD *)a1) + 8) & 0xFFFFFFFE) != 0 )
  {
    v6 = *(HFONT **)(*(_QWORD *)a1 + 152LL);
    if ( v6 )
      v3 = *v6;
    if ( v4 != v3 )
    {
      LOBYTE(a2) = 10;
      v9 = HmgShareLockCheck(v4, a2);
      memset(v10, 0, 32);
      PushThreadGuardedObject(
        v10,
        &v9,
        UnexpectedThreadTerminationHandler<HmgShareLockResult<LFONT>>::OnUnexpectedThreadTerminationStatic);
      if ( !v9 || (*(_BYTE *)(HmgPentryFromPobj(v9) + 15) & 2) != 0 )
      {
        v3 = 0LL;
      }
      else
      {
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*(struct LFONT **)(*(_QWORD *)a1 + 152LL));
        v7 = v9;
        v9 = 0LL;
        *(_QWORD *)(*(_QWORD *)a1 + 152LL) = v7;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 296LL) = v4;
        *(_QWORD *)(*(_QWORD *)a1 + 1744LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0x10u;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) &= ~0x20u;
      }
      HmgShareLockResult<LFONT>::~HmgShareLockResult<LFONT>(&v9);
    }
  }
  return v3;
}
