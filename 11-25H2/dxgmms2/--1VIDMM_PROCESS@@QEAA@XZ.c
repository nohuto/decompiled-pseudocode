/*
 * XREFs of ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1400B3E4C
 * Callers:
 *     ??_GVIDMM_PROCESS@@QEAAPEAXI@Z @ 0x14002864C (--_GVIDMM_PROCESS@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GVIDMM_PROCESS_FENCE_STORAGE@@QEAAPEAXI@Z @ 0x14002869C (--_GVIDMM_PROCESS_FENCE_STORAGE@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x14002D9CC (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14002D9EC (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U5@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@777@Z @ 0x1400409F0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByRef@$0BA_ea_1400409F0.c)
 *     ?GetTotalGlobalSharedFence@VIDMM_PROCESS_FENCE_STORAGE@@SAI_N@Z @ 0x140045788 (-GetTotalGlobalSharedFence@VIDMM_PROCESS_FENCE_STORAGE@@SAI_N@Z.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?FreeVmProcessFencePageInGlobalStorage@VIDMM_PROCESS@@QEAAXXZ @ 0x140097CD8 (-FreeVmProcessFencePageInGlobalStorage@VIDMM_PROCESS@@QEAAXXZ.c)
 *     ?DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z @ 0x1400B40C0 (-DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z.c)
 *     ?VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1400B4204 (-VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1400B7EF4 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 */

void __fastcall VIDMM_PROCESS::~VIDMM_PROCESS(VIDMM_PROCESS *this)
{
  unsigned int v2; // edi
  DXGGLOBAL *Global; // rax
  DXGGLOBAL *v4; // rax
  __int64 v5; // rax
  void (__fastcall ***v6)(_QWORD, __int64); // rcx
  __int64 v7; // rax
  VIDMM_PROCESS_FENCE_STORAGE *v8; // rcx
  CVirtualAddressAllocator *v9; // rcx
  void *v10; // rcx
  struct VIDMM_PARTITION *v11; // rcx
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int64 v16; // r8
  __int64 v17; // r9
  _WORD v18[2]; // [rsp+68h] [rbp+7h] BYREF
  int TotalGlobalSharedFence; // [rsp+6Ch] [rbp+Bh] BYREF
  int v20; // [rsp+70h] [rbp+Fh] BYREF
  int v21; // [rsp+74h] [rbp+13h] BYREF
  int v22; // [rsp+78h] [rbp+17h] BYREF
  void *v23; // [rsp+80h] [rbp+1Fh] BYREF
  __int128 *v24; // [rsp+88h] [rbp+27h] BYREF
  __int64 v25; // [rsp+90h] [rbp+2Fh] BYREF
  __int128 v26; // [rsp+98h] [rbp+37h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
    WdLogGlobalForLineNumber = 118;
  }
  if ( (*((_DWORD *)this + 54) || *((_DWORD *)this + 55))
    && (unsigned int)dword_140081048 > 5
    && (qword_140081058 & 0x400000000008LL) != 0
    && (qword_140081060 & 0x400000000008LL) == qword_140081060 )
  {
    TotalGlobalSharedFence = VIDMM_PROCESS_FENCE_STORAGE::GetTotalGlobalSharedFence(1);
    v20 = VIDMM_PROCESS_FENCE_STORAGE::GetTotalGlobalSharedFence(0);
    v21 = *((_DWORD *)this + 55);
    v12 = *((_QWORD *)this + 4);
    v22 = v13;
    v14 = *(_QWORD *)(v12 + 64);
    v15 = *(_OWORD *)(v14 + 140);
    v23 = *(void **)(v14 + 96);
    v24 = &v26;
    v26 = v15;
    v18[0] = 0;
    v25 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v14,
      (__int64)&unk_140074381,
      v16,
      v17,
      (__int64)&v25,
      (__int64)v18,
      (__int64 *)&v24,
      &v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&TotalGlobalSharedFence);
  }
  if ( *((_QWORD *)this + 2) )
  {
    v2 = 0;
    Global = DXGGLOBAL::GetGlobal();
    if ( (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(Global) )
    {
      do
      {
        VIDMM_PROCESS::DestroyAdapterInfo(this, v2++);
        v4 = DXGGLOBAL::GetGlobal();
      }
      while ( v2 < (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(v4) );
    }
    operator delete(*((void **)this + 2));
  }
  v5 = *((_QWORD *)this + 4);
  if ( !v5 || (*(_DWORD *)(v5 + 408) & 0x100) == 0 )
  {
    v6 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 3);
    if ( v6 )
      (**v6)(v6, 1LL);
  }
  v7 = *((_QWORD *)this + 4);
  if ( v7 && (*(_DWORD *)(v7 + 408) & 0x180) != 0 )
    VIDMM_PROCESS::FreeVmProcessFencePageInGlobalStorage(this);
  v8 = (VIDMM_PROCESS_FENCE_STORAGE *)*((_QWORD *)this + 5);
  if ( v8 )
    VIDMM_PROCESS_FENCE_STORAGE::`scalar deleting destructor'(v8);
  v9 = (CVirtualAddressAllocator *)*((_QWORD *)this + 28);
  if ( v9 )
    CVirtualAddressAllocator::DestroyVaAllocator(v9);
  v10 = (void *)*((_QWORD *)this + 38);
  if ( v10 != (void *)-1LL )
    ObCloseHandle(v10, 0);
  v11 = (struct VIDMM_PARTITION *)*((_QWORD *)this + 37);
  if ( v11 )
    VidMmiClosePartition(v11);
}
