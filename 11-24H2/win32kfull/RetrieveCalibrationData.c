/*
 * XREFs of RetrieveCalibrationData @ 0x140217DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReadLinearityData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PEAX@Z @ 0x140200374 (-ReadLinearityData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PEAX@Z.c)
 *     GetPointerDeviceKey @ 0x140217E30 (GetPointerDeviceKey.c)
 */

NTSTATUS __fastcall RetrieveCalibrationData(struct tagHID_POINTER_DEVICE_INFO *a1, struct _UNICODE_STRING *a2)
{
  struct _UNICODE_STRING v2; // xmm0
  NTSTATUS result; // eax
  struct _UNICODE_STRING v6; // [rsp+20h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a2;
  Handle = 0LL;
  v6 = v2;
  result = GetPointerDeviceKey(&v6, &Handle);
  if ( result )
  {
    v6 = *a2;
    ReadLinearityData(a1, (__m128i *)&v6, Handle);
    return ZwClose(Handle);
  }
  return result;
}
