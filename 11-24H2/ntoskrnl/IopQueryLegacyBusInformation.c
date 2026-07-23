/*
 * XREFs of IopQueryLegacyBusInformation @ 0x140981D7C
 * Callers:
 *     PipCallDriverAddDevice @ 0x140980ED0 (PipCallDriverAddDevice.c)
 * Callees:
 *     DbgPrint @ 0x140274290 (DbgPrint.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IopSynchronousCall @ 0x1408B9564 (IopSynchronousCall.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopQueryLegacyBusInformation(_QWORD *a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  int v7; // ebp
  _DWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  _WORD v12[40]; // [rsp+30h] [rbp-58h] BYREF
  PVOID P; // [rsp+98h] [rbp+10h] BYREF

  P = 0LL;
  memset_0(v12, 0, 0x48uLL);
  v12[0] = 6171;
  v7 = IopSynchronousCall(a1, (__int64)v12, -1073741637, 0LL, &P);
  if ( v7 >= 0 )
  {
    v9 = P;
    if ( P )
    {
      if ( a3 )
        *a3 = *((_DWORD *)P + 4);
      if ( a4 )
        *a4 = v9[5];
      ExFreePoolWithTag(v9, 0);
    }
    else
    {
      v10 = *(_QWORD *)(a1[39] + 40LL);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 16);
        if ( v11 )
        {
          if ( *(_QWORD *)(v11 + 64) )
          {
            DbgPrint("*** IopQueryLegacyBusInformation - Driver %wZ returned STATUS_SUCCESS\n", v11 + 56);
            DbgPrint("    for IRP_MN_QUERY_LEGACY_BUS_INFORMATION, and a NULL POINTER.\n");
          }
        }
      }
    }
  }
  return (unsigned int)v7;
}
