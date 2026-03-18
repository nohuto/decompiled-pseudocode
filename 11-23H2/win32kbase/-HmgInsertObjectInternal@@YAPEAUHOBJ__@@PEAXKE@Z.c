/*
 * XREFs of ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0046F30
 * Callers:
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C003E800 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C0047860 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C007D19C (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     NtGdiCreateRectRgn @ 0x1C008A780 (NtGdiCreateRectRgn.c)
 * Callees:
 *     HmgDecProcessHandleCount @ 0x1C003F938 (HmgDecProcessHandleCount.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C003FBE0 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     ?HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z @ 0x1C0040000 (-HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C0045AA0 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0046EB0 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z @ 0x1C00478FC (-TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C007C3E8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C00DFA8C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C016BBC8 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C016BC80 (McTemplateK0pz_EtwWriteTransfer.c)
 */

struct HOBJ__ *__fastcall HmgInsertObjectInternal(struct OBJECT *a1, unsigned __int16 a2, char a3)
{
  struct HOBJ__ *v4; // r15
  unsigned __int64 v7; // r14
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rcx
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r13
  struct _ERESOURCE *v14; // rbp
  __int64 v15; // rbp
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // r12d
  PEPROCESS v19; // rcx
  __int64 v20; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v22; // rcx
  _QWORD *v23; // r13
  __int64 v24; // rcx
  int v25; // edx
  __int64 v26; // rcx
  int v27; // r8d
  __int64 v28; // r13
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // r8d
  struct _ERESOURCE *v32; // rcx
  GdiHandleManager *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // rcx
  int v43; // r8d
  struct _ERESOURCE *v44; // rcx
  __int64 v46; // rax
  _QWORD *ProcessWin32Process; // rax
  int v48; // eax
  unsigned int v49; // r8d
  int v50; // r9d
  char EtwGdiHandleType; // al
  int v52; // ecx
  int v53; // r8d
  int v54; // r8d
  int v55; // r9d
  struct _ERESOURCE *Resource; // [rsp+40h] [rbp-68h]
  __int64 v57; // [rsp+48h] [rbp-60h]
  __int64 v58; // [rsp+48h] [rbp-60h]
  __int64 v59; // [rsp+50h] [rbp-58h]
  __int64 v60; // [rsp+50h] [rbp-58h]
  __int64 v61; // [rsp+58h] [rbp-50h] BYREF
  __int64 v62; // [rsp+60h] [rbp-48h]
  unsigned int v63; // [rsp+B8h] [rbp+10h] BYREF
  PEPROCESS Process; // [rsp+C8h] [rbp+20h] BYREF

