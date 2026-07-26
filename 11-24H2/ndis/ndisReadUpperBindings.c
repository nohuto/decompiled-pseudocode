/*
 * XREFs of ndisReadUpperBindings @ 0x140048D20
 * Callers:
 *     NdisReadConfiguration @ 0x140044D40 (NdisReadConfiguration.c)
 * Callees:
 *     memmove @ 0x1400E7200 (memmove.c)
 */

__int64 __fastcall ndisReadUpperBindings(_NDIS_M_DRIVER_BLOCK *a1, __int64 *a2, unsigned int *a3)
{
  int v4; // ebx
  KIRQL v7; // al
  struct _NDIS_MINIPORT_BLOCK *v8; // r9
  KIRQL v9; // r13
  unsigned int v10; // ebx
  __int64 Pool2; // rax
  __int64 v12; // rdi
  _WORD *v14; // rbp
  struct _NDIS_MINIPORT_BLOCK *v15; // rsi
  _WORD *v16; // rbp
  KIRQL i; // [rsp+58h] [rbp+10h]

  *a2 = 0LL;
  v4 = 0;
  *a3 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v8 = ndisMiniportList;
  v9 = v7;
  for ( i = v7; v8; v8 = v8->NextGlobalMiniport )
  {
    if ( v8->DriverHandle == a1 )
      v4 += v8->MiniportName.Length + 2;
  }
  v10 = v4 + 2;
  Pool2 = ExAllocatePool2(66LL, v10, 1852851278LL);
  v12 = Pool2;
  if ( Pool2 )
  {
    v14 = (_WORD *)Pool2;
    v15 = ndisMiniportList;
    if ( ndisMiniportList )
    {
      do
      {
        if ( v15->DriverHandle == a1 )
        {
          memmove(v14, v15->MiniportName.Buffer, v15->MiniportName.Length);
          v16 = (_WORD *)((char *)v14 + v15->MiniportName.Length);
          *v16 = 0;
          v14 = v16 + 1;
        }
        v15 = v15->NextGlobalMiniport;
      }
      while ( v15 );
      v9 = i;
    }
    *a2 = v12;
    *v14 = 0;
    *a3 = v10;
    KeReleaseSpinLock(&ndisMiniportListLock, v9);
    return 0LL;
  }
  else
  {
    KeReleaseSpinLock(&ndisMiniportListLock, v9);
    return 3221225626LL;
  }
}
