/*
 * XREFs of ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x1800C1AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18006DB00 (-Allocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 *     WPP_SF_S @ 0x1800C033C (WPP_SF_S.c)
 *     WPP_SF_dd @ 0x1800C33FC (WPP_SF_dd.c)
 *     ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x1800C8714 (-GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioSession::GetChannelsPeakValues(CAudioStream ***this, unsigned int a2, float *a3)
{
  __int64 v4; // rbx
  int v6; // edi
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  CAudioStream **v9; // rsi
  CAudioStream **v10; // r14
  CAudioStream *v11; // rax
  _BYTE *v12; // rbx
  float *v13; // rax
  __int64 v14; // r8
  float v15; // xmm0_4
  struct _RTL_CRITICAL_SECTION *v16[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v17; // [rsp+80h] [rbp+40h] BYREF
  void *Block; // [rsp+88h] [rbp+48h] BYREF

  v17 = 0;
  v4 = a2;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Eu, (__int64)&WPP_ea93f1868512325b454513e390c361b8_Traceguids, 0LL);
  }
  if ( !a3 )
  {
    v6 = -2147467261;
LABEL_7:
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetChannelsPeakValues", 1447, v6);
    return (unsigned int)v6;
  }
  if ( (_DWORD)v4 )
    memset_0(a3, 0, 4 * v4);
  v6 = ((__int64 (__fastcall *)(CAudioStream ***, unsigned int *))(*this)[44])(this, &v17);
  if ( v6 < 0 )
    goto LABEL_7;
  if ( (_DWORD)v4 != v17 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, &WPP_ea93f1868512325b454513e390c361b8_Traceguids);
    }
    v6 = -2147024809;
    goto LABEL_7;
  }
  v8 = (struct _RTL_CRITICAL_SECTION *)(this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 8));
  v9 = this[14];
  v10 = this[15];
  v16[0] = v8;
  while ( v9 != v10 )
  {
    v11 = *v9;
    v6 = 0;
    Block = 0LL;
    v17 = *((_DWORD *)v11 + 25);
    ATL::CHeapPtr<float,ATL::CCRTAllocator>::Allocate(&Block, v17);
    v12 = Block;
    if ( !Block )
    {
      v6 = -2147024882;
      free(0LL);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v16);
      goto LABEL_7;
    }
    if ( CAudioStream::GetChannelPeakValues(*v9, v17, (float *)Block) >= 0 && v17 )
    {
      v13 = a3;
      v14 = v17;
      do
      {
        v15 = *(float *)((char *)v13 + v12 - (_BYTE *)a3);
        if ( v15 > *v13 )
          *v13 = v15;
        ++v13;
        --v14;
      }
      while ( v14 );
    }
    free(v12);
    ++v9;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v16);
  return (unsigned int)v6;
}
