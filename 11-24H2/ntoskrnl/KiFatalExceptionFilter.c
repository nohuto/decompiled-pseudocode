/*
 * XREFs of KiFatalExceptionFilter @ 0x140C5E818
 * Callers:
 *     KiLockServiceTable @ 0x1406964A8 (KiLockServiceTable.c)
 * Callees:
 *     RtlCaptureImageExceptionValues @ 0x1402EEB24 (RtlCaptureImageExceptionValues.c)
 *     KeBugCheck @ 0x1404F9230 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     RtlLookupExceptionHandler @ 0x1405E5E28 (RtlLookupExceptionHandler.c)
 */

__int64 KiFatalExceptionFilter()
{
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v1; // r9
  ULONG v2; // edx
  char *v3; // rbx
  unsigned int *v4; // rcx
  unsigned __int64 v5; // r8
  int v6; // r10d
  int v7; // edx
  int v8; // eax
  ULONG v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  ULONG_PTR v12; // [rsp+60h] [rbp+18h] BYREF

  _mm_lfence();
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentPrcb->HalReserved[6] = (unsigned __int64)KiServiceTablesLocked;
  RtlCaptureImageExceptionValues((void *)0x140000000LL, &v11, &v10);
  if ( !v11 )
    goto LABEL_16;
  v2 = v10 / 0xC;
  if ( !(v10 / 0xC) )
    goto LABEL_16;
  v3 = (char *)KiServiceTablesLocked - 0x140000000LL;
  v4 = (unsigned int *)(v11 + 12LL * (v2 - 1));
  v5 = *v4;
  if ( (unsigned __int64)KiServiceTablesLocked - 0x140000000LL < v5 )
  {
    v6 = 0;
    v1 = v2 - 2;
    if ( (int)v1 >= 0 )
    {
      do
      {
        v7 = (v6 + (int)v1) >> 1;
        v4 = (unsigned int *)(v11 + 12LL * v7);
        if ( (unsigned __int64)v3 >= *v4 )
        {
          LODWORD(v5) = *v4;
          if ( (unsigned __int64)v3 < v4[3] )
            break;
          v6 = v7 + 1;
        }
        else
        {
          v1 = (unsigned int)(v7 - 1);
        }
        LODWORD(v5) = *v4;
      }
      while ( (int)v1 >= v6 );
    }
  }
  if ( (unsigned __int64)v3 < (unsigned int)v5 || (unsigned __int64)v3 >= v4[1] || !v4 )
LABEL_16:
    KeBugCheck(0x31u);
  v8 = RtlLookupExceptionHandler(v4, 0x140000000uLL, 1u, v1, &v12, 0LL);
  if ( v8 < 0 )
    KeBugCheckEx(0x31u, v8, 0LL, 0LL, 0LL);
  CurrentPrcb->HalReserved[5] = v12;
  KiHardwareTriggerLock = 0LL;
  return 0LL;
}
