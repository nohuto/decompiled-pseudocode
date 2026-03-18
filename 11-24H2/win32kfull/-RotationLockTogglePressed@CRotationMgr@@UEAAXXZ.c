/*
 * XREFs of ?RotationLockTogglePressed@CRotationMgr@@UEAAXXZ @ 0x140270660
 * Callers:
 *     <none>
 * Callees:
 *     PostShellHookMessagesEx @ 0x140067280 (PostShellHookMessagesEx.c)
 *     ?QueryAutoRotationState@CRotationMgr@@QEAA?AW4tagAR_STATE@@XZ @ 0x140264888 (-QueryAutoRotationState@CRotationMgr@@QEAA-AW4tagAR_STATE@@XZ.c)
 *     ?xxxSetSlateAutoRotationState@CRotationMgr@@QEAAJH@Z @ 0x140270CC0 (-xxxSetSlateAutoRotationState@CRotationMgr@@QEAAJH@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall CRotationMgr::RotationLockTogglePressed(CRotationMgr *this, __int64 a2)
{
  unsigned int AutoRotationState; // eax
  int v4; // ecx
  BOOL v5; // ebx

  AutoRotationState = CRotationMgr::QueryAutoRotationState(this, a2);
  v4 = *((_DWORD *)this + 2);
  if ( AutoRotationState <= 1 )
  {
    v5 = v4 == 0;
    (*(void (__fastcall **)(CRotationMgr *, bool))(*(_QWORD *)this + 72LL))(this, v4 == 0);
    CRotationMgr::xxxSetSlateAutoRotationState(this, v5);
    PostShellHookMessagesEx((LastWokenThread *)0x32, *((int *)this + 2));
  }
}
