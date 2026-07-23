/*
 * XREFs of KiGetSavedIptState @ 0x1405B6040
 * Callers:
 *     <none>
 * Callees:
 *     RtlLocateSupervisorFeature @ 0x1403FFE20 (RtlLocateSupervisorFeature.c)
 *     KiGetSavedSupervisorState @ 0x1405B6110 (KiGetSavedSupervisorState.c)
 */

__int64 __fastcall KiGetSavedIptState(__int64 a1, PVOID *a2, ULONG *a3)
{
  __int64 result; // rax
  ULONG v6; // eax
  PXSAVE_AREA_HEADER XStateHeader; // [rsp+38h] [rbp+10h] BYREF

  XStateHeader = 0LL;
  if ( !a2 || !a3 )
    return 3221225485LL;
  result = KiGetSavedSupervisorState(a1, &XStateHeader);
  if ( (int)result >= 0 )
  {
    if ( (_bittest64(&KeEnabledSupervisorXStateFeatures, 8u) & _bittest64(&KeFeatureBits, 0x17u)) != 0 )
    {
      *a2 = RtlLocateSupervisorFeature(XStateHeader, 8u, a3);
    }
    else if ( (_DWORD)KiIptMsrMask )
    {
      v6 = KiIptSaveAreaLength;
      *a2 = (char *)&XStateHeader[1] + MEMORY[0xFFFFF78000000600] - (unsigned __int64)MEMORY[0xFFFFF780000003E8];
      *a3 = v6;
    }
    else
    {
      *a2 = 0LL;
      *a3 = 0;
    }
    return 0LL;
  }
  return result;
}
