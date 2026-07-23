/*
 * XREFs of CcPurgeAndClearCacheSection @ 0x1404568F4
 * Callers:
 *     CcSetFileSizesEx @ 0x1404A10D0 (CcSetFileSizesEx.c)
 * Callees:
 *     CcPurgeCacheSection @ 0x1402070C0 (CcPurgeCacheSection.c)
 *     MmSetAddressRangeModifiedEx @ 0x140208750 (MmSetAddressRangeModifiedEx.c)
 *     MmFlushSection @ 0x140208E14 (MmFlushSection.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402090F0 (ObFastDereferenceObjectDeferDelete.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1402091EC (CcReferenceSharedCacheMapFileObject.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     CcGetVirtualAddress @ 0x140229480 (CcGetVirtualAddress.c)
 *     CcSetDirtyInMask @ 0x140456AF0 (CcSetDirtyInMask.c)
 *     CcUpdateSharedCacheMapFlag @ 0x140457374 (CcUpdateSharedCacheMapFlag.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall CcPurgeAndClearCacheSection(_QWORD *a1, LARGE_INTEGER *a2)
{
  ULONG_PTR v4; // r13
  BOOLEAN v5; // bl
  __int64 result; // rax
  __int64 QuadPart; // rbx
  unsigned int v8; // r14d
  int v9; // r8d
  __int64 v10; // rbx
  struct _KEVENT *v11; // rcx
  __int64 v12; // r8
  int v13; // [rsp+30h] [rbp-78h] BYREF
  LONGLONG v14; // [rsp+38h] [rbp-70h] BYREF
  __int64 v15[2]; // [rsp+40h] [rbp-68h] BYREF
  void *VirtualAddress; // [rsp+50h] [rbp-58h]
  _OWORD v17[5]; // [rsp+58h] [rbp-50h] BYREF

  v14 = 0LL;
  v17[0] = 0LL;
  v15[0] = 0LL;
  v4 = CcReferenceSharedCacheMapFileObject((__int64)a1);
  v15[1] = v4;
  if ( (a2->LowPart & 0xFFF) == 0 )
    goto LABEL_2;
  QuadPart = a2->QuadPart;
  v14 = a2->QuadPart;
  a2 = (LARGE_INTEGER *)&v14;
  if ( a1[22] && a1[11] )
  {
    v8 = 4096 - (QuadPart & 0xFFF);
    VirtualAddress = (void *)CcGetVirtualAddress((__int64)a1, QuadPart, v15, &v13, 1, 0);
    memset_0(VirtualAddress, 0, v8);
    if ( QuadPart > a1[6] )
    {
      MmSetAddressRangeModifiedEx((unsigned __int64)VirtualAddress, 1LL, v9);
      LOBYTE(v12) = 1;
      CcUpdateSharedCacheMapFlag(a1, 0x20000LL, v12);
    }
    else
    {
      CcSetDirtyInMask(a1, &v14, v8, 0LL);
    }
    v14 = v8 + QuadPart;
    v10 = *(_QWORD *)(v15[0] + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v15[0] + 16)) )
    {
      v11 = *(struct _KEVENT **)(v10 + 192);
      if ( v11 )
        KeSetEvent(v11, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v10 + 552));
    }
    goto LABEL_2;
  }
  MmFlushSection(*(_QWORD *)(v4 + 40), &v14, 1LL, 0LL, v17, 0);
  result = LODWORD(v17[0]);
  if ( SLODWORD(v17[0]) >= 0 )
  {
LABEL_2:
    v5 = CcPurgeCacheSection(*(PSECTION_OBJECT_POINTERS *)(v4 + 40), a2, 0, 0);
    ObFastDereferenceObjectDeferDelete(a1 + 12, v4);
    return v5 == 0 ? 0xC0000435 : 0;
  }
  return result;
}
