/*
 * XREFs of WindowsQueryLicenseDWORD @ 0x140099178
 * Callers:
 *     DpiFdoHandleStartDevice @ 0x1402418B0 (DpiFdoHandleStartDevice.c)
 * Callees:
 *     InternalRtlGetLicenseData @ 0x14009908C (InternalRtlGetLicenseData.c)
 */

__int64 __fastcall WindowsQueryLicenseDWORD(__int64 a1, _DWORD *a2)
{
  void *v2; // rcx
  int LicenseData; // eax
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+34h] [rbp+Ch]
  _DWORD *v9; // [rsp+40h] [rbp+18h] BYREF

  v8 = HIDWORD(a1);
  v2 = 0LL;
  v7 = 0;
  v9 = 0LL;
  if ( a2 )
  {
    LicenseData = InternalRtlGetLicenseData(0LL, (__int64)a2, &v7, (__int64 *)&v9);
    v2 = v9;
    v5 = LicenseData;
    if ( LicenseData >= 0 )
    {
      if ( !v9 )
        return v5;
      v5 = 0;
      *a2 = *v9;
    }
  }
  else
  {
    v5 = -1073741811;
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return v5;
}
