/*
 * XREFs of EtwpFlushActiveBuffers @ 0x1800A9D24
 * Callers:
 *     EtwpLogger @ 0x1800A9700 (EtwpLogger.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     EtwpSendSessionNotification @ 0x1800A7C18 (EtwpSendSessionNotification.c)
 *     EtwpWaitForBufferReferenceCount @ 0x1800A9EFC (EtwpWaitForBufferReferenceCount.c)
 *     RtlWakeAllConditionVariable @ 0x1800A9F40 (RtlWakeAllConditionVariable.c)
 *     EtwpFlushBuffer @ 0x1800A9FC0 (EtwpFlushBuffer.c)
 */

__int64 __fastcall EtwpFlushActiveBuffers(__int64 a1, int a2)
{
  unsigned int v2; // r14d
  _RTL_CRITICAL_SECTION *v3; // rbp
  __int64 v4; // rdi
  unsigned int v7; // esi
  __int16 v8; // r13
  _QWORD **v9; // rax
  _QWORD *v10; // rdi
  __int16 v12; // r14
  _QWORD *v13; // r15
  _QWORD *v14; // r13
  __int64 *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned __int32 v18; // eax
  __int64 v19; // rcx
  unsigned __int16 v20; // [rsp+58h] [rbp+10h]

  v2 = *(_DWORD *)(a1 + 192);
  v3 = (_RTL_CRITICAL_SECTION *)(a1 + 72);
  v4 = *(unsigned int *)(a1 + 188);
  v7 = 0;
  v8 = 0;
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 72));
  if ( a2 == 1 && (_DWORD)v4 )
  {
    v15 = (__int64 *)(a1 + 560);
    v16 = v4;
    do
    {
      v17 = *v15;
      if ( *v15 && *(_DWORD *)(v17 + 8) != 72 )
      {
        *v15 = 0LL;
        v18 = _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 8), v2);
        if ( v18 <= v2 )
          *(_DWORD *)(v17 + 4) = v18;
        *(_DWORD *)(v17 + 44) = 3;
        v19 = v17 + 32;
        **(_QWORD **)(a1 + 264) = v19;
        *(_QWORD *)(a1 + 264) = v19;
      }
      ++v15;
      --v16;
    }
    while ( v16 );
  }
  v9 = *(_QWORD ***)(a1 + 256);
  if ( v9 == *(_QWORD ***)(a1 + 264) )
  {
    v10 = 0LL;
  }
  else
  {
    v10 = *v9;
    *v9 = 0LL;
    *(_QWORD *)(a1 + 264) = *(_QWORD *)(a1 + 256);
  }
  RtlLeaveCriticalSection(v3);
  if ( v10 )
  {
    v12 = a2 != 0;
    do
    {
      v13 = v10;
      if ( !*v10 )
        v8 = v12;
      v20 = v8;
      v14 = v10;
      v10 = (_QWORD *)*v10;
      EtwpWaitForBufferReferenceCount(v13 - 4);
      v7 = EtwpFlushBuffer(a1, v13 - 4, v20);
      if ( (int)(v7 + 0x80000000) >= 0 && v7 != -2147483614 )
        EtwpSendSessionNotification(a1, 3, v7);
      RtlEnterCriticalSection(v3);
      *((_DWORD *)v14 + 3) = 0;
      *v13 = 0LL;
      *(v14 - 1) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 400));
      **(_QWORD **)(a1 + 240) = v13;
      *(_QWORD *)(a1 + 240) = v13;
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 212));
      RtlLeaveCriticalSection(v3);
      RtlWakeAllConditionVariable((PRTL_CONDITION_VARIABLE)(a1 + 64));
      v8 = v20;
      *(_DWORD *)(a1 + 40) = v7;
    }
    while ( v10 );
  }
  return v7;
}
