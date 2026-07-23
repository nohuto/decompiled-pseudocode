/*
 * XREFs of SepImageVerificationCallbackWorker @ 0x14078E370
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyWithProcessing @ 0x140442804 (ExNotifyWithProcessing.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SepImageVerificationCallbackWorker(unsigned int *P)
{
  bool v1; // sf
  __int64 v3; // rdx
  char *v4; // r8
  PCALLBACK_OBJECT v5; // rcx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  v6[1] = 0LL;
  v1 = (P[8] & 0x80000000) != 0;
  v6[0] = &SepImageVerificationCallbackPreProcess;
  v6[2] = *((_QWORD *)P + 5);
  v6[3] = P[12];
  if ( v1 )
  {
    v4 = (char *)(P + 14);
    v3 = 4LL;
    v5 = ExCbSeImageVerificationBlockInfo;
    goto LABEL_5;
  }
  v3 = 1LL;
  if ( (P[9] & 1) != 0 )
  {
    v4 = (char *)(P + 14);
    v5 = (PCALLBACK_OBJECT)ExCbSeImageVerificationDriverInfo;
LABEL_5:
    ExNotifyWithProcessing((__int64)v5, (void *)v3, v4, v6);
  }
  ExFreePoolWithTag(*((PVOID *)P + 5), 0x63734943u);
  ExFreePoolWithTag(P, 0x63734943u);
}
