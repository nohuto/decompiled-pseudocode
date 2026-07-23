/*
 * XREFs of NtAdjustPrivilegesToken @ 0x140984860
 * Callers:
 *     RtlpSysVolTakeOwnership @ 0x140783EA8 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     SeCaptureLuidAndAttributesArray @ 0x140984EB8 (SeCaptureLuidAndAttributesArray.c)
 *     SepAdjustPrivileges @ 0x140984FA0 (SepAdjustPrivileges.c)
 *     SeReleaseLuidAndAttributesArray @ 0x140985BF8 (SeReleaseLuidAndAttributesArray.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtAdjustPrivilegesToken(
        HANDLE TokenHandle,
        BOOLEAN DisableAllPrivileges,
        PTOKEN_PRIVILEGES NewState,
        ULONG BufferLength,
        PTOKEN_PRIVILEGES PreviousState,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v11; // rsi
  PTOKEN_PRIVILEGES v12; // rbx
  NTSTATUS result; // eax
  __int64 v14; // rdx
  int v15; // edi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v17; // rsi
  PVOID v18; // r12
  int v19; // r8d
  _QWORD *v20; // rdi
  int v21; // edx
  int v22; // r8d
  ULONG v23; // eax
  __int64 v24; // rdx
  signed __int32 v25[8]; // [rsp+0h] [rbp-B8h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-98h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-90h]
  __int64 v28; // [rsp+30h] [rbp-88h]
  KPROCESSOR_MODE v29; // [rsp+50h] [rbp-68h]
  ULONG PrivilegeCount; // [rsp+54h] [rbp-64h]
  ULONG v31; // [rsp+58h] [rbp-60h] BYREF
  PVOID v32; // [rsp+60h] [rbp-58h] BYREF
  ULONG v33; // [rsp+68h] [rbp-50h] BYREF
  PVOID P; // [rsp+70h] [rbp-48h] BYREF
  NTSTATUS v35; // [rsp+78h] [rbp-40h]
  _DWORD v36[5]; // [rsp+7Ch] [rbp-3Ch] BYREF
  char v37; // [rsp+C8h] [rbp+10h] BYREF

  PrivilegeCount = 0;
  P = 0LL;
  v36[0] = 0;
  v31 = 0;
  v33 = 0;
  v37 = 0;
  if ( !DisableAllPrivileges && !NewState )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v29 = PreviousMode;
  if ( PreviousMode )
  {
    if ( DisableAllPrivileges )
    {
      v11 = 0x7FFFFFFF0000LL;
    }
    else
    {
      if ( ((unsigned __int8)NewState & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = 0x7FFFFFFF0000LL;
      PrivilegeCount = NewState->PrivilegeCount;
      v36[1] = 12 * (PrivilegeCount - 1) + 16;
    }
    v12 = PreviousState;
    if ( PreviousState )
    {
      ProbeForWrite(PreviousState, BufferLength, 4u);
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v11 = (__int64)ReturnLength;
      *(_DWORD *)v11 = *(_DWORD *)v11;
    }
LABEL_13:
    if ( !DisableAllPrivileges )
    {
      result = SeCaptureLuidAndAttributesArray(
                 NewState->Privileges,
                 (int)Object,
                 (int)HandleInformation,
                 v28,
                 (__int64)&P,
                 (__int64)v36);
      v35 = result;
      if ( result < 0 )
        return result;
    }
    goto LABEL_15;
  }
  v12 = PreviousState;
  if ( !DisableAllPrivileges )
  {
    PrivilegeCount = NewState->PrivilegeCount;
    goto LABEL_13;
  }
LABEL_15:
  v32 = 0LL;
  v15 = ObReferenceObjectByHandle(
          TokenHandle,
          v12 != 0LL ? 40 : 32,
          (POBJECT_TYPE)SeTokenObjectType,
          PreviousMode,
          &v32,
          0LL);
  if ( v15 < 0 )
  {
    if ( P )
    {
      LOBYTE(v14) = PreviousMode;
      SeReleaseLuidAndAttributesArray(P, v14);
    }
    return v15;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v17 = (PERESOURCE *)v32;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v32 + 6), 1u);
    _InterlockedOr(v25, 0);
    v18 = P;
    LOBYTE(v19) = DisableAllPrivileges;
    v20 = v32;
    SepAdjustPrivileges(
      (_DWORD)v32,
      0,
      v19,
      PrivilegeCount,
      (__int64)P,
      (__int64)v12,
      (__int64)&v31,
      (__int64)&v33,
      (__int64)&v37);
    if ( v12 && (*ReturnLength = v31, v31 > BufferLength) )
    {
      _InterlockedOr(v25, 0);
      ExReleaseResourceLite(v17[6]);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v32);
      if ( P )
      {
        LOBYTE(v24) = PreviousMode;
        SeReleaseLuidAndAttributesArray(P, v24);
      }
      return -1073741789;
    }
    else
    {
      LOBYTE(v22) = DisableAllPrivileges;
      LOBYTE(v21) = 1;
      v35 = SepAdjustPrivileges(
              (_DWORD)v20,
              v21,
              v22,
              PrivilegeCount,
              (__int64)v18,
              (__int64)v12,
              (__int64)&v31,
              (__int64)&v33,
              (__int64)&v37);
      if ( v12 )
      {
        v23 = v33;
        v12->PrivilegeCount = v33;
        if ( !v23 )
        {
          v12->Privileges[0].Luid = 0LL;
          v12->Privileges[0].Attributes = 0;
        }
      }
      if ( v37 )
        v20[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      _InterlockedOr(v25, 0);
      ExReleaseResourceLite(v17[6]);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v32);
      if ( P )
      {
        if ( (unsigned __int8)PreviousMode <= 1u )
          ExFreePoolWithTag(P, 0);
      }
      return v35;
    }
  }
}
