/*
 * XREFs of RtlpHpSegFreeRangeRemove @ 0x180051C60
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x180051620 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextCompact @ 0x180051930 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x180054AD0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x1800D7EE8 (RtlpHpSegLargeRangeAllocate.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180051AD4 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlRbRemoveNode @ 0x180051DA0 (RtlRbRemoveNode.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpSegFreeRangeRemove(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int16 v6; // ax
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 *v9; // rcx
  __int64 v10; // [rsp+30h] [rbp-59h] BYREF
  __int64 v11; // [rsp+38h] [rbp-51h] BYREF
  __int64 v12; // [rsp+40h] [rbp-49h] BYREF
  __int64 v13; // [rsp+48h] [rbp-41h] BYREF
  __int64 v14; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v15[32]; // [rsp+60h] [rbp-29h] BYREF
  __int64 *v16; // [rsp+80h] [rbp-9h]
  __int64 v17; // [rsp+88h] [rbp-1h]
  __int64 *v18; // [rsp+90h] [rbp+7h]
  __int64 v19; // [rsp+98h] [rbp+Fh]
  __int64 *v20; // [rsp+A0h] [rbp+17h]
  __int64 v21; // [rsp+A8h] [rbp+1Fh]
  __int64 *v22; // [rsp+B0h] [rbp+27h]
  __int64 v23; // [rsp+B8h] [rbp+2Fh]
  __int64 *v24; // [rsp+C0h] [rbp+37h]
  __int64 v25; // [rsp+C8h] [rbp+3Fh]

  RtlRbRemoveNode(a1 + 96, a2);
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v6 = ~(unsigned __int16)*(_DWORD *)(a2 + 28);
  *(_DWORD *)a2 = -857879331;
  v7 = v6;
  result = *(__int16 *)(a1 + 22);
  _InterlockedAdd64((volatile signed __int64 *)(result + a1 + 16), -v7);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
  {
    result = *(_QWORD *)(a1 + 56);
    v9 = (__int64 *)(a1 + *(__int16 *)(a1 + 22));
    if ( (unsigned int)dword_1801CC670 > 5 )
    {
      v10 = *(_QWORD *)(a1 + 56);
      v17 = 8LL;
      v16 = &v10;
      v11 = *v9;
      v18 = &v11;
      v12 = v9[1];
      v20 = &v12;
      v13 = v9[2];
      v22 = &v13;
      v14 = v9[3];
      v24 = &v14;
      v19 = 8LL;
      v21 = 8LL;
      v23 = 8LL;
      v25 = 8LL;
      return tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_1801CC670, byte_1801A2363, v4, v5, 7, (__int64)v15);
    }
  }
  return result;
}
