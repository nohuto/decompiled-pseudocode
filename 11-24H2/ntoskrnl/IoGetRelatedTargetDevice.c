/*
 * XREFs of IoGetRelatedTargetDevice @ 0x140A561A8
 * Callers:
 *     NtSetVolumeInformationFile @ 0x140718380 (NtSetVolumeInformationFile.c)
 *     PiPagePathSetState @ 0x140722960 (PiPagePathSetState.c)
 * Callees:
 *     PnpGetRelatedTargetDevice @ 0x1403750B4 (PnpGetRelatedTargetDevice.c)
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
