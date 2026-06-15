/*
 * XREFs of ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJ_N@Z @ 0x18010DC40
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x18001CE00 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x18001DF28 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180052470 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x18006FB98 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x180080160 (-Allocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     pow @ 0x1800A8B64 (pow.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_q @ 0x1800C480C (WPP_SF_q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVolumeSoftware::UpdateMasterVolumeLevel(CVolumeSoftware *this, unsigned __int8 a2)
{
  unsigned __int8 v2; // r13
  int v4; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  float *v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rax
  float v10; // xmm1_4
  int v11; // eax
  struct CSerialWorkQueue *SerialWorkQueue; // rax
  __int64 v13; // r8
  int v14; // eax
  _QWORD v16[16]; // [rsp+40h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  void *Block; // [rsp+D0h] [rbp+67h] BYREF
  unsigned __int8 v19; // [rsp+D8h] [rbp+6Fh]
  __int64 v20; // [rsp+E0h] [rbp+77h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+E8h] [rbp+7Fh] BYREF

  v19 = a2;
  v2 = a2;
  v4 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 256);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 256));
  v21 = v5;
  if ( *((_QWORD *)this + 31) )
  {
    Block = 0LL;
    ATL::CHeapPtr<float,ATL::CCRTAllocator>::Allocate(&Block, *((unsigned int *)this + 29));
    v6 = (float *)Block;
    if ( !Block )
    {
      v4 = -2147024882;
      free(0LL);
LABEL_12:
      AudSrvTraceLoggingErrorHelper("CVolumeSoftware::UpdateMasterVolumeLevel", 2028, v4);
      goto LABEL_19;
    }
    v7 = 0LL;
    v8 = *((unsigned int *)this + 29);
    if ( (_DWORD)v8 )
    {
      do
      {
        v9 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
               (_QWORD *)this + 10,
               (unsigned int)v7);
        v10 = pow(10.0, *(float *)(v9 + 4) / 20.0);
        v6[v7] = v10;
        v7 = (unsigned int)(v7 + 1);
        v8 = *((unsigned int *)this + 29);
      }
      while ( (unsigned int)v7 < (unsigned int)v8 );
      v2 = v19;
    }
    v20 = (unsigned __int16)-(v2 == 0) & 0xC350;
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, float *, _QWORD, unsigned int, __int64 *))(**((_QWORD **)this + 31)
                                                                                               + 32LL))(
            *((_QWORD *)this + 31),
            v8,
            v6,
            0LL,
            v2 ^ 1u,
            &v20);
    v4 = v11;
    if ( v11 == -2147417848 || v11 == -2147023174 || v11 == -2147023179 )
    {
      ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 31);
      v4 = 0;
    }
    free(v6);
    if ( v4 < 0 )
      goto LABEL_12;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x32u,
      (__int64)&WPP_39683fa90ec33421f15b53210ac19d77_Traceguids,
      this);
  }
  _InterlockedExchange((volatile __int32 *)this + 75, 1);
  SerialWorkQueue = GetSerialWorkQueue();
  v16[0] = off_180173AB8;
  v16[1] = this;
  v16[7] = v16;
  v14 = CSerialWorkQueue::QueueRecurringItem((__int64)SerialWorkQueue, 0x3E8u, v13, v16, (char *)this + 304);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      2024LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v14);
LABEL_19:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v21);
  return (unsigned int)v4;
}
