/*
 * XREFs of EtwpRealtimeInjectEtwBuffer @ 0x140990F70
 * Callers:
 *     EtwpRealtimeDeliverBuffer @ 0x140990DE0 (EtwpRealtimeDeliverBuffer.c)
 *     EtwpRealtimeNotifyConsumers @ 0x1409936EC (EtwpRealtimeNotifyConsumers.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     EtwpIsSingleStreamLogger @ 0x1403E4814 (EtwpIsSingleStreamLogger.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     EtwpFreeUserBufferSpace @ 0x1407A2328 (EtwpFreeUserBufferSpace.c)
 *     EtwpFindUserBufferSpace @ 0x140991174 (EtwpFindUserBufferSpace.c)
 */

__int64 __fastcall EtwpRealtimeInjectEtwBuffer(_DWORD *a1, __int64 a2, __int64 a3)
{
  _KPROCESS **v6; // rdi
  __int64 v7; // rcx
  int UserBufferSpace; // esi
  volatile signed __int32 *v9; // rdx
  _DWORD *v10; // r8
  signed __int64 v11; // rax
  signed __int64 v12; // rcx
  int v13; // ecx
  void *v15; // [rsp+28h] [rbp-80h] BYREF
  signed __int64 v16; // [rsp+30h] [rbp-78h]
  __int64 v17; // [rsp+38h] [rbp-70h]
  __int64 v18; // [rsp+40h] [rbp-68h]
  __int64 v19; // [rsp+48h] [rbp-60h]
  char *v20; // [rsp+50h] [rbp-58h]
  _OWORD v21[3]; // [rsp+58h] [rbp-50h] BYREF

  v19 = a2;
  v18 = a3;
  memset(v21, 0, sizeof(v21));
  v15 = 0LL;
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
  v17 = a2 + 24;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a2 + 24) + 488LL)) )
    return 3221225738LL;
  KiStackAttachProcess(*v6, 0, (__int64)v21);
  **(_DWORD **)(a2 + 136) = a1[60];
  **(_DWORD **)(a2 + 144) = a1[65];
  v7 = (unsigned int)(4 * a1[59]);
  if ( **(_DWORD **)(a2 + 64) < (unsigned int)v7 )
  {
    UserBufferSpace = EtwpFindUserBufferSpace(v7, a2, *(unsigned int *)(a3 + 48), &v15);
    if ( UserBufferSpace >= 0 )
    {
      memmove(v15, (const void *)a3, *(unsigned int *)(a3 + 48));
      v9 = *(volatile signed __int32 **)(a2 + 72);
      v10 = (char *)v15 + 32;
      if ( (*(_BYTE *)(a2 + 90) & 0x10) != 0 )
      {
        v20 = (char *)v15 + 32;
        LODWORD(v11) = *v9;
        do
        {
          *v10 = v11;
          v13 = v11;
          LODWORD(v11) = _InterlockedCompareExchange(v9, (signed __int32)v10, v11);
        }
        while ( (_DWORD)v11 != v13 );
        v11 = (unsigned int)v11;
      }
      else
      {
        _m_prefetchw((const void *)v9);
        v11 = *(_QWORD *)v9;
        do
        {
          *(_QWORD *)v10 = v11;
          v12 = v11;
          v11 = _InterlockedCompareExchange64((volatile signed __int64 *)v9, (signed __int64)v10, v11);
        }
        while ( v11 != v12 );
      }
      v16 = v11;
      _InterlockedIncrement(*(volatile signed __int32 **)(a2 + 64));
      if ( !v16 )
        KeSetEvent(*(PRKEVENT *)(a2 + 56), 0, 0);
    }
  }
  else
  {
    UserBufferSpace = -1073741764;
  }
  KiUnstackDetachProcess((__int64)v21, 0LL);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&(*v6)[1].ProfileListHead.Blink);
  return (unsigned int)UserBufferSpace;
}
