/*
 * XREFs of ?OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x14012AE10
 * Callers:
 *     <none>
 * Callees:
 *     IsPublicPointerDevice @ 0x14012AEC4 (IsPublicPointerDevice.c)
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x14012AEF0 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 *     ?UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z @ 0x14020F678 (-UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z.c)
 */

__int64 __fastcall CHidInput::OnRIMDeviceClosed(CHidInput *this, void **a2)
{
  unsigned int v3; // edi
  __int64 i; // r8
  __int64 v5; // r8
  int v6; // r9d
  CHidInput *v7; // r10
  __int64 v8; // rcx
  void *v10; // rbx
  __int64 v11; // rcx
  CTouchProcessor *v12; // rcx

  v3 = 0;
  for ( i = **((_QWORD **)this + 155); i; i = *(_QWORD *)(v5 + 56) )
  {
    IsPublicPointerDevice(i);
    if ( (void **)v5 == a2 )
      break;
  }
  if ( (unsigned int)IsPublicPointerDevice(a2) )
  {
    v3 = v6 + 1;
    CHidInput::UpdatePointerDeviceCount(v7, 2u);
  }
  v8 = *((unsigned int *)a2 + 46);
  if ( (v8 & 0x80u) != 0LL )
  {
    v10 = *a2;
    if ( *(_QWORD *)(W32GetUserSessionState(v8) + 3264) )
    {
      W32GetUserSessionState(v11);
      CTouchProcessor::OnRimDeviceClosed(v12, v10);
    }
  }
  return v3;
}
