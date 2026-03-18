/*
 * XREFs of _SetCalibrationData @ 0x14027280C
 * Callers:
 *     NtUserSetCalibrationData @ 0x14029C8E0 (NtUserSetCalibrationData.c)
 * Callees:
 *     GetPointerDeviceKey @ 0x140217E30 (GetPointerDeviceKey.c)
 *     UpdateTiltCalData @ 0x14026F2D4 (UpdateTiltCalData.c)
 *     ValidateCalibrationData @ 0x14026F430 (ValidateCalibrationData.c)
 *     WriteTiltCalibrationData @ 0x14026F584 (WriteTiltCalibrationData.c)
 */

__int64 __fastcall SetCalibrationData(__int64 a1, ULONG a2, void *a3, int a4)
{
  const WCHAR *v4; // rsi
  unsigned int v5; // edi
  unsigned int updated; // eax
  int v11; // r8d
  HANDLE KeyHandle; // [rsp+30h] [rbp-30h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-28h] BYREF
  struct _UNICODE_STRING v15; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v16; // [rsp+A0h] [rbp+40h] BYREF

  KeyHandle = 0LL;
  v4 = 0LL;
  v16 = 0;
  v5 = 0;
  DestinationString = 0LL;
  if ( a3 )
  {
    if ( (unsigned int)ValidateCalibrationData(a2, (__int64)a3, a4) )
    {
      switch ( a4 )
      {
        case 1:
          v4 = L"LinearityData";
          break;
        case 2:
          v4 = L"UserLinearityData";
          break;
        case 3:
          v4 = L"Default";
          break;
      }
      updated = UpdateTiltCalData(*(_QWORD *)(a1 + 456), a2, (__int64)a3, a4, &v16);
      v5 = updated;
      if ( v4 && updated )
      {
        if ( (unsigned int)(a4 - 1) <= 1 )
        {
          RtlInitUnicodeString(&DestinationString, v4);
          v15 = *(struct _UNICODE_STRING *)(a1 + 192);
          if ( GetPointerDeviceKey((int)&v15, &KeyHandle, v11) )
          {
            if ( ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, a3, a2) >= 0 )
              v5 = 1;
            ZwClose(KeyHandle);
          }
        }
        else if ( a4 == 3 )
        {
          v15 = *(struct _UNICODE_STRING *)(a1 + 192);
          WriteTiltCalibrationData(&v15, v16, a2, a3);
        }
      }
    }
  }
  else
  {
    return (unsigned int)UpdateTiltCalData(*(_QWORD *)(a1 + 456), a2, 0LL, a4, &v16);
  }
  return v5;
}
