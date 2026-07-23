/*
 * XREFs of RtlLogMessageInEventLogger @ 0x18011C59C
 * Callers:
 *     LdrpLogEtwHotPatchStatus @ 0x180091078 (LdrpLogEtwHotPatchStatus.c)
 *     RtlWow64LogMessageInEventLogger @ 0x18015DC20 (RtlWow64LogMessageInEventLogger.c)
 * Callees:
 *     LdrGetProcedureAddress @ 0x180031580 (LdrGetProcedureAddress.c)
 *     LdrUnloadDll @ 0x1800480B0 (LdrUnloadDll.c)
 *     LdrLoadDll @ 0x18006EDE0 (LdrLoadDll.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall RtlLogMessageInEventLogger(__int16 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned __int16 a5)
{
  _UNKNOWN **v5; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  PVOID DllHandle; // [rsp+50h] [rbp-20h] BYREF
  PVOID ProcedureAddress; // [rsp+58h] [rbp-18h] BYREF
  PVOID v15; // [rsp+60h] [rbp-10h] BYREF
  PVOID v16; // [rsp+68h] [rbp-8h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+8h] BYREF

  v5 = &retaddr;
  DllHandle = 0LL;
  v16 = 0LL;
  ProcedureAddress = 0LL;
  v15 = 0LL;
  if ( !LdrpIsSecureProcess )
  {
    LODWORD(v5) = LdrLoadDll(0LL, 0LL, (PUNICODE_STRING)&stru_180173E18, &DllHandle);
    if ( (int)v5 >= 0 )
    {
      if ( LdrGetProcedureAddress(DllHandle, (PANSI_STRING)&stru_180173DF8, 0, &ProcedureAddress) >= 0
        && LdrGetProcedureAddress(DllHandle, (PANSI_STRING)&stru_180173E38, 0, &v16) >= 0
        && LdrGetProcedureAddress(DllHandle, (PANSI_STRING)&stru_180173E28, 0, &v15) >= 0 )
      {
        v10 = ((__int64 (__fastcall *)(_QWORD, __int64))ProcedureAddress)(0LL, a4);
        v11 = v10;
        if ( v10 )
        {
          ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, __int16, _DWORD, __int64, _QWORD))v15)(
            v10,
            a5,
            0LL,
            a3,
            0LL,
            a1,
            0,
            a2,
            0LL);
          ((void (__fastcall *)(__int64))v16)(v11);
        }
      }
      LODWORD(v5) = LdrUnloadDll(DllHandle);
    }
  }
  return (int)v5;
}
