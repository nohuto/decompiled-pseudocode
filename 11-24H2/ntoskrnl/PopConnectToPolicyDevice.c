/*
 * XREFs of PopConnectToPolicyDevice @ 0x14075A3DC
 * Callers:
 *     PopNotifyPolicyDevice @ 0x14075A6B0 (PopNotifyPolicyDevice.c)
 *     PopPolicyDeviceTargetChange @ 0x14075AB60 (PopPolicyDeviceTargetChange.c)
 * Callees:
 *     IoFreeIrp @ 0x14031A520 (IoFreeIrp.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     IoAllocateIrp @ 0x1403724A0 (IoAllocateIrp.c)
 *     RtlCopyUnicodeString @ 0x1403FFE80 (RtlCopyUnicodeString.c)
 *     Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline @ 0x1404F96CC (Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopGetPolicyDeviceObject @ 0x14075A584 (PopGetPolicyDeviceObject.c)
 *     RtlCompareUnicodeStrings @ 0x140888920 (RtlCompareUnicodeStrings.c)
 *     IoRegisterPlugPlayNotification @ 0x1409ED860 (IoRegisterPlugPlayNotification.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PopConnectToPolicyDevice(int a1, const UNICODE_STRING *a2)
{
  unsigned int *v4; // rsi
  __int64 *i; // rbx
  UNICODE_STRING *Pool2; // rax
  UNICODE_STRING *Context; // rdi
  __int64 PolicyDeviceObject; // rax
  PDRIVER_OBJECT *v9; // rbx
  PIRP Irp; // rax
  PVOID v11; // rbp
  IRP *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  UNICODE_STRING **v17; // rdx
  PVOID EventCategoryData; // [rsp+70h] [rbp+18h] BYREF

  EventCategoryData = 0LL;
  v4 = (unsigned int *)((char *)&PopPolicyDeviceParameters + 32 * a1);
  if ( !(unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline() && a1 >= 10 )
    return;
  for ( i = (__int64 *)**((_QWORD **)v4 + 1); i != *((__int64 **)v4 + 1); i = (__int64 *)*i )
  {
    if ( !RtlCompareUnicodeStrings(
            (PCWCH)i[5],
            (unsigned __int64)*((unsigned __int16 *)i + 16) >> 1,
            a2->Buffer,
            (unsigned __int64)a2->Length >> 1,
            1u) )
      return;
  }
  Pool2 = (UNICODE_STRING *)ExAllocatePool2(0x40uLL);
  Context = Pool2;
  if ( !Pool2 )
    return;
  Pool2[2].Buffer = (unsigned __int16 *)((char *)&Pool2->Length + *v4);
  Pool2[2].MaximumLength = a2->Length;
  RtlCopyUnicodeString(Pool2 + 2, a2);
  *(_DWORD *)&Context[1].Length = a1;
  PolicyDeviceObject = PopGetPolicyDeviceObject(&Context[2], &EventCategoryData);
  v9 = (PDRIVER_OBJECT *)PolicyDeviceObject;
  if ( !PolicyDeviceObject )
  {
LABEL_19:
    ExFreePoolWithTag(Context, v4[1]);
    return;
  }
  Irp = IoAllocateIrp(*(_BYTE *)(PolicyDeviceObject + 76), 0);
  v11 = EventCategoryData;
  v12 = Irp;
  if ( !Irp )
    goto LABEL_15;
  if ( IoRegisterPlugPlayNotification(
         EventCategoryTargetDeviceChange,
         0,
         EventCategoryData,
         v9[1],
         PopPolicyDeviceTargetChange,
         Context,
         (PVOID *)&Context[1].Buffer) < 0 )
  {
    IoFreeIrp(v12);
LABEL_15:
    ObfDereferenceObjectWithTag(v9, 0x64506F50u);
    goto LABEL_16;
  }
  *(_QWORD *)&Context[3].Length = v9;
  Context[3].Buffer = (wchar_t *)v12;
  guard_dispatch_icall_no_overrides(Context, v13, v14, v15);
  v16 = *((_QWORD *)v4 + 1);
  v17 = *(UNICODE_STRING ***)(v16 + 8);
  if ( *v17 != (UNICODE_STRING *)v16 )
    __fastfail(3u);
  *(_QWORD *)&Context->Length = v16;
  Context->Buffer = (wchar_t *)v17;
  *v17 = Context;
  *(_QWORD *)(v16 + 8) = Context;
  Context = 0LL;
LABEL_16:
  if ( v11 )
    ObfDereferenceObjectWithTag(v11, 0x64506F50u);
  if ( Context )
    goto LABEL_19;
}
