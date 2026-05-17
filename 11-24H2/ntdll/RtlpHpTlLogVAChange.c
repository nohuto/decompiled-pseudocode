/*
 * XREFs of RtlpHpTlLogVAChange @ 0x180092B90
 * Callers:
 *     RtlpHpSegMgrRelease @ 0x18005589C (RtlpHpSegMgrRelease.c)
 *     RtlpHpHeapDestroy @ 0x180090050 (RtlpHpHeapDestroy.c)
 *     RtlpHpSegMgrReserve @ 0x180091724 (RtlpHpSegMgrReserve.c)
 *     RtlpHpSegMgrCommit @ 0x180091A20 (RtlpHpSegMgrCommit.c)
 *     RtlpHpAllocVA @ 0x180092190 (RtlpHpAllocVA.c)
 *     RtlpHpFreeVA @ 0x1800925C0 (RtlpHpFreeVA.c)
 *     RtlpHpLargeFree @ 0x1800938E4 (RtlpHpLargeFree.c)
 *     RtlpHpLargeReAlloc @ 0x180093AA4 (RtlpHpLargeReAlloc.c)
 *     RtlpHpLargeAlloc @ 0x180093F08 (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1800FAE54 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180051AD4 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

void __fastcall RtlpHpTlLogVAChange(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rax
  unsigned __int8 *v5; // rdx
  int v6; // [rsp+30h] [rbp-29h] BYREF
  __int64 v7; // [rsp+38h] [rbp-21h] BYREF
  _QWORD v8[2]; // [rsp+40h] [rbp-19h] BYREF
  char v9[32]; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v10; // [rsp+70h] [rbp+17h]
  __int64 v11; // [rsp+78h] [rbp+1Fh]
  __int64 *v12; // [rsp+80h] [rbp+27h]
  __int64 v13; // [rsp+88h] [rbp+2Fh]
  int *v14; // [rsp+90h] [rbp+37h]
  __int64 v15; // [rsp+98h] [rbp+3Fh]

  switch ( a1 )
  {
    case 0x1000:
      if ( (unsigned int)dword_1801CC670 <= 5 )
        return;
      v8[0] = a2;
      v12 = &v7;
      v5 = (unsigned __int8 *)&unk_1801A242E;
      goto LABEL_13;
    case 0x2000:
      if ( (unsigned int)dword_1801CC670 <= 5 )
        return;
      v8[0] = a2;
      v12 = &v7;
      v5 = (unsigned __int8 *)&unk_1801A232D;
      goto LABEL_13;
    case 0x4000:
      if ( (unsigned int)dword_1801CC670 <= 5 )
        return;
      v8[0] = a2;
      v12 = &v7;
      v5 = (unsigned __int8 *)&unk_1801A22F6;
LABEL_13:
      v4 = v8;
      v7 = a3;
      goto LABEL_14;
  }
  if ( a1 == 0x8000 && (unsigned int)dword_1801CC670 > 5 )
  {
    v7 = a2;
    v4 = &v7;
    v8[0] = a3;
    v12 = v8;
    v5 = (unsigned __int8 *)&unk_1801A23F8;
LABEL_14:
    v10 = v4;
    v14 = &v6;
    v11 = 8LL;
    v13 = 8LL;
    v6 = a4;
    v15 = 4LL;
    tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_1801CC670, v5, a3, a4, 5, (__int64)v9);
  }
}
