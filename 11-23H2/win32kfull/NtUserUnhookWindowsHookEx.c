/*
 * XREFs of NtUserUnhookWindowsHookEx @ 0x1C003CF70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C003CF14 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     zzzUnhookWindowsHookEx @ 0x1C003D1C4 (zzzUnhookWindowsHookEx.c)
 *     HMValidateHandle @ 0x1C0049CA8 (HMValidateHandle.c)
 *     LeaveEditionCrit @ 0x1C00A0030 (LeaveEditionCrit.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0EnterLeaveCrit@@QEAA@W4GuiThreadContext@@W4HandleToObjILCheck@@@Z @ 0x1C01A7EEC (--0EnterLeaveCrit@@QEAA@W4GuiThreadContext@@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserUnhookWindowsHookEx(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // esi
  unsigned int DLT; // eax
  __int64 v6; // rdx
  char *v7; // rbx
  int v8; // edi
  tagDomLock *v9; // rcx
  __int64 v10; // rax
  unsigned int v12; // eax
  tagDomLock *v13; // rax
  __int64 v14; // rdx
  struct tagHOOK *v15; // rax
  int v16; // edi
  char *v17; // rbx
  tagDomLock *v18; // rcx
  char v19; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v20[3]; // [rsp+21h] [rbp-38h] BYREF
  int v21; // [rsp+24h] [rbp-35h]
  __int64 DomainLockRef; // [rsp+28h] [rbp-31h] BYREF
  char v23; // [rsp+30h] [rbp-29h] BYREF
  __int64 v24; // [rsp+38h] [rbp-21h]
  char v25; // [rsp+40h] [rbp-19h]
  __int64 v26; // [rsp+48h] [rbp-11h]
  char v27; // [rsp+50h] [rbp-9h]
  tagDomLock *v28; // [rsp+58h] [rbp-1h]
  char v29; // [rsp+60h] [rbp+7h] BYREF
  __int64 v30; // [rsp+68h] [rbp+Fh]
  char v31; // [rsp+70h] [rbp+17h]
  __int64 v32; // [rsp+78h] [rbp+1Fh]
  char v33; // [rsp+80h] [rbp+27h]

  EnterSharedCrit(a1, a2, a3);
  v4 = 0;
  DLT = DLT_HOOK::getDLT();
  v25 = 0;
  DomainLockRef = GetDomainLockRef(DLT);
  v7 = &v23;
  v8 = 0;
  v24 = gDomainDummyLock;
  v26 = 0LL;
  v23 = 1;
  v27 = 0;
  do
  {
    v9 = (tagDomLock *)*((_QWORD *)v7 - 1);
    if ( v9 )
    {
      if ( *v7 )
        tagDomLock::LockExclusive(v9);
      else
        tagDomLock::LockShared(v9);
    }
    ++v8;
    v7 += 16;
  }
  while ( !v8 );
  LOBYTE(v6) = 5;
  v27 = 1;
  v10 = HMValidateHandle(a1, v6);
  if ( v10 )
  {
    if ( (byte_1C0316E79[*(int *)(v10 + 48)] & 4) != 0 || *(__int64 *)(*(_QWORD *)(v10 + 24) - 48LL) <= 1 )
    {
      if ( *(__int64 *)(*(_QWORD *)(v10 + 24) - 48LL) <= 1 )
      {
        v21 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 6849LL);
      }
      v12 = DLT_HOOK::getDLT();
      v13 = (tagDomLock *)GetDomainLockRef(v12);
      v30 = gDomainDummyLock;
      v28 = v13;
      v29 = 1;
      v31 = 0;
      v32 = 0LL;
      if ( v13 )
        tagDomLock::UnLockExclusive(v13);
      v33 = 1;
      LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v19);
      EnterLeaveCrit::EnterLeaveCrit(v20, 1LL, 0LL);
      LOBYTE(v14) = 5;
      v15 = (struct tagHOOK *)HMValidateHandle(a1, v14);
      if ( v15 )
        v4 = zzzUnhookWindowsHookEx(v15);
      LeaveEditionCrit(v20);
      LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v19);
      if ( v33 )
      {
        v16 = 0;
        v17 = &v29;
        do
        {
          v18 = (tagDomLock *)*((_QWORD *)v17 - 1);
          if ( v18 )
          {
            if ( *v17 )
              tagDomLock::LockExclusive(v18);
            else
              tagDomLock::LockShared(v18);
          }
          ++v16;
          v17 += 16;
        }
        while ( !v16 );
      }
    }
    else
    {
      v4 = zzzUnhookWindowsHookEx((struct tagHOOK *)v10);
    }
    DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)&DomainLockRef);
    LeaveEditionCrit(&v19);
    return v4;
  }
  else
  {
    DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)&DomainLockRef);
    LeaveEditionCrit(&v19);
    return 0LL;
  }
}
