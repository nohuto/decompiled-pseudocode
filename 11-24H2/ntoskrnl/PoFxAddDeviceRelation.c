/*
 * XREFs of PoFxAddDeviceRelation @ 0x1405D0050
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     PopFxReferenceDevice @ 0x14029F788 (PopFxReferenceDevice.c)
 *     PopFxDereferenceDevice @ 0x140376880 (PopFxDereferenceDevice.c)
 *     ExReleaseSpinLockExclusive @ 0x140379ED0 (ExReleaseSpinLockExclusive.c)
 *     PopFxActivateComponent @ 0x1403B61EC (PopFxActivateComponent.c)
 *     PoFxIdleDevice @ 0x1403D76E4 (PoFxIdleDevice.c)
 *     PopFxActivateDevice @ 0x140496080 (PopFxActivateDevice.c)
 *     PopFxInsertDeviceRelation @ 0x1405D1540 (PopFxInsertDeviceRelation.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PoFxAddDeviceRelation(__int64 a1, __int64 a2, _QWORD *a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rdi
  volatile LONG *v9; // rbp
  KIRQL v10; // al
  ULONG_PTR v11; // rdi
  KIRQL v12; // r14
  unsigned int v13; // r9d
  unsigned int v14; // edx
  _QWORD **v15; // r8
  _QWORD *v16; // r14
  __int64 v17; // rcx
  __int64 Pool2; // rbp

  v4 = 0;
  if ( !a1 )
    return (unsigned int)-1073741585;
  if ( !a2 )
    return (unsigned int)-1073741584;
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
  if ( !v8 )
    return (unsigned int)-1073741584;
  v9 = (volatile LONG *)(v8 + 88);
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 88));
  v11 = *(_QWORD *)(v8 + 80);
  v12 = v10;
  if ( !v11 )
  {
    ExReleaseSpinLockExclusive(v9, v10);
    return (unsigned int)-1073741584;
  }
  PopFxReferenceDevice(v11, 6);
  ExReleaseSpinLockExclusive(v9, v12);
  if ( v11 == a1 )
  {
    v4 = -1073741584;
  }
  else
  {
    v13 = *(_DWORD *)(v11 + 868);
    v14 = 0;
    if ( !v13 )
      goto LABEL_25;
    v15 = *(_QWORD ***)(v11 + 872);
    do
    {
      v16 = *v15;
      v17 = *a3 - **v15;
      if ( *a3 == **v15 )
        v17 = a3[1] - v16[1];
      if ( !v17 )
        break;
      ++v14;
      ++v15;
      v16 = 0LL;
    }
    while ( v14 < v13 );
    if ( v16 )
    {
      if ( a4 - 2 > 2 )
      {
        v4 = -1073741582;
      }
      else if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 864), 0, 0) & 1) != 0
             || (_InterlockedCompareExchange((volatile signed __int32 *)(v11 + 864), 0, 0) & 1) != 0 )
      {
        v4 = -1073741811;
      }
      else
      {
        Pool2 = ExAllocatePool2(0x40uLL);
        if ( Pool2 )
        {
          PopFxActivateComponent(v11, (__int64)v16, 1);
          PopFxActivateDevice(*(_QWORD *)(a1 + 96), 0, 0);
          PopFxInsertDeviceRelation(v16, a1, a4, Pool2);
          PoFxIdleDevice(*(_QWORD *)(a1 + 96));
        }
        else
        {
          v4 = -1073741670;
        }
      }
    }
    else
    {
LABEL_25:
      v4 = -1073741583;
    }
  }
  PopFxDereferenceDevice(v11, 6);
  return v4;
}
