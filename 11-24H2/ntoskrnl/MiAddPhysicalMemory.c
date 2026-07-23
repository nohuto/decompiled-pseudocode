/*
 * XREFs of MiAddPhysicalMemory @ 0x1407E8C3C
 * Callers:
 *     MiAddPhysicalMemoryChunks @ 0x1407E8F14 (MiAddPhysicalMemoryChunks.c)
 *     MiCreateFileOnlyPfns @ 0x1407F06F4 (MiCreateFileOnlyPfns.c)
 * Callees:
 *     MiUnlockDynamicMemoryShared @ 0x140264630 (MiUnlockDynamicMemoryShared.c)
 *     MiLockDynamicMemoryShared @ 0x140264694 (MiLockDynamicMemoryShared.c)
 *     KeConfigureDynamicMemory @ 0x1405B4FBC (KeConfigureDynamicMemory.c)
 *     MiLogAddPhysicalMemory @ 0x14066F068 (MiLogAddPhysicalMemory.c)
 *     MiMemoryRangeAlreadyExists @ 0x14066F214 (MiMemoryRangeAlreadyExists.c)
 *     MiReturnAddMemoryResources @ 0x14066FA80 (MiReturnAddMemoryResources.c)
 *     MiDeleteExtentPfns @ 0x14067B940 (MiDeleteExtentPfns.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiAcquireAddMemoryLocks @ 0x1407E8B38 (MiAcquireAddMemoryLocks.c)
 *     MiAcquireAddMemoryResources @ 0x1407E8B78 (MiAcquireAddMemoryResources.c)
 *     MiCompleteMemoryAddition @ 0x1407E95EC (MiCompleteMemoryAddition.c)
 *     MiMapNewPfns @ 0x1407E9C7C (MiMapNewPfns.c)
 *     MiReleaseAddMemoryLocks @ 0x1407EA32C (MiReleaseAddMemoryLocks.c)
 *     MiUnmapPfns @ 0x1407EA6E0 (MiUnmapPfns.c)
 *     MiValidateAddPhysicalMemoryParameters @ 0x1407EA7DC (MiValidateAddPhysicalMemoryParameters.c)
 *     MiIsExtentDangling @ 0x1407F09E0 (MiIsExtentDangling.c)
 */

__int64 __fastcall MiAddPhysicalMemory(unsigned __int16 *a1, __int64 *a2, _QWORD *a3, int a4, __int64 a5)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbx
  char *v11; // rax
  __int64 v12; // rcx
  unsigned __int64 IsExtentDangling; // rax
  unsigned int v14; // ebx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rax
  ULONG_PTR v18; // rax
  int v19[4]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v20[16]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v21; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v22; // [rsp+58h] [rbp-A8h]
  ULONG_PTR v23; // [rsp+60h] [rbp-A0h]
  unsigned int v24; // [rsp+68h] [rbp-98h]
  __int64 v25; // [rsp+A8h] [rbp-58h]
  char v26; // [rsp+B0h] [rbp-50h] BYREF

  memset_0(v20, 0, 0xB0uLL);
  result = MiValidateAddPhysicalMemoryParameters((_DWORD)a1, (_DWORD)a2, (_DWORD)a3, a4, a5, (__int64)v20);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v11 = &v26;
    v25 = 0LL;
    v12 = 2LL;
    do
    {
      *((_QWORD *)v11 + 1) = v11;
      *(_QWORD *)v11 = v11;
      v11 += 24;
      --v12;
    }
    while ( v12 );
    if ( (v24 & 2) != 0 )
    {
      MiDeleteExtentPfns(0LL);
      IsExtentDangling = MiIsExtentDangling(v21, v23, v24);
      if ( IsExtentDangling >= v21 && IsExtentDangling < v22 )
        goto LABEL_7;
      MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
      if ( (unsigned int)MiMemoryRangeAlreadyExists(v21, v22) )
      {
        MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
LABEL_7:
        v14 = -1073741800;
LABEL_8:
        v19[0] = v14;
LABEL_37:
        MiReturnAddMemoryResources((__int64)v20);
        MiLogAddPhysicalMemory(a1, a2, (__int64)a3, v24, (__int64)v19);
        return v14;
      }
      byte_140E2D740 = 1;
      MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
      v19[0] = MiMapNewPfns(v20);
      v14 = v19[0];
      if ( v19[0] < 0 )
        goto LABEL_37;
LABEL_36:
      v14 = 0;
      *a3 = v23 << 12;
      v19[0] = 0;
      goto LABEL_37;
    }
    MiAcquireAddMemoryLocks((__int64)v20);
    if ( byte_140E2D740 )
    {
      v15 = MiIsExtentDangling(v21, v23, v24);
      v16 = v21;
      if ( v15 >= v21 && v15 < v22 )
        goto LABEL_7;
    }
    else
    {
      v16 = v21;
    }
    if ( (v24 & 0x80000) == 0 )
    {
      if ( qword_140E2DC88 == qword_140E3D590 )
      {
LABEL_20:
        v14 = -1073741637;
        goto LABEL_8;
      }
      if ( v23 > qword_140E2DC88 - qword_140E3D590 )
      {
        if ( (v24 & 0x200000) != 0 )
        {
          v14 = -1073741585;
          goto LABEL_8;
        }
        if ( (v24 & 0x2000) != 0 )
          v17 = -262144LL;
        else
          v17 = (-(__int64)((v24 & 0x1000) != 0) & 0xFFFFFFFFFFFFFE01uLL) - 1;
        v18 = (qword_140E2DC88 - qword_140E3D590) & v17;
        v23 = v18;
        if ( !v18 )
          goto LABEL_20;
        v22 = v16 + v18;
      }
    }
    if ( (unsigned int)MiMemoryRangeAlreadyExists(v16, v22) )
      goto LABEL_7;
    v19[0] = MiAcquireAddMemoryResources((__int64)v20);
    v14 = v19[0];
    if ( v19[0] < 0 )
      goto LABEL_37;
    v19[0] = MiMapNewPfns(v20);
    v14 = v19[0];
    if ( v19[0] < 0 )
      goto LABEL_37;
    if ( (v24 & 0x800) == 0 )
    {
      MiReleaseAddMemoryLocks(v20);
      v19[0] = KeConfigureDynamicMemory(v21, v22 - 1, 16);
      v14 = v19[0];
      MiAcquireAddMemoryLocks((__int64)v20);
      if ( v19[0] < 0 )
      {
        MiUnmapPfns(v20);
        goto LABEL_37;
      }
    }
    MiCompleteMemoryAddition(v20);
    goto LABEL_36;
  }
  return result;
}
