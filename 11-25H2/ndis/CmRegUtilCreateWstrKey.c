/*
 * XREFs of CmRegUtilCreateWstrKey @ 0x140158E68
 * Callers:
 *     PiRegStateOpenClassKey @ 0x140158698 (PiRegStateOpenClassKey.c)
 *     PpRegStateUpdateStackCreationSettings @ 0x140158B5C (PpRegStateUpdateStackCreationSettings.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x14008C460 (WdmlibRtlInitUnicodeStringEx.c)
 *     CmRegUtilCreateUcKey @ 0x140158DC0 (CmRegUtilCreateUcKey.c)
 */

NTSTATUS __fastcall CmRegUtilCreateWstrKey(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        ULONG *a6,
        _QWORD *a7)
{
  NTSTATUS result; // eax
  __int64 v8; // r8
  void *v9; // r9
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  DestinationString = 0LL;
  result = WdmlibRtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
    return CmRegUtilCreateUcKey(v9, &DestinationString, v8, (__int64)v9, a5, a6, a7);
  return result;
}
