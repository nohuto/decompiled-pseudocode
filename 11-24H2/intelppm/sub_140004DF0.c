/*
 * XREFs of sub_140004DF0 @ 0x140004DF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140040970 @ 0x140040970 (sub_140040970.c)
 *     sub_140040C38 @ 0x140040C38 (sub_140040C38.c)
 *     sub_140040F94 @ 0x140040F94 (sub_140040F94.c)
 */

void __fastcall sub_140004DF0(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  _DWORD *DeviceExtension; // rdi
  unsigned int v3; // ebx
  unsigned int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // edx
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  v3 = 0;
  v11 = 0;
  v5 = 0;
  if ( (DeviceExtension[70] & 0x70000000) != 0 )
  {
    v7 = sub_140040C38(DeviceExtension, &v11);
    if ( v7 < 0 )
    {
      if ( v7 == -1073741772 )
      {
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          LOBYTE(v8) = 4;
          sub_140003D28(off_140018050->DeviceExtension, v8, 2, 18, (__int64)&unk_1400130B0);
        }
      }
      else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        LOBYTE(v8) = 3;
        sub_1400050F8(off_140018050->DeviceExtension, v8, 3, 19, (__int64)&unk_1400130B0, v7);
      }
    }
    else
    {
      v5 = v11;
    }
  }
  v6 = DeviceExtension[70];
  v11 = 0;
  if ( (v6 & 0x3000000) != 0 )
  {
    v9 = sub_140040970(DeviceExtension, &v11);
    if ( v9 < 0 )
    {
      if ( v9 == -1073741772 )
      {
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          LOBYTE(v10) = 4;
          sub_140003D28(off_140018050->DeviceExtension, v10, 2, 20, (__int64)&unk_1400130B0);
        }
      }
      else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        LOBYTE(v10) = 3;
        sub_1400050F8(off_140018050->DeviceExtension, v10, 3, 21, (__int64)&unk_1400130B0, v9);
      }
    }
    else
    {
      v3 = v11;
    }
  }
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019158, 0LL);
  if ( v5 != DeviceExtension[116] || v3 != DeviceExtension[128] )
  {
    sub_140040F94(DeviceExtension, v5, v3, 100LL);
    ((void (__fastcall *)(_DWORD *))qword_140019698)(DeviceExtension);
  }
  (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019158);
  IoFreeWorkItem(Context);
}
