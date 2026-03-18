/*
 * XREFs of PfSnParametersSetDefaults @ 0x140C1BB5C
 * Callers:
 *     PfpParametersInitialize @ 0x140C1BC3C (PfpParametersInitialize.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x140436640 (RtlStringCbCopyW.c)
 */

NTSTATUS __fastcall PfSnParametersSetDefaults(__int64 a1)
{
  __int64 v1; // r11
  const wchar_t **v2; // r8
  int v3; // edx
  _DWORD *v4; // r10
  _QWORD *v5; // rcx
  const wchar_t *v6; // rax
  __int64 v7; // r11
  NTSTATUS result; // eax
  __int64 v9; // r11

  v1 = a1 + 96;
  v2 = (const wchar_t **)(a1 + 520);
  v3 = 0;
  v4 = (_DWORD *)(a1 + 96);
  v5 = (_QWORD *)(a1 + 112);
  do
  {
    *v4 = 0;
    if ( v3 )
    {
      if ( v3 != 1 )
        goto LABEL_7;
      *((_DWORD *)v5 - 2) = 20000;
      v6 = L"Activity";
      *((_DWORD *)v5 - 1) = 500;
    }
    else
    {
      *((_DWORD *)v5 - 2) = 32000;
      v6 = L"AppLaunch";
      *((_DWORD *)v5 - 1) = 340;
    }
    *v5 = -10000000LL;
    *v2 = v6;
LABEL_7:
    ++v3;
    ++v2;
    ++v4;
    v5 += 2;
  }
  while ( v3 < 2 );
  *(_DWORD *)(v1 + 400) = 0;
  *(_DWORD *)(v1 + 40) = 8;
  *(_DWORD *)(v1 + 44) = 16;
  RtlStringCbCopyW((NTSTRSAFE_PWSTR)(v1 + 48), 0x60uLL, L"\\SystemRoot\\Prefetch");
  *(_WORD *)(v7 + 142) = 0;
  result = RtlStringCbCopyW(
             (NTSTRSAFE_PWSTR)(v7 + 144),
             0x100uLL,
             L"DLLHOST.EXE,MMC.EXE,RUNDLL32.EXE,SVCHOST.EXE,TASKHOST.EXE");
  *(_WORD *)(v9 + 398) = 0;
  *(_DWORD *)(v9 + 404) = 10;
  return result;
}
