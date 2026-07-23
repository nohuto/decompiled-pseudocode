/*
 * XREFs of ViMiscValidateKeWaitUsage @ 0x140BA1564
 * Callers:
 *     VfMiscKeWaitForMultipleObjects_Entry @ 0x140BA0040 (VfMiscKeWaitForMultipleObjects_Entry.c)
 *     VfMiscKeWaitForSingleObject_Entry @ 0x140BA0070 (VfMiscKeWaitForSingleObject_Entry.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x140235480 (RtlpGetStackLimits.c)
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 *     ViMiscValidateSynchronizationObject @ 0x140BA16A8 (ViMiscValidateSynchronizationObject.c)
 */

char __fastcall ViMiscValidateKeWaitUsage(unsigned int a1, ULONG_PTR *a2, char a3, _QWORD *a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v9; // rbp
  int v10; // eax
  __int64 v11; // rdx
  int v12; // esi
  __int64 v13; // rdi
  ULONG_PTR v14; // rbx
  ULONG_PTR v16; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR v17; // [rsp+48h] [rbp-20h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = a1;
  if ( (CurrentThread->MiscFlags & 4) != 0 )
    LOBYTE(v10) = CurrentThread->WaitIrql;
  else
    LOBYTE(v10) = KeGetCurrentIrql();
  if ( (unsigned __int8)v10 <= 2u )
  {
    if ( (_BYTE)v10 != 2 )
      goto LABEL_12;
    if ( a4 )
    {
      if ( !*a4 )
        goto LABEL_12;
      v11 = 290LL;
    }
    else
    {
      v11 = 289LL;
    }
  }
  else
  {
    v11 = 288LL;
  }
  LOBYTE(v10) = CarReportRuleViolationFromNt(196, v11, (unsigned __int8)v10, *a2, (__int64)a4, 0xBu, a5);
LABEL_12:
  if ( a3 == 1 && (!a4 || *a4) && (v10 = *(&CurrentThread->MiscFlags + 1), (v10 & 0x40) != 0) )
  {
    LOBYTE(v10) = RtlpGetStackLimits((__int64)&v16, (__int64)&v17);
    v12 = (unsigned __int8)v10;
  }
  else
  {
    v12 = 0;
  }
  if ( (_DWORD)v9 )
  {
    v13 = v9;
    do
    {
      v14 = *a2;
      LOBYTE(v10) = ViMiscValidateSynchronizationObject(*a2);
      if ( v12 && v14 >= v16 && v14 < v17 )
        LOBYTE(v10) = CarReportRuleViolationFromNt(196, 291LL, v14, 0LL, 0LL, 0xBu, a5);
      ++a2;
      --v13;
    }
    while ( v13 );
  }
  return v10;
}
