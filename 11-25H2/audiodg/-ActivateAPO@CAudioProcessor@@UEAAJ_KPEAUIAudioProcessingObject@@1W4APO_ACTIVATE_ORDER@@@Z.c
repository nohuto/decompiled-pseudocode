/*
 * XREFs of ?ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z @ 0x1400306A0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterAPONotifications@CAPONode@@QEAAJXZ @ 0x140007D80 (-RegisterAPONotifications@CAPONode@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnlockForProcess@CAPONode@@QEAAJXZ @ 0x140008E88 (-UnlockForProcess@CAPONode@@QEAAJXZ.c)
 *     ?ValidateTransactionState@CAudioProcessor@@AEAAJ_K@Z @ 0x140008FF0 (-ValidateTransactionState@CAudioProcessor@@AEAAJ_K@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000ABBC (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAt@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000B214 (-RemoveAt@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z @ 0x14000B988 (-AddHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z.c)
 *     ?AddTail@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z @ 0x14000C9E0 (-AddTail@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140023938 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?InsertAt@?$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V?$CElementTraits@PEAUAPO_CONNECTION_DESCRIPTOR@@@ATL@@@ATL@@QEAAX_KAEBQEAUAPO_CONNECTION_DESCRIPTOR@@0@Z @ 0x140030FD8 (-InsertAt@-$CAtlArray@PEAUAPO_CONNECTION_DESCRIPTOR@@V-$CElementTraits@PEAUAPO_CONNECTION_DESCRI.c)
 *     ??A?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAAEAPEAVCConnectionNode@@_K@Z @ 0x140031234 (--A-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAAEAPEAVCConnectionNode@@_K.c)
 *     ??1CPropertyPointerArray@@QEAA@XZ @ 0x14003588C (--1CPropertyPointerArray@@QEAA@XZ.c)
 *     ?Find@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCAPONode@@PEAU3@@Z @ 0x140037AD4 (-Find@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCAPONode@@PEAU3.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x140039274 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005626C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?InsertBefore@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCAPONode@@@Z @ 0x140057540 (-InsertBefore@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVC.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x140057DC8 (MicrosoftTelemetryAssertTriggeredArgs.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x14005867C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 *     ?InsertAfter@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCAPONode@@@Z @ 0x140081508 (-InsertAfter@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CAudioProcessor::ActivateAPO(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v7; // r15
  int v9; // eax
  unsigned int v10; // edi
  __int64 *v11; // rcx
  __int64 *v12; // r8
  CAPONode *v13; // rdx
  void *v14; // rdi
  __int64 v15; // r13
  void *v16; // rsi
  CAPONode *v17; // r14
  CAPONode **v18; // rax
  unsigned __int64 v19; // r12
  char *v20; // rax
  unsigned __int64 v21; // r12
  _QWORD *v22; // rdx
  char *v23; // r8
  int v24; // eax
  int v25; // r12d
  int v26; // eax
  __int64 *i; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int16 *v30; // r14
  __int64 v31; // rcx
  unsigned __int16 *v32; // rdi
  int v33; // edx
  int v34; // edx
  __int64 v35; // rax
  __int64 *v36; // rax
  ATL::CAtlException *v37; // rbx
  ATL::CAtlException *v38; // rbx
  ATL::CAtlException *v39; // rbx
  ATL::CAtlException *v40; // rbx
  ATL::CAtlException *v41; // rbx
  int v42[2]; // [rsp+20h] [rbp-538h]
  char *v43; // [rsp+28h] [rbp-530h]
  __int64 v44; // [rsp+30h] [rbp-528h]
  CAPONode *v45; // [rsp+40h] [rbp-518h] BYREF
  char *v46; // [rsp+48h] [rbp-510h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-508h] BYREF
  __int64 **v48; // [rsp+58h] [rbp-500h] BYREF
  __int64 **v49; // [rsp+60h] [rbp-4F8h] BYREF
  LPCRITICAL_SECTION v50; // [rsp+68h] [rbp-4F0h] BYREF
  char v51; // [rsp+70h] [rbp-4E8h]
  void *v52; // [rsp+78h] [rbp-4E0h] BYREF
  __int64 v53; // [rsp+80h] [rbp-4D8h]
  __int64 v54; // [rsp+88h] [rbp-4D0h]
  int v55; // [rsp+90h] [rbp-4C8h]
  void *Block; // [rsp+98h] [rbp-4C0h] BYREF
  __int64 v57; // [rsp+A0h] [rbp-4B8h]
  __int64 v58; // [rsp+A8h] [rbp-4B0h]
  int v59; // [rsp+B0h] [rbp-4A8h]
  __int64 v60; // [rsp+B8h] [rbp-4A0h]
  CAPONode **v61; // [rsp+C0h] [rbp-498h] BYREF
  char v62; // [rsp+C8h] [rbp-490h]
  int v63; // [rsp+D0h] [rbp-488h] BYREF
  __int64 *v64; // [rsp+D8h] [rbp-480h]
  ATL::CAtlException *v65; // [rsp+E0h] [rbp-478h] BYREF
  ATL::CAtlException *v66; // [rsp+E8h] [rbp-470h] BYREF
  ATL::CAtlException *v67; // [rsp+F0h] [rbp-468h] BYREF
  ATL::CAtlException *v68; // [rsp+F8h] [rbp-460h] BYREF
  ATL::CAtlException *v69[3]; // [rsp+100h] [rbp-458h] BYREF
  char v70; // [rsp+118h] [rbp-440h]
  unsigned __int16 v71[256]; // [rsp+120h] [rbp-438h] BYREF
  char v72[2]; // [rsp+320h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+558h] [rbp+0h]

  v7 = a1;
  v60 = a1;
  if ( !a3 )
  {
    v28 = 1977LL;
LABEL_68:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7BA,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)0x80070006LL);
    return 2147942406LL;
  }
  if ( a5 > 1 )
  {
    v28 = 1979LL;
    goto LABEL_68;
  }
  v50 = (LPCRITICAL_SECTION)(a1 + 88);
  v51 = 0;
  ATL::CCritSecLock::Lock(&v50);
  v9 = CAudioProcessor::ValidateTransactionState((CAudioProcessor *)v7, a2);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v49 = 0LL;
    (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *, __int64 ***, _QWORD))(**(_QWORD **)(v7 + 792) + 24LL))(
      *(_QWORD *)(v7 + 792),
      &lpCriticalSection,
      &v49,
      0LL);
    v11 = *v49;
    while ( v11 )
    {
      v12 = v11;
      v13 = (CAPONode *)v11[2];
      v11 = (__int64 *)*v11;
      if ( *(_QWORD *)v13 == a3 )
      {
        v45 = v13;
        if ( v13 )
        {
          v14 = 0LL;
          v52 = 0LL;
          v15 = 0LL;
          v53 = 0LL;
          v54 = 0LL;
          v55 = 0;
          v16 = 0LL;
          Block = 0LL;
          v57 = 0LL;
          v58 = 0LL;
          v59 = 0;
          v17 = v45;
          v18 = (CAPONode **)*((_QWORD *)v45 + 16);
          v61 = v18;
          v19 = 0LL;
          v64 = v12;
          try
          {
            while ( v19 < (unsigned __int64)v18 )
            {
              v46 = (char *)(*(_QWORD *)ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::operator[](
                                          (char *)v17 + 120,
                                          v19)
                           + 64LL);
              ATL::CAtlArray<APO_CONNECTION_DESCRIPTOR *,ATL::CElementTraits<APO_CONNECTION_DESCRIPTOR *>>::InsertAt(
                &v52,
                v19++,
                &v46);
              v17 = v45;
              v15 = v53;
              v14 = v52;
              v18 = v61;
            }
            v20 = (char *)*((_QWORD *)v17 + 20);
            v46 = v20;
            v21 = 0LL;
            while ( v21 < (unsigned __int64)v20 )
            {
              if ( v21 >= *((_QWORD *)v17 + 20) )
                ATL::AtlThrowImpl(-2147024809);
              v61 = (CAPONode **)(*(_QWORD *)(*((_QWORD *)v17 + 19) + 8 * v21) + 64LL);
              ATL::CAtlArray<APO_CONNECTION_DESCRIPTOR *,ATL::CElementTraits<APO_CONNECTION_DESCRIPTOR *>>::InsertAt(
                &Block,
                v21++,
                &v61);
              v17 = v45;
              v16 = Block;
              v20 = v46;
            }
          }
          catch ( ATL::CAtlException v63 )
          {
            LODWORD(v46) = v63;
            v10 = (unsigned int)v46;
            if ( (int)v46 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x7E4,
                (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
                (const char *)(unsigned int)v46);
              goto LABEL_73;
            }
            v17 = v45;
            v15 = v53;
            v14 = v52;
            v16 = Block;
            v7 = v60;
          }
          if ( !v15 || !v57 )
          {
            MicrosoftTelemetryAssertTriggeredArgs("Audioeng.dll", 0LL, 0LL);
            v17 = v45;
          }
          v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *, _QWORD, void *))(**((_QWORD **)v17 + 2) + 24LL))(
                  *((_QWORD *)v17 + 2),
                  *((unsigned int *)v17 + 32),
                  v14,
                  *((unsigned int *)v17 + 40),
                  v16);
          v25 = v24;
          if ( v24 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1C0,
              (int)"avcore\\audiocore\\Engine\\Include\\AudioEngineObjects.h",
              (const char *)(unsigned int)v24);
          }
          else
          {
            v26 = CAPONode::RegisterAPONotifications(v17);
            if ( v26 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x1C1,
                (int)"avcore\\audiocore\\Engine\\Include\\AudioEngineObjects.h",
                (const char *)(unsigned int)v26);
            v25 = 0;
          }
          if ( v25 < 0 )
          {
            if ( v15 && (v29 = *(_QWORD *)(*(_QWORD *)v14 + 24LL)) != 0 )
              v30 = (unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 40LL))(v29);
            else
              v30 = 0LL;
            if ( v57 && (v31 = *(_QWORD *)(*(_QWORD *)v16 + 24LL)) != 0 )
              v32 = (unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 40LL))(v31);
            else
              v32 = 0LL;
            memset_0(v72, 0, 0x200uLL);
            memset_0(v71, 0, sizeof(v71));
            if ( v30 )
            {
              if ( *v30 == 0xFFFE )
                v33 = *((_DWORD *)v30 + 6);
              else
                v33 = *v30;
              v42[0] = v30[1];
              StringCchPrintfW(
                (unsigned __int16 *)v72,
                256LL,
                L"Input #0 {%dHz/%dch/%dbits/Format:%d}",
                *((unsigned int *)v30 + 1),
                *(_QWORD *)v42,
                v30[7],
                v33);
            }
            else
            {
              StringCchPrintfW((unsigned __int16 *)v72, 256LL, L"Input #0 {null}");
            }
            if ( v32 )
            {
              if ( *v32 == 0xFFFE )
                v34 = *((_DWORD *)v32 + 6);
              else
                v34 = *v32;
              LODWORD(v44) = v34;
              LODWORD(v43) = v32[7];
              v42[0] = v32[1];
              StringCchPrintfW(
                v71,
                256LL,
                L"Output #0 {%dHz/%dch/%dbits/Format:%d}",
                *((unsigned int *)v32 + 1),
                *(_QWORD *)v42,
                v43,
                v44);
            }
            else
            {
              StringCchPrintfW(v71, 256LL, L"Output #0 {null}");
            }
            wil::details::in1diag3::Return_HrMsg(
              retaddr,
              (void *)0x80C,
              (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
              (const char *)(unsigned int)v25,
              (int)"LockForProcess failed:%ls, %ls",
              v72,
              v71);
            CPropertyPointerArray::~CPropertyPointerArray((CPropertyPointerArray *)&Block);
            CPropertyPointerArray::~CPropertyPointerArray((CPropertyPointerArray *)&v52);
            if ( lpCriticalSection )
            {
              LeaveCriticalSection(lpCriticalSection);
              lpCriticalSection = 0LL;
            }
            v10 = v25;
            goto LABEL_21;
          }
          v61 = &v45;
          v62 = 1;
          v46 = 0LL;
          v23 = 0LL;
          if ( a4 )
          {
            v22 = ***(_QWORD ****)(v7 + 768);
            while ( v22 )
            {
              v23 = (char *)v22[2];
              v22 = (_QWORD *)*v22;
              if ( *(_QWORD *)v23 == a4 )
              {
                v46 = v23;
                if ( v23 )
                  goto LABEL_44;
                break;
              }
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x817,
              (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
              (const char *)0x887C001ALL);
            CAPONode::UnlockForProcess(v45);
            if ( v16 )
              free(v16);
            if ( v14 )
              free(v14);
            if ( lpCriticalSection )
            {
              LeaveCriticalSection(lpCriticalSection);
              lpCriticalSection = 0LL;
            }
            if ( v51 )
              LeaveCriticalSection(v50);
            return 2289827866LL;
          }
          else
          {
LABEL_44:
            v48 = **(__int64 ****)(v7 + 768);
            if ( v23 )
            {
              if ( a5 )
              {
                for ( i = *v48; i; i = (__int64 *)*i )
                {
                  if ( *(_QWORD *)i[2] == *(_QWORD *)v23 )
                    goto LABEL_133;
                }
                i = 0LL;
LABEL_133:
                try
                {
                  ATL::CAtlList<CAPONode *,CAPONodeTraits>::InsertBefore(v48, i, &v45);
                }
                catch ( ATL::CAtlException *v68 )
                {
                  v40 = v68;
                  if ( *(_DWORD *)v68 == -1073741571 )
                    _o__resetstkoflw();
                  LODWORD(v46) = *(_DWORD *)v40;
LABEL_54:
                  v10 = (unsigned int)v46;
                  if ( (int)v46 >= 0 )
                  {
                    v14 = v52;
                    v16 = Block;
                    v7 = v60;
                    goto LABEL_128;
                  }
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x836,
                    (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
                    (const char *)(unsigned int)v46);
                  CAPONode::UnlockForProcess(v45);
LABEL_73:
                  CPropertyPointerArray::~CPropertyPointerArray((CPropertyPointerArray *)&Block);
                  CPropertyPointerArray::~CPropertyPointerArray((CPropertyPointerArray *)&v52);
                  if ( lpCriticalSection )
                  {
                    LeaveCriticalSection(lpCriticalSection);
                    lpCriticalSection = 0LL;
                  }
                  goto LABEL_21;
                }
              }
              else
              {
                v35 = ATL::CAtlList<CAPONode *,CAPONodeTraits>::Find(v48, &v46);
                try
                {
                  ATL::CAtlList<CAPONode *,CAPONodeTraits>::InsertAfter(v48, v35, &v45);
                }
                catch ( ATL::CAtlException *v67 )
                {
                  v39 = v67;
                  if ( *(_DWORD *)v67 == -1073741571 )
                    _o__resetstkoflw();
                  LODWORD(v46) = *(_DWORD *)v39;
                  goto LABEL_54;
                }
              }
            }
            else if ( a5 )
            {
              try
              {
                ATL::CAtlList<CAPONode *,CAPONodeTraits>::AddTail(v48, &v45);
              }
              catch ( ATL::CAtlException *v66 )
              {
                v38 = v66;
                if ( *(_DWORD *)v66 == -1073741571 )
                  _o__resetstkoflw();
                LODWORD(v46) = *(_DWORD *)v38;
                goto LABEL_54;
              }
            }
            else
            {
              try
              {
                ATL::CAtlList<CAPONode *,CAPONodeTraits>::AddHead(v48, &v45);
              }
              catch ( ATL::CAtlException *v65 )
              {
                v37 = v65;
                if ( *(_DWORD *)v65 == -1073741571 )
                  _o__resetstkoflw();
                LODWORD(v46) = *(_DWORD *)v37;
                goto LABEL_54;
              }
            }
LABEL_128:
            try
            {
              v69[1] = (ATL::CAtlException *)&v48;
              v69[2] = (ATL::CAtlException *)&v45;
              v70 = 1;
              ATL::CAtlList<CAPONode *,CAPONodeTraits>::AddTail((_QWORD *)(v7 + 128), &v45);
            }
            catch ( ATL::CAtlException *v69 )
            {
              v41 = v69[0];
              if ( *(_DWORD *)v69[0] == -1073741571 )
                _o__resetstkoflw();
              LODWORD(v46) = *(_DWORD *)v41;
              v10 = (unsigned int)v46;
              if ( (int)v46 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x83E,
                  (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
                  (const char *)(unsigned int)v46);
                v36 = (__int64 *)ATL::CAtlList<CAPONode *,CAPONodeTraits>::Find(v48, &v45);
                ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAt(v48, v36);
                CAPONode::UnlockForProcess(v45);
                goto LABEL_73;
              }
              v14 = v52;
              v16 = Block;
            }
            ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAt(v49, v64);
            if ( v16 )
              free(v16);
            if ( v14 )
              free(v14);
            if ( lpCriticalSection )
              LeaveCriticalSection(lpCriticalSection);
            if ( v51 )
              LeaveCriticalSection(v50);
            return 0LL;
          }
        }
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7CC,
          (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
          (const char *)0x887C001ALL);
        if ( lpCriticalSection )
        {
          LeaveCriticalSection(lpCriticalSection);
          lpCriticalSection = 0LL;
        }
        v10 = -2005139430;
        goto LABEL_21;
      }
    }
    v45 = 0LL;
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7C1,
    (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
    (const char *)(unsigned int)v9);
LABEL_21:
  ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&v50);
  return v10;
}
