/*
 * XREFs of MiCombineIdenticalPages @ 0x140A97650
 * Callers:
 *     MmManagePartitionCombineMemory @ 0x1407FD3D4 (MmManagePartitionCombineMemory.c)
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     MiDeleteUltraThreadContext @ 0x140335BD0 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x14033BC80 (MiCreateUltraThreadContext.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiCombineWorkingSet @ 0x140686378 (MiCombineWorkingSet.c)
 *     MiCombiningInProgress @ 0x1406865CC (MiCombiningInProgress.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     MiCombineAllPhysicalMemory @ 0x1409E6848 (MiCombineAllPhysicalMemory.c)
 */

__int64 __fastcall MiCombineIdenticalPages(__int64 a1, ULONG_PTR a2, int a3, ULONG_PTR a4, char a5, _QWORD *a6)
{
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  __int64 v13; // rax
  struct _KTHREAD *CurrentThread; // r14
  signed __int32 v15; // eax
  signed __int32 v16; // edx
  signed __int32 v17; // ecx
  int v18; // eax
  PVOID v19; // rdi
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v22; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v23[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v24[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v25; // [rsp+68h] [rbp-98h] BYREF
  _OWORD v26[3]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v27[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v28[12]; // [rsp+C0h] [rbp-40h] BYREF
  char *v29; // [rsp+120h] [rbp+20h]
  _QWORD *v30; // [rsp+128h] [rbp+28h]
  _DWORD *v31; // [rsp+130h] [rbp+30h]
  int v32; // [rsp+138h] [rbp+38h]
  int v33; // [rsp+13Ch] [rbp+3Ch]
  _BYTE v34[128]; // [rsp+150h] [rbp+50h] BYREF
  signed __int32 v35; // [rsp+1D0h] [rbp+D0h]
  __int128 v36; // [rsp+200h] [rbp+100h] BYREF
  __int128 v37; // [rsp+210h] [rbp+110h]

  v36 = 0LL;
  v37 = 0LL;
  memset_0(v27, 0, 0x150uLL);
  *a6 = 0LL;
  v22 = 0LL;
  Object = 0LL;
  memset(v26, 0, sizeof(v26));
  v25 = 0LL;
  if ( (a3 & 0xFFFFFFFC) != 0 )
    return (unsigned int)-1073741583;
  if ( (a3 & 2) != 0 )
  {
    v13 = -1LL;
    if ( a4 )
      v13 = a4;
    a4 = v13;
  }
  else if ( a4 )
  {
    return (unsigned int)-1073741811;
  }
  if ( (dword_140FC51F8 & 1) != 0 )
    return (unsigned int)-1073741637;
  if ( !a2
    || (v12 = ObpReferenceObjectByHandleWithTag(a2, 1, (__int64)ExEventObjectType, a5, 0x62436D4Du, &v22, 0LL, 0LL),
        v12 >= 0) )
  {
    if ( a4 )
    {
      v12 = ObpReferenceObjectByHandleWithTag(a4, 24, (__int64)PsProcessType, a5, 0x62436D4Du, &Object, 0LL, 0LL);
      if ( v12 < 0 )
      {
LABEL_30:
        v19 = Object;
        if ( Object )
        {
          KiUnstackDetachProcess((__int64)v26, 0, v10, v11);
          ObfDereferenceObjectWithTag(v19, 0x62436D4Du);
        }
        goto LABEL_32;
      }
      KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v26);
    }
    CurrentThread = KeGetCurrentThread();
    if ( (a3 & 1) == 0 || (ULONG *)a1 == &MiSystemPartition )
    {
      --CurrentThread->KernelApcDisable;
      MiCombiningInProgress((__int64 *)(a1 + 16984), v28, 1);
      v23[0] = 0;
      v23[1] = -1;
      v24[0] = qword_140E374A8;
      v24[1] = qword_140E374E0;
      v30 = v24;
      v31 = v23;
      v27[1] = (__int64)v22;
      v28[11] = &v36;
      v15 = dword_140E2FF5C;
      v32 = 2;
      v27[0] = a1 + 16984;
      v33 = a3;
      do
      {
        v16 = v15 + 1;
        v17 = v15;
        if ( (unsigned int)(v15 + 1) < 2 )
          v16 = 2;
        v35 = v16;
        v15 = _InterlockedCompareExchange(&dword_140E2FF5C, v16, v15);
      }
      while ( v15 != v17 );
      MiInitializePageColorBase(
        (__int64)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink,
        3,
        0,
        (__int64)&v25);
      if ( (unsigned int)MiCreateUltraThreadContext((__int64)v34, (__int64)&v25, 8, 0) )
      {
        if ( (a3 & 2) != 0 )
        {
          v29 = (char *)Object + 1024;
          v18 = MiCombineWorkingSet((__int64)v27);
        }
        else
        {
          v29 = 0LL;
          v18 = MiCombineAllPhysicalMemory(v27);
        }
        v12 = v18;
        MiDeleteUltraThreadContext((__int64)v34);
        *a6 = v36;
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 17368));
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 17360), *((unsigned __int64 *)&v36 + 1));
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 17344), v37);
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 17352), *((unsigned __int64 *)&v37 + 1));
      }
      else
      {
        v12 = -1073741670;
      }
      MiCombiningInProgress((__int64 *)(a1 + 16984), v28, 0);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    }
    else
    {
      v12 = -1073741637;
    }
    goto LABEL_30;
  }
LABEL_32:
  if ( v22 )
    ObfDereferenceObjectWithTag(v22, 0x62436D4Du);
  return (unsigned int)v12;
}
