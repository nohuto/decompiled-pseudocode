/*
 * XREFs of PiCMReturnHandleResultData @ 0x14094BBB4
 * Callers:
 *     PiCMOpenClassKey @ 0x14094AF58 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x14094B1EC (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMOpenDeviceKey @ 0x14094B3B0 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x14094B5B8 (PiCMOpenObjectKey.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1408BEAA0 (ExRaiseAccessViolation.c)
 */

__int64 __fastcall PiCMReturnHandleResultData(int a1, __int64 a2, int a3, _OWORD *a4, unsigned int a5, _DWORD *a6)
{
  unsigned int v6; // r10d
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  __int128 v11; // [rsp+20h] [rbp-18h]

  *a6 = 0;
  v6 = 0;
  if ( a5 >= 0x10 && a3 == 16 )
  {
    LODWORD(v11) = 16;
    DWORD1(v11) = a1;
    *((_QWORD *)&v11 + 1) = a2;
    v7 = (unsigned __int64)a4;
    if ( ((unsigned __int8)a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (unsigned __int64)a4 + a5 - 1;
    if ( (unsigned __int64)a4 > v8 || v8 >= 0x7FFFFFFF0000LL )
      ExRaiseAccessViolation();
    v9 = (v8 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    do
    {
      *(_BYTE *)v7 = *(_BYTE *)v7;
      v7 = (v7 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    while ( v7 != v9 );
    *a4 = v11;
    *a6 = 16;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
