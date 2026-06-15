/*
 * XREFs of ?RegisterAPOWithProcessingHost@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObject@@@Z @ 0x140018A90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace@AEAPEAUIAudioProcessingObject@@AEAV?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@PEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUIAudioProcessingObject@@U?$hash@PEAUIAudioProcessingObject@@@std@@U?$equal_to@PEAUIAudioProcessingObject@@@3@@std@@V?$allocator@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAPEAUIAudioProcessingObject@@AEAV?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x140018C34 (--$emplace@AEAPEAUIAudioProcessingObject@@AEAV-$com_ptr_t@VCAPOProcessingHostObject@@Uerr_return.c)
 *     ??$MakeAndInitialize@VCAPOProcessingHostObject@@V1@AEAPEAUIAudioProcessingObject@@@Details@WRL@Microsoft@@YAJPEAPEAVCAPOProcessingHostObject@@AEAPEAUIAudioProcessingObject@@@Z @ 0x140018E98 (--$MakeAndInitialize@VCAPOProcessingHostObject@@V1@AEAPEAUIAudioProcessingObject@@@Details@WRL@M.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAPOProcessingHost::RegisterAPOWithProcessingHost(
        CAPOProcessingHost *this,
        struct IAudioProcessingObject *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  char *v5; // r14
  __int64 v6; // rcx
  unsigned __int64 i; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // edi
  const char *v15; // r9
  __int64 result; // rax
  _BYTE v17[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF
  struct IAudioProcessingObject *v20; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+60h] [rbp+18h] BYREF

  v20 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  v21 = v4;
  v5 = (char *)this + 184;
  v6 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
  {
    v8 = *((unsigned __int8 *)&v20 + i);
    v6 = 0x100000001B3LL * (v8 ^ v6);
  }
  try
  {
    v9 = 2 * (v6 & *((_QWORD *)this + 29));
    v10 = *((_QWORD *)this + 26);
    v11 = *(_QWORD *)(v10 + 8 * v9 + 8);
    if ( v11 == *((_QWORD *)this + 24) )
    {
LABEL_8:
      v11 = 0LL;
    }
    else
    {
      v12 = *(_QWORD *)(v10 + 8 * v9);
      while ( a2 != *(struct IAudioProcessingObject **)(v11 + 16) )
      {
        if ( v11 == v12 )
          goto LABEL_8;
        v11 = *(_QWORD *)(v11 + 8);
      }
    }
    if ( v11 && v11 != *((_QWORD *)this + 24) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x77,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
        (const char *)0x8000FFFFLL);
      if ( v4 )
        LeaveCriticalSection(v4);
      result = 2147549183LL;
    }
    else
    {
      v19 = 0LL;
      v13 = Microsoft::WRL::Details::MakeAndInitialize<CAPOProcessingHostObject,CAPOProcessingHostObject,IAudioProcessingObject * &>(
              &v19,
              &v20);
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7A,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
          (const char *)(unsigned int)v13);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v19);
        CSAutoLock<1>::~CSAutoLock<1>(&v21);
        result = v14;
      }
      else
      {
        std::_Hash<std::_Umap_traits<IAudioProcessingObject *,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>,std::_Uhash_compare<IAudioProcessingObject *,std::hash<IAudioProcessingObject *>,std::equal_to<IAudioProcessingObject *>>,std::allocator<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>>,0>>::emplace<IAudioProcessingObject * &,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy> &>(
          v5,
          v17,
          &v20,
          &v19);
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        if ( v4 )
          LeaveCriticalSection(v4);
        result = 0LL;
      }
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x7E,
                           (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
                           v15);
  }
  return result;
}
