/*
 * XREFs of sub_14003A540 @ 0x14003A540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_14003FE54 @ 0x14003FE54 (sub_14003FE54.c)
 */

void __fastcall sub_14003A540(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  _QWORD *DeviceExtension; // rbx

  DeviceExtension = DeviceObject->DeviceExtension;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(qword_140019120 + 2504))(qword_140019128, DeviceExtension[26], 0LL);
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019168, 0LL);
  byte_140019838 = 0;
  (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019168);
  sub_14003FE54(DeviceExtension, 0LL);
  (*(void (__fastcall **)(__int64, _QWORD))(qword_140019120 + 2512))(qword_140019128, DeviceExtension[26]);
}
