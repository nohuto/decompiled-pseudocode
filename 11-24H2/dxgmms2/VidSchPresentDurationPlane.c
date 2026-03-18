/*
 * XREFs of VidSchPresentDurationPlane @ 0x140051330
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14001FEE0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1400316A0 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x14004A6B4 (McTemplateK0qqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchPresentDurationPlane(__int64 a1, unsigned int a2, char a3, unsigned int *a4)
{
  __int64 v4; // rsi
  unsigned int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ecx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  _BYTE v15[48]; // [rsp+50h] [rbp-38h] BYREF

  v4 = a2;
  if ( !a4 || !a1 )
  {
    WdLogSingleEntry2(1LL, a4, a1);
    WdLogGlobalForLineNumber = 14925;
    goto LABEL_15;
  }
  v8 = *(_DWORD *)(a1 + 40);
  if ( a2 >= v8 )
  {
    WdLogSingleEntry2(1LL, a2, v8);
    WdLogGlobalForLineNumber = 14931;
LABEL_15:
    DxgkLogInternalTriageEvent(v9, 0x40000LL);
    return 3221225485LL;
  }
  if ( a3 )
  {
    v10 = *(_DWORD *)(a1 + 152);
    if ( *a4 >= v10 )
    {
      WdLogSingleEntry2(1LL, *a4, v10);
      v9 = *a4;
      WdLogGlobalForLineNumber = 14937;
      goto LABEL_15;
    }
  }
  _mm_lfence();
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v15, (unsigned __int64 *)(a1 + 1984), 1, 0);
  v11 = *(_QWORD *)(a1 + 8 * v4 + 3432);
  if ( a3 )
  {
    WdLogSingleEntry4(4LL, *a4, v4);
    WdLogGlobalForLineNumber = 14950;
    if ( (byte_140081244 & 4) != 0 )
      McTemplateK0qqqq_EtwWriteTransfer(
        v12,
        &EventSetPresentDurationPlane,
        v13,
        v4,
        *(_DWORD *)(v11 + 3196),
        *(_DWORD *)(v11 + 3192),
        *a4);
    *(_DWORD *)(v11 + 3196) = *a4;
  }
  else
  {
    *a4 = *(_DWORD *)(v11 + 3196);
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v15);
  return 0LL;
}
