/*
 * XREFs of ?DetachEndpointFromConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioEndpoint@@@Z @ 0x140035F40
 * Callers:
 *     ??1CAudioProcessor@@QEAA@XZ @ 0x1400357A0 (--1CAudioProcessor@@QEAA@XZ.c)
 * Callees:
 *     ?ValidateTransactionState@CAudioProcessor@@AEAAJ_K@Z @ 0x140009020 (-ValidateTransactionState@CAudioProcessor@@AEAAJ_K@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000ABEC (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveEndpointFromList@CAudioProcessor@@AEAAJAEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@PEAUIAudioEndpoint@@@Z @ 0x140036068 (-RemoveEndpointFromList@CAudioProcessor@@AEAAJAEAV-$CAtlList@PEAVCConnectionNode@@VCConnectionNo.c)
 */

__int64 __fastcall CAudioProcessor::DetachEndpointFromConnection(
        CAudioProcessor *this,
        __int64 a2,
        struct IAudioEndpoint *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a3 )
  {
    v6 = -2147467261;
    v7 = 3076LL;
    goto LABEL_4;
  }
  if ( ((a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v6 = -2147024890;
    v7 = 3077LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v13 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 88);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = CAudioProcessor::ValidateTransactionState(this, a2);
  if ( v6 < 0 )
  {
    v11 = 3082LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)(unsigned int)v6);
    if ( v13 )
      LeaveCriticalSection(lpCriticalSection);
    return (unsigned int)v6;
  }
  if ( (int)CAudioProcessor::RemoveEndpointFromList(v9, **((_QWORD **)this + 96) + 48LL, a3) < 0 )
  {
    v6 = CAudioProcessor::RemoveEndpointFromList(v10, **((_QWORD **)this + 96) + 96LL, a3);
    if ( v6 < 0 )
    {
      v11 = 3090LL;
      goto LABEL_15;
    }
  }
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
