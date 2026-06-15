/*
 * XREFs of ?ReleaseConnection@CDeviceGraphObjectCache@@UEAAJ_K@Z @ 0x140008D80
 * Callers:
 *     ??1CDeviceGraphObjectCache@@MEAA@XZ @ 0x14003E38C (--1CDeviceGraphObjectCache@@MEAA@XZ.c)
 * Callees:
 *     ?RemoveAt@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140007C64 (-RemoveAt@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReleaseConnection@CConnectionNode@@QEAAXXZ @ 0x14000EF3C (-ReleaseConnection@CConnectionNode@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphObjectCache::ReleaseConnection(CDeviceGraphObjectCache *this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 **v5; // r10
  __int64 *v6; // rcx
  __int64 *v7; // rdx
  __int64 v8; // rbx
  int v9; // r9d
  unsigned int v11; // ebx
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v5 = (__int64 **)((char *)this + 144);
  v6 = (__int64 *)*((_QWORD *)this + 18);
  while ( v6 )
  {
    v7 = v6;
    v8 = v6[2];
    v6 = (__int64 *)*v6;
    if ( *(_QWORD *)(v8 + 16) == a2 )
      goto LABEL_4;
  }
  v8 = 0LL;
  v7 = 0LL;
LABEL_4:
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 8);
    if ( !(v9 + *(_DWORD *)(v8 + 12)) && !v9 )
    {
      ATL::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAt(v5, v7);
      CConnectionNode::ReleaseConnection((CConnectionNode *)v8);
      (**(void (__fastcall ***)(__int64, __int64))v8)(v8, 1LL);
      if ( v4 )
        LeaveCriticalSection(v4);
      return 0LL;
    }
    v11 = -2005139417;
    v12 = 779LL;
  }
  else
  {
    v11 = -2005139430;
    v12 = 774LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
    (const char *)v11,
    v13);
  if ( v4 )
    LeaveCriticalSection(v4);
  return v11;
}
