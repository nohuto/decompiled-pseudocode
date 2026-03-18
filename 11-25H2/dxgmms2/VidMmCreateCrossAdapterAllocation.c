/*
 * XREFs of VidMmCreateCrossAdapterAllocation @ 0x14010C930
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140027B84 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall VidMmCreateCrossAdapterAllocation(void **a1, void *a2, SIZE_T a3, char a4)
{
  unsigned int v4; // ebp
  HANDLE v5; // rdi
  __int64 v8; // rax
  KSPIN_LOCK *v9; // rbx
  _QWORD *v10; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx

  v4 = 0;
  v5 = 0LL;
  if ( !a2 || a4 || (v5 = MmSecureVirtualMemory(a2, a3, 4u)) != 0LL )
  {
    v8 = operator new(72LL, 0x64356956u, 64LL);
    v9 = (KSPIN_LOCK *)v8;
    if ( v8 )
    {
      v10 = (_QWORD *)(v8 + 16);
      v10[1] = v10;
      *v10 = v10;
      KeInitializeSpinLock(v9 + 4);
      *a1 = v9;
      v9[1] = (KSPIN_LOCK)v5;
    }
    else
    {
      *a1 = 0LL;
      _InterlockedIncrement(&dword_1400817F4);
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1901;
      DxgkLogInternalTriageEvent(v13, 262145LL);
      v4 = -1073741801;
      if ( v5 )
        MmUnsecureVirtualMemory(v5);
      if ( *a1 )
        operator delete(*a1);
    }
    return v4;
  }
  else
  {
    WdLogSingleEntry2(1LL, a2, -1073741811LL);
    WdLogGlobalForLineNumber = 1888;
    DxgkLogInternalTriageEvent(v12, 0x40000LL);
    return 3221225485LL;
  }
}
