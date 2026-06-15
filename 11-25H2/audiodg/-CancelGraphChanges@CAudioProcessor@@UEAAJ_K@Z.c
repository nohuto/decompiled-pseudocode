/*
 * XREFs of ?CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x1400810F0
 * Callers:
 *     ??1CAudioProcessor@@QEAA@XZ @ 0x140035AA0 (--1CAudioProcessor@@QEAA@XZ.c)
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ @ 0x14000471C (-GetHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ.c)
 *     ?UnlockForProcess@CAPONode@@QEAAJXZ @ 0x140008E88 (-UnlockForProcess@CAPONode@@QEAAJXZ.c)
 *     ?EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z @ 0x14000B140 (-EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z.c)
 *     ?RemoveAt@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000B214 (-RemoveAt@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z.c)
 *     ?RemoveHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAVCAPONode@@XZ @ 0x14000B828 (-RemoveHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAVCAPONode@@XZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000B88C (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ?AddHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z @ 0x14000B988 (-AddHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z.c)
 *     ??3CProcessorTransaction@@SAXPEAX@Z @ 0x14000C864 (--3CProcessorTransaction@@SAXPEAX@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x140032280 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140032A94 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?Find@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCAPONode@@PEAU3@@Z @ 0x140037AD4 (-Find@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCAPONode@@PEAU3.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005626C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     ?CancelConnections@CAPONode@@QEAAJXZ @ 0x14006BBDC (-CancelConnections@CAPONode@@QEAAJXZ.c)
 *     ?NonRTCancelSafePointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAXXZ @ 0x140081560 (-NonRTCancelSafePointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioProcessor::CancelGraphChanges(CAudioProcessor *this, __int64 a2)
{
  CAudioProcessor *v3; // r14
  int v4; // esi
  void **v5; // r15
  __int64 v6; // r12
  __int64 ***v7; // r12
  _QWORD *v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rdx
  _BYTE *v11; // rbx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // r13
  __int64 *v15; // rax
  _QWORD *v16; // r13
  CAPONode **Head; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  _QWORD *v20; // rbx
  _QWORD *v21; // rdx
  __int64 v22; // rdx
  _DWORD *v23; // rcx
  ATL::CAtlException *v25; // rbx
  ATL::CAtlException *v26; // rbx
  int v27; // [rsp+30h] [rbp-E8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-E0h] BYREF
  _QWORD *v29; // [rsp+40h] [rbp-D8h] BYREF
  _QWORD *v30; // [rsp+48h] [rbp-D0h] BYREF
  LPCRITICAL_SECTION v31; // [rsp+50h] [rbp-C8h] BYREF
  _QWORD *v32; // [rsp+58h] [rbp-C0h] BYREF
  __int64 ***v33; // [rsp+60h] [rbp-B8h]
  CAudioProcessor *v34; // [rsp+68h] [rbp-B0h]
  void **v35; // [rsp+70h] [rbp-A8h]
  _BYTE *v36; // [rsp+78h] [rbp-A0h]
  _QWORD *v37; // [rsp+80h] [rbp-98h]
  _BYTE *v38; // [rsp+90h] [rbp-88h]
  ATL::CAtlException *v39; // [rsp+98h] [rbp-80h] BYREF
  ATL::CAtlException *v40; // [rsp+A0h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+B0h] [rbp-68h] BYREF
  int *v42; // [rsp+D0h] [rbp-48h]
  int v43; // [rsp+D8h] [rbp-40h]
  int v44; // [rsp+DCh] [rbp-3Ch]
  LPCRITICAL_SECTION *v45; // [rsp+E0h] [rbp-38h]
  int v46; // [rsp+E8h] [rbp-30h]
  int v47; // [rsp+ECh] [rbp-2Ch]

  v3 = this;
  v34 = this;
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v4 = -2147024890;
  }
  else if ( *((_BYTE *)this + 776) )
  {
    v31 = (LPCRITICAL_SECTION)((char *)this + 88);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
    if ( *((_BYTE *)v3 + 778) )
    {
      v4 = -2005139406;
    }
    else
    {
      v5 = (void **)((char *)v3 + 768);
      v35 = (void **)((char *)v3 + 768);
      v6 = *((_QWORD *)v3 + 96);
      if ( v6 && a2 == *(_QWORD *)(v6 + 16) )
      {
        v7 = *(__int64 ****)v6;
        v33 = v7;
        do
        {
          v4 = 0;
          v8 = (_QWORD *)((char *)v3 + 176);
          v29 = (_QWORD *)((char *)v3 + 176);
          if ( v3 == (CAudioProcessor *)-176LL )
            ATL::AtlThrowImpl(-2147467259);
          v9 = *((_QWORD *)v3 + 23);
          while ( v9 )
          {
            try
            {
              v10 = v9;
              v9 = *(_QWORD *)(v9 + 8);
              ATL::CAtlList<CAPONode *,CAPONodeTraits>::AddHead(v7, (_QWORD *)(v10 + 16));
            }
            catch ( ATL::CAtlException *v39 )
            {
              v25 = v39;
              if ( *(_DWORD *)v39 == -1073741571 )
                _o__resetstkoflw();
              v27 = *(_DWORD *)v25;
              v4 = v27;
              v7 = v33;
              v8 = v29;
              v3 = v34;
              v5 = v35;
              break;
            }
          }
          v11 = (char *)v3 + 779;
          v36 = (char *)v3 + 779;
          if ( !*((_BYTE *)v3 + 779) )
            break;
          if ( v4 < 0 )
            Sleep(1u);
        }
        while ( *v11 && v4 < 0 );
        if ( v4 >= 0 )
        {
          v38 = (char *)v3 + 777;
          *((_BYTE *)v3 + 777) = 1;
          ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((__int64)v8);
          v32 = 0LL;
          (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *, _QWORD **, _QWORD))(**((_QWORD **)v3 + 99) + 24LL))(
            *((_QWORD *)v3 + 99),
            &lpCriticalSection,
            &v32,
            0LL);
          v37 = (_QWORD *)((char *)v3 + 128);
          v13 = (_QWORD *)*((_QWORD *)v3 + 16);
          v29 = v13;
          while ( v13 )
          {
            v14 = (_QWORD *)*ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v12, &v29);
            v30 = v14;
            do
            {
              try
              {
                v4 = 0;
                ATL::CAtlList<CAPONode *,CAPONodeTraits>::AddHead(v32, &v30);
              }
              catch ( ATL::CAtlException *v40 )
              {
                v26 = v40;
                if ( *(_DWORD *)v40 == -1073741571 )
                  _o__resetstkoflw();
                v27 = *(_DWORD *)v26;
                v4 = v27;
                v7 = v33;
                v14 = v30;
                v3 = v34;
                v5 = v35;
                v11 = v36;
              }
              if ( !*v11 )
                break;
              if ( v4 < 0 )
                Sleep(1u);
            }
            while ( *v11 && v4 < 0 );
            if ( v4 < 0 )
              goto LABEL_30;
            v15 = (__int64 *)ATL::CAtlList<CAPONode *,CAPONodeTraits>::Find(v7, &v30);
            if ( !v15 )
            {
              v4 = -2147418113;
LABEL_30:
              if ( lpCriticalSection )
                LeaveCriticalSection(lpCriticalSection);
              goto LABEL_50;
            }
            ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAt((__int64 **)v7, v15);
            CAPONode::UnlockForProcess((CAPONode *)v14);
            v13 = v29;
          }
          if ( *v5 )
            CProcessorTransaction::operator delete(*v5);
          *v5 = 0LL;
          CRealTimeSafeStruct<CProcessingData,1>::NonRTCancelSafePointer((char *)v3 + 384);
          v16 = v37;
          while ( *((_QWORD *)v3 + 18) )
          {
            Head = (CAPONode **)ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead(v16);
            v4 = CAPONode::CancelConnections(*Head, v18, v19);
            if ( v4 < 0 )
              goto LABEL_30;
            ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveHead((__int64)v16);
          }
          EnterCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 344));
          v20 = (_QWORD *)*((_QWORD *)v3 + 6 * (*((unsigned __int16 *)v3 + 168) ^ 1LL) + 28);
          v21 = v20;
          while ( v20 )
          {
            v20 = (_QWORD *)*v21;
            v22 = v21[2];
            *(_DWORD *)(v22 + 12) = 0;
            if ( !*(_DWORD *)(v22 + 8) )
              *(_QWORD *)(v22 + 152) = 0LL;
            v4 = CAudioProcessor::EvaluateConnectionOwnership(v3, (struct CConnectionNode *)v22);
            v21 = v20;
            if ( v4 < 0 )
              goto LABEL_30;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 344));
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          *v38 = 0;
        }
      }
      else
      {
        v4 = -2147024890;
      }
    }
LABEL_50:
    LeaveCriticalSection(v31);
  }
  else
  {
    v4 = -2005139437;
  }
  v23 = (_DWORD *)*((_QWORD *)v3 + 103);
  if ( *v23 > 5u )
  {
    v31 = (LPCRITICAL_SECTION)v3;
    v27 = v4;
    v45 = &v31;
    v46 = 8;
    v47 = 0;
    v42 = &v27;
    v43 = 4;
    v44 = 0;
    tlgWriteTransfer_EventWriteTransfer((__int64)v23, byte_1400B0B9E, 0LL, 0LL, 4u, &v41);
  }
  return (unsigned int)v4;
}
