/*
 * XREFs of UnRegisterOperationRegionHandler @ 0x1400A2424
 * Callers:
 *     ACPIIoctlUnRegisterOpRegionHandler @ 0x1400627E0 (ACPIIoctlUnRegisterOpRegionHandler.c)
 *     ACPIEcRemoveOpRegionHandler @ 0x14009CB48 (ACPIEcRemoveOpRegionHandler.c)
 *     DeRegisterOpRegionHandler @ 0x1400A2380 (DeRegisterOpRegionHandler.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x140014164 (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNameSpaceObject @ 0x140028510 (AMLIGetNameSpaceObject.c)
 *     AMLIRegEventHandler @ 0x140051D40 (AMLIRegEventHandler.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1400659E4 (EnableDisableDeviceTreeRegionSpace.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall UnRegisterOperationRegionHandler(__int64 *a1, __int64 *a2)
{
  __int64 *i; // rax
  __int64 v6; // rcx
  unsigned int *v7; // rdi
  char v8; // si
  unsigned int v9; // ecx
  __int64 v10; // rax
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 **v13; // rcx
  _QWORD v14[10]; // [rsp+20h] [rbp-68h] BYREF
  __int64 *v15; // [rsp+98h] [rbp+10h] BYREF

  v15 = 0LL;
  ExAcquireFastMutex(&AcpiOpRegionLock);
  for ( i = (__int64 *)AcpiOpRegionHandlerList; ; i = (__int64 *)*i )
  {
    if ( i == &AcpiOpRegionHandlerList )
    {
      ExReleaseFastMutex(&AcpiOpRegionLock);
      return 3221225712LL;
    }
    if ( i == a2 )
      break;
  }
  if ( *((_BYTE *)a2 + 40) )
  {
    ExReleaseFastMutex(&AcpiOpRegionLock);
    return 3221225558LL;
  }
  else
  {
    v6 = a2[1];
    v7 = (unsigned int *)a2 + 9;
    v8 = 0;
    *((_BYTE *)a2 + 40) = 1;
    if ( ((__int64 *)v6 == &AcpiOpRegionHandlerList || *(_DWORD *)(v6 + 36) != *v7)
      && ((v9 = *v7, (__int64 *)*a2 == &AcpiOpRegionHandlerList) || *(_DWORD *)(*a2 + 36) != v9) )
    {
      if ( v9 < 0x1F )
      {
        AcpiRegisteredOpRegionMask &= ~(1 << v9);
      }
      else
      {
        if ( (__int64 *)AcpiOpRegionHandlerList == &AcpiOpRegionHandlerList || *(_DWORD *)(qword_140089E08 + 36) < 0x1Fu )
          AcpiRegisteredOpRegionMask &= ~0x80000000;
        v7 = (unsigned int *)a2 + 9;
      }
    }
    else
    {
      v8 = 1;
    }
    ExReleaseFastMutex(&AcpiOpRegionLock);
    if ( !v8 )
    {
      if ( *v7 - 8 <= 1 )
      {
        EnableDisableDeviceTreeRegionSpace(RootDeviceExtension, *v7, 0);
      }
      else if ( a1 && (int)AMLIGetNameSpaceObject("_REG", a1, &v15, 1) >= 0 )
      {
        memset(v14, 0, sizeof(v14));
        v10 = *v7;
        v14[7] = 0LL;
        WORD1(v14[0]) = 1;
        v14[2] = v10;
        WORD1(v14[5]) = 1;
        AMLIEvalNameSpaceObject(v15, 0LL, 2, (__int64)v14);
        AMLIDereferenceHandleEx((__int64)v15);
      }
    }
    v11 = (unsigned int)AMLIRegEventHandler(*((_DWORD *)a2 + 8), *v7, 0LL, 0LL) != 0 ? 0xC0000001 : 0;
    ExAcquireFastMutex(&AcpiOpRegionLock);
    v12 = *a2;
    if ( *(__int64 **)(*a2 + 8) != a2 || (v13 = (__int64 **)a2[1], *v13 != a2) )
      __fastfail(3u);
    *v13 = (__int64 *)v12;
    *(_QWORD *)(v12 + 8) = v13;
    a2[1] = (__int64)a2;
    *a2 = (__int64)a2;
    ExReleaseFastMutex(&AcpiOpRegionLock);
    ExFreePoolWithTag(a2, 0);
    return v11;
  }
}
