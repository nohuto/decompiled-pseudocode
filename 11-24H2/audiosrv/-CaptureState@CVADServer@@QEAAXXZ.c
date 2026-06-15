/*
 * XREFs of ?CaptureState@CVADServer@@QEAAXXZ @ 0x18005ADAC
 * Callers:
 *     ?Callback@AudioSrvTelemetryProvider@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x180080910 (-Callback@AudioSrvTelemetryProvider@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     ?CapturePolicyVolumeState@CAudioStream@@QEAAXXZ @ 0x18005B168 (-CapturePolicyVolumeState@CAudioStream@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U3@U?$_tlgWrapperByVal@$00@@U3@U2@U?$_tlgWrapperByVal@$01@@U3@U3@U?$_tlgWrapperByRef@$0BA@@@U3@U5@U3@U3@U3@U3@U6@U4@U3@U3@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4555555AEBU?$_tlgWrapperByVal@$00@@54AEBU?$_tlgWrapperByVal@$01@@55AEBU?$_tlgWrapperByRef@$0BA@@@575555865553@Z @ 0x18005B1B8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U3.c)
 *     ?GetMinStreamChannelVolume@CAudioStream@@QEAAMXZ @ 0x18006BDB8 (-GetMinStreamChannelVolume@CAudioStream@@QEAAMXZ.c)
 *     ?Provider@AudioSrvTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18009B16C (-Provider@AudioSrvTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CVADServer::CaptureState(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  ULONG_PTR v3; // r14
  char v4; // r15
  float MinStreamChannelVolume; // xmm6_4
  _WORD *SpinCount; // rax
  HANDLE *p_OwningThread; // rdi
  CAudioStream *v8; // rcx
  const struct _tlgProvider_t *v9; // rax
  int v10; // r9d
  int v11; // r8d
  ULONG_PTR v12; // rcx
  __int16 *v13; // rax
  GUID *v14; // rax
  const wchar_t *v15; // rax
  CAudioStream *v16; // rcx
  char v17; // [rsp+118h] [rbp-80h] BYREF
  bool v18; // [rsp+119h] [rbp-7Fh] BYREF
  __int16 v19; // [rsp+11Ah] [rbp-7Eh] BYREF
  __int16 v20; // [rsp+11Ch] [rbp-7Ch] BYREF
  int v21; // [rsp+120h] [rbp-78h] BYREF
  int OwningThread; // [rsp+124h] [rbp-74h] BYREF
  int DebugInfo; // [rsp+128h] [rbp-70h] BYREF
  float v24; // [rsp+12Ch] [rbp-6Ch] BYREF
  int OwningThread_high; // [rsp+130h] [rbp-68h] BYREF
  int v26; // [rsp+134h] [rbp-64h] BYREF
  LONG RecursionCount; // [rsp+138h] [rbp-60h] BYREF
  LONG LockCount; // [rsp+13Ch] [rbp-5Ch] BYREF
  int v29; // [rsp+140h] [rbp-58h] BYREF
  int v30; // [rsp+144h] [rbp-54h] BYREF
  int DebugInfo_high; // [rsp+148h] [rbp-50h] BYREF
  int v32; // [rsp+14Ch] [rbp-4Ch] BYREF
  int v33; // [rsp+150h] [rbp-48h] BYREF
  int v34; // [rsp+154h] [rbp-44h] BYREF
  int v35; // [rsp+158h] [rbp-40h] BYREF
  int v36; // [rsp+15Ch] [rbp-3Ch] BYREF
  int v37; // [rsp+160h] [rbp-38h] BYREF
  int v38; // [rsp+164h] [rbp-34h] BYREF
  HANDLE LockSemaphore; // [rsp+168h] [rbp-30h] BYREF
  ULONG_PTR *p_SpinCount; // [rsp+170h] [rbp-28h] BYREF
  GUID *v41; // [rsp+178h] [rbp-20h] BYREF
  const wchar_t *v42; // [rsp+180h] [rbp-18h] BYREF
  ULONG_PTR v43; // [rsp+188h] [rbp-10h] BYREF
  PRTL_CRITICAL_SECTION_DEBUG v44; // [rsp+190h] [rbp-8h] BYREF
  _QWORD v45[2]; // [rsp+198h] [rbp+0h] BYREF
  GUID v46; // [rsp+1A8h] [rbp+10h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((unsigned __int64)&this[5] & -(__int64)TryEnterCriticalSection(this + 5));
  v45[1] = v2;
  v46 = GUID_00000000_0000_0000_0000_000000000000;
  v3 = 0LL;
  v4 = 0;
  MinStreamChannelVolume = FLOAT_N1_0;
  SpinCount = (_WORD *)this[3].SpinCount;
  if ( *SpinCount == 0xFFFE )
  {
    v3 = this[3].SpinCount;
  }
  else
  {
    v46 = GUID_00000000_0000_0010_8000_00aa00389b71;
    v46.Data1 = (unsigned __int16)*SpinCount;
  }
  p_OwningThread = &this[4].OwningThread;
  if ( v2 )
  {
    v8 = (CAudioStream *)*p_OwningThread;
    if ( *p_OwningThread )
    {
      if ( *((_QWORD *)v8 + 6) )
      {
        v4 = *((_BYTE *)v8 + 256);
        MinStreamChannelVolume = CAudioStream::GetMinStreamChannelVolume(v8);
      }
    }
  }
  v9 = AudioSrvTelemetryProvider::Provider();
  v11 = (int)v9;
  if ( *(_DWORD *)v9 > 4u && (*((_BYTE *)v9 + 16) & 4) != 0 && (*((_QWORD *)v9 + 3) & 4LL) == *((_QWORD *)v9 + 3) )
  {
    LockSemaphore = this[10].LockSemaphore;
    OwningThread = (int)this[10].OwningThread;
    DebugInfo = (int)this[10].DebugInfo;
    v24 = MinStreamChannelVolume;
    v17 = v4;
    p_SpinCount = &this[8].SpinCount;
    OwningThread_high = HIDWORD(this[8].OwningThread);
    v26 = (int)this[8].OwningThread;
    RecursionCount = this[8].RecursionCount;
    LockCount = this[8].LockCount;
    v12 = this[3].SpinCount;
    v13 = (__int16 *)(v3 + 18);
    if ( !v3 )
      v13 = (__int16 *)(v12 + 14);
    v19 = *v13;
    if ( v3 )
    {
      v21 = *(_DWORD *)(v3 + 20);
      v14 = (GUID *)(v3 + 24);
    }
    else
    {
      v21 = 0;
      v14 = &v46;
    }
    v41 = v14;
    v29 = *(_DWORD *)(v12 + 8);
    v30 = *(_DWORD *)(v12 + 4);
    v20 = *(_WORD *)(v12 + 2);
    v15 = L"WAVEFORMATEXTENSIBLE";
    if ( !v3 )
      v15 = L"WAVEFORMATEX";
    v42 = v15;
    DebugInfo_high = HIDWORD(this[6].DebugInfo);
    v18 = HIDWORD(this[7].LockSemaphore) == 1;
    v32 = HIDWORD(this[8].DebugInfo);
    v33 = this[7].SpinCount;
    v34 = (int)this[6].DebugInfo;
    v35 = (int)this[7].LockSemaphore;
    v36 = this[13].SpinCount;
    v37 = v34;
    v43 = this[4].SpinCount;
    v38 = (int)this[1].DebugInfo;
    v44 = this[3].DebugInfo;
    v45[0] = this[13].LockSemaphore;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v11,
      (unsigned int)&unk_1801AD8EE,
      v11,
      v10,
      (__int64)v45,
      (__int64)&v44,
      (__int64)&v38,
      (__int64)&v43,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v18,
      (__int64)&DebugInfo_high,
      (__int64)&v42,
      (__int64)&v20,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v41,
      (__int64)&v21,
      (__int64)&v19,
      (__int64)&LockCount,
      (__int64)&RecursionCount,
      (__int64)&v26,
      (__int64)&OwningThread_high,
      (__int64)&p_SpinCount,
      (__int64)&v17,
      (__int64)&v24,
      (__int64)&DebugInfo,
      (__int64)&OwningThread,
      (__int64)&LockSemaphore);
  }
  if ( v2 )
  {
    v16 = (CAudioStream *)*p_OwningThread;
    if ( *p_OwningThread )
    {
      if ( *((_QWORD *)v16 + 6) )
        CAudioStream::CapturePolicyVolumeState(v16);
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
