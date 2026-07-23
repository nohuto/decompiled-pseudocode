/*
 * XREFs of PnpAllocatePWSTR @ 0x1408D1794
 * Callers:
 *     PiSwQueuedCreateInfoCreate @ 0x14072EE9C (PiSwQueuedCreateInfoCreate.c)
 *     PiSwIrpPropertySet @ 0x1408AF734 (PiSwIrpPropertySet.c)
 *     PiSwDeviceInterfaceSetState @ 0x1408AFBA4 (PiSwDeviceInterfaceSetState.c)
 *     PiPnpRtlObjectEventWorker @ 0x1408B76F0 (PiPnpRtlObjectEventWorker.c)
 *     PiDqActionDataCreate @ 0x1408D1364 (PiDqActionDataCreate.c)
 *     PiSwInterfaceCreate @ 0x1409F0C54 (PiSwInterfaceCreate.c)
 *     PiSwCompleteCreate @ 0x1409F0EA8 (PiSwCompleteCreate.c)
 *     PiSwInstanceInfoInit @ 0x1409F1CC0 (PiSwInstanceInfoInit.c)
 *     PiSwPnPInfoInit @ 0x1409F2AF4 (PiSwPnPInfoInit.c)
 *     PnpCopyDevProperty @ 0x1409F2C84 (PnpCopyDevProperty.c)
 *     PiSwBusRelationAdd @ 0x1409F2DD8 (PiSwBusRelationAdd.c)
 *     PiSwPdoPnPDispatch @ 0x1409F33B0 (PiSwPdoPnPDispatch.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1409F3D04 (PiSwDeviceInterfacesUpdateState.c)
 *     PiDmObjectCreate @ 0x140ABF218 (PiDmObjectCreate.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  Pool2 = (_WORD *)ExAllocatePool2(0x100uLL, 2 * v11, a3);
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
