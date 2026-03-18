/*
 * XREFs of MiHandleCollidedFault @ 0x14023B504
 * Callers:
 *     MiResolveTransitionFault @ 0x14021A2F0 (MiResolveTransitionFault.c)
 * Callees:
 *     MiAllowReadInProgress @ 0x14023B6CC (MiAllowReadInProgress.c)
 *     MiIssueFlowThroughFault @ 0x14023B720 (MiIssueFlowThroughFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14023B89C (MiWaitForCollidedFaultComplete.c)
 *     MiObtainProtoReference @ 0x14023BBE8 (MiObtainProtoReference.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14028C530 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiAddLockedPageCharge @ 0x1402F6F40 (MiAddLockedPageCharge.c)
 */

__int64 __fastcall MiHandleCollidedFault(int a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, _DWORD *a6)
{
  _DWORD *v7; // r14
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // ebp
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 result; // rax
  int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // r14d
  unsigned int v20; // ebp

  v7 = a6;
  *a5 = 0LL;
  *v7 = 2;
  v12 = MiAllowReadInProgress();
  if ( v12 < 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( a3 )
    {
      LOBYTE(v10) = 17;
      MiUnlockProtoPoolPage(a3, v10);
    }
    *v7 = 0;
    return (unsigned int)v12;
  }
  else
  {
    result = MiIssueFlowThroughFault(v11, v10, a3, (unsigned int)*(_QWORD *)v13 - 32, a4, v14, (__int64)v7);
    if ( *v7 != 1 )
    {
      if ( *(__int64 *)(a4 + 40) < 0 )
        MiObtainProtoReference(a3, 1LL);
      LODWORD(a5) = 0;
      LOBYTE(v16) = 2;
      v19 = MiWaitForCollidedFaultComplete(a1, a4, a3, v16, (__int64)&a5);
      if ( !(_DWORD)a5 )
      {
        if ( a3 )
        {
          v20 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v20 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v18) )
              {
                HvlNotifyLongSpinWait(v20);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(a3 + 24) < 0 );
          }
          MiRemoveLockedPageChargeAndDecRef(a3);
          _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        if ( !v19 )
        {
          MiAddLockedPageCharge(a4, 3LL);
          *(_QWORD *)(a4 + 24) = (*(_QWORD *)(a4 + 24) + 1LL) ^ (*(_QWORD *)(a4 + 24) ^ (*(_QWORD *)(a4 + 24) + 1LL)) & 0xC000000000000000uLL;
          LODWORD(a5) = *(_DWORD *)(a4 + 32);
          BYTE2(a5) = BYTE2(a5) & 0xF8 | 6;
          *(_DWORD *)(a4 + 32) = (_DWORD)a5;
          MiRemoveLockedPageChargeAndDecRef(a4);
          return 0LL;
        }
        _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( a3 )
        {
          LOBYTE(v17) = 17;
          MiUnlockProtoPoolPage(a3, v17);
        }
      }
      return v19;
    }
  }
  return result;
}
