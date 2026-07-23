/*
 * XREFs of PiSwUnassociateDeviceObject @ 0x1409F3E28
 * Callers:
 *     PiSwDestroyDeviceObject @ 0x1409F3944 (PiSwDestroyDeviceObject.c)
 *     PiSwProcessRemove @ 0x1409F3978 (PiSwProcessRemove.c)
 * Callees:
 *     PiSwDeviceDereference @ 0x1409F3E68 (PiSwDeviceDereference.c)
 *     PiSwRemovePdoAssociation @ 0x1409F3EA0 (PiSwRemovePdoAssociation.c)
 */

__int64 __fastcall PiSwUnassociateDeviceObject(__int64 a1)
{
  _QWORD *v1; // rdi
  void *v2; // rbx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 64);
  v2 = (void *)*v1;
  if ( *v1 )
  {
    PiSwRemovePdoAssociation(*v1, a1);
    result = PiSwDeviceDereference(v2);
    *v1 = 0LL;
  }
  return result;
}
