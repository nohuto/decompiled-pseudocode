/*
 * XREFs of PfpPartitionCreate @ 0x1405C9F7C
 * Callers:
 *     PfpPartitionFindOrCreate @ 0x1407456D0 (PfpPartitionFindOrCreate.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAware @ 0x140238FA0 (ExAcquireRundownProtectionCacheAware.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     PfpPartitionInsertToGlobals @ 0x1405CA130 (PfpPartitionInsertToGlobals.c)
 *     PfpTraceLogPartitionId @ 0x1405CA2A0 (PfpTraceLogPartitionId.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PfpPartitionAllocateState @ 0x14074565C (PfpPartitionAllocateState.c)
 *     PfpPartitionCleanup @ 0x1407456A0 (PfpPartitionCleanup.c)
 *     PfpPartitionInitialize @ 0x14074586C (PfpPartitionInitialize.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpPartitionCreate(PEX_RUNDOWN_REF_CACHE_AWARE **a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  int v7; // eax
  __int64 Pool2; // rax
  PEX_RUNDOWN_REF_CACHE_AWARE *v9; // rdi
  int State; // ebx
  int v11; // eax
  int v13; // [rsp+30h] [rbp-19h] BYREF
  int v14; // [rsp+34h] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15[2]; // [rsp+40h] [rbp-9h] BYREF
  int *v16; // [rsp+60h] [rbp+17h]
  int v17; // [rsp+68h] [rbp+1Fh]
  int v18; // [rsp+6Ch] [rbp+23h]
  int *v19; // [rsp+70h] [rbp+27h]
  int v20; // [rsp+78h] [rbp+2Fh]
  int v21; // [rsp+7Ch] [rbp+33h]

  if ( (unsigned int)dword_140E074B8 > 4 && tlgKeywordOn((__int64)&dword_140E074B8, 1LL) )
  {
    v7 = PfpTraceLogPartitionId(v6);
    v18 = 0;
    v13 = v7;
    v17 = 4;
    v16 = &v13;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E074B8, (unsigned __int8 *)&dword_14004859C, 0LL, 0LL, 3u, v15);
  }
  Pool2 = ExAllocatePool2(0x40uLL, 0x320uLL, 0x74506650u);
  v9 = (PEX_RUNDOWN_REF_CACHE_AWARE *)Pool2;
  if ( Pool2 )
  {
    PfpPartitionInitialize(Pool2, a3, a2);
    State = PfpPartitionAllocateState(v9);
    if ( State < 0 || (State = PfpPartitionInsertToGlobals(v9), State < 0) )
    {
      PfpPartitionCleanup(v9);
      ExFreePoolWithTag(v9, 0x74506650u);
    }
    else
    {
      ExAcquireRundownProtectionCacheAware(v9[2]);
      State = 0;
      *a1 = v9;
    }
  }
  else
  {
    State = -1073741670;
  }
  if ( (unsigned int)dword_140E074B8 > 4 && tlgKeywordOn((__int64)&dword_140E074B8, 1LL) )
  {
    v11 = PfpTraceLogPartitionId(a3);
    v18 = 0;
    v21 = 0;
    v13 = v11;
    v17 = 4;
    v16 = &v13;
    v14 = State;
    v19 = &v14;
    v20 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E074B8, (unsigned __int8 *)&word_1400485F6, 0LL, 0LL, 4u, v15);
  }
  return (unsigned int)State;
}
