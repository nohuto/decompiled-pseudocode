/*
 * XREFs of PopFxProcessWorkPool @ 0x1404EB530
 * Callers:
 *     PopFxStaticWorkPoolThread @ 0x1405D1F40 (PopFxStaticWorkPoolThread.c)
 *     PopFxPluginWork @ 0x140A03A70 (PopFxPluginWork.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     PopFxDispatchPluginWorkOnce @ 0x140315E30 (PopFxDispatchPluginWorkOnce.c)
 *     KeWaitForMultipleObjects @ 0x14033D720 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     ExInterlockedRemoveHeadList @ 0x14042ECB0 (ExInterlockedRemoveHeadList.c)
 *     Feature_Servicing_PofxCriticalRegionFix__private_IsEnabledDeviceUsageNoInline @ 0x1405CFD88 (Feature_Servicing_PofxCriticalRegionFix__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __fastcall PopFxProcessWorkPool(char *a1, unsigned int a2)
{
  __int64 v2; // rbp
  int v3; // edi
  unsigned int v5; // r15d
  LARGE_INTEGER *p_Timeout; // rax
  NTSTATUS result; // eax
  int v8; // esi
  struct _KTHREAD *CurrentThread; // rax
  PLIST_ENTRY v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _KTHREAD *v16; // rax
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  PVOID Object[2]; // [rsp+40h] [rbp-38h] BYREF
  LARGE_INTEGER Timeout; // [rsp+80h] [rbp+8h] BYREF

  v2 = a2;
  v3 = a2 != 0;
  v5 = a1 == (char *)&PopFxNoFaultSystemWorkPool;
  if ( a2 )
    *(_QWORD *)&a1[8 * a2 + 264] = KeGetCurrentThread();
  *(__m128i *)Object = _mm_add_epi64(
                         _mm_slli_epi64(_mm_unpacklo_epi32(_mm_load_si128((const __m128i *)&_xmm), (__m128i)0LL), 5u),
                         _mm_unpacklo_epi64((__m128i)(unsigned __int64)(a1 + 32), (__m128i)(unsigned __int64)(a1 + 32)));
  while ( 1 )
  {
    Timeout.QuadPart = 0LL;
    if ( KeWaitForSingleObject(&a1[32 * v3 + 32], Executive, 0, 0, &Timeout) != 258 )
    {
      v8 = v3;
      goto LABEL_11;
    }
    if ( (_DWORD)v2 )
    {
      Timeout.QuadPart = -50000LL;
      p_Timeout = &Timeout;
    }
    else
    {
      p_Timeout = 0LL;
    }
    result = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, p_Timeout, 0LL);
    v8 = result;
    if ( result == 258 )
      break;
LABEL_11:
    if ( (unsigned int)Feature_Servicing_PofxCriticalRegionFix__private_IsEnabledDeviceUsageNoInline()
      && a1 == (char *)&PopFxNoFaultSystemWorkPool )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
    }
    if ( v8 )
    {
      if ( v8 == 1 )
        PopFxDispatchPluginWorkOnce(*(_QWORD *)a1, v5);
    }
    else
    {
      v10 = ExInterlockedRemoveHeadList((PLIST_ENTRY)a1 + 1, (PKSPIN_LOCK)a1 + 1);
      *v10 = 0LL;
      guard_dispatch_icall_no_overrides(v10[1].Blink, v11, v12, v13);
    }
    if ( (unsigned int)Feature_Servicing_PofxCriticalRegionFix__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( a1 == (char *)&PopFxNoFaultSystemWorkPool )
      {
        v16 = KeGetCurrentThread();
        if ( v16->SpecialApcDisable++ == -1
          && ($81B80DCEA5A02D890AB7B2872B48AC01 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
        {
          KiCheckForKernelApcDelivery(v15, v14);
        }
      }
    }
    if ( !(_DWORD)v2 )
    {
      _m_prefetchw(a1 + 96);
      v18 = *((_DWORD *)a1 + 24);
      do
      {
        v19 = v18;
        v18 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 24, v18, v18);
      }
      while ( v19 != v18 );
      if ( v18 )
        v3 = 0;
      else
        v3 = (v3 + 1) % 2;
    }
  }
  *(_QWORD *)&a1[8 * v2 + 264] = 0LL;
  _InterlockedAnd((volatile signed __int32 *)a1 + 24, ~(1 << (v2 - 1)));
  return result;
}
