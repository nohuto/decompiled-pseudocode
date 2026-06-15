/*
 * XREFs of ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x18003FE78
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18000E4F0 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@HH@Z @ 0x180038710 (-OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@HH@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18000D6B0 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ??$_Emplace_reallocate@AEAK@?$vector@KV?$allocator@K@std@@@std@@AEAAPEAKQEAKAEAK@Z @ 0x180013500 (--$_Emplace_reallocate@AEAK@-$vector@KV-$allocator@K@std@@@std@@AEAAPEAKQEAKAEAK@Z.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180013EA0 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??$find@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@K@std@@@std@@@std@@K@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@K@std@@@std@@@0@V10@V10@AEBK@Z @ 0x180018C6C (--$find@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@K@std@@@std@@@std@@K@std@@YA-AV-$_Ve.c)
 *     ?ConvertDbToEngineVolume@@YAMM@Z @ 0x18001ED24 (-ConvertDbToEngineVolume@@YAMM@Z.c)
 *     memmove_0 @ 0x180048BB8 (memmove_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdScreenReaderStateChanged(
        __int64 a1,
        unsigned int a2,
        int a3,
        float a4,
        struct TSSession *a5)
{
  DWORD v7; // ebx
  int v8; // edi
  struct TSSession *v9; // r15
  int v10; // eax
  unsigned int v11; // ebx
  const char *v12; // r9
  __int64 result; // rax
  struct TSSession *v14; // rsi
  float v15; // xmm8_4
  int *v16; // rbx
  int *v17; // rax
  float v18; // xmm6_4
  struct _RTL_CRITICAL_SECTION *v19[4]; // [rsp+20h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v21; // [rsp+88h] [rbp+10h] BYREF

  v21 = a2;
  v7 = a1;
  CWindowsPolicyManager::Lock(a1, v19);
  v8 = 0;
  v9 = a5;
  *(_DWORD *)a5 = 0;
  a5 = 0LL;
  try
  {
    v10 = TsSessionFromSessionId(v7, 1, &a5);
    v11 = v10;
    if ( v10 >= 0 )
    {
      v14 = a5;
      v15 = *((float *)a5 + 252);
      v16 = (int *)((char *)a5 + 984);
      std::find<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned long>>>,unsigned long>(
        &a5,
        *((_QWORD *)a5 + 123),
        *((_QWORD *)a5 + 124),
        &v21);
      v17 = (int *)*((_QWORD *)v16 + 1);
      if ( a3 )
      {
        if ( a5 == (struct TSSession *)v17 )
        {
          if ( v17 == *((int **)v16 + 2) )
          {
            std::vector<unsigned long>::_Emplace_reallocate<unsigned long &>(v16, *((_BYTE **)v16 + 1), &v21);
          }
          else
          {
            *v17 = a2;
            *((_QWORD *)v16 + 1) += 4LL;
          }
        }
        v18 = ConvertDbToEngineVolume(COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_N24_0)));
        *((float *)v14 + 252) = fmaxf(v18, fminf(ConvertDbToEngineVolume(0.0), a4));
      }
      else
      {
        if ( a5 != (struct TSSession *)v17 )
        {
          memmove_0(a5, (char *)a5 + 4, (char *)v17 - ((char *)a5 + 4));
          *((_QWORD *)v16 + 1) -= 4LL;
          v17 = (int *)*((_QWORD *)v16 + 1);
        }
        if ( v17 == *(int **)v16 )
          *((_DWORD *)v14 + 252) = 1065353216;
      }
      if ( v15 != *((float *)v14 + 252) )
        v8 = 1;
      *(_DWORD *)v9 = v8;
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v19);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7B9,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v10);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v19);
      result = v11;
    }
  }
  catch ( ... )
  {
    LODWORD(a5) = wil::details::in1diag3::Return_CaughtException(
                    retaddr,
                    (void *)0x7DA,
                    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                    v12);
    return (unsigned int)a5;
  }
  return result;
}
