/*
 * XREFs of NtAssociateWaitCompletionPacket @ 0x1404E5C30
 * Callers:
 *     <none>
 * Callees:
 *     KeRegisterObjectNotification @ 0x140205AB0 (KeRegisterObjectNotification.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObGetAssociatedWaitObject @ 0x140428690 (ObGetAssociatedWaitObject.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     Feature_1806129466__private_IsEnabledDeviceUsageNoInline @ 0x1405970A0 (Feature_1806129466__private_IsEnabledDeviceUsageNoInline.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtAssociateWaitCompletionPacket(
        void *a1,
        void *a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        char *a8)
{
  KIRQL v8; // r14
  char v9; // r13
  PVOID v10; // r12
  PVOID v11; // r15
  NTSTATUS v12; // ebx
  KSPIN_LOCK *v13; // rsi
  __int16 *AssociatedWaitObject; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  _QWORD *v19; // r8
  PVOID v20; // rdx
  char v21; // si
  __int64 v22; // rcx
  volatile signed __int64 *v23; // rcx
  KPROCESSOR_MODE PreviousMode; // [rsp+30h] [rbp-78h]
  PVOID Object; // [rsp+38h] [rbp-70h] BYREF
  NTSTATUS v27; // [rsp+40h] [rbp-68h]
  PVOID v28; // [rsp+48h] [rbp-60h] BYREF
  PVOID v29; // [rsp+50h] [rbp-58h] BYREF
  __int16 *v30; // [rsp+58h] [rbp-50h]
  PKSPIN_LOCK SpinLock; // [rsp+60h] [rbp-48h]
  __int64 retaddr; // [rsp+A8h] [rbp+0h]

  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(a1, 1u, IopWaitCompletionPacketObjectType, PreviousMode, &Object, 0LL);
  v13 = (KSPIN_LOCK *)Object;
  if ( v12 >= 0 )
  {
    v29 = 0LL;
    v12 = ObReferenceObjectByHandle(a2, 2u, IoCompletionObjectType, PreviousMode, &v29, 0LL);
    v10 = v29;
    if ( v12 >= 0 )
    {
      v28 = 0LL;
      v12 = ObReferenceObjectByHandle(a3, 0x100000u, 0LL, PreviousMode, &v28, 0LL);
      v11 = v28;
      v27 = v12;
      if ( v12 >= 0 )
      {
        AssociatedWaitObject = ObGetAssociatedWaitObject((__int64)v28);
        v30 = AssociatedWaitObject;
        if ( AssociatedWaitObject && (((*(_BYTE *)AssociatedWaitObject & 0x7F) - 2) & 0xFD) != 0 )
        {
          v9 = 1;
          SpinLock = v13 + 12;
          v8 = KeAcquireSpinLockRaiseToDpc(v13 + 12);
          v17 = *((unsigned __int8 *)v13 + 104);
          if ( (_BYTE)v17 )
          {
            v12 = -1073741585;
          }
          else
          {
            IsEnabledDeviceUsageNoInline = Feature_1806129466__private_IsEnabledDeviceUsageNoInline(v17, v15, v16);
            v19 = Object;
            if ( IsEnabledDeviceUsageNoInline && *((_BYTE *)Object + 105) )
            {
              v12 = -1073700861;
            }
            else
            {
              *((_BYTE *)Object + 104) = 1;
              v19[6] = a4;
              v19[7] = a5;
              *((_DWORD *)v19 + 18) = a6;
              v19[8] = a7;
              v19[10] = v28;
              v20 = v29;
              v19[11] = v29;
              v21 = KeRegisterObjectNotification((__int64)v30, (__int64)v20, (__int64)v19);
              KeReleaseSpinLock(SpinLock, v8);
              v9 = 0;
              if ( a8 )
              {
                if ( PreviousMode )
                {
                  v22 = 0x7FFFFFFF0000LL;
                  if ( (unsigned __int64)a8 < 0x7FFFFFFF0000LL )
                    v22 = (__int64)a8;
                  *(_BYTE *)v22 = *(_BYTE *)v22;
                }
                *a8 = v21;
              }
              v10 = 0LL;
              v11 = 0LL;
              v13 = 0LL;
            }
          }
        }
        else
        {
          v12 = -1073741583;
        }
      }
    }
  }
  if ( v9 )
  {
    v23 = (volatile signed __int64 *)(v13 + 12);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64(v23, 0LL);
    else
      KiReleaseSpinLockInstrumented(v23, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
    __writecr8(v8);
  }
  if ( v10 )
    ObfDereferenceObjectWithTag(v10, 0x746C6644u);
  if ( v11 )
    ObfDereferenceObjectWithTag(v11, 0x746C6644u);
  if ( v13 )
    ObfDereferenceObjectWithTag(v13, 0x746C6644u);
  return (unsigned int)v12;
}
