/*
 * XREFs of RtlpCreateExecutionRequiredRequest @ 0x1800DE890
 * Callers:
 *     RtlpHeapPerformCrossProcessQuery @ 0x180098190 (RtlpHeapPerformCrossProcessQuery.c)
 * Callees:
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtQueryInformationProcess @ 0x180163540 (NtQueryInformationProcess.c)
 *     NtPowerInformation @ 0x180163DF0 (NtPowerInformation.c)
 */

NTSTATUS __fastcall RtlpCreateExecutionRequiredRequest(void *a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  size_t v5; // rax
  NTSTATUS v6; // esi
  HANDLE v7; // [rsp+30h] [rbp-39h] BYREF
  int v8; // [rsp+38h] [rbp-31h]
  char v9; // [rsp+3Ch] [rbp-2Dh]
  __int16 v10; // [rsp+3Dh] [rbp-2Ch]
  char v11; // [rsp+3Fh] [rbp-2Ah]
  void *v12; // [rsp+40h] [rbp-29h]
  _DWORD InputBuffer[2]; // [rsp+48h] [rbp-21h] BYREF
  __int64 v14; // [rsp+50h] [rbp-19h]
  const wchar_t *v15; // [rsp+58h] [rbp-11h]
  __int128 v16; // [rsp+60h] [rbp-9h]
  _QWORD ProcessInformation[2]; // [rsp+70h] [rbp+7h] BYREF
  __int128 v18; // [rsp+80h] [rbp+17h]
  __int128 v19; // [rsp+90h] [rbp+27h]
  __int128 v20; // [rsp+A0h] [rbp+37h]
  HANDLE OutputBuffer; // [rsp+E0h] [rbp+77h] BYREF

  ProcessInformation[0] = 64LL;
  HIDWORD(v14) = 0;
  OutputBuffer = 0LL;
  ProcessInformation[1] = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v16 = 0LL;
  result = NtQueryInformationProcess(a1, ProcessBasicInformation, ProcessInformation, 0x40u, 0LL);
  if ( result >= 0 )
  {
    if ( (BYTE8(v20) & 0x40) != 0 )
    {
      InputBuffer[0] = 0;
      v14 = 0LL;
      v15 = L"QueryDebugInformation request";
      InputBuffer[1] = 1;
      v5 = 2 * wcslen(L"QueryDebugInformation request");
      if ( v5 >= 0xFFFE )
        LOWORD(v5) = -4;
      LOWORD(v14) = v5;
      WORD1(v14) = v5 + 2;
      v6 = NtPowerInformation(PlmPowerRequestCreate, InputBuffer, 0x28u, &OutputBuffer, 8u);
      if ( v6 >= 0 )
      {
        v7 = OutputBuffer;
        v10 = 0;
        v11 = 0;
        v8 = 3;
        v9 = 1;
        v12 = a1;
        v6 = NtPowerInformation(PowerRequestAction, &v7, 0x18u, 0LL, 0);
        if ( v6 >= 0 )
          *a2 = OutputBuffer;
        else
          NtClose(OutputBuffer);
      }
      return v6;
    }
    else
    {
      *a2 = 0LL;
      return 0;
    }
  }
  return result;
}
