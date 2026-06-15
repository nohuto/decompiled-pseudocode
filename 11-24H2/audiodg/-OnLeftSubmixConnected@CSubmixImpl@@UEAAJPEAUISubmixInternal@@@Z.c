/*
 * XREFs of ?OnLeftSubmixConnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x14003D320
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?CreateChildSubmixInstance@CChildSubmixInstance@@SAJPEAPEAV1@PEAUISubmixInternal@@@Z @ 0x14003D4D8 (-CreateChildSubmixInstance@CChildSubmixInstance@@SAJPEAPEAV1@PEAUISubmixInternal@@@Z.c)
 *     ?NewNode@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCChildSubmixInstance@@PEAV312@1@Z @ 0x14003D544 (-NewNode@-$CAtlList@PEAVCChildSubmixInstance@@V-$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSubmixImpl::OnLeftSubmixConnected(CSubmixImpl *this, struct ISubmixInternal *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int ChildSubmixInstance; // eax
  unsigned int v6; // edi
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  ATL::CAtlException *v13; // rbx
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+20h] [rbp-38h]
  ATL::CAtlException *v15; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char *v17; // [rsp+60h] [rbp+8h] BYREF
  void *Block; // [rsp+68h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+70h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+78h] [rbp+20h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  v14 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v20 = v4;
  if ( (*(unsigned __int8 (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)a2 + 128LL))(a2) )
  {
    v6 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3FB,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8000FFFFLL);
    goto LABEL_4;
  }
  Block = 0LL;
  ChildSubmixInstance = CChildSubmixInstance::CreateChildSubmixInstance((struct CChildSubmixInstance **)&Block, a2);
  v6 = ChildSubmixInstance;
  if ( ChildSubmixInstance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3FF,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)ChildSubmixInstance);
    operator delete(Block);
LABEL_4:
    if ( v4 )
      LeaveCriticalSection(v4);
    return v6;
  }
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  try
  {
    v19 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
    v17 = (char *)Block;
    v10 = ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::NewNode(
            (char *)this + 120,
            &v17,
            v9,
            *((_QWORD *)this + 15));
    v11 = *((_QWORD *)this + 15);
    if ( v11 )
      *(_QWORD *)(v11 + 8) = v10;
    else
      *((_QWORD *)this + 16) = v10;
    *((_QWORD *)this + 15) = v10;
  }
  catch ( ATL::CAtlException *v15 )
  {
    v13 = v15;
    if ( *(_DWORD *)v15 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v17) = *(_DWORD *)v13;
    v12 = (unsigned int)v17;
    if ( (int)v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x405,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v17);
      CSAutoLock<1>::~CSAutoLock<1>(&v19);
      operator delete(Block);
      CSAutoLock<1>::~CSAutoLock<1>(&v20);
      return v12;
    }
    v4 = v14;
    v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  operator delete(0LL);
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
