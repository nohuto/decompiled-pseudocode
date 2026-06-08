/*
 * XREFs of sub_140029190 @ 0x140029190
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140029190(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  NTSTATUS DeviceObjectPointer; // ebx
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-20h] BYREF
  struct _UNICODE_STRING ObjectName; // [rsp+48h] [rbp-18h] BYREF
  __int64 v9; // [rsp+98h] [rbp+38h] BYREF
  __int64 v10; // [rsp+A0h] [rbp+40h] BYREF
  PFILE_OBJECT FileObject; // [rsp+A8h] [rbp+48h] BYREF

  v10 = 0LL;
  DeviceObject = 0LL;
  FileObject = 0LL;
  v9 = 0LL;
  ObjectName = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, void *))(qword_140019120 + 1616))(
         qword_140019128,
         a1,
         off_140018040);
  if ( !*(_QWORD *)(v4 + 24)
    && (*(int (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, __int64 *))(qword_140019120 + 656))(
         qword_140019128,
         a1,
         11LL,
         512LL,
         0LL,
         &v9) >= 0 )
  {
    ObjectName.Buffer = (PWSTR)(*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(qword_140019120 + 1552))(
                                 qword_140019128,
                                 v9,
                                 &v10);
    ObjectName.MaximumLength = v10;
    ObjectName.Length = v10 - 2;
    DeviceObjectPointer = IoGetDeviceObjectPointer(&ObjectName, 0x1F01FFu, &FileObject, &DeviceObject);
    (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 1664))(qword_140019128, v9);
    if ( DeviceObjectPointer >= 0 )
      *(_QWORD *)(v4 + 24) = FileObject;
  }
  ++*(_BYTE *)(a2 + 67);
  *(_QWORD *)(a2 + 184) += 72LL;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(qword_140019120 + 272))(qword_140019128, a1, a2);
}
