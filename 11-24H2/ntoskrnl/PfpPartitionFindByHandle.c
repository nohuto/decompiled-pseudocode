/*
 * XREFs of PfpPartitionFindByHandle @ 0x1408F6998
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1408F573C (PfSetSuperfetchInformation.c)
 *     PfGetCompletedTrace @ 0x1408F64A0 (PfGetCompletedTrace.c)
 * Callees:
 *     PfpPartitionDereferenceParent @ 0x14022A25C (PfpPartitionDereferenceParent.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PfpPartitionRundownProtectionAcquire @ 0x140473AB8 (PfpPartitionRundownProtectionAcquire.c)
 *     PfpPartitionFromParent @ 0x140492A30 (PfpPartitionFromParent.c)
 *     PfpTraceLogPartitionId @ 0x1405CA2A0 (PfpTraceLogPartitionId.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PsReferencePartitionByHandle @ 0x1408F6F54 (PsReferencePartitionByHandle.c)
 */

__int64 __fastcall PfpPartitionFindByHandle(__int64 *a1, __int64 *a2, __int64 a3, char a4)
{
  __int64 v5; // rsi
  char v8; // di
  int v10; // eax
  __int64 v11; // rbx
  unsigned int v12; // esi
  __int64 v13; // rax
  __int64 v14; // rsi
  int v16; // eax
  __int64 v17; // [rsp+30h] [rbp-29h] BYREF
  int v18; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19[2]; // [rsp+40h] [rbp-19h] BYREF
  int *v20; // [rsp+60h] [rbp+7h]
  int v21; // [rsp+68h] [rbp+Fh]
  int v22; // [rsp+6Ch] [rbp+13h]
  __int64 *v23; // [rsp+70h] [rbp+17h]
  int v24; // [rsp+78h] [rbp+1Fh]
  int v25; // [rsp+7Ch] [rbp+23h]

  v17 = 0LL;
  v5 = a3;
  v8 = 1;
  if ( (unsigned int)dword_140E074B8 > 4 && (byte_140E074C8 & 1) != 0 && (qword_140E074D0 & 1) == qword_140E074D0 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E074B8, (unsigned __int8 *)&byte_14004865F, 0LL, 0LL, 2u, v19);
  LOBYTE(a3) = a4;
  v10 = PsReferencePartitionByHandle(v5, 1LL, a3, 1951426128LL, &v17);
  v11 = v17;
  v12 = v10;
  if ( v10 >= 0 )
  {
    v13 = PfpPartitionFromParent(v17);
    v14 = v13;
    if ( v13 )
    {
      PfpPartitionRundownProtectionAcquire(v13);
      *a1 = v14;
      *a2 = v11;
      v11 = 0LL;
      v12 = 0;
    }
    else
    {
      v12 = -1073741275;
    }
  }
  if ( (unsigned int)dword_140E074B8 > 4 )
  {
    if ( (byte_140E074C8 & 1) == 0 || (qword_140E074D0 & 1) != qword_140E074D0 )
      v8 = 0;
    if ( v8 )
    {
      v16 = PfpTraceLogPartitionId(v11);
      v22 = 0;
      v25 = 0;
      v18 = v16;
      v21 = 4;
      v20 = &v18;
      LODWORD(v17) = v12;
      v23 = &v17;
      v24 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E074B8,
        (unsigned __int8 *)&dword_14004852C,
        0LL,
        0LL,
        4u,
        v19);
    }
  }
  if ( v11 )
    PfpPartitionDereferenceParent(v11);
  return v12;
}
