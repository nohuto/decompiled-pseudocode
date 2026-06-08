/*
 * XREFs of sub_1400013D0 @ 0x1400013D0
 * Callers:
 *     sub_140046234 @ 0x140046234 (sub_140046234.c)
 * Callees:
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall sub_1400013D0(_QWORD *a1, __int64 a2))(__int64, unsigned __int64 *)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 (__fastcall *result)(__int64, unsigned __int64 *); // rax
  _QWORD *v7; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  _QWORD *v10; // [rsp+50h] [rbp-28h]
  __int64 v11; // [rsp+58h] [rbp-20h]

  v2 = *a1;
  v4 = __readmsr(*(_DWORD *)(*a1 + 8LL));
  v5 = a1[1] & (((unsigned __int64)HIDWORD(v4) << 32) | (unsigned int)v4);
  v8 = v5;
  if ( v5 != a1[2] )
  {
    a1[2] = v5;
    v7 = a1;
    if ( EtwEventEnabled((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, &EventDescriptor) )
    {
      UserData.Ptr = (ULONGLONG)&v7;
      *(_QWORD *)&UserData.Size = 8LL;
      v10 = v7 + 2;
      v11 = 8LL;
      EtwWrite((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, &EventDescriptor, 0LL, 2u, &UserData);
    }
  }
  result = *(__int64 (__fastcall **)(__int64, unsigned __int64 *))(v2 + 32);
  if ( result )
    return (__int64 (__fastcall *)(__int64, unsigned __int64 *))result(a2, &v8);
  return result;
}
