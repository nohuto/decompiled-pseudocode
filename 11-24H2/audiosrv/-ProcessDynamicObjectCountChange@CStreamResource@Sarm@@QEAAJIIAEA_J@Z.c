/*
 * XREFs of ?ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z @ 0x1801239C8
 * Callers:
 *     ?HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z @ 0x180120910 (-HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180004F4C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U3@U-$_tlg.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x18004DFD0 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAII@Z @ 0x18012313C (-CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAII@Z.c)
 *     ?SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z @ 0x180123B94 (-SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z.c)
 *     ?ValidateDynamicObjectRequest@CStreamResource@Sarm@@QEBAJII@Z @ 0x180123D14 (-ValidateDynamicObjectRequest@CStreamResource@Sarm@@QEBAJII@Z.c)
 */

__int64 __fastcall Sarm::CStreamResource::ProcessDynamicObjectCountChange(
        Sarm::CStreamResource *this,
        unsigned int a2,
        unsigned int a3,
        __int64 *a4)
{
  int v8; // eax
  unsigned int v9; // edi
  unsigned int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // r15
  __int64 v14; // rsi
  __int64 *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // r12d
  double v19; // xmm0_8
  bool v20; // cf
  int v21; // eax
  unsigned int v22; // ebx
  unsigned int v23; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v24; // [rsp+54h] [rbp-1Ch] BYREF
  __int64 v25; // [rsp+58h] [rbp-18h] BYREF
  int v26[2]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  LARGE_INTEGER PerformanceCount; // [rsp+C8h] [rbp+58h] BYREF

  SarmTraceLoggingTracer("Sarm::CStreamResource::ProcessDynamicObjectCountChange", 409);
  *a4 = 0LL;
  v8 = Sarm::CStreamResource::ValidateDynamicObjectRequest(this, a2, a3);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = *((_DWORD *)this + 17);
    *((_DWORD *)this + 16) = a2;
    if ( a3 < v11 )
      v11 = a3;
    *((_DWORD *)this + 18) = v11;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    v18 = Sarm::CStreamResource::CalculateDynamicObjectGrantCount(this, a3);
    if ( v18 < *((_DWORD *)this + 20) )
    {
      PerformanceCount.QuadPart = 0LL;
      QueryPerformanceCounter(&PerformanceCount);
      if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
        v19 = (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
            + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1));
      else
        v19 = (double)(int)g_u64QPCFrequency;
      v15 = *(__int64 **)(*((_QWORD *)this + 1) + 16LL);
      if ( *v15 >= 0 )
        v12 = *v15;
      if ( v15[1] >= 0 )
        v13 = v15[1];
      v14 = (unsigned int)(int)((double)(int)PerformanceCount.LowPart * 10000000.0 / v19);
    }
    if ( (unsigned int)dword_1801D82B0 > 5 )
    {
      v20 = v18 < *((_DWORD *)this + 20);
      v24 = a2;
      v25 = (__int64)this + 16;
      LOBYTE(PerformanceCount.LowPart) = v20;
      *(_QWORD *)v26 = *((_QWORD *)this + 5);
      v23 = a3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        (__int64)v15,
        (__int64)&unk_1801AE4F1,
        v16,
        v17,
        (__int64)v26,
        &v25,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&PerformanceCount);
    }
    v21 = Sarm::CStreamResource::SetDynamicObjects(this, v18, v14 + v12);
    v22 = v21;
    if ( v21 >= 0 )
    {
      *a4 = v12 + v14 + v13;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BA,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
        (const char *)(unsigned int)v21);
      return v22;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19C,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
}
