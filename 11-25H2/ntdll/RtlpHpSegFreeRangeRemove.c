/*
 * XREFs of RtlpHpSegFreeRangeRemove @ 0x18000D8A0
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x18000D260 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextCompact @ 0x18000D570 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x180010710 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x1800D54A0 (RtlpHpSegLargeRangeAllocate.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18000D714 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlRbRemoveNode @ 0x18000D9E0 (RtlRbRemoveNode.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

int __fastcall RtlpHpSegFreeRangeRemove(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int16 v6; // ax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int64 v11; // [rsp+30h] [rbp-59h] BYREF
  __int64 v12; // [rsp+38h] [rbp-51h] BYREF
  __int64 v13; // [rsp+40h] [rbp-49h] BYREF
  __int64 v14; // [rsp+48h] [rbp-41h] BYREF
  __int64 v15; // [rsp+50h] [rbp-39h] BYREF
  _EVENT_DATA_DESCRIPTOR v16; // [rsp+60h] [rbp-29h] BYREF
  __int64 *v17; // [rsp+80h] [rbp-9h]
  __int64 v18; // [rsp+88h] [rbp-1h]
  __int64 *v19; // [rsp+90h] [rbp+7h]
  __int64 v20; // [rsp+98h] [rbp+Fh]
  __int64 *v21; // [rsp+A0h] [rbp+17h]
  __int64 v22; // [rsp+A8h] [rbp+1Fh]
  __int64 *v23; // [rsp+B0h] [rbp+27h]
  __int64 v24; // [rsp+B8h] [rbp+2Fh]
  __int64 *v25; // [rsp+C0h] [rbp+37h]
  __int64 v26; // [rsp+C8h] [rbp+3Fh]

  RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)a2);
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v6 = ~(unsigned __int16)*(_DWORD *)(a2 + 28);
  *(_DWORD *)a2 = -857879331;
  v7 = v6;
  v8 = *(__int16 *)(a1 + 22);
  _InterlockedAdd64((volatile signed __int64 *)(v8 + a1 + 16), -v7);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 56);
    v9 = (__int64 *)(a1 + *(__int16 *)(a1 + 22));
    if ( (unsigned int)dword_1801CE670 > 5 )
    {
      v11 = *(_QWORD *)(a1 + 56);
      v18 = 8LL;
      v17 = &v11;
      v12 = *v9;
      v19 = &v12;
      v13 = v9[1];
      v21 = &v13;
      v14 = v9[2];
      v23 = &v14;
      v15 = v9[3];
      v25 = &v15;
      v20 = 8LL;
      v22 = 8LL;
      v24 = 8LL;
      v26 = 8LL;
      LODWORD(v8) = tlgWriteTransfer_EtwEventWriteTransfer(
                      (__int64)&dword_1801CE670,
                      (unsigned __int8 *)dword_1801A43AB,
                      v4,
                      v5,
                      7u,
                      &v16);
    }
  }
  return v8;
}
