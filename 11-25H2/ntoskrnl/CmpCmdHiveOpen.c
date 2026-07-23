/*
 * XREFs of CmpCmdHiveOpen @ 0x140911900
 * Callers:
 *     CmReplaceKey @ 0x1407CAB24 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x1407CCAF8 (CmpFlushBackupHive.c)
 *     CmLoadKey @ 0x140910E98 (CmLoadKey.c)
 *     CmLoadAppKey @ 0x1409122B0 (CmLoadAppKey.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     IoSetThreadHardErrorMode @ 0x14045E010 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PsImpersonateClient @ 0x1408A51C0 (PsImpersonateClient.c)
 *     CmpInitHiveFromFile @ 0x14090E4F0 (CmpInitHiveFromFile.c)
 *     PsReferenceImpersonationTokenEx @ 0x140910D20 (PsReferenceImpersonationTokenEx.c)
 *     RtlImpersonateSelfEx @ 0x140A28334 (RtlImpersonateSelfEx.c)
 */

__int64 __fastcall CmpCmdHiveOpen(
        unsigned __int16 *a1,
        char a2,
        _BYTE *a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        __int64 a8,
        void *a9)
{
  BOOLEAN v13; // al
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  NTSTATUS inited; // eax
  NTSTATUS v20; // ebx
  unsigned int v22; // eax
  int v23; // ecx
  void *v24; // rdi
  NTSTATUS v25; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v27; // [rsp+30h] [rbp-79h]
  int v28; // [rsp+30h] [rbp-79h]
  int v29; // [rsp+38h] [rbp-71h]
  int v30; // [rsp+38h] [rbp-71h]
  BOOLEAN EffectiveOnly; // [rsp+50h] [rbp-59h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+51h] [rbp-58h] BYREF
  BOOLEAN EnableHardErrors; // [rsp+52h] [rbp-57h]
  SECURITY_IMPERSONATION_LEVEL ImpersonationLevel[2]; // [rsp+58h] [rbp-51h] BYREF
  int v35; // [rsp+60h] [rbp-49h]
  __int64 v36; // [rsp+68h] [rbp-41h] BYREF
  void *v37; // [rsp+70h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+78h] [rbp-31h] BYREF
  __int64 *v39; // [rsp+98h] [rbp-11h]
  __int64 v40; // [rsp+A0h] [rbp-9h]

  *(_QWORD *)ImpersonationLevel = a7;
  v37 = a9;
  v36 = a8;
  v13 = IoSetThreadHardErrorMode(0);
  v14 = 0;
  EnableHardErrors = v13;
  if ( (a6 & 1) != 0 )
  {
    v14 = 0x8000;
    if ( (a6 & 2) == 0 )
      v14 = 294912;
  }
  v15 = v14 | 0x80000;
  if ( (a6 & 4) == 0 )
    v15 = v14;
  v16 = v15 | 0x108000;
  if ( (a6 & 8) == 0 )
    v16 = v15;
  v17 = v16 | 0x8000000;
  if ( (a6 & 0x40) == 0 )
    v17 = v16;
  v18 = v17 | 2;
  if ( (a5 & 0x20000000) == 0 )
    v18 = v17;
  v35 = v18;
  inited = CmpInitHiveFromFile(a1, v18, a4, a3, a5, *(__int64 *)ImpersonationLevel, v27, v29, a8, v37);
  v20 = inited;
  if ( !*(_QWORD *)ImpersonationLevel && a2 && (a6 & 0x20) == 0 )
  {
    if ( inited == -1073741790
      || (v22 = inited + 1073741724, v22 <= 0xE) && (v23 = 17473, _bittest(&v23, v22))
      || v20 == -1073741421 )
    {
      CopyOnOpen = 0;
      EffectiveOnly = 0;
      ImpersonationLevel[0] = SecurityAnonymous;
      v24 = PsReferenceImpersonationTokenEx(
              (__int64)KeGetCurrentThread(),
              1,
              0x746C6644u,
              &CopyOnOpen,
              (bool *)&EffectiveOnly,
              (int *)ImpersonationLevel,
              0LL);
      v20 = RtlImpersonateSelfEx(SecurityImpersonation, 0, 0LL);
      if ( v20 >= 0 )
      {
        v25 = CmpInitHiveFromFile(a1, v35, a4, a3, a5, 0LL, v28, v30, v36, v37);
        CurrentThread = KeGetCurrentThread();
        v20 = v25;
        if ( v24 )
          PsImpersonateClient(CurrentThread, v24, CopyOnOpen, EffectiveOnly, ImpersonationLevel[0]);
        else
          PsImpersonateClient(CurrentThread, 0LL, 0, 0, SecurityImpersonation);
        if ( v20 >= 0
          && (a5 & 0x2000000) != 0
          && (unsigned int)dword_140E09E08 > 5
          && tlgKeywordOn((__int64)&dword_140E09E08, 0x400000000008LL) )
        {
          v36 = 0x1000000LL;
          v39 = &v36;
          v40 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E09E08,
            (unsigned __int8 *)&dword_14005316C,
            0LL,
            0LL,
            3u,
            &v38);
        }
      }
      if ( v24 )
        ObfDereferenceObjectWithTag(v24, 0x746C6644u);
    }
  }
  IoSetThreadHardErrorMode(EnableHardErrors);
  return (unsigned int)v20;
}
