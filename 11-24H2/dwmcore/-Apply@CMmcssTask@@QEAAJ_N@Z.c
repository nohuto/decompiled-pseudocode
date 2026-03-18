/*
 * XREFs of ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x180209828
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800817A0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x180156E68 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x180158024 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?UpdateMMCSSTask@CKst@@EEAAJXZ @ 0x180209390 (-UpdateMMCSSTask@CKst@@EEAAJXZ.c)
 *     _lambda_08f8e6791065478e4a38815f49fd4aba_::_lambda_invoker_cdecl_ @ 0x180209450 (_lambda_08f8e6791065478e4a38815f49fd4aba_--_lambda_invoker_cdecl_.c)
 *     ?Run@CGlobalMit@@MEAAKXZ @ 0x1802094B0 (-Run@CGlobalMit@@MEAAKXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMmcssTask::Apply(LPCRITICAL_SECTION lpCriticalSection, char a2)
{
  char v2; // di
  signed int v4; // ebx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rax
  PRTL_CRITICAL_SECTION_DEBUG v7; // rax
  PRTL_CRITICAL_SECTION_DEBUG v9; // rax
  __int64 v10; // rax
  signed int LastError; // eax
  signed int v12; // eax
  unsigned int v13; // [rsp+20h] [rbp-18h]

  v2 = 0;
  v4 = 0;
  EnterCriticalSection(lpCriticalSection);
  DebugInfo = lpCriticalSection[1].DebugInfo;
  if ( DebugInfo )
  {
    if ( a2 )
      DebugInfo[2].EntryCount = 0;
    v9 = lpCriticalSection[1].DebugInfo;
    if ( v9->Type )
    {
      if ( !*(_QWORD *)&v9[2].Flags )
      {
        SetLastError(0);
        v10 = ((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION_DEBUG, DWORD *))lpCriticalSection[1].OwningThread)(
                lpCriticalSection[1].DebugInfo,
                &lpCriticalSection[1].DebugInfo[2].EntryCount);
        *(_QWORD *)&lpCriticalSection[1].DebugInfo[2].Flags = v10;
        if ( v10 )
        {
          SetLastError(0);
          if ( ((unsigned int (__fastcall *)(_QWORD, _QWORD))lpCriticalSection[1].SpinCount)(
                 *(_QWORD *)&lpCriticalSection[1].DebugInfo[2].Flags,
                 lpCriticalSection[1].DebugInfo[2].ContentionCount) )
          {
            goto LABEL_2;
          }
          LastError = GetLastError();
          v4 = LastError;
          if ( LastError > 0 )
            v4 = (unsigned __int16)LastError | 0x80070000;
          v13 = 269;
        }
        else
        {
          v12 = GetLastError();
          v4 = v12;
          if ( v12 > 0 )
            v4 = (unsigned __int16)v12 | 0x80070000;
          v13 = 265;
        }
        if ( v4 >= 0 )
          v4 = -2003304445;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, v13, 0LL);
      }
    }
  }
LABEL_2:
  v7 = lpCriticalSection[1].DebugInfo;
  if ( v7 && *(_QWORD *)&v7[2].Flags )
    v2 = 1;
  LOBYTE(lpCriticalSection[2].DebugInfo) = v2;
  LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v4;
}
