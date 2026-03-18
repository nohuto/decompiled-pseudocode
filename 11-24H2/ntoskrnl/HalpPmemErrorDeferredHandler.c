/*
 * XREFs of HalpPmemErrorDeferredHandler @ 0x1405555F0
 * Callers:
 *     HalpErrorDeferredHandler @ 0x140555190 (HalpErrorDeferredHandler.c)
 * Callees:
 *     HalpHvInvokeWheaErrorNotificationCallback @ 0x14054B744 (HalpHvInvokeWheaErrorNotificationCallback.c)
 *     MmGetPageBadStatus @ 0x140674AB0 (MmGetPageBadStatus.c)
 *     WheaAttemptPhysicalPageOffline @ 0x1407C72F0 (WheaAttemptPhysicalPageOffline.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall HalpPmemErrorDeferredHandler(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rbx
  __int64 i; // rsi
  unsigned __int64 v7; // rax
  unsigned int v8; // r12d
  __int64 v9; // r15
  char v10; // bp
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v4 = (_DWORD *)*a1;
  for ( i = 0LL; (unsigned int)i < v4[21]; i = (unsigned int)(i + 1) )
  {
    v7 = *(_QWORD *)&v4[6 * i + 24];
    if ( v7 > 0x32 )
    {
      *(_QWORD *)&v4[6 * i + 24] = 50LL;
      v7 = 50LL;
    }
    *(_QWORD *)&v4[6 * i + 26] = 0LL;
    v8 = 0;
    v9 = *(_QWORD *)&v4[6 * i + 22];
    if ( v7 )
    {
      v10 = 0;
      do
      {
        v11 = v9 << 12;
        if ( (unsigned int)MmGetPageBadStatus(&v11)
          || (LOBYTE(a3) = 1, !(unsigned int)WheaAttemptPhysicalPageOffline(v9, 0, a3, 0, (__int64)a1)) )
        {
          *(_QWORD *)&v4[6 * i + 26] |= 1LL << v10;
        }
        ++v8;
        ++v9;
        v10 = v8;
      }
      while ( (unsigned __int64)v8 < *(_QWORD *)&v4[6 * i + 24] );
    }
  }
  if ( HalpHvWheaEnlightenedCpuManager )
    HalpHvInvokeWheaErrorNotificationCallback((__int64)a1, a2, a3, a4);
  ExFreePoolWithTag(v4, 0x576C6148u);
}
