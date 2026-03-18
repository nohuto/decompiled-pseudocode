/*
 * XREFs of xxxClientCopyImage @ 0x14007ACF4
 * Callers:
 *     xxxCreateWindowSmIcon @ 0x14007AC48 (xxxCreateWindowSmIcon.c)
 *     xxxCreateClassSmIcon @ 0x14007ADE4 (xxxCreateClassSmIcon.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1401333EC (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x14008ED8C (HMValidateHandleNoRip.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientCopyImage(__int64 a1, int a2, int a3, int a4, int a5)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  _QWORD v11[3]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+48h] [rbp-20h] BYREF
  int v13; // [rsp+50h] [rbp-18h]
  int v14; // [rsp+54h] [rbp-14h]
  int v15; // [rsp+58h] [rbp-10h]
  int v16; // [rsp+5Ch] [rbp-Ch]
  void *Src; // [rsp+70h] [rbp+8h] BYREF
  int v18; // [rsp+78h] [rbp+10h] BYREF

  Src = 0LL;
  v18 = 0;
  v12 = a1;
  v13 = a2;
  v14 = a3;
  v15 = a4;
  v16 = a5;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v11);
  EtwTraceBeginCallback(64LL);
  v6 = KeUserModeCallback(64LL, &v12, 24LL, &Src, &v18);
  EtwTraceEndCallback(64LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v11);
  if ( v6 < 0 || v18 != 24 )
    return 0LL;
  v11[0] = 0LL;
  RtlCopyFromUser(v11, Src, 8uLL);
  result = v11[0];
  v11[1] = v11[0];
  if ( v11[0] )
  {
    if ( a2 )
    {
      LOBYTE(v7) = 3;
      return HMValidateHandleNoRip(v11[0], v7, v8, v9);
    }
  }
  return result;
}
