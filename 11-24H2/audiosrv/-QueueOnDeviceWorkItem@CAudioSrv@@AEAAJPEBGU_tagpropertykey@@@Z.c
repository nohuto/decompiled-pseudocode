/*
 * XREFs of ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z @ 0x1800163F8
 * Callers:
 *     ?OnPropertyValueChanged@CAudioSrv@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x1800167E0 (-OnPropertyValueChanged@CAudioSrv@@UEAAJPEBGU_tagpropertykey@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x180016664 (--0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A116C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??1?$unique_ptr@V_Facet_base@std@@U?$default_delete@V_Facet_base@std@@@2@@std@@QEAA@XZ @ 0x1800A2690 (--1-$unique_ptr@V_Facet_base@std@@U-$default_delete@V_Facet_base@std@@@2@@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSrv::QueueOnDeviceWorkItem(
        CAudioSrv *this,
        const unsigned __int16 *a2,
        struct _tagpropertykey *a3)
{
  GUID *v6; // rax
  GUID *v7; // rsi
  DWORD pid; // ebx
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  __int64 v10; // r14
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rax
  int v13; // r8d
  _QWORD *i; // rcx
  __int64 *v15; // rcx
  __int64 v16; // rax
  __int64 **v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // ebx
  __int64 *v21; // rbp
  _DWORD *v22; // rbx
  __int64 *v23; // rdx
  __int64 v24; // [rsp+0h] [rbp-68h] BYREF
  int v25[2]; // [rsp+20h] [rbp-48h] BYREF
  char *v26; // [rsp+28h] [rbp-40h] BYREF
  GUID fmtid; // [rsp+30h] [rbp-38h]
  ATL::CAtlException *v28; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  CAudioSrv *v30; // [rsp+70h] [rbp+8h]
  char *v31; // [rsp+88h] [rbp+20h]

  v6 = (GUID *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    fmtid = a3->fmtid;
    pid = a3->pid;
    COnDeviceWorkItem::COnDeviceWorkItem(v6, a2, 4LL);
    *(_QWORD *)&v7->Data1 = &COnDevicePropertyChangedWorkItem::`vftable';
    v7[2] = fmtid;
    v7[3].Data1 = pid;
  }
  else
  {
    v7 = 0LL;
  }
  *(_QWORD *)v25 = v7;
  if ( !v7 )
  {
    v18 = 1788LL;
LABEL_16:
    v19 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_17;
  }
  if ( !*(_DWORD *)(*(_QWORD *)v7->Data4 - 16LL) )
  {
    v18 = 1789LL;
    goto LABEL_16;
  }
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 112);
  *(_QWORD *)&fmtid.Data1 = (char *)this + 112;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  v26 = (char *)this + 112;
  v10 = *((_QWORD *)this + 20);
  if ( *((_QWORD *)this + 23) )
  {
LABEL_12:
    v15 = (__int64 *)*((_QWORD *)this + 23);
    v16 = *v15;
    v15[2] = (__int64)v7;
    *((_QWORD *)this + 23) = v16;
    v15[1] = v10;
    *v15 = 0LL;
    ++*((_QWORD *)this + 21);
    v17 = (__int64 **)*((_QWORD *)this + 20);
    if ( v17 )
      *v17 = v15;
    else
      *((_QWORD *)this + 19) = v15;
    *((_QWORD *)this + 20) = v15;
LABEL_22:
    *(_QWORD *)v25 = 0LL;
    if ( v9 )
      LeaveCriticalSection(v9);
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 72LL))(
      ThreadPool,
      *((_QWORD *)this + 25));
    return 0LL;
  }
  v11 = *((unsigned int *)this + 48);
  if ( !*((_DWORD *)this + 48) )
    goto LABEL_9;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v11 < 0x18 )
    goto LABEL_33;
  while ( 1 )
  {
    v11 *= 24LL;
LABEL_9:
    v12 = malloc(v11 + 8);
    if ( v12 )
    {
      *v12 = *((_QWORD *)this + 22);
      *((_QWORD *)this + 22) = v12;
      v13 = *((_DWORD *)this + 48) - 1;
      for ( i = &v12[2 * v13 + 1 + (unsigned int)v13]; v13 >= 0; --v13 )
      {
        *i = *((_QWORD *)this + 23);
        *((_QWORD *)this + 23) = i;
        i -= 3;
      }
      goto LABEL_12;
    }
LABEL_33:
    try
    {
      ATL::AtlThrowImpl(-2147024882);
    }
    catch ( ATL::CAtlException *v28 )
    {
      v23 = &v24;
      v21 = v23;
      v22 = (_DWORD *)v23[8];
      if ( *v22 == -1073741571 )
        _o__resetstkoflw();
      *((_DWORD *)v21 + 34) = *v22;
      v19 = (unsigned int)v31;
      if ( (int)v31 >= 0 )
      {
        this = v30;
        v9 = *(struct _RTL_CRITICAL_SECTION **)&fmtid.Data1;
        goto LABEL_22;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x704,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
        (const char *)v19);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v26);
LABEL_17:
      std::unique_ptr<std::_Facet_base>::~unique_ptr<std::_Facet_base>(v25);
      return v19;
    }
  }
}
