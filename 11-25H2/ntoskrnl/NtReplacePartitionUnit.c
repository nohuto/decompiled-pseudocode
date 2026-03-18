/*
 * XREFs of NtReplacePartitionUnit @ 0x140696650
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     IoReplacePartitionUnit @ 0x140712A50 (IoReplacePartitionUnit.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1408CDCA0 (PiControlMakeUserModeCallersCopy.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140934F70 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtReplacePartitionUnit(__int128 *a1, __int128 *a2, int a3)
{
  struct _DEVICE_OBJECT *v6; // r14
  void *v7; // rsi
  int v8; // edi
  NTSTATUS UserModeCallersCopy; // ebx
  ULONG v10; // r8d
  struct _DEVICE_OBJECT *v11; // rdx
  struct _DEVICE_OBJECT *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  PVOID v19[3]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v20; // [rsp+48h] [rbp-40h] BYREF
  __int128 v21; // [rsp+58h] [rbp-30h] BYREF
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
  if ( a3 == 0x80000000 )
  {
    v11 = 0LL;
    v12 = 0LL;
LABEL_7:
    UserModeCallersCopy = IoReplacePartitionUnit(v12, v11, v10);
    goto LABEL_34;
  }
  if ( a3 )
  {
    UserModeCallersCopy = -1073741583;
    goto LABEL_34;
  }
  if ( ((unsigned __int8)a2 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( ((unsigned __int8)a1 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  v20 = *a2;
  v21 = *a1;
  if ( (unsigned __int16)(v21 - 1) > 0xC8u || (BYTE2(v21) & 1) != 0 )
    goto LABEL_33;
  if ( (unsigned __int16)(v20 - 1) > 0xC8u || (BYTE2(v20) & 1) != 0 )
  {
LABEL_32:
    UserModeCallersCopy = -1073741584;
    goto LABEL_34;
  }
  UserModeCallersCopy = PiControlMakeUserModeCallersCopy((unsigned int)&P, DWORD2(v20), (unsigned __int16)v20, 2, 1, 1);
  if ( UserModeCallersCopy >= 0 )
  {
    UserModeCallersCopy = PiControlMakeUserModeCallersCopy(
                            (unsigned int)v19,
                            DWORD2(v21),
                            (unsigned __int16)v21,
                            2,
                            1,
                            1);
    if ( UserModeCallersCopy >= 0 )
    {
      *((_QWORD *)&v20 + 1) = P;
      WORD1(v20) = v20;
      *((PVOID *)&v21 + 1) = v19[0];
      WORD1(v21) = v21;
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
  return (unsigned int)UserModeCallersCopy;
}
