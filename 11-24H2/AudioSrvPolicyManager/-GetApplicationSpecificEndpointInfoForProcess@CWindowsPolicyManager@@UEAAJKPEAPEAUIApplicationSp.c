/*
 * XREFs of ?GetApplicationSpecificEndpointInfoForProcess@CWindowsPolicyManager@@UEAAJKPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x180009D70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000A130 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x18000A450 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x18001B348 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     ?_Deallocate_for_capacity@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXAEAV?$allocator@G@2@QEAG_K@Z @ 0x18001B358 (-_Deallocate_for_capacity@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAXAEAV-$.c)
 *     __security_check_cookie @ 0x1800201B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::GetApplicationSpecificEndpointInfoForProcess(
        CWindowsPolicyManager *this,
        int a2,
        struct IApplicationSpecificEndpointInfo **a3)
{
  CApplicationManager *v5; // rdi
  signed __int32 *v6; // rbx
  RTL_SRWLOCK *v7; // rsi
  _QWORD *v8; // rcx
  signed __int32 *v9; // rdx
  signed __int32 i; // eax
  __int64 v11; // r15
  _WORD *v12; // rax
  __int64 v13; // rdi
  struct _RTL_CRITICAL_SECTION *v14; // r12
  __int64 v15; // r8
  _QWORD *v16; // r13
  _QWORD *v17; // rbp
  unsigned __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // r10
  char *v21; // rdx
  char *v22; // r9
  _QWORD *v23; // r10
  unsigned __int64 v24; // r11
  unsigned __int64 v25; // rax
  signed __int64 v26; // r9
  unsigned __int16 v27; // cx
  int v28; // eax
  unsigned __int16 *v29; // rdx
  __int64 v30; // r9
  unsigned __int64 v31; // r10
  unsigned __int64 v32; // rax
  __int64 v33; // r9
  unsigned __int16 v34; // cx
  int v35; // eax
  __int64 v36; // rcx
  signed __int32 j; // edx
  struct IApplicationSpecificEndpointInfo *v39; // rcx
  int v40[2]; // [rsp+20h] [rbp-78h] BYREF
  struct IApplicationSpecificEndpointInfo **v41; // [rsp+28h] [rbp-70h]
  __int64 v42; // [rsp+30h] [rbp-68h]
  int v43; // [rsp+3Ch] [rbp-5Ch]
  _QWORD *v44; // [rsp+40h] [rbp-58h]
  __int128 v45; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v46; // [rsp+58h] [rbp-40h]
  __int64 v47; // [rsp+60h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v41 = a3;
  *a3 = 0LL;
  v5 = g_ApplicationManager;
  v6 = 0LL;
  *(_QWORD *)v40 = 0LL;
  v7 = (RTL_SRWLOCK *)((char *)g_ApplicationManager + 120);
  AcquireSRWLockShared((PSRWLOCK)g_ApplicationManager + 15);
  v8 = (_QWORD *)*((_QWORD *)v5 + 16);
  while ( v8 )
  {
    v9 = (signed __int32 *)v8[2];
    v8 = (_QWORD *)*v8;
    if ( !v9[104] && v9[40] == a2 )
    {
      for ( i = v9[5]; i != 0x7FFFFFFF; i = v9[5] )
      {
        if ( i == _InterlockedCompareExchange(v9 + 5, i + 1, i) )
          break;
      }
      v6 = v9;
      *(_QWORD *)v40 = v9;
      break;
    }
  }
  if ( v7 )
    ReleaseSRWLockShared(v7);
  if ( !v6 )
    goto LABEL_67;
  *a3 = 0LL;
  v11 = *((_QWORD *)v6 + 28);
  v12 = (_WORD *)(*(__int64 (__fastcall **)(signed __int32 *))(*(_QWORD *)v6 + 72LL))(v6);
  v13 = (__int64)v12;
  if ( !v12 || !*v12 )
    v13 = (*(__int64 (__fastcall **)(signed __int32 *))(*(_QWORD *)v6 + 80LL))(v6);
  *a3 = 0LL;
  v14 = (struct _RTL_CRITICAL_SECTION *)(v11 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(v11 + 32));
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v15 = -1LL;
  do
    ++v15;
  while ( *(_WORD *)(v13 + 2 * v15) );
  std::wstring::_Construct<1,unsigned short const *>(&v45, v13);
  v16 = *(_QWORD **)(v11 + 704);
  v42 = v16[1];
  v43 = 0;
  v17 = v16;
  v44 = v16;
  v18 = v46;
  v19 = v45;
  if ( !*(_BYTE *)(v42 + 25) )
  {
    std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(&v45);
    do
    {
      if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(v20 + 32) )
        v22 = *(char **)v22;
      v25 = v18;
      if ( v18 >= v24 )
        v25 = v24;
      v26 = v22 - v21;
      while ( v25 )
      {
        v27 = *(_WORD *)&v21[v26];
        if ( v27 != *(_WORD *)v21 )
        {
          v28 = 1;
          if ( v27 < *(_WORD *)v21 )
            v28 = -1;
          if ( v28 >= 0 )
            goto LABEL_30;
          goto LABEL_43;
        }
        --v25;
        v21 += 2;
      }
      if ( v24 >= v18 )
      {
LABEL_30:
        v17 = v23;
        v44 = v23;
        v20 = *v23;
        continue;
      }
LABEL_43:
      v20 = v23[2];
    }
    while ( !*(_BYTE *)(v20 + 25) );
    v14 = (struct _RTL_CRITICAL_SECTION *)(v11 + 32);
  }
  if ( *((_BYTE *)v17 + 25) )
  {
LABEL_49:
    v17 = v16;
  }
  else
  {
    std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(v17 + 4);
    if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(&v45) )
      v30 = v19;
    v32 = v31;
    if ( v31 >= v18 )
      v32 = v18;
    v33 = v30 - (_QWORD)v29;
    while ( 1 )
    {
      if ( !v32 )
      {
        if ( v18 >= v31 )
          goto LABEL_50;
        goto LABEL_49;
      }
      v34 = *(unsigned __int16 *)((char *)v29 + v33);
      if ( v34 != *v29 )
        break;
      --v32;
      ++v29;
    }
    v35 = 1;
    if ( v34 < *v29 )
      v35 = -1;
    if ( v35 < 0 )
      goto LABEL_49;
  }
LABEL_50:
  if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(&v45) )
    std::wstring::_Deallocate_for_capacity(v36, v19, v47);
  if ( v17 != *(_QWORD **)(v11 + 704) )
  {
    v39 = (struct IApplicationSpecificEndpointInfo *)v17[8];
    if ( v39 )
    {
      *v41 = v39;
      (*(void (__fastcall **)(struct IApplicationSpecificEndpointInfo *))(*(_QWORD *)v39 + 8LL))(v39);
    }
    else
    {
      *v41 = 0LL;
    }
    if ( v14 )
      LeaveCriticalSection(v14);
LABEL_67:
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(v40);
    return 0LL;
  }
  if ( v14 )
    LeaveCriticalSection(v14);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x18D,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
    (const char *)0x80070490LL);
  for ( j = v6[5]; j != 0x7FFFFFFF; j = v6[5] )
  {
    if ( j == _InterlockedCompareExchange(v6 + 5, j - 1, j) )
      break;
  }
  if ( j == 1 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v40 + 560LL))(*(_QWORD *)v40, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return 2147943568LL;
}
