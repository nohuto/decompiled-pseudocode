/*
 * XREFs of ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x14002934C
 * Callers:
 *     VidSchSubmitCommandContextless @ 0x14002A2A0 (VidSchSubmitCommandContextless.c)
 *     VidSchSubmitCommandToHwQueue @ 0x1400497F0 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchSubmitCommand @ 0x1400D6BF0 (VidSchSubmitCommand.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchiSetFlipDevice @ 0x140029540 (VidSchiSetFlipDevice.c)
 *     VidSchiUpdatePresentParameters @ 0x140029D20 (VidSchiUpdatePresentParameters.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VidSchValidatePresentFlags(
        struct VIDSCH_SUBMIT_DATA2 *a1,
        struct _VIDSCH_DEVICE *a2,
        struct _VIDSCH_SUBMIT_FLAGS *a3)
{
  int v3; // eax
  struct _VIDSCH_GLOBAL *v5; // r15
  int v7; // ecx
  int *v9; // rsi
  int v10; // eax
  int v11; // ebx
  __int64 result; // rax
  int v13; // edx
  unsigned int v14; // eax
  void (__fastcall *v15)(_QWORD, __int64, __int64, const wchar_t *, struct _VIDSCH_GLOBAL *, struct _VIDSCH_DEVICE *, _QWORD, __int64, _QWORD); // rax
  int v16; // ecx
  char v17[8]; // [rsp+30h] [rbp-28h]
  __int64 v18; // [rsp+30h] [rbp-28h]
  __int64 v19; // [rsp+38h] [rbp-20h]

  v3 = *(_DWORD *)a3;
  v5 = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a2 + 4);
  v7 = *((_DWORD *)a2 + 126);
  v9 = (int *)((char *)a1 + 116);
  if ( (*(_DWORD *)a3 & 0x40) == 0 )
  {
    if ( v7 == -1 )
    {
      v10 = v3 | 0x7000;
    }
    else
    {
      if ( v7 != *v9 )
      {
        WdLogSingleEntry4(1LL, v5, a2);
        v18 = (unsigned int)*v9;
        WdLogGlobalForLineNumber = 6447;
        DxgkLogInternalTriageEvent(v18, 0x40000LL);
        v10 = *(_DWORD *)a3;
        goto LABEL_5;
      }
      v10 = v3 | 0x4000;
    }
    *(_DWORD *)a3 = v10;
LABEL_5:
    *((_DWORD *)a2 + 126) = -1;
    goto LABEL_6;
  }
  v13 = *v9;
  v14 = v3 & 0xFFFFFF7F;
  *(_DWORD *)a3 = v14;
  if ( v7 == -1 )
  {
    *((_DWORD *)a2 + 126) = v13;
    v16 = 4096;
  }
  else
  {
    if ( v7 != v13 )
    {
      WdLogSingleEntry4(1LL, v5, a2);
      v19 = *((unsigned int *)a2 + 126);
      *(_QWORD *)v17 = (unsigned int)*v9;
      v15 = (void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, struct _VIDSCH_GLOBAL *, struct _VIDSCH_DEVICE *, _QWORD, __int64, _QWORD))DxgCoreInterface[88];
      WdLogGlobalForLineNumber = 6421;
      v15(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Invalid VidPnSourceId (Check 2)", v5, a2, *(_QWORD *)v17, v19, 0LL);
      return 3221225485LL;
    }
    v16 = 0x2000;
  }
  v10 = v16 | v14;
  *(_DWORD *)a3 = v10;
LABEL_6:
  if ( (v10 & 4) == 0 )
    return 0LL;
  v11 = VidSchiSetFlipDevice(v5, 9, (*(_DWORD *)a1 & 0x20000000) != 0, 0);
  if ( v11 >= 0 )
  {
    VidSchiUpdatePresentParameters(v5);
    return 0LL;
  }
  WdLogSingleEntry0(3LL);
  result = (unsigned int)v11;
  WdLogGlobalForLineNumber = 6477;
  return result;
}
