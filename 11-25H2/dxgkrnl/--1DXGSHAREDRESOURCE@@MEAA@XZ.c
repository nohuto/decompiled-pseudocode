/*
 * XREFs of ??1DXGSHAREDRESOURCE@@MEAA@XZ @ 0x14039A244
 * Callers:
 *     ??_GDXGSHAREDRESOURCE@@MEAAPEAXI@Z @ 0x140010DB0 (--_GDXGSHAREDRESOURCE@@MEAAPEAXI@Z.c)
 *     ??1DXGSHAREDRESOURCECA@@UEAA@XZ @ 0x14039A208 (--1DXGSHAREDRESOURCECA@@UEAA@XZ.c)
 * Callees:
 *     ??_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z @ 0x140010FC8 (--_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??_GDXGADAPTERALLOCATION@@QEAAPEAXI@Z @ 0x14003BDD8 (--_GDXGADAPTERALLOCATION@@QEAAPEAXI@Z.c)
 *     ?DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x140215AC8 (-DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ??1DXGSHAREDRESOURCEACCESS@@QEAA@XZ @ 0x14039A468 (--1DXGSHAREDRESOURCEACCESS@@QEAA@XZ.c)
 */

void __fastcall DXGSHAREDRESOURCE::~DXGSHAREDRESOURCE(DXGSHAREDRESOURCE *this)
{
  DXGSHAREDRESOURCEACCESS *v2; // rdi
  DXGSHAREDRESOURCE_NONPAGED *v3; // rcx
  _QWORD **v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  char *v7; // rcx
  __int64 v8; // rcx
  void *v9; // rcx
  struct DXGGLOBAL *Global; // rax

  *(_QWORD *)this = &DXGSHAREDRESOURCE::`vftable';
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 13));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 15));
  v2 = (DXGSHAREDRESOURCEACCESS *)*((_QWORD *)this + 19);
  if ( v2 )
  {
    DXGSHAREDRESOURCEACCESS::~DXGSHAREDRESOURCEACCESS(v2);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
  }
  v3 = (DXGSHAREDRESOURCE_NONPAGED *)*((_QWORD *)this + 22);
  if ( v3 )
    DXGSHAREDRESOURCE_NONPAGED::`scalar deleting destructor'(v3);
  v4 = (_QWORD **)((char *)this + 136);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4 || (v6 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v6;
    v6[1] = v4;
    if ( v5 != (_QWORD *)48 )
      DXGADAPTERALLOCATION::`scalar deleting destructor'((DXGADAPTERALLOCATION *)(v5 - 6));
  }
  if ( (*((_DWORD *)this + 3) & 8) != 0 && *((_DWORD *)this + 16) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 399;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"!m_NtSecuritySharing || m_NtObjectRefCount == 0",
      399LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v7 = (char *)*((_QWORD *)this + 21);
  if ( v7 != (char *)this + 160 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7);
  if ( *((_DWORD *)this + 50) )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXG_GUEST_GLOBAL_VMBUS::DeleteGpadl(*((struct _KTHREAD ***)Global + 206), *((_DWORD *)this + 50));
    *((_DWORD *)this + 50) = 0;
  }
  v8 = *((_QWORD *)this + 10);
  if ( v8 )
    DXGADAPTER::ReleaseReference(*(DXGADAPTER **)(v8 + 16));
  if ( (*((_DWORD *)this + 3) & 0x400) != 0 )
  {
    v9 = (void *)*((_QWORD *)this + 24);
    if ( v9 )
    {
      ObfDereferenceObject(v9);
      *((_QWORD *)this + 24) = 0LL;
    }
  }
  if ( *((_QWORD *)this + 24) && (*((_DWORD *)this + 3) & 0x200) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 421;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_pSection == NULL || m_ExistingSysMem",
      421LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
