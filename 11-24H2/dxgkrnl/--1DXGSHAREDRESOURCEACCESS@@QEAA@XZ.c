/*
 * XREFs of ??1DXGSHAREDRESOURCEACCESS@@QEAA@XZ @ 0x1403923C8
 * Callers:
 *     ??1DXGSHAREDRESOURCE@@MEAA@XZ @ 0x1403921A4 (--1DXGSHAREDRESOURCE@@MEAA@XZ.c)
 * Callees:
 *     ??_GDXGPROCESSSHAREDACCESS@@QEAAPEAXI@Z @ 0x140020134 (--_GDXGPROCESSSHAREDACCESS@@QEAAPEAXI@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14005D990 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 */

void __fastcall DXGSHAREDRESOURCEACCESS::~DXGSHAREDRESOURCEACCESS(DXGSHAREDRESOURCEACCESS *this)
{
  _QWORD **v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rcx

  v2 = (_QWORD **)((char *)this + 56);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    v4[1] = v2;
    if ( v3 != (_QWORD *)8 )
      DXGPROCESSSHAREDACCESS::`scalar deleting destructor'((DXGPROCESSSHAREDACCESS *)(v3 - 1));
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSHAREDRESOURCEACCESS *)((char *)this + 8));
}
