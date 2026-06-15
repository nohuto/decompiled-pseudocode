/*
 * XREFs of ?CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14000AC50
 * Callers:
 *     ??1CAudioProcessor@@QEAA@XZ @ 0x1400357A0 (--1CAudioProcessor@@QEAA@XZ.c)
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ @ 0x14000474C (-GetHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnlockForProcess@CAPONode@@QEAAJXZ @ 0x140008EB8 (-UnlockForProcess@CAPONode@@QEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000ABEC (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z @ 0x14000B170 (-EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z.c)
 *     ?RemoveHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAVCAPONode@@XZ @ 0x14000B858 (-RemoveHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAVCAPONode@@XZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000B8BC (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEAAXXZ @ 0x14000BA24 (-GetFreeNode@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEAAXXZ.c)
 *     ?CommitConnections@CAPONode@@QEAAJXZ @ 0x14000BAC0 (-CommitConnections@CAPONode@@QEAAJXZ.c)
 *     ??3CProcessorTransaction@@SAXPEAX@Z @ 0x14000C894 (--3CProcessorTransaction@@SAXPEAX@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140035E64 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x140038F74 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?SwapRTPointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ @ 0x14003BA04 (-SwapRTPointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioProcessor::CommitGraphChanges(CAudioProcessor *this, __int64 a2)
{
  CAudioProcessor *v3; // rsi
  unsigned int v4; // r14d
  __int64 v6; // rax
  _QWORD *v7; // r14
  CAPONode *v8; // r15
  int v9; // ebx
  void *v10; // rcx
  _QWORD *v11; // r15
  CAPONode *v12; // r12
  __int64 **v13; // r14
  __int64 *v14; // r13
  __int64 *v15; // rcx
  __int64 *v16; // rax
  int v17; // eax
  CAPONode *v18; // r14
  _QWORD *v19; // r14
  __int64 v20; // rdx
  int v21; // eax
  bool v22; // zf
  __int64 v23; // rdx
  int v24; // r8d
  int v25; // r9d
  _DWORD *v26; // rcx
  __int64 v27; // rdx
  ATL::CAtlException *v28; // rbx
  _QWORD *v29; // [rsp+30h] [rbp-68h]
  CAPONode *v30; // [rsp+38h] [rbp-60h]
  ATL::CAtlException *v31; // [rsp+40h] [rbp-58h] BYREF
  LPCRITICAL_SECTION v32; // [rsp+48h] [rbp-50h] BYREF
  char v33; // [rsp+50h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  CAudioProcessor *v36; // [rsp+A8h] [rbp+10h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+B0h] [rbp+18h] BYREF
  __int64 **v38; // [rsp+B8h] [rbp+20h] BYREF

  v3 = this;
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v4 = -2147024890;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x526,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x80070006LL);
    return v4;
  }
  if ( *((_BYTE *)this + 776) )
  {
    v32 = (LPCRITICAL_SECTION)((char *)this + 88);
    v33 = 0;
    ATL::CCritSecLock::Lock(&v32);
    if ( *((_BYTE *)v3 + 778) && !*((_QWORD *)v3 + 96) )
    {
LABEL_19:
      v38 = 0LL;
      (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *, __int64 ***, _QWORD))(**((_QWORD **)v3 + 99) + 24LL))(
        *((_QWORD *)v3 + 99),
        &lpCriticalSection,
        &v38,
        0LL);
      v11 = (_QWORD *)*((_QWORD *)v3 + 22);
      while ( v11 )
      {
        v12 = (CAPONode *)v11[2];
        v11 = (_QWORD *)*v11;
        v29 = v11;
        v30 = v12;
        do
        {
          try
          {
            v9 = 0;
            v13 = v38;
            v14 = *v38;
            ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetFreeNode(v38);
          }
          catch ( ATL::CAtlException *v31 )
          {
            v28 = v31;
            if ( *(_DWORD *)v31 == -1073741571 )
              _o__resetstkoflw();
            LODWORD(v36) = *(_DWORD *)v28;
            v3 = this;
            v11 = v29;
            v12 = v30;
            v9 = (int)v36;
            goto LABEL_25;
          }
          v15 = v13[4];
          v16 = (__int64 *)*v15;
          v15[2] = (__int64)v12;
          v13[4] = v16;
          v15[1] = 0LL;
          *v15 = (__int64)v14;
          v13[2] = (__int64 *)((char *)v13[2] + 1);
          if ( *v13 )
            (*v13)[1] = (__int64)v15;
          else
            v13[1] = v15;
          *v13 = v15;
LABEL_25:
          if ( !*((_BYTE *)v3 + 779) )
            break;
          if ( v9 < 0 )
            Sleep(1u);
        }
        while ( *((_BYTE *)v3 + 779) && v9 < 0 );
        if ( v9 < 0 )
        {
          v23 = 1386LL;
LABEL_48:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v23,
            (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
            (const char *)(unsigned int)v9);
          if ( lpCriticalSection )
          {
            LeaveCriticalSection(lpCriticalSection);
            lpCriticalSection = 0LL;
          }
          goto LABEL_50;
        }
        v17 = CAPONode::UnlockForProcess(v12);
        if ( v17 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x56D,
            (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
            (const char *)(unsigned int)v17);
      }
      while ( *((_QWORD *)v3 + 24) )
      {
        v18 = *(CAPONode **)ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead((_QWORD *)v3 + 22);
        do
        {
          v9 = CAPONode::CommitConnections(v18);
          if ( !*((_BYTE *)v3 + 779) )
            break;
          if ( v9 < 0 )
            Sleep(1u);
        }
        while ( *((_BYTE *)v3 + 779) && v9 < 0 );
        if ( v9 < 0 )
        {
          v23 = 1400LL;
          goto LABEL_48;
        }
        ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveHead((char *)v3 + 176);
      }
      ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((char *)v3 + 128);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 344));
      v19 = (_QWORD *)*((_QWORD *)v3 + 6 * (*((unsigned __int16 *)v3 + 168) ^ 1LL) + 28);
      while ( v19 )
      {
        v20 = v19[2];
        v19 = (_QWORD *)*v19;
        v21 = *(_DWORD *)(v20 + 12);
        v22 = v21 + *(_DWORD *)(v20 + 8) == 0;
        *(_DWORD *)(v20 + 8) += v21;
        *(_DWORD *)(v20 + 12) = 0;
        if ( v22 )
          *(_QWORD *)(v20 + 152) = 0LL;
        v9 = CAudioProcessor::EvaluateConnectionOwnership(v3, (struct CConnectionNode *)v20);
        if ( v9 < 0 )
        {
          v23 = 1416LL;
          goto LABEL_48;
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 344));
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      *((_BYTE *)v3 + 778) = 0;
      v26 = (_DWORD *)*((_QWORD *)v3 + 103);
      if ( *v26 > 5u )
      {
        v36 = v3;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
          (_DWORD)v26,
          (unsigned int)&unk_1400B0B9E,
          v24,
          v25,
          (__int64)&v36);
      }
      if ( v33 )
        LeaveCriticalSection(v32);
      return 0LL;
    }
    v6 = *((_QWORD *)v3 + 96);
    if ( v6 )
    {
      if ( a2 == *(_QWORD *)(v6 + 16) )
      {
        if ( !*((_BYTE *)v3 + 777) )
        {
          *((_BYTE *)v3 + 778) = 1;
          v7 = **(_QWORD ***)v6;
          while ( v7 )
          {
            v8 = (CAPONode *)v7[2];
            v7 = (_QWORD *)*v7;
            do
            {
              v9 = CAPONode::CommitConnections(v8);
              if ( !*((_BYTE *)v3 + 779) )
                break;
              if ( v9 < 0 )
                Sleep(1u);
            }
            while ( *((_BYTE *)v3 + 779) && v9 < 0 );
            if ( v9 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x547,
                (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
                (const char *)(unsigned int)v9);
LABEL_50:
              if ( v33 )
                LeaveCriticalSection(v32);
              return (unsigned int)v9;
            }
          }
          v4 = CRealTimeSafeStruct<CProcessingData,1>::SwapRTPointer((char *)v3 + 384);
          LeaveCriticalSection((LPCRITICAL_SECTION)v3 + 18);
          if ( (v4 & 0x80000000) != 0 )
          {
            v27 = 1359LL;
            goto LABEL_71;
          }
          v10 = (void *)*((_QWORD *)v3 + 96);
          if ( v10 )
            CProcessorTransaction::operator delete(v10);
          *((_QWORD *)v3 + 96) = 0LL;
          goto LABEL_19;
        }
        v4 = -2005139407;
        v27 = 1335LL;
LABEL_71:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v27,
          (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
          (const char *)v4);
        ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&v32);
        return v4;
      }
      v27 = 1331LL;
    }
    else
    {
      v27 = 1330LL;
    }
    v4 = -2147024890;
    goto LABEL_71;
  }
  v9 = -2005139437;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x527,
    (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
    (const char *)0x887C0013LL);
  return (unsigned int)v9;
}
