/*
 * XREFs of PsspCaptureProcessInformation @ 0x1800C3DAC
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1800C3790 (PssNtCaptureSnapshot.c)
 * Callees:
 *     PsspCaptureHandleTrace @ 0x1800C5A28 (PsspCaptureHandleTrace.c)
 *     NtQueryInformationProcess @ 0x180161FB0 (NtQueryInformationProcess.c)
 */

NTSTATUS __fastcall PsspCaptureProcessInformation(_QWORD *a1, void *a2, char a3)
{
  NTSTATUS result; // eax

  a1[2] = 64LL;
  result = NtQueryInformationProcess(a2, ProcessBasicInformation, a1 + 2, 0x40u, 0LL);
  if ( result >= 0 )
  {
    result = NtQueryInformationProcess(a2, (PROCESSINFOCLASS)4, a1 + 10, 0x20u, 0LL);
    if ( result >= 0 )
    {
      result = NtQueryInformationProcess(a2, (PROCESSINFOCLASS)18, a1 + 14, 2u, 0LL);
      if ( result >= 0 )
      {
        result = NtQueryInformationProcess(a2, (PROCESSINFOCLASS)3, a1 + 15, 0x70u, 0LL);
        if ( result >= 0 )
        {
          if ( NtQueryInformationProcess(a2, (PROCESSINFOCLASS)69, a1 + 29, 0x28u, 0LL) >= 0 )
            *((_DWORD *)a1 + 1) |= 8u;
          if ( NtQueryInformationProcess(a2, (PROCESSINFOCLASS)34, a1 + 34, 4u, 0LL) < 0 )
            *((_DWORD *)a1 + 68) = 0;
          if ( NtQueryInformationProcess(a2, (PROCESSINFOCLASS)36, (char *)a1 + 276, 4u, 0LL) < 0 )
            *((_DWORD *)a1 + 69) = 0;
          if ( (a3 & 0x40) != 0 )
            PsspCaptureHandleTrace(a1, a2);
          *((_WORD *)a1 + 141) = 256;
          *((_WORD *)a1 + 140) = 0;
          a1[36] = a1 + 37;
          if ( NtQueryInformationProcess(a2, (PROCESSINFOCLASS)43, a1 + 35, 0x110u, 0LL) < 0 )
            *(_OWORD *)(a1 + 35) = 0LL;
          return 0;
        }
      }
    }
  }
  return result;
}
