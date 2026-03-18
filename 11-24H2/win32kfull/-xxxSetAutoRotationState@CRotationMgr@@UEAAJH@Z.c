/*
 * XREFs of ?xxxSetAutoRotationState@CRotationMgr@@UEAAJH@Z @ 0x140270AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetSlateAutoRotationState@CRotationMgr@@QEAAJH@Z @ 0x140270CC0 (-xxxSetSlateAutoRotationState@CRotationMgr@@QEAAJH@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CRotationMgr::xxxSetAutoRotationState(CRotationMgr *this, int a2)
{
  int v4; // ebx
  unsigned int v5; // eax

  v4 = (*(__int64 (__fastcall **)(CRotationMgr *))(*(_QWORD *)this + 72LL))(this);
  v5 = CRotationMgr::xxxSetSlateAutoRotationState(this, a2);
  if ( v4 >= 0 )
    return v5;
  return (unsigned int)v4;
}
