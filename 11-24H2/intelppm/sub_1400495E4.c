/*
 * XREFs of sub_1400495E4 @ 0x1400495E4
 * Callers:
 *     sub_140008634 @ 0x140008634 (sub_140008634.c)
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140029B64 @ 0x140029B64 (sub_140029B64.c)
 *     sub_14002A324 @ 0x14002A324 (sub_14002A324.c)
 *     sub_14002C9DC @ 0x14002C9DC (sub_14002C9DC.c)
 *     sub_14002CA34 @ 0x14002CA34 (sub_14002CA34.c)
 *     sub_14002CD78 @ 0x14002CD78 (sub_14002CD78.c)
 *     sub_140049798 @ 0x140049798 (sub_140049798.c)
 *     sub_14004A99C @ 0x14004A99C (sub_14004A99C.c)
 */

__int64 __fastcall sub_1400495E4(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  int v4; // ebx
  unsigned __int16 v5; // r9
  unsigned int v6; // r8d
  __int64 v8; // [rsp+28h] [rbp-40h]
  _QWORD v9[5]; // [rsp+40h] [rbp-28h] BYREF

  ::DeviceObject.Timer = (PIO_TIMER)1;
  *(_QWORD *)&::DeviceObject.Type = 0LL;
  ::DeviceObject.NextDevice = 0LL;
  ::DeviceObject.DriverObject = (struct _DRIVER_OBJECT *)&unk_140013590;
  ::DeviceObject.CurrentIrp = 0LL;
  ::DeviceObject.DeviceExtension = 0LL;
  ::DeviceObject.DeviceType = 0;
  sub_140029B64();
  ::DeviceObject.CurrentIrp = 0LL;
  sub_14002A324((__int64)DeviceObject, a2);
  sub_140049798();
  v9[0] = 32LL;
  v9[1] = sub_14002C5F0;
  v9[3] = 0LL;
  v9[2] = sub_14002C980;
  v4 = (*(__int64 (__fastcall **)(__int64, PDEVICE_OBJECT, __int64, _QWORD, _QWORD *, _QWORD))(qword_140019120 + 928))(
         qword_140019128,
         DeviceObject,
         a2,
         0LL,
         v9,
         0LL);
  if ( v4 >= 0 )
  {
    KeInitializeAffinityEx2(&unk_1400191E8, 32LL);
    dword_140019154 = KeQueryActiveProcessorAffinity2(&unk_1400191E8);
    KeInitializeAffinityEx2(&unk_140019580, 32LL);
    v4 = sub_14004A99C(DeviceObject);
    if ( v4 >= 0 )
      return 0;
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      v5 = 11;
      v6 = 3;
      goto LABEL_7;
    }
  }
  else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    v5 = 10;
    v6 = 4;
LABEL_7:
    LODWORD(v8) = v4;
    sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, v6, v5, (__int64)&unk_1400130B0, v8);
  }
  sub_14002C9DC();
  sub_14002CA34((__int64)DeviceObject);
  sub_14002CD78();
  return (unsigned int)v4;
}
