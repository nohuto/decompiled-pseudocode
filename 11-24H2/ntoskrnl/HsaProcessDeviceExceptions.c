/*
 * XREFs of HsaProcessDeviceExceptions @ 0x1405708EC
 * Callers:
 *     HsaInitializeIommu @ 0x140B54D50 (HsaInitializeIommu.c)
 * Callees:
 *     HsaUpdateDeviceTableEntry @ 0x14043E974 (HsaUpdateDeviceTableEntry.c)
 *     HalpHsapInitializeReservedDomain @ 0x14056EC8C (HalpHsapInitializeReservedDomain.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HsaProcessDeviceExceptions(__int64 a1)
{
  _DWORD *v2; // rdx
  int v3; // edi
  int v4; // ebx
  __int64 i; // rbx
  unsigned int v6; // eax
  __int64 v8; // [rsp+38h] [rbp-90h]
  __int64 v9; // [rsp+40h] [rbp-88h]
  _DWORD v10[2]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v11[104]; // [rsp+58h] [rbp-70h] BYREF
  __int64 v12; // [rsp+D0h] [rbp+8h] BYREF

  memset_0(v10, 0, 0x70uLL);
  v2 = *(_DWORD **)(a1 + 216);
  v3 = 0;
  v12 = 0LL;
  v4 = 0;
  if ( *v2 )
  {
    while ( 1 )
    {
      v3 = HalpHsapInitializeReservedDomain(a1, &v2[4 * v4 + 2]);
      if ( v3 < 0 )
        break;
      v2 = *(_DWORD **)(a1 + 216);
      if ( (unsigned int)++v4 >= *v2 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    for ( i = HalpIommuExceptionList; (__int64 *)i != &HalpIommuExceptionList; i = *(_QWORD *)i )
    {
      if ( *(_DWORD *)(i + 16) == *(_DWORD *)(a1 + 160) )
      {
        memset_0(v11, 0, sizeof(v11));
        v6 = *(_DWORD *)(i + 24);
        v10[1] = 0;
        v12 = v6;
        v10[0] = 1;
        HsaUpdateDeviceTableEntry(a1, (unsigned int *)&v12, 0LL, 1, (__int64)v10, 1u, 1, v8, v9, 0LL);
      }
    }
  }
  return (unsigned int)v3;
}
