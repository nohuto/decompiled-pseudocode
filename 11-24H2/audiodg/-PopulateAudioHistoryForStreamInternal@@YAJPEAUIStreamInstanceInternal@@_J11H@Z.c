/*
 * XREFs of ?PopulateAudioHistoryForStreamInternal@@YAJPEAUIStreamInstanceInternal@@_J11H@Z @ 0x140041584
 * Callers:
 *     ?PopulateAudioHistoryForStream@CStreamInstance@@UEAAJ_J00H@Z @ 0x14006E640 (-PopulateAudioHistoryForStream@CStreamInstance@@UEAAJ_J00H@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z @ 0x1400418E0 (-GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z.c)
 *     ?GetAudioHistoryControlForStream@CAudioHistoryBufferManager@@QEAAJ_KPEAPEAUICPAudioHistoryControl@@@Z @ 0x1400561BC (-GetAudioHistoryControlForStream@CAudioHistoryBufferManager@@QEAAJ_KPEAPEAUICPAudioHistoryContro.c)
 *     ?GetStreamEndpointInstance@CPipeInstance@@QEAAPEAVCEndpointInstance@@XZ @ 0x140058330 (-GetStreamEndpointInstance@CPipeInstance@@QEAAPEAVCEndpointInstance@@XZ.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall PopulateAudioHistoryForStreamInternal(
        struct IStreamInstanceInternal *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  CPipeInstance *v8; // rsi
  int HistoryBufferManager; // eax
  int AudioHistoryControlForStream; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 *StreamEndpointInstance; // rax
  LPCRITICAL_SECTION v15; // rcx
  __int64 v16; // rbx
  int v17; // edi
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v24; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-71h] BYREF
  __int64 v26; // [rsp+38h] [rbp-69h] BYREF
  unsigned int v27; // [rsp+40h] [rbp-61h] BYREF
  unsigned int v28; // [rsp+44h] [rbp-5Dh] BYREF
  __int64 *v29; // [rsp+48h] [rbp-59h] BYREF
  __int64 v30; // [rsp+50h] [rbp-51h] BYREF
  _OWORD v31[2]; // [rsp+60h] [rbp-41h] BYREF
  __int64 v32; // [rsp+80h] [rbp-21h]
  struct ICPAudioHistoryControl *v33[2]; // [rsp+90h] [rbp-11h] BYREF
  __int128 v34; // [rsp+A0h] [rbp-1h]
  __int64 v35; // [rsp+B0h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+57h]

  v8 = (CPipeInstance *)(*(__int64 (__fastcall **)(struct IStreamInstanceInternal *))(*(_QWORD *)a1 + 24LL))(a1);
  lpCriticalSection = 0LL;
  HistoryBufferManager = GetHistoryBufferManager((struct CAudioHistoryBufferManager **)&lpCriticalSection);
  AudioHistoryControlForStream = HistoryBufferManager;
  if ( HistoryBufferManager < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x303,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)HistoryBufferManager);
    return (unsigned int)AudioHistoryControlForStream;
  }
  v29 = 0LL;
  v33[0] = (struct ICPAudioHistoryControl *)&v29;
  v33[1] = 0LL;
  LOBYTE(v34) = 1;
  AudioHistoryControlForStream = CAudioHistoryBufferManager::GetAudioHistoryControlForStream(
                                   lpCriticalSection,
                                   a2,
                                   &v33[1]);
  if ( (_BYTE)v34 )
  {
    v11 = *(_QWORD *)v33[0];
    *(_QWORD *)v33[0] = v33[1];
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( AudioHistoryControlForStream < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x306,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)AudioHistoryControlForStream);
LABEL_31:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v29);
    return (unsigned int)AudioHistoryControlForStream;
  }
  v26 = 0LL;
  v12 = *v29;
  v33[0] = (struct ICPAudioHistoryControl *)&v26;
  v33[1] = 0LL;
  LOBYTE(v34) = 1;
  AudioHistoryControlForStream = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, _QWORD, struct ICPAudioHistoryControl **))(v12 + 24))(
                                   v29,
                                   a3,
                                   a4,
                                   a5,
                                   &v33[1]);
  if ( (_BYTE)v34 )
  {
    v13 = *(_QWORD *)v33[0];
    *(_QWORD *)v33[0] = v33[1];
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( AudioHistoryControlForStream < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x309,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)AudioHistoryControlForStream);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v26);
    goto LABEL_31;
  }
  StreamEndpointInstance = (__int64 *)CPipeInstance::GetStreamEndpointInstance(v8);
  if ( StreamEndpointInstance )
  {
    v15 = 0LL;
    lpCriticalSection = 0LL;
    v16 = *StreamEndpointInstance;
    v30 = v16;
    if ( v16 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      v15 = lpCriticalSection;
    }
    lpCriticalSection = 0LL;
    if ( v15 )
      ((void (__fastcall *)(LPCRITICAL_SECTION))v15->DebugInfo->ProcessLocksList.Flink)(v15);
    v17 = (**(__int64 (__fastcall ***)(__int64, GUID *, LPCRITICAL_SECTION *))v16)(
            v16,
            &GUID_91377361_53fa_4626_82b9_bdb68e242b3e,
            &lpCriticalSection);
    if ( v17 >= 0 )
    {
      v28 = 0;
      *(_OWORD *)v33 = 0LL;
      v34 = 0LL;
      v35 = 0LL;
      v27 = 0;
      v18 = (*(__int64 (__fastcall **)(__int64, unsigned int *, struct ICPAudioHistoryControl **, unsigned int *))(*(_QWORD *)v26 + 24LL))(
              v26,
              &v28,
              v33,
              &v27);
      *((_QWORD *)&v34 + 1) = a3;
      while ( 1 )
      {
        v20 = v18;
        v21 = v28;
        if ( !v28 )
          break;
        Blink = lpCriticalSection->DebugInfo->ProcessLocksList.Blink;
        v31[0] = *(_OWORD *)v33;
        v31[1] = v34;
        v32 = v35;
        v17 = ((__int64 (__fastcall *)(LPCRITICAL_SECTION, _QWORD, _OWORD *, _QWORD, __int64))Blink)(
                lpCriticalSection,
                v28,
                v31,
                v27,
                v20);
        if ( v17 < 0 )
        {
          v24 = 799LL;
          goto LABEL_30;
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 32LL))(v26);
        v18 = (*(__int64 (__fastcall **)(__int64, unsigned int *, struct ICPAudioHistoryControl **, unsigned int *))(*(_QWORD *)v26 + 24LL))(
                v26,
                &v28,
                v33,
                &v27);
      }
      if ( lpCriticalSection )
        ((void (__fastcall *)(LPCRITICAL_SECTION, _QWORD, __int64, __int64))lpCriticalSection->DebugInfo->ProcessLocksList.Flink)(
          lpCriticalSection,
          v28,
          v19,
          v18);
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v16 + 16LL))(v16, v21, v19, v20);
      goto LABEL_23;
    }
    v24 = 787LL;
LABEL_30:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v17);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&lpCriticalSection);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v30);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v26);
    AudioHistoryControlForStream = v17;
    goto LABEL_31;
  }
LABEL_23:
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v29 )
    (*(void (__fastcall **)(__int64 *))(*v29 + 16))(v29);
  return 0LL;
}
