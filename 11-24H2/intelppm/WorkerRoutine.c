/*
 * XREFs of WorkerRoutine @ 0x140040AD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003A78 @ 0x140003A78 (sub_140003A78.c)
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_1400042E0 @ 0x1400042E0 (sub_1400042E0.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140040C38 @ 0x140040C38 (sub_140040C38.c)
 *     sub_140040F94 @ 0x140040F94 (sub_140040F94.c)
 */

void __fastcall WorkerRoutine(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  char v3; // si
  int v4; // edx
  ULONG *DeviceExtension; // rdi
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  v3 = 0;
  IoFreeWorkItem(Context);
  DeviceExtension = (ULONG *)DeviceObject->DeviceExtension;
  if ( (DeviceExtension[70] & 0x70000000) != 0 )
  {
    if ( (int)sub_140040C38(DeviceObject->DeviceExtension, &v6) >= 0 )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019158, 0LL);
      v3 = 1;
      sub_140040F94(DeviceExtension, v6, DeviceExtension[128], 100LL);
      ((void (__fastcall *)(ULONG *))qword_140019698)(DeviceExtension);
    }
  }
  else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    LOBYTE(v4) = 2;
    sub_140003D28(off_140018050->DeviceExtension, v4, 1, 90, (__int64)&unk_140012FE8);
  }
  v6 = DeviceExtension[116];
  sub_140003A78(DeviceExtension, &stru_140012BE0, &stru_140012BF0, 4, (__int64)&v6);
  sub_1400042E0((_QWORD *)DeviceExtension + 83, (__int64)(DeviceExtension + 116));
  if ( v3 )
    (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019158);
}
