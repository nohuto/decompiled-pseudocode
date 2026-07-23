/*
 * XREFs of PfDeletePartition @ 0x140745504
 * Callers:
 *     MiDeletePartitionResources @ 0x1407FC4B4 (MiDeletePartitionResources.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x1404501F0 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     PfpPartitionFromParent @ 0x140492A30 (PfpPartitionFromParent.c)
 *     PfpPartitionRemoveFromGlobals @ 0x1405CA20C (PfpPartitionRemoveFromGlobals.c)
 *     PfpTraceLogPfPartitionId @ 0x1405CA2BC (PfpTraceLogPfPartitionId.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PfpPartitionCleanup @ 0x1407456A0 (PfpPartitionCleanup.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char __fastcall PfDeletePartition(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  int v4; // eax
  int v6; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7[2]; // [rsp+38h] [rbp-38h] BYREF
  int *v8; // [rsp+58h] [rbp-18h]
  int v9; // [rsp+60h] [rbp-10h]
  int v10; // [rsp+64h] [rbp-Ch]

  v2 = PfpPartitionFromParent(a1);
  v3 = v2;
  if ( v2 )
  {
    if ( (unsigned int)dword_140E074B8 > 4 && tlgKeywordOn((__int64)&dword_140E074B8, 1LL) )
    {
      v10 = 0;
      v6 = PfpTraceLogPfPartitionId((__int64 *)v3);
      v9 = 4;
      v8 = &v6;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E074B8, (unsigned __int8 *)byte_1400485C9, 0LL, 0LL, 3u, v7);
    }
    ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v3 + 16));
    PfpPartitionRemoveFromGlobals(v3);
    PfpPartitionCleanup(v3);
    ExFreePoolWithTag((PVOID)v3, 0x74506650u);
    LOBYTE(v2) = (_BYTE)MmBadPointer;
    *(_QWORD *)(a1 + 32) = MmBadPointer;
    if ( (unsigned int)dword_140E074B8 > 4 )
    {
      LOBYTE(v2) = tlgKeywordOn((__int64)&dword_140E074B8, 1LL);
      if ( (_BYTE)v2 )
      {
        v4 = PfpTraceLogPfPartitionId((__int64 *)v3);
        v10 = 0;
        v6 = v4;
        v9 = 4;
        v8 = &v6;
        LOBYTE(v2) = tlgWriteTransfer_EtwWriteTransfer(
                       (__int64)&dword_140E074B8,
                       (unsigned __int8 *)&byte_1400484FF,
                       0LL,
                       0LL,
                       3u,
                       v7);
      }
    }
  }
  return v2;
}
