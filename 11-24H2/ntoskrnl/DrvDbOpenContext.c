/*
 * XREFs of DrvDbOpenContext @ 0x140823D90
 * Callers:
 *     PiDrvDbInit @ 0x140734FEC (PiDrvDbInit.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x1402E55A0 (ExDeleteResourceLite.c)
 *     ExInitializeResourceLite @ 0x1403EAC90 (ExInitializeResourceLite.c)
 *     _PnpCtxSetObjectContext @ 0x1408182A4 (_PnpCtxSetObjectContext.c)
 *     _PnpCtxSetObjectDispatchCallback @ 0x1408182D0 (_PnpCtxSetObjectDispatchCallback.c)
 *     DrvDbCreateDatabaseNode @ 0x140824140 (DrvDbCreateDatabaseNode.c)
 *     DrvDbDestroyDatabaseNode @ 0x140824478 (DrvDbDestroyDatabaseNode.c)
 *     DrvDbLoadDatabaseNode @ 0x140927C38 (DrvDbLoadDatabaseNode.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 DrvDbOpenContext()
{
  __int64 v0; // r14
  __int64 v1; // rsi
  int v2; // ebx
  __int64 Pool2; // rax
  PVOID *v4; // rdi
  int DatabaseNode; // ebx
  _QWORD *v6; // rax
  struct _ERESOURCE *v7; // rax
  int v8; // eax
  __int64 *v9; // r10
  __int64 v10; // rcx
  int *v11; // r10
  __int64 v12; // r10
  int v13; // r11d
  PVOID v14; // rsi
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  v0 = *(_QWORD *)&PiPnpRtlCtx;
  v1 = 0LL;
  PiDrvDbCtx = 0LL;
  v16 = 0LL;
  v2 = **(_DWORD **)&PiPnpRtlCtx;
  Pool2 = ExAllocatePool2(0x100uLL, 0x40uLL, 0x42444450u);
  v4 = (PVOID *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)Pool2 = v0;
    *(_DWORD *)(Pool2 + 8) = v2;
    *(_DWORD *)(Pool2 + 12) = -805306368;
    v6 = (_QWORD *)(Pool2 + 16);
    v6[1] = v6;
    *v6 = v6;
    v7 = (struct _ERESOURCE *)ExAllocatePool2(0x40uLL, 0x68uLL, 0x42444450u);
    v4[7] = v7;
    if ( v7 )
    {
      DatabaseNode = ExInitializeResourceLite(v7);
      if ( DatabaseNode >= 0 )
      {
        v8 = DrvDbCreateDatabaseNode(v4, L"SYSTEM", 0LL, 1LL, L"DriverDatabase", 3, 0LL, 0LL, &v16);
        v1 = v16;
        DatabaseNode = v8;
        if ( v8 >= 0 )
        {
          DatabaseNode = DrvDbLoadDatabaseNode(v4, v16);
          if ( DatabaseNode >= 0 )
          {
            v9 = &qword_140009A90;
            do
            {
              DatabaseNode = PnpCtxSetObjectDispatchCallback(v0, *(_DWORD *)v9, v9[1]);
              if ( DatabaseNode < 0 )
                break;
              DatabaseNode = PnpCtxSetObjectContext(v10, *v11, (__int64)v4);
              if ( DatabaseNode < 0 )
                break;
              v9 = (__int64 *)(v12 + 16);
            }
            while ( (unsigned int)(v13 + 1) < 5 );
            if ( DatabaseNode >= 0 )
            {
              PiDrvDbCtx = (__int64)v4;
              return (unsigned int)DatabaseNode;
            }
          }
        }
      }
      else
      {
        ExFreePoolWithTag(v4[7], 0);
        v4[7] = 0LL;
      }
    }
    else
    {
      DatabaseNode = -1073741670;
    }
    if ( v1 )
      DrvDbDestroyDatabaseNode(v4, v1);
    v14 = v4[7];
    if ( v14 )
    {
      ExDeleteResourceLite((PERESOURCE)v4[7]);
      ExFreePoolWithTag(v14, 0);
    }
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)DatabaseNode;
}
