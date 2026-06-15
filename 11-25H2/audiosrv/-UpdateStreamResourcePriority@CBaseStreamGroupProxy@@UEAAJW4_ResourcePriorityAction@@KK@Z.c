/*
 * XREFs of ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x1800219C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?RemoveResourcePriorityFromMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x180021B44 (-RemoveResourcePriorityFromMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x180021BA0 (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::UpdateStreamResourcePriority(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  __int64 v9; // rdi
  char v10; // si
  unsigned int v11; // r13d
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // eax
  __int64 v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+60h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  v9 = *(_QWORD *)(a1 + 72);
  v10 = 0;
  v11 = *(_DWORD *)(v9 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)v9);
  v19 = (struct _RTL_CRITICAL_SECTION *)v9;
  if ( a2 - 1 <= 1
    && (v12 = CResourcePriorityTracker::RemoveResourcePriorityFromMap((CResourcePriorityTracker *)v9, a4),
        v13 = v12,
        v12 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v12);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v19);
  }
  else if ( a2 <= 1
         && (v14 = CResourcePriorityTracker::AddResourcePriorityToMap((CResourcePriorityTracker *)v9, a3),
             v13 = v14,
             v14 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x74,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v14);
    if ( v9 )
      LeaveCriticalSection((LPCRITICAL_SECTION)v9);
  }
  else
  {
    if ( *(_QWORD *)(v9 + 48) )
    {
      v15 = *(_DWORD *)(**(_QWORD **)(v9 + 40) + 28LL);
      if ( v15 != *(_DWORD *)(v9 + 56) )
      {
        v10 = 1;
        *(_DWORD *)(v9 + 56) = v15;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)v9);
    v13 = 0;
    if ( v10 )
    {
      v17 = *(_QWORD *)(a1 + 88);
      if ( v17 )
        v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v17 + 88LL))(
                v17,
                1LL,
                *(unsigned int *)(*(_QWORD *)(a1 + 72) + 56LL),
                v11);
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v13;
}
