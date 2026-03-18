/*
 * XREFs of ValidateCommonLockParameters @ 0x140035A20
 * Callers:
 *     ?LockCommon@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NKPEAPEAX@Z @ 0x1400EE09C (-LockCommon@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NKPEAPEAX@Z.c)
 *     ?Lock1@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@KPEAPEAX@Z @ 0x140111AAC (-Lock1@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@KPEAPEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ValidateCommonLockParameters(__int64 a1, __int64 **a2)
{
  __int64 *v2; // rdi
  __int64 *v4; // rax
  __int64 v6; // rsi
  int v7; // eax
  _QWORD *v8; // rbx
  __int64 result; // rax
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // r14

  v2 = *a2;
  v4 = a2[12];
  v6 = **a2;
  if ( *((_WORD *)v4 + 4) )
  {
    v12 = *((unsigned __int16 *)v4 + 4);
    if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
    {
      WdLogSingleEntry2(1LL, a2, v12);
      WdLogGlobalForLineNumber = 272;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL);
      return 3221225485LL;
    }
    WdLogSingleEntry2(2LL, a2, v12);
    WdLogGlobalForLineNumber = 279;
  }
  v7 = **(_DWORD **)(v6 + 392);
  if ( (v7 & 1) != 0 )
  {
    if ( (v7 & 8) != 0 || (v8 = (_QWORD *)v2[1], *v8 == PsGetCurrentProcess()) || (*(_DWORD *)(v6 + 28) & 0x2000) != 0 )
    {
      if ( (**(_DWORD **)(v6 + 392) & 0x60000000) != 0x20000000 )
        return 0LL;
      if ( (*(_DWORD *)(v6 + 24) & 0x80u) != 0 )
        return 0LL;
      v10 = *(_QWORD *)(a1 + 24);
      v11 = *(_DWORD *)(v10 + 444);
      if ( (v11 & 0x10) != 0 || (v11 & 8) != 0 || (*(_DWORD *)(v10 + 2468) & 0x80u) != 0 || v2 == *(__int64 **)(v6 + 48) )
      {
        return 0LL;
      }
      else
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 322;
        DxgkLogInternalTriageEvent(0LL, 0x40000LL);
        return 3221225485LL;
      }
    }
    else
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 306;
      ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88])(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Trying to lock a non-protected allocation in the wrong process context.",
        306LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 292;
  }
  return result;
}
