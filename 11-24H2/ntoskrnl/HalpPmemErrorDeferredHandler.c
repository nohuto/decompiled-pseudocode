/*
 * XREFs of HalpPmemErrorDeferredHandler @ 0x140552F30
 * Callers:
 *     HalpErrorDeferredHandler @ 0x140552AD0 (HalpErrorDeferredHandler.c)
 * Callees:
 *     HalpHvInvokeWheaErrorNotificationCallback @ 0x140549004 (HalpHvInvokeWheaErrorNotificationCallback.c)
 *     MmGetPageBadStatus @ 0x140675C80 (MmGetPageBadStatus.c)
 *     WheaAttemptPhysicalPageOffline @ 0x1407C7790 (WheaAttemptPhysicalPageOffline.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall HalpPmemErrorDeferredHandler(_QWORD *a1, __int64 a2)
{
  _DWORD *v2; // rbx
  __int64 i; // rsi
  unsigned __int64 v5; // rax
  unsigned int v6; // r12d
  __int64 v7; // r15
  char v8; // bp
  int v9; // r8d
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF

  v2 = (_DWORD *)*a1;
  for ( i = 0LL; (unsigned int)i < v2[21]; i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)&v2[6 * i + 24];
    if ( v5 > 0x32 )
    {
      *(_QWORD *)&v2[6 * i + 24] = 50LL;
      v5 = 50LL;
    }
    *(_QWORD *)&v2[6 * i + 26] = 0LL;
    v6 = 0;
    v7 = *(_QWORD *)&v2[6 * i + 22];
    if ( v5 )
    {
      v8 = 0;
      do
      {
        v10 = v7 << 12;
        if ( (unsigned int)MmGetPageBadStatus(&v10)
          || (LOBYTE(v9) = 1, !(unsigned int)WheaAttemptPhysicalPageOffline(v7, 0, v9, 0, (__int64)a1)) )
        {
          *(_QWORD *)&v2[6 * i + 26] |= 1LL << v8;
        }
        ++v6;
        ++v7;
        v8 = v6;
      }
      while ( (unsigned __int64)v6 < *(_QWORD *)&v2[6 * i + 24] );
    }
  }
  if ( HalpHvWheaEnlightenedCpuManager )
    HalpHvInvokeWheaErrorNotificationCallback((__int64)a1, a2);
  ExFreePoolWithTag(v2, 0x576C6148u);
}
