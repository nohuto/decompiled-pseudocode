/*
 * XREFs of CmpCmdHiveOpen @ 0x140930A5C
 * Callers:
 *     CmReplaceKey @ 0x1407DA838 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x1407DC808 (CmpFlushBackupHive.c)
 *     CmLoadKey @ 0x14092D8C8 (CmLoadKey.c)
 *     CmLoadAppKey @ 0x14092FCDC (CmLoadAppKey.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     PspUnlockThreadSecurityShared @ 0x14040AFC0 (PspUnlockThreadSecurityShared.c)
 *     PspLockThreadSecurityShared @ 0x140414FB0 (PspLockThreadSecurityShared.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     IoSetThreadHardErrorMode @ 0x1404523B0 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PsImpersonateClient @ 0x1408E7A20 (PsImpersonateClient.c)
 *     CmpInitHiveFromFile @ 0x140930D5C (CmpInitHiveFromFile.c)
 *     RtlImpersonateSelfEx @ 0x1409A8554 (RtlImpersonateSelfEx.c)
 */

__int64 __fastcall CmpCmdHiveOpen(
        int a1,
        char a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        __int64 a8,
        void *a9)
{
  int v10; // edi
  int v11; // r15d
  BOOLEAN v13; // al
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  NTSTATUS inited; // eax
  NTSTATUS v20; // edi
  unsigned int v22; // eax
  int v23; // ecx
  struct _KTHREAD *CurrentThread; // rdi
  BOOLEAN v25; // si
  BOOLEAN v26; // bp
  SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // r14d
  void *Thread; // rbx
  NTSTATUS v29; // eax
  struct _KTHREAD *v30; // rcx
  int v31; // [rsp+30h] [rbp-B8h]
  int v32; // [rsp+30h] [rbp-B8h]
  int v33; // [rsp+38h] [rbp-B0h]
  int v34; // [rsp+38h] [rbp-B0h]
  BOOLEAN EnableHardErrors; // [rsp+50h] [rbp-98h]
  int v36; // [rsp+54h] [rbp-94h]
  int v37[2]; // [rsp+58h] [rbp-90h] BYREF
  void *v38; // [rsp+60h] [rbp-88h]
  __int64 v39; // [rsp+68h] [rbp-80h]
  __int64 v40; // [rsp+70h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+78h] [rbp-70h] BYREF
  int *v42; // [rsp+98h] [rbp-50h]
  int v43; // [rsp+A0h] [rbp-48h]
  int v44; // [rsp+A4h] [rbp-44h]

  v10 = a4;
  v40 = a8;
  v11 = a3;
  v38 = a9;
  *(_QWORD *)v37 = a4;
  v39 = a3;
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
  v36 = v18;
  inited = CmpInitHiveFromFile(a1, v18, v10, v11, a5, a7, v31, v33, a8, v38);
  v20 = inited;
  if ( !a7 && a2 && (a6 & 0x20) == 0 )
  {
    if ( inited == -1073741790
      || (v22 = inited + 1073741724, v22 <= 0xE) && (v23 = 17473, _bittest(&v23, v22))
      || v20 == -1073741421 )
    {
      CurrentThread = KeGetCurrentThread();
      v25 = 0;
      v26 = 0;
      ImpersonationLevel = SecurityAnonymous;
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        PspLockThreadSecurityShared((__int64)CurrentThread, (__int64)KeGetCurrentThread());
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
        {
          Thread = CurrentThread[1].WaitBlock[1].Thread;
          if ( !Thread )
          {
            Thread = (void *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
            v25 = BYTE1(*((_DWORD *)&CurrentThread[1].SwapListEntry + 2)) & 1;
          }
          ObfReferenceObjectWithTag(Thread, 0x746C6644u);
          ImpersonationLevel = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
          v26 = (*(_BYTE *)(&CurrentThread[1].MiscFlags + 1) & 4) != 0;
        }
        else
        {
          Thread = 0LL;
        }
        PspUnlockThreadSecurityShared((__int64)CurrentThread);
        v11 = v39;
      }
      else
      {
        Thread = 0LL;
      }
      v20 = RtlImpersonateSelfEx(SecurityImpersonation, 0, 0LL);
      if ( v20 >= 0 )
      {
        v29 = CmpInitHiveFromFile(a1, v36, v37[0], v11, a5, 0LL, v32, v34, v40, v38);
        v30 = KeGetCurrentThread();
        v20 = v29;
        if ( Thread )
          PsImpersonateClient(v30, Thread, v25, v26, ImpersonationLevel);
        else
          PsImpersonateClient(v30, 0LL, 0, 0, SecurityImpersonation);
        if ( v20 >= 0
          && (a5 & 0x2000000) != 0
          && (unsigned int)dword_140E09F58 > 5
          && tlgKeywordOn((__int64)&dword_140E09F58, 0x400000000008LL) )
        {
          v44 = 0;
          v42 = v37;
          *(_QWORD *)v37 = 0x1000000LL;
          v43 = 8;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E09F58,
            (unsigned __int8 *)&unk_140055090,
            0LL,
            0LL,
            3u,
            &v41);
        }
      }
      if ( Thread )
        ObfDereferenceObjectWithTag(Thread, 0x746C6644u);
    }
  }
  IoSetThreadHardErrorMode(EnableHardErrors);
  return (unsigned int)v20;
}
