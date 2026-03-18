/*
 * XREFs of IopIsRootEnumeratedDeviceObjectActive @ 0x140A99804
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x140A60B18 (IopInitializeDeviceInstanceKey.c)
 *     PiCMCreateDevice @ 0x140AAF980 (PiCMCreateDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall IopIsRootEnumeratedDeviceObjectActive(__int64 a1)
{
  _DWORD *v1; // rax
  __int64 v3; // rax

  v1 = *(_DWORD **)(a1 + 64);
  if ( v1 && (*v1 & 1) != 0 )
    return 0;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  return !v3 || (*(_BYTE *)(v3 + 398) & 1) == 0;
}
