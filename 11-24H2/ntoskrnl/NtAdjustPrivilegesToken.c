/*
 * XREFs of NtAdjustPrivilegesToken @ 0x1409377D0
 * Callers:
 *     RtlpSysVolTakeOwnership @ 0x140783F78 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 *     SeReleaseLuidAndAttributesArray @ 0x140936340 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureLuidAndAttributesArray @ 0x140937E28 (SeCaptureLuidAndAttributesArray.c)
 *     SepAdjustPrivileges @ 0x140937F10 (SepAdjustPrivileges.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtAdjustPrivilegesToken(
        HANDLE TokenHandle,
        BOOLEAN DisableAllPrivileges,
        PTOKEN_PRIVILEGES NewState,
        ULONG BufferLength,
        PTOKEN_PRIVILEGES PreviousState,
        PULONG ReturnLength)
{
  char PreviousMode; // r14
  __int64 v11; // rsi
  PTOKEN_PRIVILEGES v12; // rbx
  NTSTATUS result; // eax
  int v14; // edi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v16; // rsi
  PVOID v17; // r12
  int v18; // r8d
  _QWORD *v19; // rdi
  int v20; // edx
  int v21; // r8d
  ULONG v22; // eax
  signed __int32 v23[8]; // [rsp+0h] [rbp-B8h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-98h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-90h]
  __int64 v26; // [rsp+30h] [rbp-88h]
  char v27; // [rsp+50h] [rbp-68h]
  ULONG PrivilegeCount; // [rsp+54h] [rbp-64h]
  ULONG v29; // [rsp+58h] [rbp-60h] BYREF
  PVOID v30; // [rsp+60h] [rbp-58h] BYREF
  ULONG v31; // [rsp+68h] [rbp-50h] BYREF
  PVOID P; // [rsp+70h] [rbp-48h] BYREF
  NTSTATUS v33; // [rsp+78h] [rbp-40h]
  _DWORD v34[5]; // [rsp+7Ch] [rbp-3Ch] BYREF
  char v35; // [rsp+C8h] [rbp+10h] BYREF

  PrivilegeCount = 0;
  P = 0LL;
  v34[0] = 0;
  v29 = 0;
  v31 = 0;
  v35 = 0;
  if ( !DisableAllPrivileges && !NewState )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v27 = PreviousMode;
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
      v34[1] = 12 * (PrivilegeCount - 1) + 16;
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
                 v26,
                 (__int64)&P,
                 (__int64)v34);
      v33 = result;
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
  v30 = 0LL;
  v14 = ObReferenceObjectByHandle(
          TokenHandle,
          v12 != 0LL ? 40 : 32,
          (POBJECT_TYPE)SeTokenObjectType,
          PreviousMode,
          &v30,
          0LL);
  if ( v14 < 0 )
  {
    if ( P )
      SeReleaseLuidAndAttributesArray(P, PreviousMode);
    return v14;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v16 = (PERESOURCE *)v30;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v30 + 6), 1u);
    _InterlockedOr(v23, 0);
    v17 = P;
    LOBYTE(v18) = DisableAllPrivileges;
    v19 = v30;
    SepAdjustPrivileges(
      (_DWORD)v30,
      0,
      v18,
      PrivilegeCount,
      (__int64)P,
      (__int64)v12,
      (__int64)&v29,
      (__int64)&v31,
      (__int64)&v35);
    if ( v12 && (*ReturnLength = v29, v29 > BufferLength) )
    {
      _InterlockedOr(v23, 0);
      ExReleaseResourceLite(v16[6]);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v30);
      if ( P )
        SeReleaseLuidAndAttributesArray(P, PreviousMode);
      return -1073741789;
    }
    else
    {
      LOBYTE(v21) = DisableAllPrivileges;
      LOBYTE(v20) = 1;
      v33 = SepAdjustPrivileges(
              (_DWORD)v19,
              v20,
              v21,
              PrivilegeCount,
              (__int64)v17,
              (__int64)v12,
              (__int64)&v29,
              (__int64)&v31,
              (__int64)&v35);
      if ( v12 )
      {
        v22 = v31;
        v12->PrivilegeCount = v31;
        if ( !v22 )
        {
          v12->Privileges[0].Luid = 0LL;
          v12->Privileges[0].Attributes = 0;
        }
      }
      if ( v35 )
        v19[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      _InterlockedOr(v23, 0);
      ExReleaseResourceLite(v16[6]);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v30);
      if ( P )
      {
        if ( (unsigned __int8)PreviousMode <= 1u )
          ExFreePoolWithTag(P, 0);
      }
      return v33;
    }
  }
}