  v4 = 0LL;
  v7 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v9 = *ThreadWin32Thread;
    if ( *ThreadWin32Thread )
    {
      v46 = *(_QWORD *)(v9 + 72);
      if ( v46 )
        LODWORD(v7) = *(_DWORD *)(v46 + 8);
    }
  }
  v10 = *(_QWORD *)(SGDGetSessionState(v9) + 24);
  v62 = v10;
  v13 = *(_QWORD *)(SGDGetSessionState(v11) + 24);
  v14 = *(struct _ERESOURCE **)(v13 + 1912);
  if ( v14 )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v14);
  }
  v15 = *(_QWORD *)(v13 + 1912);
  v16 = *(_QWORD *)(SGDGetSessionState(v12) + 24);
  if ( *(_DWORD *)(v16 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(
      v16,
      (unsigned int)L"GreBaseGlobals.hsemHmgr",
      v17,
      v15,
      17,
      (__int64)L"GreBaseGlobals.hsemHmgr");
  if ( (a2 & 8) != 0 )
    goto LABEL_25;
  v18 = (a2 & 8) + 1;
  v59 = *(_QWORD *)(SGDGetSessionState(v16) + 24);
  if ( (_DWORD)v7 && (_DWORD)v7 != -2147483630 )
  {
    Process = 0LL;
    if ( (_DWORD)v7 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v20);
      v23 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
        v23 = 0LL;
    }
    else
    {
      if ( PsLookupProcessByProcessId((HANDLE)(int)v7, &Process) < 0 )
      {
LABEL_21:
        v19 = Process;
        if ( Process )
          ObfDereferenceObject(Process);
        goto LABEL_23;
      }
      ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(Process);
      v23 = ProcessWin32Process;
      if ( ProcessWin32Process && !*ProcessWin32Process )
        v23 = 0LL;
    }
    if ( v23 )
    {
      v57 = *(_QWORD *)(SGDGetSessionState(v22) + 24);
      Resource = *(struct _ERESOURCE **)(v57 + 1912);
      if ( Resource )
      {
        PsEnterPriorityRegion();
        ExEnterCriticalRegionAndAcquireResourceExclusive(Resource);
      }
      v58 = *(_QWORD *)(v57 + 1912);
      v26 = *(_QWORD *)(SGDGetSessionState(v24) + 24);
      if ( *(_DWORD *)(v26 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pqz_EtwWriteTransfer(v26, v25, v27, v58, 17, (__int64)L"GreBaseGlobals.hsemHmgr");
      if ( *((_DWORD *)v23 + 15) >= *(_DWORD *)(v59 + 2376) )
      {
        v18 = 0;
        v48 = *((_DWORD *)v23 + 72);
        if ( (v48 & 0x20) == 0 )
        {
          *((_DWORD *)v23 + 72) = v48 | 0x20;
          if ( (unsigned int)dword_1C02883D8 > 5 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C02883D8, 0x400000000000LL) )
            {
              v61 = 0x1000000LL;
              v63 = v49;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                (unsigned int)&dword_1C02883D8,
                (unsigned int)&unk_1C0256EF2,
                v49,
                v50,
                (__int64)&v63,
                (__int64)&v61);
            }
          }
        }
      }
      else
      {
        HmgpIncProcessHandleCountEx((struct _W32PROCESS *)v23);
      }
      v28 = *(_QWORD *)(SGDGetSessionState(v26) + 24);
      v60 = *(_QWORD *)(v28 + 1912);
      v30 = *(_QWORD *)(SGDGetSessionState(v29) + 24);
      if ( *(_DWORD *)(v30 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(v30, (unsigned int)&LockRelease, v31, v60, (__int64)L"GreBaseGlobals.hsemHmgr");
      v32 = *(struct _ERESOURCE **)(v28 + 1912);
      if ( v32 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v32);
        PsLeavePriorityRegion();
      }
    }
    goto LABEL_21;
  }
LABEL_23:
  if ( !v18 )
    goto LABEL_30;
  v10 = v62;
LABEL_25:
  v33 = *(GdiHandleManager **)(v10 + 8008);
  v63 = 0;
  if ( GdiHandleManager::AcquireEntryIndex(v33, &v63) )
  {
    v4 = ENTRYOBJ::hSetup(a1, a3, a2, v63);
    if ( a3 == 5 )
    {
      v37 = *((_QWORD *)a1 + 85);
      v38 = 0LL;
    }
    else
    {
      if ( a3 != 16 )
      {
LABEL_29:
        if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
        {
          SGDGetUserSessionState(v19, v34, v35, v36);
          if ( (a2 & 8) != 0 )
            LOBYTE(v7) = 0;
          EtwGdiHandleType = GetEtwGdiHandleType(a3);
          McTemplateK0pqqq_EtwWriteTransfer(
            v52,
            (unsigned int)&GdiCreateHandle,
            v53,
            (_DWORD)v4,
            EtwGdiHandleType,
            v53,
            v7);
        }
        goto LABEL_30;
      }
      v37 = *((_QWORD *)a1 + 17);
      v38 = 2LL;
    }
    TrackObjectReferenceInitialization(v38, v37, *((unsigned int *)a1 + 2));
    goto LABEL_29;
  }
  if ( (a2 & 8) == 0 )
    HmgDecProcessHandleCount(v7);
  if ( !*(_BYTE *)(v10 + 8096) )
  {
    v19 = *(PEPROCESS *)(v10 + 8008);
    if ( *((_DWORD *)v19 + 1) >= *((_DWORD *)v19 + 2) )
    {
      *(_BYTE *)(v10 + 8096) = 1;
      if ( (unsigned int)dword_1C02883D8 > 5 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C02883D8, 0x400000000000LL) )
        {
          v63 = *(_DWORD *)(v10 + 1904);
          Process = (PEPROCESS)0x1000000;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
            (unsigned int)&dword_1C02883D8,
            (unsigned int)&unk_1C0256EA3,
            v54,
            v55,
            (__int64)&v63,
            (__int64)&Process);
        }
      }
    }
  }
LABEL_30:
  v39 = *(_QWORD *)(SGDGetSessionState(v19) + 24);
  v40 = *(_QWORD *)(v39 + 1912);
  v42 = *(_QWORD *)(SGDGetSessionState(v41) + 24);
  if ( *(_DWORD *)(v42 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v42, (unsigned int)&LockRelease, v43, v40, (__int64)L"GreBaseGlobals.hsemHmgr");
  v44 = *(struct _ERESOURCE **)(v39 + 1912);
  if ( v44 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v44);
    PsLeavePriorityRegion();
  }
  return v4;
}
