/*
 * XREFs of ?_HasOngoingCapture@CCaptureManager@@AEAA_NPEAUHWND__@@@Z @ 0x1800B4160
 * Callers:
 *     ?UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z @ 0x1800B20B0 (-UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CCaptureManager::_HasOngoingCapture(CCaptureManager *this, __int64 *a2)
{
  __int64 ***v2; // rcx
  char v3; // r8
  __int64 **i; // rax

  v2 = (__int64 ***)*((_QWORD *)this + 2);
  v3 = 0;
  for ( i = *v2; i != (__int64 **)v2; i = (__int64 **)*i )
  {
    if ( i[5] == a2 )
      return 1;
  }
  return v3;
}
