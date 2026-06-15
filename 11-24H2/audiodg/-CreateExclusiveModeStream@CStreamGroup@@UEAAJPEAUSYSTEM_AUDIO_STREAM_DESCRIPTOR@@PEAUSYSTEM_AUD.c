/*
 * XREFs of ?CreateExclusiveModeStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14006DF30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073E4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000764C (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079E0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInstanceInternal@@@Z @ 0x140018E68 (--0-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInsta.c)
 *     ?AddHead@?$CAtlList@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBV?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x140028EE8 (-AddHead@-$CAtlList@V-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAUIStreamInstanceInternal@@_JKW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@11U_GUID@@@Z @ 0x14006E368 (-CreateStreamInstance@CStreamInstance@@SAJPEAPEAUIStreamInstanceInternal@@_JKW4SYSTEM_AUDIO_STRE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CStreamGroup::CreateExclusiveModeStream(
        CStreamGroup *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct SYSTEM_AUDIO_STREAM *a3)
{
  struct SYSTEM_AUDIO_STREAM *v3; // rsi
  __int64 v6; // rcx
  const struct _tlgProvider_t *v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rbx
  __int64 v11; // r8
  ATL::CAtlException *v13; // rbx
  __int64 v14; // [rsp+50h] [rbp-178h] BYREF
  char *v15; // [rsp+58h] [rbp-170h] BYREF
  struct _RTL_CRITICAL_SECTION *v16[2]; // [rsp+60h] [rbp-168h] BYREF
  GUID v17; // [rsp+70h] [rbp-158h] BYREF
  struct SYSTEM_AUDIO_STREAM *v18; // [rsp+80h] [rbp-148h]
  ATL::CAtlException *v19; // [rsp+88h] [rbp-140h] BYREF
  __int128 v20; // [rsp+90h] [rbp-138h]
  __int128 v21; // [rsp+A0h] [rbp-128h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+B0h] [rbp-118h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+0h]

  v3 = a3;
  v18 = a3;
  v20 = *((_OWORD *)a2 + 3);
  v21 = v20;
  EtwEventActivityIdControl(4LL, &v21);
  v7 = AudioDgTelemetryProvider::Provider(v6);
  CPerfTracker::CPerfTracker(&PerformanceCount, v7, "SrvStreamGroup_CreateStream", 0LL);
  if ( !*((_BYTE *)this + 337) )
  {
    v9 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
      (const char *)0x8000FFFFLL);
    goto LABEL_11;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this + 5);
  v16[0] = (struct _RTL_CRITICAL_SECTION *)((char *)this + 200);
  v14 = 0LL;
  v17 = GUID_00000000_0000_0000_0000_000000000000;
  v8 = CStreamInstance::CreateStreamInstance(
         &v14,
         *((_QWORD *)a2 + 14),
         *((unsigned int *)a2 + 3),
         *(unsigned int *)a2,
         this);
  v9 = v8;
  if ( v8 >= 0 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
    *(_QWORD *)&v17.Data1 = (char *)this + 56;
    v10 = v14;
    wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>(
      &v15,
      v14);
    try
    {
      ATL::CAtlList<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>>>::AddHead(
        (__int64 *)this + 12,
        (__int64)&v15,
        v11);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v15);
    }
    catch ( ATL::CAtlException *v19 )
    {
      v13 = v19;
      if ( *(_DWORD *)v19 == -1073741571 )
        _o__resetstkoflw();
      LODWORD(v15) = *(_DWORD *)v13;
      v9 = (unsigned int)v15;
      if ( (int)v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x66,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
          (const char *)(unsigned int)v15);
        CSAutoLock<1>::~CSAutoLock<1>((struct _RTL_CRITICAL_SECTION **)&v17);
        goto LABEL_7;
      }
      v10 = v14;
      v3 = v18;
    }
    CSAutoLock<1>::~CSAutoLock<1>((struct _RTL_CRITICAL_SECTION **)&v17);
    *((_QWORD *)v3 + 4) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 88LL))(v10);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v14);
    CSAutoLock<1>::~CSAutoLock<1>(v16);
    CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    EtwEventActivityIdControl(4LL, &v21);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x60,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
    (const char *)(unsigned int)v8);
LABEL_7:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v14);
  CSAutoLock<1>::~CSAutoLock<1>(v16);
LABEL_11:
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  EtwEventActivityIdControl(4LL, &v21);
  return v9;
}
