/*
 * XREFs of ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z @ 0x1C0023454
 * Callers:
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C0025500 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0022500 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z @ 0x1C0023668 (-Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FB14 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC58 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD0C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E25C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E628 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5AC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA4C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CEvent::Create(
        NSInstrumentation::CLeakTrackingAllocator *a1,
        unsigned __int64 a2,
        struct DirectComposition::CEvent **a3)
{
  void *QuotaZInit; // rax
  __int64 Pool2; // rbx
  NTSTATUS v6; // edi
  NSInstrumentation::CLeakTrackingAllocator *v8; // rdi
  int v9; // eax
  _QWORD *v10; // rax
  __int64 v11; // r10
  __int64 v12; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v14[2]; // [rsp+48h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-B0h] BYREF
  PVOID BackTrace[20]; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v17; // [rsp+148h] [rbp+40h] BYREF
  void *EventHandle; // [rsp+160h] [rbp+58h] BYREF

  v17 = (unsigned int)a1;
  if ( (_DWORD)a2 )
  {
    QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(a1, a2, 0x10uLL, 0x76654344u);
LABEL_3:
    Pool2 = (__int64)QuotaZInit;
    goto LABEL_4;
  }
  v8 = gpLeakTrackingAllocator;
  v17 = 1986347844;
  v12 = 260LL;
  v13 = 16LL;
  v9 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, 16LL, 1986347844LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v8 + 14);
    goto LABEL_4;
  }
  if ( v9 != 1 )
  {
    if ( v9 == 2 )
    {
      EventHandle = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
              gpLeakTrackingAllocator,
              0x76654344u,
              (unsigned __int64 *)&EventHandle) )
      {
        v14[0] = &v12;
        v14[1] = &v17;
        QuotaZInit = (void *)NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                               v8,
                               v14,
                               &v13);
        goto LABEL_3;
      }
      Pool2 = ExAllocatePool2(v11, 32LL, 1986347844LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v8 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v8,
                                  Pool2,
                                  EventHandle,
                                  BackTrace) )
            goto LABEL_4;
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v8,
                                     Pool2,
                                     EventHandle,
                                     BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_4;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v8 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    goto LABEL_26;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x76654344u) )
  {
LABEL_26:
    Pool2 = 0LL;
    goto LABEL_4;
  }
  v10 = (_QWORD *)ExAllocatePool2(v12 & 0xFFFFFFFFFFFFFFFDuLL, 32LL, v17);
  Pool2 = (__int64)v10;
  if ( !v10
    || (_InterlockedIncrement64((volatile signed __int64 *)v8 + 14),
        *v10 = 1986347844LL,
        Pool2 = (__int64)(v10 + 2),
        v10 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v8 + 1),
      (const void *)0x76654344);
  }
LABEL_4:
  if ( Pool2 )
  {
    EventHandle = 0LL;
    memset(&ObjectAttributes.Length + 1, 0, 20);
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    v6 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
    if ( v6 < 0
      || (v6 = DirectComposition::CEvent::Initialize((DirectComposition::CEvent *)Pool2, EventHandle, 1),
          ObCloseHandle(EventHandle, 0),
          v6 < 0) )
    {
      DirectComposition::CEvent::`scalar deleting destructor'((DirectComposition::CEvent *)Pool2);
    }
    else
    {
      *a3 = (struct DirectComposition::CEvent *)Pool2;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v6;
}
