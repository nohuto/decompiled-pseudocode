/*
 * XREFs of IoGetRelatedTargetDevice @ 0x140A51834
 * Callers:
 *     NtSetVolumeInformationFile @ 0x14070C280 (NtSetVolumeInformationFile.c)
 *     PiPagePathSetState @ 0x140716860 (PiPagePathSetState.c)
 * Callees:
 *     PnpGetRelatedTargetDevice @ 0x14035E4A8 (PnpGetRelatedTargetDevice.c)
 */

__int64 __fastcall IoGetRelatedTargetDevice(struct _FILE_OBJECT *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  result = PnpGetRelatedTargetDevice(a1, &v4);
  if ( (int)result >= 0 )
  {
    if ( v4 )
      *a2 = *(_QWORD *)(v4 + 32);
  }
  return result;
}
