/*
 * XREFs of LdrpLogLoadFailureEtwEvent @ 0x180066194
 * Callers:
 *     LdrpProcessWork @ 0x180021E60 (LdrpProcessWork.c)
 *     LdrpSnapModule @ 0x180056F30 (LdrpSnapModule.c)
 * Callees:
 *     RtlGetThreadErrorMode @ 0x1800662A0 (RtlGetThreadErrorMode.c)
 *     EtwEventWriteNoRegistration @ 0x180066310 (EtwEventWriteNoRegistration.c)
 *     NtQueryInformationProcess @ 0x180161FB0 (NtQueryInformationProcess.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

void __fastcall LdrpLogLoadFailureEtwEvent(unsigned __int16 *a1, unsigned __int16 *a2, int a3, __int64 a4, char a5)
{
  char v8; // al
  __int64 v9; // rax
  __int64 v10; // r8
  int v11; // eax
  int ProcessInformation; // [rsp+30h] [rbp-40h] BYREF
  int *v13; // [rsp+38h] [rbp-38h] BYREF
  int v14; // [rsp+40h] [rbp-30h]
  int v15; // [rsp+44h] [rbp-2Ch]
  __int64 v16; // [rsp+48h] [rbp-28h]
  int v17; // [rsp+50h] [rbp-20h]
  int v18; // [rsp+54h] [rbp-1Ch]
  __int64 v19; // [rsp+58h] [rbp-18h]
  int v20; // [rsp+60h] [rbp-10h]
  int v21; // [rsp+64h] [rbp-Ch]
  int v22; // [rsp+A0h] [rbp+30h] BYREF

  v22 = a3;
  ProcessInformation = 0;
  if ( (LdrpPolicyBits & 0x20) != 0 )
  {
    if ( a5
      || (RtlGetThreadErrorMode() & 0x10) == 0
      && (NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)12, &ProcessInformation, 4u, 0LL) >= 0
        ? (v8 = ProcessInformation)
        : (v8 = 5, ProcessInformation = 5),
          (v8 & 5) != 0) )
    {
      v9 = *((_QWORD *)a1 + 1);
      v15 = 0;
      v18 = 0;
      v16 = v9;
      LODWORD(v9) = *a1 + 2;
      v13 = &v22;
      v14 = 4;
      v17 = v9;
      if ( a2 )
      {
        v10 = 3LL;
        v19 = *((_QWORD *)a2 + 1);
        v11 = *a2 + 2;
        v21 = 0;
        v20 = v11;
      }
      else
      {
        v10 = 2LL;
      }
      EtwEventWriteNoRegistration(&UserLoaderGuid, a4, v10, &v13);
    }
  }
}
