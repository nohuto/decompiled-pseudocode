/*
 * XREFs of ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1400B3D28
 * Callers:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400B26AC (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     CitBackgroundMouseInput @ 0x1400B3C30 (CitBackgroundMouseInput.c)
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1400B3DCC (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpLastInputUpdate@@YAXGI@Z @ 0x1400B4438 (-CitpLastInputUpdate@@YAXGI@Z.c)
 *     ?CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1400B4D78 (-CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1400B577C (-CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     CitEnableKeyboardDelegation @ 0x1401971A8 (CitEnableKeyboardDelegation.c)
 *     ?CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1401993EC (-CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x14023C4B0 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1400B4F78 (-CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x14019EC50 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 */

struct _CIT_PROCESS *__fastcall CitpProcessEnsureContext(struct tagPROCESSINFO *a1)
{
  struct _CIT_PROCESS *result; // rax
  char *v3; // rax
  const char *v4; // rdx
  char *v5; // rdi

  result = (struct _CIT_PROCESS *)*((_QWORD *)a1 + 115);
  if ( !result || result == (struct _CIT_PROCESS *)52977 )
    return 0LL;
  if ( result == (struct _CIT_PROCESS *)52976 )
  {
    v3 = (char *)Win32AllocPoolZInitImpl(256LL, 0x70uLL, 0x49637355u);
    *((_QWORD *)a1 + 115) = v3;
    v5 = v3;
    if ( v3 )
    {
      memset(v3, 0, 0x70uLL);
      *((_QWORD *)v5 + 1) = a1;
      CitpProcessGetProgramId(a1, (struct _CIT_PROGRAM_ID *)(v5 + 48));
      return (struct _CIT_PROCESS *)v5;
    }
    *((_QWORD *)a1 + 115) = 52976LL;
    CitpLogFailureWorker(-1073741670, v4, 0xA35u);
    return 0LL;
  }
  return result;
}
