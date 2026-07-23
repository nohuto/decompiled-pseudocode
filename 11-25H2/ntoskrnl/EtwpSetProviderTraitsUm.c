/*
 * XREFs of EtwpSetProviderTraitsUm @ 0x140896A5C
 * Callers:
 *     NtTraceControl @ 0x140895400 (NtTraceControl.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     EtwpEventWriteRegistrationStatus @ 0x140798230 (EtwpEventWriteRegistrationStatus.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     EtwpSetProviderTraitsCommon @ 0x140896C34 (EtwpSetProviderTraitsCommon.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpSetProviderTraitsUm(__int64 a1, int a2, int a3)
{
  PVOID v6; // rsi
  void *v7; // rcx
  NTSTATUS v8; // ebx
  int v9; // r15d
  __int16 v10; // ax
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 Pool2; // rax
  _RTL_BALANCED_NODE *v14; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  PRTL_BALANCED_NODE Node; // [rsp+20h] [rbp-58h]
  PVOID Object; // [rsp+80h] [rbp+8h] BYREF
  PVOID v21; // [rsp+98h] [rbp+20h]

  v6 = 0LL;
  if ( !*(_QWORD *)(a1 + 8) || !*(_WORD *)(a1 + 16) )
    goto LABEL_18;
  v7 = *(void **)a1;
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(v7, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
  v9 = (int)Object;
  v6 = Object;
  v21 = Object;
  if ( v8 < 0 )
    goto LABEL_14;
  v10 = *((_WORD *)Object + 49);
  if ( (v10 & 8) == 0 && (v10 & 2) != 0 )
  {
    if ( *((_QWORD *)Object + 13) )
    {
      v8 = -1073741823;
    }
    else
    {
      v11 = *(unsigned __int16 *)(a1 + 16);
      if ( (_WORD)v11 )
      {
        v12 = *(_QWORD *)(a1 + 8);
        if ( v12 + v11 > 0x7FFFFFFF0000LL || v12 + v11 < v12 )
          v9 = (int)Object;
      }
      Pool2 = ExAllocatePool2(0x100uLL);
      v14 = (_RTL_BALANCED_NODE *)Pool2;
      if ( Pool2 )
      {
        memmove((void *)(Pool2 + 28), *(const void **)(a1 + 8), *(unsigned __int16 *)(a1 + 16));
        v8 = EtwpSetProviderTraitsCommon(
               a1,
               a2,
               a3,
               v9,
               v14,
               *(unsigned __int16 *)(a1 + 16),
               &EtwpProviderTraitsUmMutex,
               &EtwpProviderTraitsUmTree);
      }
      else
      {
        v8 = -1073741670;
      }
    }
  }
  else
  {
LABEL_18:
    v8 = -1073741811;
  }
LABEL_14:
  if ( v6 )
  {
    if ( v8 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SET_TRAITS_FAILED) )
    {
      LODWORD(Node) = v8;
      EtwpEventWriteRegistrationStatus(v17, v16, v18, (__int64)v6, (__int64)Node);
    }
    ObfDereferenceObject(v6);
  }
  return (unsigned int)v8;
}
