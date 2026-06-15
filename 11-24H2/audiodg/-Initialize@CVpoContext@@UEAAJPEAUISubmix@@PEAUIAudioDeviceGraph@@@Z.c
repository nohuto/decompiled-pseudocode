/*
 * XREFs of ?Initialize@CVpoContext@@UEAAJPEAUISubmix@@PEAUIAudioDeviceGraph@@@Z @ 0x140073CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14000EDB0 (-reset@-$com_ptr_t@U-$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundati.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?Add@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAHAEBKAEBQEAVCVpoContext@@@Z @ 0x14007390C (-Add@-$CSimpleMap@KPEAVCVpoContext@@V-$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAH.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVpoContext::Initialize(
        CVpoContext *this,
        __int64 (__fastcall ***a2)(struct ISubmix *, GUID *, int *),
        struct IAudioDeviceGraph *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 (__fastcall *v8)(struct ISubmix *, GUID *, int *); // rbx
  int v9; // eax
  unsigned int v10; // ebx
  int v12[2]; // [rsp+20h] [rbp-48h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  char *v15; // [rsp+88h] [rbp+20h] BYREF

  *((_DWORD *)this + 20) = _InterlockedIncrement((volatile signed __int32 *)&CVpoContext::s_VpoContextId);
  EnterCriticalSection(&CVpoContext::s_csMapVpoContext);
  v13 = &CVpoContext::s_csMapVpoContext;
  v15 = (char *)this - 8;
  ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::Add(
    v6,
    (_DWORD *)this + 20,
    &v15);
  CSAutoLock<1>::~CSAutoLock<1>(&v13);
  v7 = 0LL;
  *(_QWORD *)v12 = 0LL;
  if ( !a2 )
    goto LABEL_5;
  v8 = **a2;
  wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset((__int64 *)v12);
  v9 = v8((struct ISubmix *)a2, &GUID_57386a31_7482_4b2f_89c9_c3dcf849c66d, v12);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v7 = *(_QWORD *)v12;
LABEL_5:
    *((_QWORD *)this + 8) = v7;
    *((_QWORD *)this + 9) = a3;
    v10 = 0;
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3A,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\vpocontext.cpp",
    (const char *)(unsigned int)v9);
LABEL_6:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)v12);
  return v10;
}
