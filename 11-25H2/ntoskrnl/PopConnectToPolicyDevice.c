/*
 * XREFs of PopConnectToPolicyDevice @ 0x14074DE04
 * Callers:
 *     PopNotifyPolicyDevice @ 0x14074E0E0 (PopNotifyPolicyDevice.c)
 *     PopPolicyDeviceTargetChange @ 0x14074E590 (PopPolicyDeviceTargetChange.c)
 * Callees:
 *     IoFreeIrp @ 0x1402508A0 (IoFreeIrp.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     IoAllocateIrp @ 0x14035B6A0 (IoAllocateIrp.c)
 *     RtlCopyUnicodeString @ 0x14036CBB0 (RtlCopyUnicodeString.c)
 *     Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline @ 0x1405C86A4 (Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PopGetPolicyDeviceObject @ 0x14074DFB0 (PopGetPolicyDeviceObject.c)
 *     RtlCompareUnicodeStrings @ 0x1408694A0 (RtlCompareUnicodeStrings.c)
 *     IoRegisterPlugPlayNotification @ 0x14096BD60 (IoRegisterPlugPlayNotification.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PopConnectToPolicyDevice(int a1, const UNICODE_STRING *a2)
{
  unsigned int *v4; // rsi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  UNICODE_STRING *Pool2; // rax
  PVOID *Context; // rdi
  __int64 PolicyDeviceObject; // rax
  PDRIVER_OBJECT *v10; // rbx
  PIRP Irp; // rax
  PVOID v12; // rbp
  IRP *v13; // r14
  PVOID *v14; // rax
  PVOID **v15; // rdx
  PVOID EventCategoryData; // [rsp+70h] [rbp+18h] BYREF

  EventCategoryData = 0LL;
  v4 = (unsigned int *)((char *)&PopPolicyDeviceParameters + 32 * a1);
  if ( !(unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline() && a1 >= 10 )
    return;
  v5 = (_QWORD *)*((_QWORD *)v4 + 1);
  v6 = (_QWORD *)*v5;
  if ( (_QWORD *)*v5 == v5 )
  {
LABEL_6:
    Pool2 = (UNICODE_STRING *)ExAllocatePool2(0x40uLL);
    Context = (PVOID *)Pool2;
    if ( !Pool2 )
      return;
    Pool2[2].Buffer = (unsigned __int16 *)((char *)&Pool2->Length + *v4);
    Pool2[2].MaximumLength = a2->Length;
    RtlCopyUnicodeString(Pool2 + 2, a2);
    *((_DWORD *)Context + 4) = a1;
    PolicyDeviceObject = PopGetPolicyDeviceObject(Context + 4, &EventCategoryData);
    v10 = (PDRIVER_OBJECT *)PolicyDeviceObject;
    if ( !PolicyDeviceObject )
      goto LABEL_18;
    Irp = IoAllocateIrp(*(_BYTE *)(PolicyDeviceObject + 76), 0);
    v12 = EventCategoryData;
    v13 = Irp;
    if ( Irp )
    {
      if ( IoRegisterPlugPlayNotification(
             EventCategoryTargetDeviceChange,
             0,
             EventCategoryData,
             v10[1],
             PopPolicyDeviceTargetChange,
             Context,
             Context + 3) >= 0 )
      {
        Context[6] = v10;
        Context[7] = v13;
        guard_dispatch_icall_no_overrides(Context);
        v14 = (PVOID *)*((_QWORD *)v4 + 1);
        v15 = (PVOID **)v14[1];
        if ( *v15 != v14 )
          __fastfail(3u);
        *Context = v14;
        Context[1] = v15;
        *v15 = Context;
        v14[1] = Context;
        Context = 0LL;
LABEL_15:
        if ( v12 )
          ObfDereferenceObjectWithTag(v12, 0x64506F50u);
        if ( !Context )
          return;
LABEL_18:
        ExFreePoolWithTag(Context, v4[1]);
        return;
      }
      IoFreeIrp(v13);
    }
    ObfDereferenceObjectWithTag(v10, 0x64506F50u);
    goto LABEL_15;
  }
  while ( RtlCompareUnicodeStrings(
            (PCWCH)v6[5],
            (unsigned __int64)*((unsigned __int16 *)v6 + 16) >> 1,
            a2->Buffer,
            (unsigned __int64)a2->Length >> 1,
            1u) )
  {
    v6 = (_QWORD *)*v6;
    if ( v6 == *((_QWORD **)v4 + 1) )
      goto LABEL_6;
  }
}
