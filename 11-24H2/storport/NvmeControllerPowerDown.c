/*
 * XREFs of NvmeControllerPowerDown @ 0x1400F2358
 * Callers:
 *     NvmeAdapterStopOnPowerdown @ 0x140131E10 (NvmeAdapterStopOnPowerdown.c)
 *     NvmeAdapterStorMQPowerDownDeviceNextStep @ 0x140131E9C (NvmeAdapterStorMQPowerDownDeviceNextStep.c)
 * Callees:
 *     StorDelayExecution @ 0x14002AE80 (StorDelayExecution.c)
 *     NvmeControllerSetHostMemoryBuffer @ 0x1400C9C40 (NvmeControllerSetHostMemoryBuffer.c)
 *     NvmeControllerIoQueuesDeletion @ 0x1400F1250 (NvmeControllerIoQueuesDeletion.c)
 *     NvmeControllerQueryStorMQProperty @ 0x1400F3814 (NvmeControllerQueryStorMQProperty.c)
 *     NvmeControllerSetStorMQProperty @ 0x1400F5048 (NvmeControllerSetStorMQProperty.c)
 */

__int64 __fastcall NvmeControllerPowerDown(__int64 a1)
{
  char v1; // r14
  unsigned int v2; // edi
  unsigned int *v4; // rcx
  _BYTE *v5; // rdx
  __int64 v6; // rax
  unsigned int v7; // esi
  unsigned int v8; // edx
  int v9; // ecx
  unsigned int v10; // ebp
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  int v13; // eax
  signed __int32 v15[8]; // [rsp+0h] [rbp-58h] BYREF
  int v16[2]; // [rsp+20h] [rbp-38h]
  size_t Size; // [rsp+30h] [rbp-28h]
  unsigned int v18; // [rsp+60h] [rbp+8h] BYREF
  int v19; // [rsp+68h] [rbp+10h] BYREF

  v1 = *(_BYTE *)(a1 + 1728);
  v2 = 0;
  v18 = 0;
  v19 = 0;
  *(_QWORD *)(a1 + 968) |= 0x4000000uLL;
  v4 = *(unsigned int **)(a1 + 1200);
  if ( v4 )
  {
    LODWORD(Size) = v4[1];
    NvmeControllerSetHostMemoryBuffer(a1, 0, 0, 0, *v4, v4 + 2, Size);
  }
  v5 = *(_BYTE **)(a1 + 1208);
  if ( v5 && (*v5 & 3) == 3 )
    *v5 |= 4u;
  v6 = *(_QWORD *)(a1 + 1048);
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 592) + 88LL) != 0 ? 64 : 500;
  if ( v6 )
  {
    v8 = *(unsigned __int8 *)(v6 + 15);
    if ( (_BYTE)v8 )
    {
      v9 = 64;
      if ( v8 >= 0x40 )
        v9 = *(unsigned __int8 *)(v6 + 15);
      v7 = 100 * v9;
    }
  }
  *(_QWORD *)(a1 + 968) |= 4uLL;
  *(_QWORD *)(a1 + 968) &= ~1uLL;
  v10 = NvmeControllerIoQueuesDeletion(a1);
  if ( v1 == 1 )
  {
    *(_QWORD *)v16 = &v18;
    NvmeControllerQueryStorMQProperty(a1, 20LL, 4LL);
    v11 = v18;
  }
  else
  {
    v11 = *(_DWORD *)(*(_QWORD *)(a1 + 920) + 20LL);
  }
  v12 = v11 & 0xFFFF3FFF | 0x4000;
  v18 = v12;
  if ( v1 == 1 )
  {
    *(_QWORD *)v16 = &v18;
    NvmeControllerSetStorMQProperty(a1, 20LL, 4LL);
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 920) + 20LL) = v12;
    _InterlockedOr(v15, 0);
  }
  if ( !v7 )
    goto LABEL_24;
  do
  {
    if ( v1 == 1 )
    {
      *(_QWORD *)v16 = &v19;
      NvmeControllerQueryStorMQProperty(a1, 28LL, 4LL);
      LOBYTE(v13) = v19;
    }
    else
    {
      v13 = *(_DWORD *)(*(_QWORD *)(a1 + 920) + 28LL);
      v19 = v13;
    }
    if ( (v13 & 0xC) == 8 )
      break;
    StorDelayExecution(0x2710u);
    ++v2;
  }
  while ( v2 < v7 );
  if ( v2 >= v7 )
  {
LABEL_24:
    v10 = -2147483631;
    *(_QWORD *)(a1 + 968) |= 0x200000uLL;
  }
  *(_QWORD *)(a1 + 968) &= ~0x4000000uLL;
  return v10;
}
