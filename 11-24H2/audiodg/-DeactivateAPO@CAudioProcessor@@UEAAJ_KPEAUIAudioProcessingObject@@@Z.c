/*
 * XREFs of ?DeactivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@@Z @ 0x1400090D0
 * Callers:
 *     ??1CAudioProcessor@@QEAA@XZ @ 0x1400357A0 (--1CAudioProcessor@@QEAA@XZ.c)
 * Callees:
 *     ?UnlockForProcess@CAPONode@@QEAAJXZ @ 0x140008EB8 (-UnlockForProcess@CAPONode@@QEAAJXZ.c)
 *     ?ValidateTransactionState@CAudioProcessor@@AEAAJ_K@Z @ 0x140009020 (-ValidateTransactionState@CAudioProcessor@@AEAAJ_K@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000ABEC (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAt@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000B244 (-RemoveAt@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000B8BC (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ?AddHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z @ 0x14000B9B8 (-AddHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCAPONode@@@Z.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEAAXXZ @ 0x14000BA24 (-GetFreeNode@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEAAXXZ.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x140038F74 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005619C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioProcessor::DeactivateAPO(CAudioProcessor *this, __int64 a2, struct IAudioProcessingObject *a3)
{
  CAudioProcessor *v5; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v9; // eax
  int v10; // r15d
  _QWORD *v11; // rdx
  CAPONode *v12; // rsi
  char *v13; // r12
  __int64 *i; // r14
  __int64 **v15; // r14
  __int64 v16; // r12
  __int64 *v17; // rcx
  __int64 *v18; // rax
  _QWORD **v19; // rax
  _QWORD ***v20; // r8
  _QWORD **j; // rdx
  _QWORD **v22; // rcx
  _QWORD **v23; // rcx
  bool v24; // zf
  __int64 v25; // r8
  __int64 v26; // rdx
  ATL::CAtlException *v27; // rbx
  ATL::CAtlException *v28; // rbx
  int v29; // [rsp+20h] [rbp-78h]
  CAPONode *v30; // [rsp+30h] [rbp-68h] BYREF
  __int64 v31; // [rsp+38h] [rbp-60h] BYREF
  __int64 *v32; // [rsp+40h] [rbp-58h]
  char *v33; // [rsp+48h] [rbp-50h]
  ATL::CAtlException *v34; // [rsp+50h] [rbp-48h] BYREF
  ATL::CAtlException *v35; // [rsp+58h] [rbp-40h] BYREF
  LPCRITICAL_SECTION v36; // [rsp+60h] [rbp-38h] BYREF
  char v37; // [rsp+68h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+B8h] [rbp+20h] BYREF

  v5 = this;
  if ( !a3 )
  {
    v6 = -2147467261;
    v7 = 2165LL;
    goto LABEL_4;
  }
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v6 = -2147024890;
    v7 = 2166LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)v6,
      v29);
    return v6;
  }
  v36 = (LPCRITICAL_SECTION)((char *)this + 88);
  v37 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v36);
  v9 = CAudioProcessor::ValidateTransactionState(v5, a2);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87C,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)(unsigned int)v9,
      v29);
LABEL_64:
    ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&v36);
    return (unsigned int)v10;
  }
  else
  {
    v31 = 0LL;
    (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *, __int64 *, _QWORD))(**((_QWORD **)v5 + 99) + 24LL))(
      *((_QWORD *)v5 + 99),
      &lpCriticalSection,
      &v31,
      0LL);
    v11 = (_QWORD *)***((_QWORD ***)v5 + 96);
    do
    {
      if ( !v11 )
        goto LABEL_14;
      v12 = (CAPONode *)v11[2];
      v11 = (_QWORD *)*v11;
    }
    while ( *(struct IAudioProcessingObject **)v12 != a3 );
    v30 = v12;
    if ( !v12 )
    {
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x884,
        (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
        (const char *)0x887C001ALL,
        v29);
      if ( lpCriticalSection )
      {
        LeaveCriticalSection(lpCriticalSection);
        lpCriticalSection = 0LL;
      }
      if ( v37 )
        LeaveCriticalSection(v36);
      return 2289827866LL;
    }
    v13 = (char *)v5 + 128;
    v33 = (char *)v5 + 128;
    for ( i = (__int64 *)*((_QWORD *)v5 + 16); i; i = (__int64 *)*i )
    {
      if ( *(_QWORD *)i[2] == *(_QWORD *)v12 )
      {
        v32 = i;
        do
        {
          try
          {
            v10 = 0;
            ATL::CAtlList<CAPONode *,CAPONodeTraits>::AddHead(v31, &v30);
          }
          catch ( ATL::CAtlException *v34 )
          {
            v27 = v34;
            if ( *(_DWORD *)v34 == -1073741571 )
              _o__resetstkoflw();
            v5 = this;
            v12 = v30;
            i = v32;
            v10 = *(_DWORD *)v27;
            v13 = v33;
          }
          if ( !*((_BYTE *)v5 + 779) )
            break;
          if ( v10 < 0 )
            Sleep(1u);
        }
        while ( *((_BYTE *)v5 + 779) && v10 < 0 );
        if ( v10 < 0 )
        {
          v26 = 2192LL;
          goto LABEL_62;
        }
        ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAt(v13, i, v25);
        CAPONode::UnlockForProcess(v12);
        goto LABEL_24;
      }
    }
    do
    {
      try
      {
        v10 = 0;
        v15 = (__int64 **)((char *)v5 + 176);
        v16 = *((_QWORD *)v5 + 22);
        ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetFreeNode((char *)v5 + 176);
      }
      catch ( ATL::CAtlException *v35 )
      {
        v28 = v35;
        if ( *(_DWORD *)v35 == -1073741571 )
          _o__resetstkoflw();
        v5 = this;
        v12 = v30;
        v10 = *(_DWORD *)v28;
        goto LABEL_22;
      }
      v17 = v15[4];
      v18 = (__int64 *)*v17;
      v17[2] = (__int64)v12;
      v15[4] = v18;
      v17[1] = 0LL;
      *v17 = v16;
      v15[2] = (__int64 *)((char *)v15[2] + 1);
      if ( *v15 )
        (*v15)[1] = (__int64)v17;
      else
        v15[1] = v17;
      *v15 = v17;
LABEL_22:
      if ( !*((_BYTE *)v5 + 779) )
        break;
      if ( v10 < 0 )
        Sleep(1u);
    }
    while ( *((_BYTE *)v5 + 779) && v10 < 0 );
    if ( v10 < 0 )
    {
      v26 = 2205LL;
LABEL_62:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v26,
        (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
        (const char *)(unsigned int)v10,
        v29);
      if ( lpCriticalSection )
      {
        LeaveCriticalSection(lpCriticalSection);
        lpCriticalSection = 0LL;
      }
      goto LABEL_64;
    }
LABEL_24:
    v19 = (_QWORD **)*((_QWORD *)v5 + 96);
    v20 = (_QWORD ***)*v19;
    for ( j = (_QWORD **)**v19; j; j = (_QWORD **)*j )
    {
      if ( *j[2] == *(_QWORD *)v12 )
        goto LABEL_29;
    }
    j = 0LL;
LABEL_29:
    if ( !j )
      ATL::AtlThrowImpl(-2147467259);
    v22 = (_QWORD **)*j;
    if ( j == *v20 )
      *v20 = v22;
    else
      *j[1] = v22;
    v23 = (_QWORD **)j[1];
    if ( j == v20[1] )
      v20[1] = v23;
    else
      (*j)[1] = v23;
    *j = v20[4];
    v20[4] = j;
    v24 = v20[2] == (_QWORD **)1;
    v20[2] = (_QWORD **)((char *)v20[2] - 1);
    if ( v24 )
      ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll(v20);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    if ( v37 )
      LeaveCriticalSection(v36);
    return 0LL;
  }
}
