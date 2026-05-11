/*
 * XREFs of USBHwGetAudioDeviceDescriptor @ 0x14002D5E8
 * Callers:
 *     USBDeviceStart @ 0x140040B80 (USBDeviceStart.c)
 * Callees:
 *     USBHwGetDescriptor @ 0x14002D100 (USBHwGetDescriptor.c)
 */

__int64 __fastcall USBHwGetAudioDeviceDescriptor(__int64 a1, _QWORD *a2)
{
  int Descriptor; // edi
  void *Pool2; // rax
  void *v6; // rbx
  ULONG v8; // [rsp+50h] [rbp+18h] BYREF

  Descriptor = -1073741670;
  v8 = 18;
  Pool2 = (void *)ExAllocatePool2(64LL, 18LL, 1096972357LL);
  v6 = Pool2;
  if ( Pool2 )
  {
    Descriptor = USBHwGetDescriptor(a1, 1u, 0, 0, &v8, Pool2);
    if ( Descriptor < 0 )
      ExFreePool(v6);
    else
      *a2 = v6;
  }
  return (unsigned int)Descriptor;
}
