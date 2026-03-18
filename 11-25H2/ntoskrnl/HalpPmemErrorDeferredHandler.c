/*
 * XREFs of HalpPmemErrorDeferredHandler @ 0x140552CF0
 * Callers:
 *     HalpErrorDeferredHandler @ 0x140552890 (HalpErrorDeferredHandler.c)
 * Callees:
 *     HalpHvInvokeWheaErrorNotificationCallback @ 0x140548E54 (HalpHvInvokeWheaErrorNotificationCallback.c)
 *     MmGetPageBadStatus @ 0x140669050 (MmGetPageBadStatus.c)
 *     WheaAttemptPhysicalPageOffline @ 0x1407B7B20 (WheaAttemptPhysicalPageOffline.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall HalpPmemErrorDeferredHandler(_QWORD *a1)
{
  _DWORD *v1; // rbx
  __int64 i; // rsi
  unsigned __int64 v4; // rax
  unsigned int v5; // r12d
  __int64 v6; // r15
  char v7; // bp
  int v8; // r8d
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF

  v1 = (_DWORD *)*a1;
  for ( i = 0LL; (unsigned int)i < v1[21]; i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)&v1[6 * i + 24];
    if ( v4 > 0x32 )
    {
      *(_QWORD *)&v1[6 * i + 24] = 50LL;
      v4 = 50LL;
    }
    *(_QWORD *)&v1[6 * i + 26] = 0LL;
    v5 = 0;
    v6 = *(_QWORD *)&v1[6 * i + 22];
    if ( v4 )
    {
      v7 = 0;
      do
      {
        v9 = v6 << 12;
        if ( (unsigned int)MmGetPageBadStatus(&v9)
          || (LOBYTE(v8) = 1, !(unsigned int)WheaAttemptPhysicalPageOffline(v6, 0, v8, 0, (__int64)a1)) )
        {
          *(_QWORD *)&v1[6 * i + 26] |= 1LL << v7;
        }
        ++v5;
        ++v6;
        v7 = v5;
      }
      while ( (unsigned __int64)v5 < *(_QWORD *)&v1[6 * i + 24] );
    }
  }
  if ( HalpHvWheaEnlightenedCpuManager )
    HalpHvInvokeWheaErrorNotificationCallback((__int64)a1);
  ExFreePoolWithTag(v1, 0x576C6148u);
}
