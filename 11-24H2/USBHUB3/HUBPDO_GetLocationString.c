/*
 * XREFs of HUBPDO_GetLocationString @ 0x140018DB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     RtlStringCchPrintfExW @ 0x14001D350 (RtlStringCchPrintfExW.c)
 */

__int64 __fastcall HUBPDO_GetLocationString(__int64 a1, wchar_t **a2)
{
  unsigned int v2; // ebx
  wchar_t *Pool2; // rdi
  NTSTATUS v6; // edx
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-20h]
  size_t pcchRemaining; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = 0LL;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, 20LL, 1681082453LL);
  if ( Pool2 )
  {
    v6 = RtlStringCchPrintfExW(
           Pool2,
           0xAuLL,
           0LL,
           &pcchRemaining,
           0x200u,
           L"USB(%d)",
           *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 200LL));
    if ( v6 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(pszFormat) = v6;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x77u,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
        pszFormat);
    }
    *a2 = Pool2;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x76u,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
        0);
    return (unsigned int)-1073741670;
  }
  return v2;
}
