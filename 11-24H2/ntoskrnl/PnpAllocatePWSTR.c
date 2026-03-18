/*
 * XREFs of PnpAllocatePWSTR @ 0x1408D3DA4
 * Callers:
 *     PiSwQueuedCreateInfoCreate @ 0x140730E8C (PiSwQueuedCreateInfoCreate.c)
 *     PiSwIrpPropertySet @ 0x1408B1E40 (PiSwIrpPropertySet.c)
 *     PiSwDeviceInterfaceSetState @ 0x1408B22B0 (PiSwDeviceInterfaceSetState.c)
 *     PiPnpRtlObjectEventWorker @ 0x1408B9D40 (PiPnpRtlObjectEventWorker.c)
 *     PiDqActionDataCreate @ 0x1408D3974 (PiDqActionDataCreate.c)
 *     PiSwInterfaceCreate @ 0x1409F82E4 (PiSwInterfaceCreate.c)
 *     PiSwCompleteCreate @ 0x1409F8538 (PiSwCompleteCreate.c)
 *     PiSwInstanceInfoInit @ 0x1409F9350 (PiSwInstanceInfoInit.c)
 *     PiSwPnPInfoInit @ 0x1409FA184 (PiSwPnPInfoInit.c)
 *     PnpCopyDevProperty @ 0x1409FA314 (PnpCopyDevProperty.c)
 *     PiSwBusRelationAdd @ 0x1409FA468 (PiSwBusRelationAdd.c)
 *     PiSwPdoPnPDispatch @ 0x1409FAA40 (PiSwPdoPnPDispatch.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1409FB394 (PiSwDeviceInterfacesUpdateState.c)
 *     PiDmObjectCreate @ 0x140AC3894 (PiDmObjectCreate.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpAllocatePWSTR(_WORD *a1, unsigned __int64 a2, ULONG a3, PVOID *a4)
{
  unsigned int v7; // ebx
  unsigned __int64 v8; // r9
  _WORD *i; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  _WORD *Pool2; // rax
  _WORD *v14; // rcx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rdx
  signed __int64 v17; // rsi
  __int16 v18; // ax
  _WORD *v19; // rax

  *a4 = 0LL;
  v7 = 0;
  if ( !a1 )
    return v7;
  if ( a2 > 0x7FFFFFFF )
  {
    v7 = -1073741811;
LABEL_25:
    if ( *a4 )
    {
      ExFreePoolWithTag(*a4, a3);
      *a4 = 0LL;
    }
    return v7;
  }
  v8 = a2;
  for ( i = a1; v8; --v8 )
  {
    if ( !*i )
      break;
    ++i;
  }
  v7 = v8 == 0 ? 0xC000000D : 0;
  v10 = (a2 - v8) & -(__int64)(v8 != 0);
  if ( !v8 )
    goto LABEL_25;
  if ( !v10 )
    return v7;
  v11 = v10 + 1;
  v12 = 2 * v11;
  if ( !is_mul_ok(v11, 2uLL) )
  {
    v7 = -1073741675;
    goto LABEL_25;
  }
  Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
  *a4 = Pool2;
  v14 = Pool2;
  if ( !Pool2 )
  {
    v7 = -1073741670;
    goto LABEL_25;
  }
  v15 = v12 >> 1;
  if ( v15 - 1 > 0x7FFFFFFE )
  {
    v7 = -1073741811;
    if ( v15 )
      *Pool2 = 0;
  }
  else
  {
    v16 = 2147483646 - v15;
    v17 = (char *)a1 - (char *)Pool2;
    do
    {
      if ( !(v16 + v15) )
        break;
      v18 = *(_WORD *)((char *)v14 + v17);
      if ( !v18 )
        break;
      *v14++ = v18;
      --v15;
    }
    while ( v15 );
    v19 = v14 - 1;
    if ( v15 )
      v19 = v14;
    v7 = v15 == 0 ? 0x80000005 : 0;
    *v19 = 0;
  }
  if ( (v7 & 0x80000000) != 0 )
    goto LABEL_25;
  return v7;
}
