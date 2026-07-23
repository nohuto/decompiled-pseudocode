/*
 * XREFs of PfpPartitionFindOrCreate @ 0x1407456D0
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1408F573C (PfSetSuperfetchInformation.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     PfpPartitionRundownProtectionAcquire @ 0x140473AB8 (PfpPartitionRundownProtectionAcquire.c)
 *     PfpPartitionFromParent @ 0x140492A30 (PfpPartitionFromParent.c)
 *     PfpPartitionCreate @ 0x1405C9F7C (PfpPartitionCreate.c)
 *     PfpTraceLogPartitionId @ 0x1405CA2A0 (PfpTraceLogPartitionId.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall PfpPartitionFindOrCreate(PEX_RUNDOWN_REF_CACHE_AWARE **a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  PEX_RUNDOWN_REF_CACHE_AWARE *v7; // rax
  PEX_RUNDOWN_REF_CACHE_AWARE *v8; // rbx
  int v9; // ebx
  int v10; // eax
  int v12; // [rsp+30h] [rbp-19h] BYREF
  PEX_RUNDOWN_REF_CACHE_AWARE *v13; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14[2]; // [rsp+40h] [rbp-9h] BYREF
  int *v15; // [rsp+60h] [rbp+17h]
  int v16; // [rsp+68h] [rbp+1Fh]
  int v17; // [rsp+6Ch] [rbp+23h]
  PEX_RUNDOWN_REF_CACHE_AWARE **v18; // [rsp+70h] [rbp+27h]
  int v19; // [rsp+78h] [rbp+2Fh]
  int v20; // [rsp+7Ch] [rbp+33h]

  if ( (unsigned int)dword_140E074B8 > 4 && tlgKeywordOn((__int64)&dword_140E074B8, 1LL) )
  {
    v17 = 0;
    v12 = PfpTraceLogPartitionId(v6);
    v16 = 4;
    v15 = &v12;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E074B8, (unsigned __int8 *)&dword_14004862C, 0LL, 0LL, 3u, v14);
  }
  v7 = (PEX_RUNDOWN_REF_CACHE_AWARE *)PfpPartitionFromParent(a3);
  v13 = v7;
  v8 = v7;
  if ( v7 )
  {
    PfpPartitionRundownProtectionAcquire((__int64)v7);
    *a1 = v8;
LABEL_8:
    v9 = 0;
    goto LABEL_9;
  }
  v9 = PfpPartitionCreate(&v13, a2, a3);
  if ( v9 >= 0 )
  {
    *a1 = v13;
    goto LABEL_8;
  }
LABEL_9:
  if ( (unsigned int)dword_140E074B8 > 4 && tlgKeywordOn((__int64)&dword_140E074B8, 1LL) )
  {
    v10 = PfpTraceLogPartitionId(a3);
    v17 = 0;
    v20 = 0;
    v12 = v10;
    v16 = 4;
    v15 = &v12;
    LODWORD(v13) = v9;
    v18 = &v13;
    v19 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E074B8, (unsigned __int8 *)&unk_140048560, 0LL, 0LL, 4u, v14);
  }
  return (unsigned int)v9;
}
