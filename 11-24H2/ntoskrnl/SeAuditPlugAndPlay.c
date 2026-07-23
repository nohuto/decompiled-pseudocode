/*
 * XREFs of SeAuditPlugAndPlay @ 0x140A69008
 * Callers:
 *     PiAuditDeviceOperation @ 0x140A68944 (PiAuditDeviceOperation.c)
 * Callees:
 *     AdtpWriteToEtwEx @ 0x1404481F0 (AdtpWriteToEtwEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 */

void __fastcall SeAuditPlugAndPlay(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        __int64 a6,
        unsigned __int16 *a7,
        int a8,
        char a9)
{
  int v13; // eax
  int v14; // ecx
  _QWORD *PrimaryToken; // rdx
  _QWORD **ClientToken; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // [rsp+28h] [rbp-E0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-D8h] BYREF
  _DWORD v22[3]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v23; // [rsp+64h] [rbp-A4h]
  __int16 v24; // [rsp+6Ch] [rbp-9Ch]
  __int16 v25; // [rsp+6Eh] [rbp-9Ah]
  _QWORD v26[128]; // [rsp+78h] [rbp-90h]

  SubjectContext.ClientToken = 0LL;
  SubjectContext.ImpersonationLevel = 0x80000000;
  memset(&SubjectContext.ImpersonationLevel + 1, 0, 20);
  memset_0(v22, 0, 0x420uLL);
  LOBYTE(v20) = 0;
  if ( a8 )
  {
    switch ( a8 )
    {
      case 1:
        v13 = 6419;
        break;
      case 2:
        v13 = 6420;
        break;
      case 3:
        v13 = 6421;
        break;
      case 4:
        v13 = 6422;
        break;
      case 5:
        v13 = 6423;
        break;
      case 6:
        v13 = 6424;
        break;
      default:
        return;
    }
    v14 = 0;
  }
  else
  {
    v13 = 6416;
    v14 = 1;
  }
  v23 = 0;
  v22[1] = v13;
  v22[0] = 5;
  v24 = 138;
  v22[2] = v14;
  v25 = 8;
  if ( !a9 )
    v25 = 16;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  ClientToken = (_QWORD **)SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
  {
    ClientToken = (_QWORD **)SubjectContext.ClientToken;
    PrimaryToken = SubjectContext.ClientToken;
  }
  v17 = *ClientToken[19];
  v18 = PrimaryToken[3];
  LODWORD(v26[4 * v23]) = 4;
  HIDWORD(v26[4 * v23]) = 4 * *(unsigned __int8 *)(v17 + 1) + 8;
  v26[4 * v23++ + 3] = v17;
  LODWORD(v26[4 * v23]) = 1;
  HIDWORD(v26[4 * v23]) = 32;
  v26[4 * v23++ + 3] = &SeSubsystemName;
  LODWORD(v26[4 * v23]) = 5;
  HIDWORD(v26[4 * v23]) = 8;
  v26[4 * v23++ + 1] = v18;
  LODWORD(v26[4 * v23]) = 1;
  HIDWORD(v26[4 * v23]) = *a1 + 16;
  v26[4 * v23++ + 3] = a1;
  LODWORD(v26[4 * v23]) = 1;
  HIDWORD(v26[4 * v23]) = *a2 + 16;
  v26[4 * v23 + 3] = a2;
  v19 = 4LL * ++v23;
  LODWORD(v26[v19]) = 13;
  HIDWORD(v26[4 * v23]) = 16;
  v26[4 * v23++ + 3] = a6;
  LODWORD(v26[4 * v23]) = 1;
  HIDWORD(v26[4 * v23]) = *a7 + 16;
  v26[4 * v23++ + 3] = a7;
  LODWORD(v26[4 * v23]) = 34;
  HIDWORD(v26[4 * v23]) = *a3 + 16;
  v26[4 * v23++ + 3] = a3;
  LODWORD(v26[4 * v23]) = 34;
  HIDWORD(v26[4 * v23]) = *a4 + 16;
  v26[4 * v23++ + 3] = a4;
  LODWORD(v26[4 * v23]) = 34;
  HIDWORD(v26[4 * v23]) = *a5 + 16;
  v26[4 * v23++ + 3] = a5;
  AdtpWriteToEtwEx((__int64)v22, &v20);
  SeReleaseSubjectContext(&SubjectContext);
}
