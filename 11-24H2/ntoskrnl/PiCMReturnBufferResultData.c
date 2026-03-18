/*
 * XREFs of PiCMReturnBufferResultData @ 0x1408C5620
 * Callers:
 *     PiCMGetDeviceInterfaceAlias @ 0x1408B58C0 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMGetObjectList @ 0x1408BE080 (PiCMGetObjectList.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1408BE750 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMHandleIoctl @ 0x1408C3A00 (PiCMHandleIoctl.c)
 *     PiCMEnumerateSubKeys @ 0x14099245C (PiCMEnumerateSubKeys.c)
 *     PiCMGetDeviceInterfaceList @ 0x1409FE7EC (PiCMGetDeviceInterfaceList.c)
 *     PiCMGetDeviceIdList @ 0x140A19E98 (PiCMGetDeviceIdList.c)
 *     PiCMGetObjectPropertyKeys @ 0x140A65294 (PiCMGetObjectPropertyKeys.c)
 *     PiCMRegisterDeviceInterface @ 0x140A6E630 (PiCMRegisterDeviceInterface.c)
 *     PiCMCreateDevice @ 0x140AB4970 (PiCMCreateDevice.c)
 *     PiCMQueryRemove @ 0x140ABB70C (PiCMQueryRemove.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1408C10E0 (ExRaiseAccessViolation.c)
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
