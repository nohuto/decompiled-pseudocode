/*
 * XREFs of NtReplacePartitionUnit @ 0x1406A2880
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     IoReplacePartitionUnit @ 0x14071C6E0 (IoReplacePartitionUnit.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1408BB740 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1408CDB40 (PiControlMakeUserModeCallersCopy.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtReplacePartitionUnit(
        PUNICODE_STRING TargetInstancePath,
        PUNICODE_STRING SpareInstancePath,
        ULONG Flags)
{
  struct _DEVICE_OBJECT *v6; // r14
  void *v7; // rsi
  int v8; // edi
  int UserModeCallersCopy; // ebx
  ULONG v10; // r8d
  struct _DEVICE_OBJECT *v11; // rdx
  struct _DEVICE_OBJECT *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  PVOID v19[3]; // [rsp+30h] [rbp-58h] BYREF
  UNICODE_STRING v20; // [rsp+48h] [rbp-40h] BYREF
  UNICODE_STRING v21; // [rsp+58h] [rbp-30h] BYREF
  PVOID P; // [rsp+A8h] [rbp+20h] BYREF

  v20 = 0LL;
  v21 = 0LL;
  P = 0LL;
  v6 = 0LL;
  v19[1] = 0LL;
  v19[0] = 0LL;
  v7 = 0LL;
  v8 = 1;
  if ( KeGetCurrentThread()->PreviousMode != 1 )
  {
    UserModeCallersCopy = -1073741790;
    goto LABEL_34;
  }
  if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, 1) )
  {
    UserModeCallersCopy = -1073741727;
    goto LABEL_34;
  }
  v10 = 0x80000000;
  if ( Flags == 0x80000000 )
  {
    v11 = 0LL;
    v12 = 0LL;
LABEL_7:
    UserModeCallersCopy = IoReplacePartitionUnit(v12, v11, v10);
    goto LABEL_34;
  }
  if ( Flags )
  {
    UserModeCallersCopy = -1073741583;
    goto LABEL_34;
  }
  if ( ((unsigned __int8)SpareInstancePath & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( ((unsigned __int8)TargetInstancePath & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  v20 = *SpareInstancePath;
  v21 = *TargetInstancePath;
  if ( (unsigned __int16)(v21.Length - 1) > 0xC8u || (v21.MaximumLength & 1) != 0 )
    goto LABEL_33;
  if ( (unsigned __int16)(v20.Length - 1) > 0xC8u || (v20.MaximumLength & 1) != 0 )
  {
LABEL_32:
    UserModeCallersCopy = -1073741584;
    goto LABEL_34;
  }
  UserModeCallersCopy = PiControlMakeUserModeCallersCopy((unsigned int)&P, v20.Buffer, v20.Length, 2, 1, 1);
  if ( UserModeCallersCopy >= 0 )
  {
    UserModeCallersCopy = PiControlMakeUserModeCallersCopy((unsigned int)v19, v21.Buffer, v21.Length, 2, 1, 1);
    if ( UserModeCallersCopy >= 0 )
    {
      v20.Buffer = (wchar_t *)P;
      v20.MaximumLength = v20.Length;
      v21.Buffer = (wchar_t *)v19[0];
      v21.MaximumLength = v21.Length;
      v13 = PnpDeviceObjectFromDeviceInstanceWithTag(&v20, 1953261124LL);
      v6 = (struct _DEVICE_OBJECT *)v13;
      if ( v13 )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(v13 + 312) + 40LL);
        if ( v14 )
        {
          if ( (*(_DWORD *)(v14 + 396) & 0x20000) == 0 )
          {
            v16 = PnpDeviceObjectFromDeviceInstanceWithTag(&v21, 1953261124LL);
            v7 = (void *)v16;
            if ( !v16
              || (v17 = *(_QWORD *)(*(_QWORD *)(v16 + 312) + 40LL)) == 0
              || (*(_DWORD *)(v17 + 396) & 0x20000) != 0 )
            {
              v8 = 0;
            }
            if ( v8 )
            {
              v10 = 0;
              v11 = v6;
              v12 = (struct _DEVICE_OBJECT *)v16;
              goto LABEL_7;
            }
LABEL_33:
            UserModeCallersCopy = -1073741585;
            goto LABEL_34;
          }
        }
      }
      goto LABEL_32;
    }
  }
LABEL_34:
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x746C6644u);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v19[0] )
    ExFreePoolWithTag(v19[0], 0);
  return UserModeCallersCopy;
}
