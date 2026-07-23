/*
 * XREFs of PopFxProcessWorkPool @ 0x1404E24A0
 * Callers:
 *     PopFxStaticWorkPoolThread @ 0x1405CF660 (PopFxStaticWorkPoolThread.c)
 *     PopFxPluginWork @ 0x1409FFFA0 (PopFxPluginWork.c)
 * Callees:
 *     PopFxDispatchPluginWorkOnce @ 0x1402BE9E4 (PopFxDispatchPluginWorkOnce.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     ExInterlockedRemoveHeadList @ 0x1404209E0 (ExInterlockedRemoveHeadList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __fastcall PopFxProcessWorkPool(char *a1, unsigned int a2)
{
  __int64 v2; // rsi
  int v3; // edi
  unsigned int v5; // r14d
  LARGE_INTEGER *p_Timeout; // rax
  NTSTATUS result; // eax
  int v8; // ecx
  struct _KTHREAD *CurrentThread; // rax
  PLIST_ENTRY v10; // rax
  __int64 v11; // rdx
  struct _KTHREAD *v12; // rax
  signed __int32 v14; // eax
  signed __int32 v15; // ett
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
    if ( a1 == (char *)&PopFxNoFaultSystemWorkPool )
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
      guard_dispatch_icall_no_overrides(v10[1].Blink, v11);
    }
    if ( a1 == (char *)&PopFxNoFaultSystemWorkPool )
    {
      v12 = KeGetCurrentThread();
      if ( v12->SpecialApcDisable++ == -1
        && ($727077A9B6E167EAE1398C74674DC5A5 *)v12->ApcState.ApcListHead[0].Flink != &v12->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    if ( !(_DWORD)v2 )
    {
      _m_prefetchw(a1 + 96);
      v14 = *((_DWORD *)a1 + 24);
      do
      {
        v15 = v14;
        v14 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 24, v14, v14);
      }
      while ( v15 != v14 );
      if ( v14 )
        v3 = 0;
      else
        v3 = (v3 + 1) % 2;
    }
  }
  *(_QWORD *)&a1[8 * v2 + 264] = 0LL;
  _InterlockedAnd((volatile signed __int32 *)a1 + 24, ~(1 << (v2 - 1)));
  return result;
}
