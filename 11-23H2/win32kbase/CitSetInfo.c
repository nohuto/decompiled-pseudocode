/*
 * XREFs of CitSetInfo @ 0x1C0033570
 * Callers:
 *     NtUserCitSetInfo @ 0x1C00334B0 (NtUserCitSetInfo.c)
 * Callees:
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C0032F98 (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C00B674C (-CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C00B86C8 (-CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C02347AC (-CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C0234840 (-CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 */

__int64 __fastcall CitSetInfo(__int64 a1, union _CIT_SI_INFO *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  union _CIT_SI_INFO *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v4 = a1;
  if ( !xmmword_1C0293D20 )
    return -1073741641LL;
  if ( (unsigned __int16)a1 == 2LL )
  {
    LODWORD(result) = CitpSetCompositionInfo((union _CIT_SI_INFOFLAGS *)&v4, (union _CIT_SI_INFO *)&v5, a3);
    return (int)result;
  }
  if ( (unsigned __int64)(unsigned __int16)a1 - 3 <= 1 )
  {
    LODWORD(result) = CitpSetAudioInfo((union _CIT_SI_INFOFLAGS *)&v4, a2);
    return (int)result;
  }
  if ( (unsigned __int16)a1 == 5LL )
  {
    LODWORD(result) = CitpSetViewEngagementInfo((union _CIT_SI_INFOFLAGS *)5, (union _CIT_SI_INFO *)&v5);
    return (int)result;
  }
  if ( (unsigned __int16)a1 == 1LL )
  {
    if ( (_WORD)a2 == 64 )
      LODWORD(result) = CitpSetSpeechRecognitionInfo((union _CIT_SI_INFOFLAGS *)&v4, (union _CIT_SI_INFO *)&v5);
    else
      LODWORD(result) = CitpSetOtherInputInfo((union _CIT_SI_INFOFLAGS *)1, (union _CIT_SI_INFO *)&v5);
    return (int)result;
  }
  return -1073741821LL;
}
