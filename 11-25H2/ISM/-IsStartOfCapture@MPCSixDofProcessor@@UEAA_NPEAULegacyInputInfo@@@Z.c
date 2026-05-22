/*
 * XREFs of ?IsStartOfCapture@MPCSixDofProcessor@@UEAA_NPEAULegacyInputInfo@@@Z @ 0x1801B4AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall MPCSixDofProcessor::IsStartOfCapture(MPCSixDofProcessor *this, struct LegacyInputInfo *a2)
{
  char v3; // bl
  DWORD v5; // [rsp+60h] [rbp+18h] BYREF

  v3 = 1;
  if ( !byte_180247C20 )
  {
    v5 = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\DWM",
      L"CaptureDisabledFor6dof",
      0x10u,
      0LL,
      &dword_180247C24,
      &v5);
    byte_180247C20 = 1;
  }
  if ( dword_180247C24 || (*((_BYTE *)a2 + 2280) & 0x3F) == 0 )
    return 0;
  return v3;
}
