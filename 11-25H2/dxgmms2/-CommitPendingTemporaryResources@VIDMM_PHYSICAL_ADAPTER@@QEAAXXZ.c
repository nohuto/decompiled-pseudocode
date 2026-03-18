/*
 * XREFs of ?CommitPendingTemporaryResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXXZ @ 0x1400F4BAC
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400AC280 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PHYSICAL_ADAPTER::CommitPendingTemporaryResources(VIDMM_PHYSICAL_ADAPTER *this)
{
  char *v1; // r8
  __int64 v2; // rax
  _QWORD **v3; // rdx
  _QWORD *v4; // rcx
  __int64 v5; // rax

  v1 = (char *)this + 1704;
  v2 = *((_QWORD *)this + 213);
  v3 = (_QWORD **)((char *)this + 1688);
  v4 = (_QWORD *)*((_QWORD *)this + 214);
  if ( *(char **)(v2 + 8) != v1
    || (char *)*v4 != v1
    || (_QWORD **)(*v3)[1] != v3
    || (_QWORD **)*v3[1] != v3
    || (*v4 = v3, *((_QWORD *)v1 + 1) = v3[1], *v3[1] = v1, v3[1] = v4, v5 = (__int64)*v3, (_QWORD **)(*v3)[1] != v3)
    || (_QWORD **)*v4 != v3 )
  {
    __fastfail(3u);
  }
  *v4 = v5;
  *(_QWORD *)(v5 + 8) = v4;
  v3[1] = v3;
  *v3 = v3;
}
