/*
 * XREFs of ?BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z @ 0x1400359F0
 * Callers:
 *     ??1CAudioProcessor@@QEAA@XZ @ 0x1400357A0 (--1CAudioProcessor@@QEAA@XZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000ABEC (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3CProcessorTransaction@@SAXPEAX@Z @ 0x14000C894 (--3CProcessorTransaction@@SAXPEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14000CD7C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x14000D040 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?NonRTGrabSafePointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAPEAVCProcessingData@@XZ @ 0x140035CBC (-NonRTGrabSafePointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAPEAVCProcessingData@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140035E64 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x140038F74 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x14005D2A4 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioProcessor::BeginGraphChanges(CAudioProcessor *this, unsigned __int64 *a2)
{
  __int64 v4; // rsi
  void *v5; // rax
  int v6; // r8d
  _QWORD *v7; // rsi
  ULONGLONG TickCount64; // rax
  unsigned __int64 v9; // rcx
  bool v10; // zf
  int v11; // r8d
  int v12; // r9d
  _DWORD *v13; // rcx
  unsigned int v15; // ebx
  __int64 v16; // rdx
  int v17; // eax
  unsigned int v18; // esi
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  void *v21; // rcx
  const char *v22; // [rsp+28h] [rbp-20h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v24; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CAudioProcessor *v26; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v15 = -2147467261;
    v16 = 1246LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)v15);
    return v15;
  }
  if ( !*((_BYTE *)this + 776) )
  {
    v15 = -2005139437;
    v16 = 1247LL;
    goto LABEL_22;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 88);
  v24 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = *((_QWORD *)this + 96);
  if ( !v4 )
    goto LABEL_4;
  if ( GetTickCount64() <= *(_QWORD *)(v4 + 8) )
  {
    v15 = -2005139409;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E4,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x887C002FLL);
    if ( v24 )
      LeaveCriticalSection(lpCriticalSection);
    return v15;
  }
  wil::details::in1diag3::Log_HrMsg(
    retaddr,
    (void *)0x4E7,
    (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
    (const char *)0x887C0033LL,
    (int)"Prior transaction timed out",
    v22);
  v17 = (*(__int64 (__fastcall **)(CAudioProcessor *, _QWORD))(*(_QWORD *)this + 48LL))(
          this,
          *(_QWORD *)(*((_QWORD *)this + 96) + 16LL));
  v18 = v17;
  if ( v17 < 0 )
  {
    v19 = (unsigned int)v17;
    v20 = 1256LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)v19);
LABEL_37:
    ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection);
    return v18;
  }
LABEL_4:
  if ( *((_BYTE *)this + 778) )
  {
    v18 = -2005139406;
    v20 = 1263LL;
LABEL_27:
    v19 = v18;
    goto LABEL_28;
  }
  while ( 1 )
  {
    v5 = (void *)AERTGetDLLRTHeap();
    v7 = AERTAllocate(0x18uLL, v5, v6);
    if ( v7 )
    {
      TickCount64 = GetTickCount64();
      v9 = CProcessorTransaction::m_LastTransactionHandle + 1;
      v7[1] = TickCount64 + 10000;
      CProcessorTransaction::m_LastTransactionHandle = v9;
      v7[2] = v9;
    }
    else
    {
      v7 = 0LL;
    }
    v10 = *((_BYTE *)this + 779) == 0;
    *((_QWORD *)this + 96) = v7;
    if ( v10 )
      break;
    if ( !v7 )
      Sleep(1u);
    if ( !*((_BYTE *)this + 779) )
      break;
    if ( *((_QWORD *)this + 96) )
      goto LABEL_9;
  }
  if ( !*((_QWORD *)this + 96) )
  {
    v18 = -2147024882;
    v20 = 1268LL;
    goto LABEL_27;
  }
LABEL_9:
  **((_QWORD **)this + 96) = CRealTimeSafeStruct<CProcessingData,1>::NonRTGrabSafePointer((char *)this + 384);
  if ( !**((_QWORD **)this + 96) )
  {
    v18 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4F9,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x8007000ELL);
    v21 = (void *)*((_QWORD *)this + 96);
    if ( v21 )
      CProcessorTransaction::operator delete(v21);
    *((_QWORD *)this + 96) = 0LL;
    goto LABEL_37;
  }
  v13 = (_DWORD *)*((_QWORD *)this + 103);
  if ( *v13 > 5u )
  {
    v26 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      (_DWORD)v13,
      (unsigned int)&unk_1400B0BF8,
      v11,
      v12,
      (__int64)&v26);
  }
  v10 = v24 == 0;
  *a2 = *(_QWORD *)(*((_QWORD *)this + 96) + 16LL);
  if ( !v10 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
