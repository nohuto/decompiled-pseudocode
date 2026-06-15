/*
 * XREFs of ?Add@CAudioHistoryBufferManager@@QEAAJ_KKPEAUICrossProcessMemory@@@Z @ 0x140065F54
 * Callers:
 *     ?CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140005F80 (-CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?GetNode@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x14004B748 (-GetNode@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 *     ?SetAt@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@QEAAPEAU__POSITION@@_KAEBV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1400666BC (-SetAt@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V-$CE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioHistoryBufferManager::Add(
        struct _RTL_CRITICAL_SECTION *this,
        __int64 a2,
        int a3,
        struct ICrossProcessMemory *a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 (__fastcall **i)(__int64 *, struct ICrossProcessMemory *); // rax
  int v12; // eax
  __int64 v13; // r9
  __int64 v14; // rdx
  ATL::CAtlException *v16; // rbx
  unsigned int v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+38h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+40h] [rbp-38h] BYREF
  __int64 v20; // [rsp+48h] [rbp-30h] BYREF
  ATL::CAtlException *v21; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v23; // [rsp+80h] [rbp+8h] BYREF

  EnterCriticalSection(this);
  v19 = this;
  v18 = 0LL;
  v8 = this + 1;
  v17 = 0;
  v23 = 0;
  if ( ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::GetNode(
         (__int64)&this[1],
         a2,
         &v17,
         &v23,
         &v20) )
  {
    v9 = -2147024809;
    v10 = 52LL;
  }
  else
  {
    v18 = 0LL;
    for ( i = (__int64 (__fastcall **)(__int64 *, struct ICrossProcessMemory *))&unk_1400A1350;
          i != (__int64 (__fastcall **)(__int64 *, struct ICrossProcessMemory *))&CCrossProcessControl<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::`vftable';
          i += 2 )
    {
      if ( a3 == *(_DWORD *)i )
      {
        v12 = i[1](&v18, a4);
        v9 = v12;
        if ( v12 < 0 )
        {
          v13 = (unsigned int)v12;
          v14 = 40LL;
          goto LABEL_13;
        }
        try
        {
          ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::SetAt(
            v8,
            a2,
            &v18);
        }
        catch ( ATL::CAtlException *v21 )
        {
          v16 = v21;
          if ( *(_DWORD *)v21 == -1073741571 )
            _o__resetstkoflw();
          v23 = *(_DWORD *)v16;
          v9 = v23;
          if ( v23 < 0 )
          {
            v10 = 58LL;
            goto LABEL_14;
          }
        }
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v18);
        CSAutoLock<1>::~CSAutoLock<1>(&v19);
        return 0LL;
      }
    }
    v9 = -2147024809;
    v13 = 2147942487LL;
    v14 = 45LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cphistorybufferreader.cpp",
      (const char *)v13);
    v10 = 54LL;
  }
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiohistorybuffermanager.cpp",
    (const char *)v9);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v18);
  CSAutoLock<1>::~CSAutoLock<1>(&v19);
  return v9;
}
