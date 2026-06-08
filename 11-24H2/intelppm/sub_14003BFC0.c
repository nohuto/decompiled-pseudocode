/*
 * XREFs of sub_14003BFC0 @ 0x14003BFC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_14000F148 @ 0x14000F148 (sub_14000F148.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_14002C1B4 @ 0x14002C1B4 (sub_14002C1B4.c)
 *     sub_140040F94 @ 0x140040F94 (sub_140040F94.c)
 */

void __fastcall sub_14003BFC0(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  unsigned int *DeviceExtension; // rbp
  __int64 v3; // rdi
  __int64 v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // eax
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  DeviceExtension = (unsigned int *)DeviceObject->DeviceExtension;
  v7 = 0LL;
  v3 = *((_QWORD *)DeviceExtension + 149);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019158, 0LL);
    _InterlockedExchange((volatile __int32 *)DeviceExtension + 293, 0);
    sub_14000F148((__int64)DeviceExtension, &v7, (_DWORD *)(v3 + 56));
    v4 = *(_QWORD *)(v3 + 40);
    v5 = v7;
    if ( (unsigned int)v7 > *(_DWORD *)(v4 + 8) )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        sub_140003D28(off_140018050->DeviceExtension, 3, 1, 41, (__int64)&unk_140014CB8);
      v4 = *(_QWORD *)(v3 + 40);
      v5 = *(_DWORD *)(v4 + 8);
      LODWORD(v7) = v5;
    }
    if ( v5 < *(_DWORD *)(v4 + 16) )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        sub_140003D28(off_140018050->DeviceExtension, 3, 1, 42, (__int64)&unk_140014CB8);
      v4 = *(_QWORD *)(v3 + 40);
      v5 = *(_DWORD *)(v4 + 16);
      LODWORD(v7) = v5;
    }
    v6 = 100 * v5 / *(_DWORD *)(v4 + 8);
    HIDWORD(v7) = v6;
    *(_QWORD *)(v3 + 64) = v7;
    sub_140040F94(DeviceExtension, DeviceExtension[116], DeviceExtension[128], v6);
    ((void (__fastcall *)(unsigned int *))qword_140019698)(DeviceExtension);
    sub_14002C1B4((__int64)DeviceExtension, v7, *(_DWORD *)(v3 + 56));
    (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019158);
  }
  else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    sub_140003D28(off_140018050->DeviceExtension, 2, 3, 40, (__int64)&unk_140014CB8);
  }
}
