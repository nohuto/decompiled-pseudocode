/*
 * XREFs of PopFxRegisterDevice @ 0x14074E950
 * Callers:
 *     PoFxEnableDStateReporting @ 0x14074D470 (PoFxEnableDStateReporting.c)
 *     PoFxRegisterDevice @ 0x14074D710 (PoFxRegisterDevice.c)
 *     PoFxRegisterPrimaryDevice @ 0x14074D9F0 (PoFxRegisterPrimaryDevice.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1402D4B68 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1402D6794 (IoGetAttachedDeviceReferenceWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     PopFxDereferenceDevice @ 0x140376880 (PopFxDereferenceDevice.c)
 *     PopFxBugCheck @ 0x140377108 (PopFxBugCheck.c)
 *     PopFxIdleComponent @ 0x1403B4888 (PopFxIdleComponent.c)
 *     PopFxActivateComponent @ 0x1403B61EC (PopFxActivateComponent.c)
 *     PopFxInsertDevice @ 0x1404AEE90 (PopFxInsertDevice.c)
 *     PopFxAssignDeviceToDevNode @ 0x1404B8C0C (PopFxAssignDeviceToDevNode.c)
 *     PopFxGetParentFxDevice @ 0x1405D13FC (PopFxGetParentFxDevice.c)
 *     PopFxInsertDeviceRelation @ 0x1405D1540 (PopFxInsertDeviceRelation.c)
 *     PopFxRegisterDeviceWorker @ 0x14074EBF0 (PopFxRegisterDeviceWorker.c)
 *     PopFxTraceDeviceRegistration @ 0x140A58DFC (PopFxTraceDeviceRegistration.c)
 *     PopGenerateDeviceFriendlyName @ 0x140A81B2C (PopGenerateDeviceFriendlyName.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxRegisterDevice(_QWORD *Object, int a2, int a3, int a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  void *Pool2; // r14
  __int64 v9; // r12
  _QWORD *DeviceAttachmentBaseRefWithTag; // r13
  int v11; // ebx
  _BYTE *AttachedDeviceReferenceWithTag; // r15
  ULONG_PTR *v13; // rdi
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  __int64 ParentFxDevice; // rax
  ULONG_PTR v17; // rsi
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v22; // [rsp+50h] [rbp-18h] BYREF

  Pool2 = 0LL;
  v22 = 0LL;
  v9 = 0LL;
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag((__int64)Object, 0x78466F50u);
  if ( DeviceAttachmentBaseRefWithTag )
  {
    AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(Object, 0x78466F50u);
    if ( !AttachedDeviceReferenceWithTag )
    {
      v11 = -1073741811;
      goto LABEL_32;
    }
    v13 = *(ULONG_PTR **)(DeviceAttachmentBaseRefWithTag[39] + 40LL);
    if ( v13 )
    {
      _m_prefetchw(v13 + 37);
      v14 = *((_DWORD *)v13 + 74);
      do
      {
        v15 = v14;
        v14 = _InterlockedCompareExchange((volatile signed __int32 *)v13 + 74, v14, v14);
      }
      while ( v15 != v14 );
      if ( (v14 & 1) != 0 )
      {
        ParentFxDevice = PopFxGetParentFxDevice((__int64)v13);
        v17 = ParentFxDevice;
        if ( !ParentFxDevice
          || (v18 = *(_DWORD *)(ParentFxDevice + 952), v18 == -1)
          || (v9 = *(_QWORD *)(*(_QWORD *)(v17 + 872) + 8LL * v18),
              PopFxActivateComponent(v17, v9, 1),
              (Pool2 = (void *)ExAllocatePool2(0x40uLL)) != 0LL) )
        {
          v11 = PopFxRegisterDeviceWorker(
                  v13[18],
                  (int)v13 + 128,
                  a2,
                  a3,
                  a4,
                  a5,
                  AttachedDeviceReferenceWithTag[76] + 1,
                  a6,
                  (__int64)&v22);
          if ( v11 >= 0 )
          {
            v22[6] = v13;
            if ( v13[10] )
              PopFxBugCheck(0x600uLL, v13[4], 0LL, 0LL);
            PopGenerateDeviceFriendlyName(v13, 1LL, v22 + 154);
            PopFxAssignDeviceToDevNode((__int64)v13, (__int64)v22);
            ObfReferenceObjectWithTag(Object, 0x78466F50u);
            v22[12] = Object;
            v22[13] = AttachedDeviceReferenceWithTag;
            if ( (v22[108] & 1) == 0 && Pool2 )
            {
              PopFxInsertDeviceRelation(v9, (__int64)v22, 2, (__int64)Pool2);
              Pool2 = 0LL;
              v9 = 0LL;
            }
            PopFxTraceDeviceRegistration(v22, 0LL);
            PopFxInsertDevice(v20, v19, v22);
            AttachedDeviceReferenceWithTag = 0LL;
            DeviceAttachmentBaseRefWithTag = 0LL;
            v11 = 0;
          }
          else
          {
            v22 = 0LL;
          }
          if ( Pool2 )
            ExFreePoolWithTag(Pool2, 0x4D584650u);
        }
        else
        {
          v11 = -1073741670;
        }
        if ( v9 )
          PopFxIdleComponent(v17, *(unsigned int *)(v9 + 16), 2);
        if ( v17 )
          PopFxDereferenceDevice(v17, 6);
        if ( !AttachedDeviceReferenceWithTag )
        {
LABEL_31:
          if ( !DeviceAttachmentBaseRefWithTag )
            goto LABEL_33;
LABEL_32:
          ObfDereferenceObjectWithTag(DeviceAttachmentBaseRefWithTag, 0x78466F50u);
          goto LABEL_33;
        }
      }
      else
      {
        v11 = -1073741661;
      }
    }
    else
    {
      v11 = -1073741811;
    }
    ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x78466F50u);
    goto LABEL_31;
  }
  v11 = -1073741811;
LABEL_33:
  *a7 = v22;
  return (unsigned int)v11;
}
