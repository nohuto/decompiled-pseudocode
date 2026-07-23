/*
 * XREFs of LdrVerifyImageMatchesChecksum @ 0x18015FE90
 * Callers:
 *     <none>
 * Callees:
 *     LdrVerifyImageMatchesChecksumEx @ 0x180113590 (LdrVerifyImageMatchesChecksumEx.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl LdrVerifyImageMatchesChecksum(
        HANDLE ImageFileHandle,
        PLDR_IMPORT_MODULE_CALLBACK ImportCallbackRoutine,
        PVOID ImportCallbackParameter,
        PUSHORT ImageCharacteristics)
{
  int v8; // eax
  NTSTATUS result; // eax
  _LDR_VERIFY_IMAGE_INFO VerifyInfo; // [rsp+20h] [rbp-48h] BYREF

  memset_thunk_772440563353939046(&VerifyInfo, 0, 0x40uLL);
  v8 = 0;
  *(_QWORD *)&VerifyInfo.Size = 64LL;
  if ( ImportCallbackRoutine )
  {
    v8 = 1;
    VerifyInfo.CallbackInfo.ImportCallbackRoutine = ImportCallbackRoutine;
    VerifyInfo.Flags = 1;
    VerifyInfo.CallbackInfo.ImportCallbackParameter = ImportCallbackParameter;
  }
  if ( ImageCharacteristics )
    VerifyInfo.Flags = v8 | 4;
  result = LdrVerifyImageMatchesChecksumEx(ImageFileHandle, &VerifyInfo);
  if ( result >= 0 )
  {
    if ( ImageCharacteristics )
      *ImageCharacteristics = VerifyInfo.ImageCharacteristics;
  }
  return result;
}
