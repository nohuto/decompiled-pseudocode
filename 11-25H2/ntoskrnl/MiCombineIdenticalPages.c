/*
 * XREFs of MiCombineIdenticalPages @ 0x140A961D0
 * Callers:
 *     MmManagePartitionCombineMemory @ 0x1407ECDD4 (MmManagePartitionCombineMemory.c)
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x140211630 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x14022CB40 (MiCreateUltraThreadContext.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     MiCombineWorkingSet @ 0x1406799B8 (MiCombineWorkingSet.c)
 *     MiCombiningInProgress @ 0x140679C0C (MiCombiningInProgress.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     MiCombineAllPhysicalMemory @ 0x1409F3FBC (MiCombineAllPhysicalMemory.c)
 */

__int64 __fastcall MiCombineIdenticalPages(__int64 a1, ULONG_PTR a2, int a3, ULONG_PTR a4, char a5, _QWORD *a6)
{
  int v10; // ebx
  __int64 v11; // rax
  struct _KTHREAD *CurrentThread; // r14
  signed __int32 v13; // eax
  signed __int32 v14; // edx
  signed __int32 v15; // ecx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  PVOID v20; // rdi
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v23; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v24[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v25[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v26; // [rsp+68h] [rbp-98h] BYREF
  _OWORD v27[3]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v28[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v29[12]; // [rsp+C0h] [rbp-40h] BYREF
  char *v30; // [rsp+120h] [rbp+20h]
  _QWORD *v31; // [rsp+128h] [rbp+28h]
  _DWORD *v32; // [rsp+130h] [rbp+30h]
  int v33; // [rsp+138h] [rbp+38h]
  int v34; // [rsp+13Ch] [rbp+3Ch]
  _BYTE v35[128]; // [rsp+150h] [rbp+50h] BYREF
  signed __int32 v36; // [rsp+1D0h] [rbp+D0h]
  __int128 v37; // [rsp+200h] [rbp+100h] BYREF
  __int128 v38; // [rsp+210h] [rbp+110h]

  v37 = 0LL;
  v38 = 0LL;
  memset_0(v28, 0, 0x150uLL);
  *a6 = 0LL;
  v23 = 0LL;
  Object = 0LL;
  memset(v27, 0, sizeof(v27));
  v26 = 0LL;
  if ( (a3 & 0xFFFFFFFC) != 0 )
    return (unsigned int)-1073741583;
  if ( (a3 & 2) != 0 )
  {
    v11 = -1LL;
    if ( a4 )
      v11 = a4;
    a4 = v11;
  }
  else if ( a4 )
  {
    return (unsigned int)-1073741811;
  }
  if ( (dword_140FC41E8 & 1) != 0 )
    return (unsigned int)-1073741637;
  if ( !a2
    || (v10 = ObpReferenceObjectByHandleWithTag(a2, 1, (__int64)ExEventObjectType, a5, 0x62436D4Du, &v23, 0LL, 0LL),
        v10 >= 0) )
  {
    if ( a4 )
    {
      v10 = ObpReferenceObjectByHandleWithTag(a4, 24, (__int64)PsProcessType, a5, 0x62436D4Du, &Object, 0LL, 0LL);
      if ( v10 < 0 )
      {
LABEL_30:
        v20 = Object;
        if ( Object )
        {
          KiUnstackDetachProcess((__int64)v27, 0LL);
          ObfDereferenceObjectWithTag(v20, 0x62436D4Du);
        }
        goto LABEL_32;
      }
      KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v27);
    }
    CurrentThread = KeGetCurrentThread();
    if ( (a3 & 1) == 0 || (ULONG *)a1 == &MiSystemPartition )
    {
      --CurrentThread->KernelApcDisable;
      MiCombiningInProgress((__int64 *)(a1 + 16984), v29, 1);
      v24[0] = 0;
      v24[1] = -1;
      v25[0] = qword_140E37128;
      v25[1] = qword_140E37160;
      v31 = v25;
      v32 = v24;
      v28[1] = v23;
      v29[11] = &v37;
      v13 = dword_140E2FBDC;
      v33 = 2;
      v28[0] = a1 + 16984;
      v34 = a3;
      do
      {
        v14 = v13 + 1;
        v15 = v13;
        if ( (unsigned int)(v13 + 1) < 2 )
          v14 = 2;
        v36 = v14;
        v13 = _InterlockedCompareExchange(&dword_140E2FBDC, v14, v13);
      }
      while ( v13 != v15 );
      MiInitializePageColorBase(
        (__int64)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink,
        3,
        0,
        (__int64)&v26);
      if ( (unsigned int)MiCreateUltraThreadContext((__int64)v35, (__int64)&v26, 8, 0LL) )
      {
        if ( (a3 & 2) != 0 )
        {
          v30 = (char *)Object + 1024;
          v16 = MiCombineWorkingSet((__int64)v28);
        }
        else
        {
          v30 = 0LL;
          v16 = MiCombineAllPhysicalMemory((__int64)v28);
        }
        v10 = v16;
        MiDeleteUltraThreadContext((__int64)v35);
        *a6 = v37;
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 17368));
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 17360), *((unsigned __int64 *)&v37 + 1));
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 17344), v38);
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 17352), *((unsigned __int64 *)&v38 + 1));
      }
      else
      {
        v10 = -1073741670;
      }
      MiCombiningInProgress((__int64 *)(a1 + 16984), v29, 0);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v17, v18, v19);
    }
    else
    {
      v10 = -1073741637;
    }
    goto LABEL_30;
  }
LABEL_32:
  if ( v23 )
    ObfDereferenceObjectWithTag(v23, 0x62436D4Du);
  return (unsigned int)v10;
}
