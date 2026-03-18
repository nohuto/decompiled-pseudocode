/*
 * XREFs of IvtpGetNextInternalDeviceScope @ 0x1404F87F0
 * Callers:
 *     IvtCreateDevice @ 0x140578AF0 (IvtCreateDevice.c)
 *     IvtFindDevice @ 0x140578C20 (IvtFindDevice.c)
 * Callees:
 *     DmrGetNextDeviceScope @ 0x140579740 (DmrGetNextDeviceScope.c)
 */

__int64 __fastcall IvtpGetNextInternalDeviceScope(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v4; // rdx

  v2 = *(_QWORD *)(a1 + 280);
  v4 = v2 + *(unsigned int *)(a1 + 256);
  if ( v4 > v2 )
    return DmrGetNextDeviceScope(v2, v4, a2);
  else
    return 0LL;
}
