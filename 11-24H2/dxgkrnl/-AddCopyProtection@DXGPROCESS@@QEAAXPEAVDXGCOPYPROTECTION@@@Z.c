/*
 * XREFs of ?AddCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x140067208
 * Callers:
 *     ?CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z @ 0x140197F94 (-CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGPROCESS::AddCopyProtection(struct _KTHREAD **this, struct DXGCOPYPROTECTION *a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  struct _KTHREAD *v6; // rdx

  if ( this[48] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 837;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"IsCopyProtectionMutexOwner()", 837LL, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = (_QWORD *)(((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
  v5 = this + 43;
  v6 = this[43];
  if ( *((struct _KTHREAD ***)v6 + 1) != this + 43 )
    __fastfail(3u);
  *v4 = v6;
  *(_QWORD *)((((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL)) + 8) = v5;
  *((_QWORD *)v6 + 1) = v4;
  *v5 = v4;
}
