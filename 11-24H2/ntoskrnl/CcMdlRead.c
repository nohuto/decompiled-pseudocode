/*
 * XREFs of CcMdlRead @ 0x140AC3350
 * Callers:
 *     FsRtlMdlReadDev @ 0x14070A280 (FsRtlMdlReadDev.c)
 * Callees:
 *     IoFreeMdl @ 0x140267750 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x140267BF0 (IoAllocateMdl.c)
 *     MmUnlockPages @ 0x140267F30 (MmUnlockPages.c)
 *     CcDecrementVacbActiveCount @ 0x140272550 (CcDecrementVacbActiveCount.c)
 *     CcGetVirtualAddress @ 0x140273EF0 (CcGetVirtualAddress.c)
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     CcFetchDataForRead @ 0x1402820F0 (CcFetchDataForRead.c)
 *     MmProbeAndLockPages @ 0x140282330 (MmProbeAndLockPages.c)
 *     CcUpdateSharedCacheMapFlag @ 0x140461D64 (CcUpdateSharedCacheMapFlag.c)
 *     CcUpdateReadHistory @ 0x140462070 (CcUpdateReadHistory.c)
 *     CcScheduleReadAheadEx @ 0x1404992A0 (CcScheduleReadAheadEx.c)
 */

void __stdcall CcMdlRead(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus)
{
  _DWORD *SharedCacheMap; // r13
  _DWORD *PrivateCacheMap; // r12
  LONGLONG QuadPart; // rbx
  ULONG v11; // esi
  __int64 v12; // r9
  ULONG v13; // r12d
  struct _MDL *Mdl; // rax
  PMDL v15; // rax
  struct _MDL *Next; // rcx
  unsigned int v17; // [rsp+54h] [rbp-94h]
  ULONG v18; // [rsp+58h] [rbp-90h] BYREF
  _DWORD v19[3]; // [rsp+5Ch] [rbp-8Ch] BYREF
  _QWORD *v20; // [rsp+68h] [rbp-80h] BYREF
  struct _MDL *v21; // [rsp+70h] [rbp-78h]
  _QWORD v22[2]; // [rsp+78h] [rbp-70h] BYREF
  _DWORD *v23; // [rsp+88h] [rbp-60h]
  PVOID VirtualAddress; // [rsp+90h] [rbp-58h]
  PMDL i; // [rsp+98h] [rbp-50h]
  _DWORD *v26; // [rsp+A0h] [rbp-48h]

  v21 = 0LL;
  v19[1] = Length;
  v17 = 0;
  v20 = 0LL;
  v19[0] = 0;
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  v22[1] = SharedCacheMap;
  PrivateCacheMap = FileObject->PrivateCacheMap;
  v23 = PrivateCacheMap;
  v26 = PrivateCacheMap;
  if ( (*PrivateCacheMap & 0x20000) != 0 )
    CcScheduleReadAheadEx(FileObject);
  __incgsdword(0x8964u);
  KeGetCurrentThread()[1].Timer.DueTime.HighPart = 0;
  QuadPart = FileOffset->QuadPart;
  v22[0] = FileOffset->QuadPart;
  v11 = Length;
  while ( v11 )
  {
    v18 = 0;
    VirtualAddress = (PVOID)CcGetVirtualAddress((__int64)SharedCacheMap, QuadPart, (__int64 *)&v20, &v18, 0, 0);
    if ( (SharedCacheMap[38] & 8) == 0 )
    {
      LOBYTE(v12) = 1;
      CcFetchDataForRead((int)FileObject, v22, v11, v12, v19, v20, (*PrivateCacheMap >> 18) & 7, 0LL, 0LL);
    }
    v13 = v18;
    if ( v18 > v11 )
      v13 = v11;
    v18 = v13;
    QuadPart += v13;
    Mdl = IoAllocateMdl(VirtualAddress, v13, 0, 0, 0LL);
    v21 = Mdl;
    if ( !Mdl )
      RtlRaiseStatus(-1073741670);
    MmProbeAndLockPages(Mdl, 0, IoReadAccess);
    CcDecrementVacbActiveCount((__int64)v20);
    v20 = 0LL;
    v15 = *MdlChain;
    if ( *MdlChain )
    {
      for ( i = *MdlChain; ; i = Next )
      {
        Next = v15->Next;
        if ( !v15->Next )
          break;
        v15 = v15->Next;
      }
      v15->Next = v21;
    }
    else
    {
      *MdlChain = v21;
    }
    v21 = 0LL;
    v22[0] = QuadPart;
    v17 += v13;
    v11 -= v13;
    PrivateCacheMap = v23;
  }
  __addgsdword(0x89A0u, KeGetCurrentThread()[1].Timer.DueTime.HighPart);
  if ( (*PrivateCacheMap & 0x20000) == 0 && v19[0] )
    CcScheduleReadAheadEx(FileObject);
  CcUpdateReadHistory((__int64)FileObject, (__int64 *)FileOffset, Length);
  if ( (SharedCacheMap[38] & 8) != 0 )
    CcUpdateSharedCacheMapFlag((__int64)SharedCacheMap, 8, 0);
  IoStatus->Status = 0;
  IoStatus->Information = v17;
}
