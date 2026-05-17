/*
 * XREFs of RtlLogMessageInEventLogger @ 0x18011FC3C
 * Callers:
 *     LdrpLogEtwHotPatchStatus @ 0x18006F018 (LdrpLogEtwHotPatchStatus.c)
 *     RtlWow64LogMessageInEventLogger @ 0x180160D70 (RtlWow64LogMessageInEventLogger.c)
 * Callees:
 *     LdrGetProcedureAddress @ 0x180007770 (LdrGetProcedureAddress.c)
 *     LdrLoadDll @ 0x180014E40 (LdrLoadDll.c)
 *     LdrUnloadDll @ 0x1800475F0 (LdrUnloadDll.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_UNKNOWN **__fastcall RtlLogMessageInEventLogger(
        __int16 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int16 a5)
{
  _UNKNOWN **result; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // [rsp+50h] [rbp-20h] BYREF
  __int64 (__fastcall *v13)(_QWORD, __int64); // [rsp+58h] [rbp-18h] BYREF
  void (__fastcall *v14)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, __int16, _DWORD, __int64, _QWORD); // [rsp+60h] [rbp-10h] BYREF
  void (__fastcall *v15)(__int64); // [rsp+68h] [rbp-8h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+8h] BYREF

  result = &retaddr;
  v12 = 0LL;
  v15 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( !LdrpIsSecureProcess )
  {
    result = (_UNKNOWN **)LdrLoadDll(0LL, 0LL, (__int64)&unk_180176EA8, &v12);
    if ( (int)result >= 0 )
    {
      if ( (int)LdrGetProcedureAddress(v12, (int)&unk_180176E88, 0, (int)&v13) >= 0
        && (int)LdrGetProcedureAddress(v12, (int)&unk_180176EC8, 0, (int)&v15) >= 0
        && (int)LdrGetProcedureAddress(v12, (int)&unk_180176EB8, 0, (int)&v14) >= 0 )
      {
        v10 = v13(0LL, a4);
        v11 = v10;
        if ( v10 )
        {
          v14(v10, a5, 0LL, a3, 0LL, a1, 0, a2, 0LL);
          v15(v11);
        }
      }
      return (_UNKNOWN **)LdrUnloadDll(v12);
    }
  }
  return result;
}
