/*
 * XREFs of PiCMReturnBufferResultData @ 0x1408C7B70
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C5B30 (PiCMHandleIoctl.c)
 *     PiCMGetObjectList @ 0x140933C1C (PiCMGetObjectList.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1409342F0 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMEnumerateSubKeys @ 0x1409520BC (PiCMEnumerateSubKeys.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1409543C4 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMGetDeviceInterfaceList @ 0x140956D90 (PiCMGetDeviceInterfaceList.c)
 *     PiCMRegisterDeviceInterface @ 0x14095DC04 (PiCMRegisterDeviceInterface.c)
 *     PiCMGetDeviceIdList @ 0x14095ED28 (PiCMGetDeviceIdList.c)
 *     PiCMGetObjectPropertyKeys @ 0x140A62ED8 (PiCMGetObjectPropertyKeys.c)
 *     PiCMCreateDevice @ 0x140AAF980 (PiCMCreateDevice.c)
 *     PiCMQueryRemove @ 0x140AB73CC (PiCMQueryRemove.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x140936B90 (ExRaiseAccessViolation.c)
 */

__int64 __fastcall PiCMReturnBufferResultData(
        int a1,
        unsigned int a2,
        unsigned int a3,
        const void *a4,
        unsigned int Size,
        int a6,
        unsigned __int64 a7,
        unsigned int a8,
        _DWORD *a9)
{
  unsigned int v9; // ebx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int128 v14; // [rsp+20h] [rbp-28h]

  v9 = 0;
  *a9 = 0;
  if ( a8 >= Size + 20 && a6 == 20 )
  {
    LODWORD(v14) = 20;
    DWORD1(v14) = a1;
    *((_QWORD *)&v14 + 1) = __PAIR64__(a3, a2);
    if ( a8 )
    {
      v10 = a7;
      if ( (a7 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = a8 + a7 - 1;
      if ( a7 > v11 || v11 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v12 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v10 = *(_BYTE *)v10;
        v10 = (v10 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v10 != v12 );
    }
    *(_OWORD *)a7 = v14;
    *(_DWORD *)(a7 + 16) = 0;
    if ( Size )
      memmove((void *)(a7 + 16), a4, Size);
    *a9 = Size + 20;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v9;
}
