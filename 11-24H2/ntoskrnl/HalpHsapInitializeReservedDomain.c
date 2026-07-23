/*
 * XREFs of HalpHsapInitializeReservedDomain @ 0x14056EC8C
 * Callers:
 *     HsaProcessDeviceExceptions @ 0x1405708EC (HsaProcessDeviceExceptions.c)
 * Callees:
 *     HsaUpdateDeviceTableEntry @ 0x14043E974 (HsaUpdateDeviceTableEntry.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpHsapInitializeReservedDomain(__int64 a1, int *a2)
{
  _QWORD *v2; // r15
  unsigned int v3; // ebx
  _DWORD *v6; // rdi
  unsigned int v7; // ecx
  __int64 v9; // [rsp+38h] [rbp-A0h]
  __int64 v10; // [rsp+40h] [rbp-98h]
  _DWORD v11[10]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v12; // [rsp+78h] [rbp-60h]
  int v13; // [rsp+80h] [rbp-58h]
  unsigned int v14; // [rsp+E8h] [rbp+10h] BYREF
  int v15; // [rsp+ECh] [rbp+14h]

  v2 = (_QWORD *)*((_QWORD *)a2 + 1);
  v3 = 0;
  v6 = (_DWORD *)*v2;
  if ( *(_DWORD *)*v2 == 1 )
  {
    if ( *((unsigned __int16 *)v6 + 4) == *(_DWORD *)(a1 + 160) )
    {
      memset_0(v11, 0, 0x70uLL);
      v7 = *((unsigned __int16 *)v6 + 6);
      v13 = *a2;
      v12 = v2[2];
      v14 = v7;
      v11[0] = 1;
      v11[1] = 2;
      v15 = 0;
      HsaUpdateDeviceTableEntry(a1, &v14, 0LL, 1, (__int64)v11, 0, 1, v9, v10, 0LL);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v3;
}
