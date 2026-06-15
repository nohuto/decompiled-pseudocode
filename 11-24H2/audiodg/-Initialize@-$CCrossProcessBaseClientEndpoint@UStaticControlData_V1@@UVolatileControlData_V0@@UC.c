/*
 * XREFs of ?Initialize@?$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEvent@@2I@Z @ 0x1400832F0
 * Callers:
 *     ?Initialize@?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEvent@@2I@Z @ 0x140087A70 (-Initialize@-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14000CD7C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x14000CDC0 (-AERTFree@@YAXPEAX0@Z.c)
 *     ??4?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z @ 0x140018FCC (--4-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z.c)
 *     ?GetBitsPerSample@@YAIPEBUtWAVEFORMATEX@@@Z @ 0x140027794 (-GetBitsPerSample@@YAIPEBUtWAVEFORMATEX@@@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z @ 0x14003F774 (-AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z.c)
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x14004390C (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140044AFC (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x14005B481 (memcpy_0.c)
 *     ?IsValidControlData@ControlData_V1@@QEAAJXZ @ 0x140084760 (-IsValidControlData@ControlData_V1@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCrossProcessBaseClientEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::Initialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // r9
  __int64 v14; // rdx
  ControlData_V1 *v15; // rsi
  void *v16; // rax
  __int64 v17; // rcx
  void *v18; // rax
  int IsValidControlData; // eax
  void *v20; // rax
  int v21; // r8d
  const struct tWAVEFORMATEX *v22; // rdx
  unsigned int v23; // r8d
  __int64 v24; // rdx
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // ecx
  void *v28; // rax
  int v29; // r8d
  __int64 v30; // rcx
  void *v31; // r8
  void *v32; // rax
  int v33; // r8d
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rcx
  void *v38; // rax
  int v39; // r8d
  __int64 v41; // [rsp+20h] [rbp-20h] BYREF
  ControlData_V1 *v42; // [rsp+28h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v43; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v45; // [rsp+60h] [rbp+20h] BYREF

  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 - 408);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 - 408));
  v43 = v9;
  if ( *(_DWORD *)(a1 - 368) )
  {
    v10 = -2005139440;
    v11 = 1092LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
      (const char *)v10);
    goto LABEL_27;
  }
  if ( !a2 )
  {
    v10 = -2147024809;
    v11 = 1093LL;
    goto LABEL_5;
  }
  v41 = 0LL;
  wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=(&v41, a2);
  wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=((__int64 *)(a1 + 24), a4);
  wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=((__int64 *)(a1 + 32), a5);
  v42 = 0LL;
  v45 = 0;
  v12 = (*(__int64 (__fastcall **)(__int64, int *, ControlData_V1 **))(*(_QWORD *)v41 + 32LL))(v41, &v45, &v42);
  v10 = v12;
  if ( v12 < 0 )
  {
    v13 = (unsigned int)v12;
    v14 = 1105LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
      (const char *)v13);
LABEL_9:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v41);
    goto LABEL_27;
  }
  v15 = v42;
  *(_QWORD *)(a1 - 344) = v42;
  v16 = (void *)AERTGetDLLRTHeap();
  v18 = (void *)AE_ALLOCATE_SAFEMULT(
                  v17,
                  *((unsigned int *)v15 + 51),
                  v16,
                  (__int64 (__fastcall *)(unsigned __int64, void *))AERTAllocate);
  *(_QWORD *)(a1 - 328) = v18;
  if ( !v18 )
  {
    v10 = -2147024882;
    v13 = 2147942414LL;
    v14 = 1112LL;
    goto LABEL_8;
  }
  memcpy_0(v18, (char *)v15 + 204, *((unsigned int *)v15 + 51));
  IsValidControlData = ControlData_V1::IsValidControlData(v15);
  v10 = IsValidControlData;
  if ( IsValidControlData < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x461,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
      (const char *)(unsigned int)IsValidControlData);
    v20 = (void *)AERTGetDLLRTHeap();
    AERTFree(*(void **)(a1 - 328), v20, v21);
    *(_QWORD *)(a1 - 328) = 0LL;
    goto LABEL_9;
  }
  *(_QWORD *)(a1 - 224) = 0LL;
  *(_QWORD *)(a1 - 240) = 0LL;
  v22 = *(const struct tWAVEFORMATEX **)(a1 - 328);
  *(_DWORD *)(a1 - 320) = v22[10].nBlockAlign;
  *(float *)(a1 - 252) = (float)(int)v22[10].nSamplesPerSec;
  *(_DWORD *)(a1 - 304) = GetBitsPerSample(v22 + 10);
  v25 = *(_DWORD *)(v24 + 164) - *(_DWORD *)(v24 + 160);
  *(_DWORD *)(a1 - 256) = v25;
  v26 = v25 / v23;
  v27 = a6;
  if ( a6 > v26 )
  {
    v10 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x479,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
      (const char *)0x80070057LL);
    v28 = (void *)AERTGetDLLRTHeap();
    AERTFree(*(void **)(a1 - 328), v28, v29);
    *(_QWORD *)(a1 - 328) = 0LL;
    goto LABEL_9;
  }
  if ( !a6 )
    v27 = v26;
  *(_DWORD *)(a1 - 312) = v27;
  v31 = (void *)AERTCreateZoneHeap(v23 * v27);
  *(_QWORD *)(a1 - 264) = v31;
  if ( !v31 )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x47F,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
      (const char *)0x8007000ELL);
    v32 = (void *)AERTGetDLLRTHeap();
    AERTFree(*(void **)(a1 - 328), v32, v33);
    *(_QWORD *)(a1 - 328) = 0LL;
    goto LABEL_9;
  }
  v34 = AE_ALLOCATE_SAFEMULT(v30, (unsigned int)(*(_DWORD *)(a1 - 312) * *(_DWORD *)(a1 - 320)), v31, AERTZoneAllocate);
  *(_QWORD *)(a1 - 296) = v34;
  if ( !v34 )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x488,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
      (const char *)0x8007000ELL);
    v37 = *(_QWORD *)(a1 - 264);
    if ( v37 )
    {
      AERTDestroyZoneHeap(v37, v35, v36);
      *(_QWORD *)(a1 - 264) = 0LL;
    }
    v38 = (void *)AERTGetDLLRTHeap();
    AERTFree(*(void **)(a1 - 328), v38, v39);
    *(_QWORD *)(a1 - 328) = 0LL;
    goto LABEL_9;
  }
  *(_QWORD *)(a1 - 336) = (char *)v15 + 8;
  *(_QWORD *)(a1 - 288) = (char *)v42 + *(unsigned int *)(*(_QWORD *)(a1 - 328) + 156LL);
  if ( *((_DWORD *)v15 + 47) != -1 )
    *(_QWORD *)(a1 - 280) = (char *)v42 + *(unsigned int *)(*(_QWORD *)(a1 - 336) + 180LL);
  _InterlockedExchange((volatile __int32 *)(a1 - 368), 1);
  wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=((__int64 *)(a1 - 352), v41);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v41);
  v10 = 0;
LABEL_27:
  CSAutoLock<1>::~CSAutoLock<1>(&v43);
  return v10;
}
