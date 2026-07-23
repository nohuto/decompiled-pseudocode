/*
 * XREFs of NtReplaceKey @ 0x1407D0E80
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x140414BC0 (CmpIsRegistryLockAcquired.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     CmReplaceKey @ 0x1407DA838 (CmReplaceKey.c)
 *     CmPostCallbackNotificationEx @ 0x140843EE0 (CmPostCallbackNotificationEx.c)
 *     CmpCallCallBacksEx @ 0x140843FD0 (CmpCallCallBacksEx.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     CmCheckNoTxContext @ 0x14092F760 (CmCheckNoTxContext.c)
 *     CmpNameFromAttributes @ 0x14092F7A8 (CmpNameFromAttributes.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmObReferenceObjectByHandle @ 0x140BBB350 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140BBBAD0 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140BBBB10 (CmpReleaseHiveLoadUnloadRundown.c)
 */

NTSTATUS __cdecl NtReplaceKey(POBJECT_ATTRIBUTES NewFile, HANDLE TargetHandle, POBJECT_ATTRIBUTES OldFile)
{
  int v5; // r12d
  char v6; // si
  KPROCESSOR_MODE PreviousMode; // di
  char UnloadRundown; // r13
  NTSTATUS v9; // ebx
  __int64 v10; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rdx
  int v13; // r8d
  int v14; // r9d
  int v15; // eax
  _QWORD *v16; // rdi
  int v17; // r9d
  int v18; // eax
  int v19; // eax
  unsigned __int8 *v20; // rdx
  ULONG v22; // [rsp+20h] [rbp-E0h]
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v25[2]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v27[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v28; // [rsp+80h] [rbp-80h] BYREF
  __int64 v29; // [rsp+90h] [rbp-70h]
  __int128 v30; // [rsp+98h] [rbp-68h] BYREF
  __int128 v31; // [rsp+A8h] [rbp-58h]
  __int128 v32; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+D0h] [rbp-30h] BYREF
  PVOID *p_Object; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  __int64 *v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]

  Object = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v5 = (int)TargetHandle;
  v6 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v25[1] = v25;
  v25[0] = v25;
  *(_OWORD *)v27 = 0LL;
  *(_OWORD *)P = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v28);
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( UnloadRundown )
  {
    v9 = CmCheckNoTxContext();
    if ( v9 >= 0 )
    {
      if ( SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
      {
        CurrentThread = KeGetCurrentThread();
        LOBYTE(v10) = PreviousMode;
        v6 = 1;
        --CurrentThread->KernelApcDisable;
        v9 = CmpNameFromAttributes(NewFile, v10, v27);
        if ( v9 >= 0 )
        {
          LOBYTE(v12) = PreviousMode;
          v9 = CmpNameFromAttributes(OldFile, v12, P);
          if ( v9 >= 0 )
          {
            LOBYTE(v14) = PreviousMode;
            v15 = CmObReferenceObjectByHandle(v5, 0, v13, v14, (__int64)&Object, 0LL);
            v16 = Object;
            v9 = v15;
            if ( v15 >= 0 )
            {
              if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 8LL) & 0x80u) == 0 )
              {
                if ( !CmpCallBackCount
                  || CmpIsRegistryLockAcquired()
                  || (*(_QWORD *)&v30 = v16,
                      *((_QWORD *)&v30 + 1) = P,
                      LOBYTE(v17) = 1,
                      *(_QWORD *)&v31 = v27,
                      v18 = CmpCallCallBacksEx(45, (unsigned int)&v30, 0, v17, 46, 0LL, (__int64)v25),
                      v18 >= 0) )
                {
                  v19 = CmReplaceKey(*(_QWORD *)(v16[1] + 32LL));
                  v9 = CmPostCallbackNotificationEx(46, (_DWORD)v16, v19, (unsigned int)&v30, 0LL, (__int64)v25);
                  if ( v9 == -1073740541 )
                    v9 = 0;
                }
                else
                {
                  v9 = 0;
                  if ( v18 != -1073740541 )
                    v9 = v18;
                }
              }
              else
              {
                v9 = -1073741790;
              }
            }
            if ( v16 )
              ObfDereferenceObject(v16);
          }
        }
      }
      else
      {
        v9 = -1073741727;
      }
    }
  }
  else
  {
    v9 = -1073741431;
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  if ( v27[1] )
    ExFreePoolWithTag(v27[1], 0);
  if ( v6 )
    KeLeaveCriticalRegion();
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v28);
  if ( v9 >= 0 )
  {
    if ( (unsigned int)dword_140E09F58 > 5 && tlgKeywordOn((__int64)&dword_140E09F58, 0x400000000000LL) )
    {
      v35 = 8LL;
      p_Object = (PVOID *)&v24;
      v20 = (unsigned __int8 *)&word_14005501E;
      v22 = 3;
      goto LABEL_36;
    }
  }
  else if ( (unsigned int)dword_140E09F58 > 5 && tlgKeywordOn((__int64)&dword_140E09F58, 0x400000000000LL) )
  {
    LODWORD(Object) = v9;
    p_Object = &Object;
    v20 = (unsigned __int8 *)&dword_140055054;
    v37 = 8LL;
    v36 = &v24;
    v35 = 4LL;
    v22 = 4;
LABEL_36:
    v24 = 0x1000000LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09F58, v20, 0LL, 0LL, v22, &v33);
  }
  return v9;
}
