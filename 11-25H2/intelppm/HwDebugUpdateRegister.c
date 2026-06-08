/*
 * XREFs of HwDebugUpdateRegister @ 0x1400013D0
 * Callers:
 *     HwDebugCreateRegisterGroup @ 0x140045E74 (HwDebugCreateRegisterGroup.c)
 * Callees:
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall HwDebugUpdateRegister(_QWORD *a1, __int64 a2))(__int64, unsigned __int64 *)
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
    if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, &PPM_ETW_HARDWARE_DEBUG_REGISTER_VALUE_CHANGE) )
    {
      UserData.Ptr = (unsigned __int64)&v7;
      *(_QWORD *)&UserData.Size = 8LL;
      v10 = v7 + 2;
      v11 = 8LL;
      EtwWrite(
        (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink,
        &PPM_ETW_HARDWARE_DEBUG_REGISTER_VALUE_CHANGE,
        0LL,
        (ULONG)2,
        &UserData);
    }
  }
  result = *(__int64 (__fastcall **)(__int64, unsigned __int64 *))(v2 + 32);
  if ( result )
    return (__int64 (__fastcall *)(__int64, unsigned __int64 *))result(a2, &v8);
  return result;
}
