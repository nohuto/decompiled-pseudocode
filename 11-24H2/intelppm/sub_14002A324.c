/*
 * XREFs of sub_14002A324 @ 0x14002A324
 * Callers:
 *     sub_1400495E4 @ 0x1400495E4 (sub_1400495E4.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_14002A324(__int64 a1, __int64 a2)
{
  struct _DEVICE_OBJECT *v4; // rbx
  void (__fastcall *v5)(struct _DRIVER_OBJECT *, _QWORD, __int64 (__fastcall *)(__int64, unsigned __int8, __int64 *, __int64), struct _DEVICE_OBJECT *, PVPB *); // rax

  if ( off_140018050 != &DeviceObject )
  {
    off_140018050 = &DeviceObject;
    if ( dword_140018EF0 == 4 )
    {
      v4 = &DeviceObject;
      do
      {
        v5 = (void (__fastcall *)(struct _DRIVER_OBJECT *, _QWORD, __int64 (__fastcall *)(__int64, unsigned __int8, __int64 *, __int64), struct _DEVICE_OBJECT *, PVPB *))qword_140018ED8;
        v4->Vpb = 0LL;
        v5(v4->DriverObject, 0LL, sub_140008F90, v4, &v4->Vpb);
        v4 = v4->NextDevice;
      }
      while ( v4 );
    }
    else if ( dword_140018EF0 == 2 )
    {
      *(_QWORD *)&DeviceObject.Type = sub_14002CAF0;
      IoWMIRegistrationControl(&DeviceObject, 0x80010001);
    }
    WppAutoLogStart(off_140018050, a1, a2);
    off_140018058 = &DeviceObject;
  }
}
