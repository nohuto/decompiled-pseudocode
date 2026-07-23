/*
 * XREFs of PsspCaptureHandleTrace @ 0x1800C7D7C
 * Callers:
 *     PsspCaptureProcessInformation @ 0x1800C859C (PsspCaptureProcessInformation.c)
 * Callees:
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtQueryInformationProcess @ 0x180163540 (NtQueryInformationProcess.c)
 *     ZwMapViewOfSection @ 0x180163720 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x180163B60 (NtCreateSection.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

int __fastcall PsspCaptureHandleTrace(__int64 a1, void *a2)
{
  int result; // eax
  unsigned __int64 v5; // rcx
  NTSTATUS v6; // edi
  ULONG ReturnLength; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+58h] [rbp-A8h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE SectionHandle; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR ViewSize[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE ProcessInformation[8]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v13; // [rsp+88h] [rbp-78h]

  ReturnLength = 0;
  SectionHandle = 0LL;
  MaximumSize.QuadPart = 0LL;
  memset_thunk_772440563353939046(ProcessInformation, 0, 0xB0uLL);
  result = NtQueryInformationProcess(a2, ProcessHandleTracing, ProcessInformation, 0xB0u, &ReturnLength);
  if ( (int)(result + 0x80000000) < 0 || result == -1073741820 )
  {
    v5 = 160LL * v13;
    if ( v5 > 0xFFFFFFFF || (int)v5 + 176 < (unsigned int)v5 )
    {
      return -1073741675;
    }
    else
    {
      MaximumSize.QuadPart = (unsigned int)(v5 + 176);
      result = NtCreateSection(
                 &SectionHandle,
                 0xF0007u,
                 (POBJECT_ATTRIBUTES)&stru_1801809B0,
                 &MaximumSize,
                 4u,
                 0x8000000u,
                 0LL);
      if ( result >= 0 )
      {
        BaseAddress = 0LL;
        ViewSize[0] = 0LL;
        v6 = ZwMapViewOfSection(
               SectionHandle,
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               &BaseAddress,
               0LL,
               0LL,
               0LL,
               ViewSize,
               ViewShare,
               0,
               4u);
        if ( v6 >= 0 )
        {
          memset_thunk_772440563353939046(BaseAddress, 0, 0xB0uLL);
          if ( NtQueryInformationProcess(a2, ProcessHandleTracing, BaseAddress, MaximumSize.LowPart, &ReturnLength) >= 0 )
          {
            NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
            *(_DWORD *)(a1 + 936) = ReturnLength;
            *(_QWORD *)(a1 + 944) = SectionHandle;
            *(_QWORD *)(a1 + 952) = MEMORY[0x7FFE0014];
            return 0;
          }
          else
          {
            NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
            return NtClose(SectionHandle);
          }
        }
        else
        {
          NtClose(SectionHandle);
          return v6;
        }
      }
    }
  }
  return result;
}
