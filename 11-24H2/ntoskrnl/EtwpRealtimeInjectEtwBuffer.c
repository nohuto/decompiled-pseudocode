/*
 * XREFs of EtwpRealtimeInjectEtwBuffer @ 0x1409D4930
 * Callers:
 *     EtwpRealtimeNotifyConsumers @ 0x1409D3224 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpRealtimeDeliverBuffer @ 0x1409D47A8 (EtwpRealtimeDeliverBuffer.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     EtwpIsSingleStreamLogger @ 0x14027D648 (EtwpIsSingleStreamLogger.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     EtwpFreeUserBufferSpace @ 0x1407B1B48 (EtwpFreeUserBufferSpace.c)
 *     EtwpFindUserBufferSpace @ 0x1409D4B34 (EtwpFindUserBufferSpace.c)
 */

__int64 __fastcall EtwpRealtimeInjectEtwBuffer(_DWORD *a1, __int64 a2, __int64 a3)
{
  _KPROCESS **v6; // rdi
  _DWORD *v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  int UserBufferSpace; // esi
  volatile signed __int32 *v11; // rdx
  signed __int64 v12; // rax
  signed __int64 v13; // rcx
  int v14; // ecx
  void *v16; // [rsp+28h] [rbp-80h] BYREF
  signed __int64 v17; // [rsp+30h] [rbp-78h]
  __int64 v18; // [rsp+38h] [rbp-70h]
  __int64 v19; // [rsp+40h] [rbp-68h]
  __int64 v20; // [rsp+48h] [rbp-60h]
  char *v21; // [rsp+50h] [rbp-58h]
  _OWORD v22[3]; // [rsp+58h] [rbp-50h] BYREF

  v20 = a2;
  v19 = a3;
  memset(v22, 0, sizeof(v22));
  v16 = 0LL;
  if ( *(_WORD *)(a3 + 54) == 6 )
  {
    ++*(_DWORD *)(a2 + 84);
    if ( EtwpIsSingleStreamLogger((__int64)a1) || *(_DWORD *)(a2 + 84) > 2u )
      return 0LL;
  }
  else
  {
    *(_DWORD *)(a2 + 84) = 0;
  }
  v6 = (_KPROCESS **)(a2 + 24);
  v18 = a2 + 24;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a2 + 24) + 488LL)) )
    return 3221225738LL;
  KiStackAttachProcess(*v6, 0, (__int64)v22);
  **(_DWORD **)(a2 + 136) = a1[60];
  **(_DWORD **)(a2 + 144) = a1[65];
  v9 = (unsigned int)(4 * a1[59]);
  if ( **(_DWORD **)(a2 + 64) < (unsigned int)v9 )
  {
    UserBufferSpace = EtwpFindUserBufferSpace(v9, a2, *(unsigned int *)(a3 + 48), &v16);
    if ( UserBufferSpace >= 0 )
    {
      memmove(v16, (const void *)a3, *(unsigned int *)(a3 + 48));
      v11 = *(volatile signed __int32 **)(a2 + 72);
      v7 = (char *)v16 + 32;
      if ( (*(_BYTE *)(a2 + 90) & 0x10) != 0 )
      {
        v21 = (char *)v16 + 32;
        LODWORD(v12) = *v11;
        do
        {
          *v7 = v12;
          v14 = v12;
          LODWORD(v12) = _InterlockedCompareExchange(v11, (signed __int32)v7, v12);
        }
        while ( (_DWORD)v12 != v14 );
        v12 = (unsigned int)v12;
      }
      else
      {
        _m_prefetchw((const void *)v11);
        v12 = *(_QWORD *)v11;
        do
        {
          *(_QWORD *)v7 = v12;
          v13 = v12;
          v12 = _InterlockedCompareExchange64((volatile signed __int64 *)v11, (signed __int64)v7, v12);
        }
        while ( v12 != v13 );
      }
      v17 = v12;
      _InterlockedIncrement(*(volatile signed __int32 **)(a2 + 64));
      if ( !v17 )
        KeSetEvent(*(PRKEVENT *)(a2 + 56), 0, 0);
    }
  }
  else
  {
    UserBufferSpace = -1073741764;
  }
  KiUnstackDetachProcess((__int64)v22, 0, (__int64)v7, v8);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&(*v6)[1].ProfileListHead.Blink);
  return (unsigned int)UserBufferSpace;
}
