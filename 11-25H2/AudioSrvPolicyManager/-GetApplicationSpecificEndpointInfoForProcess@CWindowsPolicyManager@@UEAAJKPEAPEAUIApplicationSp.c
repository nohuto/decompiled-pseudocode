/*
 * XREFs of ?GetApplicationSpecificEndpointInfoForProcess@CWindowsPolicyManager@@UEAAJKPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x180005ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006290 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x1800065B0 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x18001B218 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     ?_Deallocate_for_capacity@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXAEAV?$allocator@G@2@QEAG_K@Z @ 0x18001B228 (-_Deallocate_for_capacity@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAXAEAV-$.c)
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  char *v16; // rdx
  __int64 v17; // r8
  signed __int64 v18; // r9
  _QWORD *v19; // r13
  _QWORD *v20; // rbp
  unsigned __int64 v21; // r14
  __int128 *v22; // rsi
  char v23; // di
  __int64 v24; // r10
  __int128 *v25; // rdx
  char *v26; // r9
  _QWORD *v27; // r10
  unsigned __int64 v28; // r11
  unsigned __int64 v29; // rax
  unsigned __int16 v30; // cx
  int v31; // eax
  _QWORD *v32; // rdx
  __int64 v33; // r8
  char *v34; // r9
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // rax
  unsigned __int16 v37; // cx
  int v38; // eax
  __int64 v39; // rcx
  signed __int32 j; // edx
  struct IApplicationSpecificEndpointInfo *v42; // rcx
  int v43[2]; // [rsp+20h] [rbp-78h] BYREF
  struct IApplicationSpecificEndpointInfo **v44; // [rsp+28h] [rbp-70h]
  __int64 v45; // [rsp+30h] [rbp-68h]
  int v46; // [rsp+3Ch] [rbp-5Ch]
  _QWORD *v47; // [rsp+40h] [rbp-58h]
  __int128 v48; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v49; // [rsp+58h] [rbp-40h]
  __int64 v50; // [rsp+60h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v44 = a3;
  *a3 = 0LL;
  v5 = g_ApplicationManager;
  v6 = 0LL;
  *(_QWORD *)v43 = 0LL;
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
      *(_QWORD *)v43 = v9;
      break;
    }
  }
  if ( v7 )
    ReleaseSRWLockShared(v7);
  if ( !v6 )
    goto LABEL_71;
  *a3 = 0LL;
  v11 = *((_QWORD *)v6 + 28);
  v12 = (_WORD *)(*(__int64 (__fastcall **)(signed __int32 *))(*(_QWORD *)v6 + 72LL))(v6);
  v13 = (__int64)v12;
  if ( !v12 || !*v12 )
    v13 = (*(__int64 (__fastcall **)(signed __int32 *))(*(_QWORD *)v6 + 80LL))(v6);
  *a3 = 0LL;
  v14 = (struct _RTL_CRITICAL_SECTION *)(v11 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(v11 + 32));
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v15 = -1LL;
  do
    ++v15;
  while ( *(_WORD *)(v13 + 2 * v15) );
  std::wstring::_Construct<1,unsigned short const *>(&v48, v13);
  v19 = *(_QWORD **)(v11 + 704);
  v45 = v19[1];
  v46 = 0;
  v20 = v19;
  v47 = v19;
  v21 = v49;
  v22 = (__int128 *)v48;
  if ( !*(_BYTE *)(v45 + 25) )
  {
    v23 = std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(&v48, v16, v17, v18);
    do
    {
      v25 = &v48;
      if ( v23 )
        v25 = v22;
      if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(
                              v24 + 32,
                              v25,
                              v17,
                              v24 + 32) )
        v26 = *(char **)v26;
      v29 = v21;
      if ( v21 >= v28 )
        v29 = v28;
      v18 = v26 - v16;
      while ( v29 )
      {
        v30 = *(_WORD *)&v16[v18];
        if ( v30 != *(_WORD *)v16 )
        {
          v31 = 1;
          if ( v30 < *(_WORD *)v16 )
            v31 = -1;
          if ( v31 >= 0 )
            goto LABEL_32;
          goto LABEL_47;
        }
        --v29;
        v16 += 2;
      }
      if ( v28 >= v21 )
      {
LABEL_32:
        v20 = v27;
        v47 = v27;
        v24 = *v27;
        continue;
      }
LABEL_47:
      v24 = v27[2];
    }
    while ( !*(_BYTE *)(v24 + 25) );
    v14 = (struct _RTL_CRITICAL_SECTION *)(v11 + 32);
  }
  if ( *((_BYTE *)v20 + 25) )
  {
LABEL_53:
    v20 = v19;
  }
  else
  {
    if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(
                            v20 + 4,
                            v20 + 4,
                            v17,
                            v18) )
      v32 = (_QWORD *)*v32;
    if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(
                            &v48,
                            v32,
                            v33,
                            &v48) )
      v34 = (char *)v22;
    v36 = v35;
    if ( v35 >= v21 )
      v36 = v21;
    v18 = v34 - v16;
    while ( 1 )
    {
      if ( !v36 )
      {
        if ( v21 >= v35 )
          goto LABEL_54;
        goto LABEL_53;
      }
      v37 = *(_WORD *)&v16[v18];
      if ( v37 != *(_WORD *)v16 )
        break;
      --v36;
      v16 += 2;
    }
    v38 = 1;
    if ( v37 < *(_WORD *)v16 )
      v38 = -1;
    if ( v38 < 0 )
      goto LABEL_53;
  }
LABEL_54:
  if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(&v48, v16, v17, v18) )
    std::wstring::_Deallocate_for_capacity(v39, v22, v50);
  if ( v20 != *(_QWORD **)(v11 + 704) )
  {
    v42 = (struct IApplicationSpecificEndpointInfo *)v20[8];
    if ( v42 )
    {
      *v44 = v42;
      (*(void (__fastcall **)(struct IApplicationSpecificEndpointInfo *))(*(_QWORD *)v42 + 8LL))(v42);
    }
    else
    {
      *v44 = 0LL;
    }
    if ( v14 )
      LeaveCriticalSection(v14);
LABEL_71:
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(v43);
    return 0LL;
  }
  if ( v14 )
    LeaveCriticalSection(v14);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x18E,
    (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
    (const char *)0x80070490LL,
    v43[0]);
  for ( j = v6[5]; j != 0x7FFFFFFF; j = v6[5] )
  {
    if ( j == _InterlockedCompareExchange(v6 + 5, j - 1, j) )
      break;
  }
  if ( j == 1 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v43 + 560LL))(*(_QWORD *)v43, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return 2147943568LL;
}
