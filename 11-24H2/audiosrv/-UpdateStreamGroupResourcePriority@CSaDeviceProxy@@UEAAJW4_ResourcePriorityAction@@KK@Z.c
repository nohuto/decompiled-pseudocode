/*
 * XREFs of ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180029CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?RemoveResourcePriorityFromMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x18002A0C4 (-RemoveResourcePriorityFromMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x18002A120 (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSaDeviceProxy::UpdateStreamGroupResourcePriority(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // rbx
  char v9; // si
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned int v15; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 48);
  v9 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)v4);
  v18 = (struct _RTL_CRITICAL_SECTION *)v4;
  if ( a2 - 1 <= 1 )
  {
    v10 = CResourcePriorityTracker::RemoveResourcePriorityFromMap((CResourcePriorityTracker *)v4, a4);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x70,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v10);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v18);
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBB6,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)v11);
      return v11;
    }
  }
  if ( a2 <= 1 )
  {
    v12 = CResourcePriorityTracker::AddResourcePriorityToMap((CResourcePriorityTracker *)v4, a3);
    v11 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x75,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v12);
      if ( v4 )
        LeaveCriticalSection((LPCRITICAL_SECTION)v4);
      goto LABEL_14;
    }
  }
  if ( *(_QWORD *)(v4 + 48) )
  {
    v13 = *(_DWORD *)(**(_QWORD **)(v4 + 40) + 28LL);
    if ( v13 != *(_DWORD *)(v4 + 56) )
    {
      v9 = 1;
      *(_DWORD *)(v4 + 56) = v13;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)v4);
  if ( !v9 )
    return 0LL;
  v14 = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, _QWORD, __int64))(*(_QWORD *)g_AudioResourceManager
                                                                                   + 48LL))(
          g_AudioResourceManager,
          *(unsigned int *)(*(_QWORD *)(a1 + 48) + 56LL),
          a1 + 56);
  v15 = v14;
  if ( v14 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBBB,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v14);
  return v15;
}
