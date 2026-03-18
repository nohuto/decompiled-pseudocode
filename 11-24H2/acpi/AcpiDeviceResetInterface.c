/*
 * XREFs of AcpiDeviceResetInterface @ 0x14004ABF0
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x140043A60 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x140017C58 (ACPIInitReferenceDeviceExtension.c)
 *     memmove @ 0x140070C40 (memmove.c)
 */

__int64 __fastcall AcpiDeviceResetInterface(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  _QWORD *v4; // r15
  unsigned __int16 v5; // bp
  char v6; // r12
  unsigned __int16 v7; // cx
  _WORD *v8; // rsi
  bool v9; // cf
  unsigned int v10; // edi
  KIRQL v11; // al
  KIRQL v12; // r9
  char v13; // r13
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD *i; // rdx
  __int64 Pool2; // r14
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // edx
  __int64 v22; // [rsp+20h] [rbp-48h]

  v2 = a2;
  *(_QWORD *)&xmmword_140088A20 = AcpiDeviceResetReference;
  *((_QWORD *)&xmmword_140088A20 + 1) = AcpiDeviceResetDereference;
  xmmword_140088A10 = DeviceResetInterface;
  xmmword_140088A30 = *(_OWORD *)&off_140074240;
  *(_QWORD *)&xmmword_140088A30 = AcpiDeviceReset;
  xmmword_140088A40 = unk_140074250;
  *((_QWORD *)&xmmword_140088A40 + 1) = AcpiQueryBusSpecificResetInfo;
  *(_QWORD *)&xmmword_140088A50 = AcpiDeviceBusSpecificReset;
  *((_QWORD *)&xmmword_140088A50 + 1) = AcpiGetDeviceResetStatus;
  v3 = *(_QWORD *)(a2 + 184);
  v4 = *(_QWORD **)(a1 + 64);
  v5 = *(_WORD *)(v3 + 18);
  v6 = 1;
  v7 = *(_WORD *)(v3 + 16);
  v8 = *(_WORD **)(v3 + 24);
  if ( v5 > 1u )
  {
    if ( v5 == 2 )
    {
      v9 = v7 < 0x48u;
    }
    else
    {
      if ( v5 != 3 )
      {
        v10 = -1073741637;
        goto LABEL_42;
      }
      v9 = v7 < 0x50u;
    }
  }
  else
  {
    v9 = v7 < 0x38u;
  }
  if ( v9 )
  {
    v10 = -1073741789;
    goto LABEL_42;
  }
  v11 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v10 = 0;
  v22 = v4[62];
  v12 = v11;
  if ( v4[56] )
  {
    v13 = 1;
LABEL_12:
    v6 = 0;
    goto LABEL_13;
  }
  v14 = v4[55];
  v13 = 0;
  if ( !v14 )
    goto LABEL_12;
  v15 = *(_QWORD *)(v14 + 8);
  if ( (*(_DWORD *)(v15 + 16) & 0x220LL) != 0 )
    goto LABEL_12;
  for ( i = *(_QWORD **)(v15 + 48); i != (_QWORD *)(v15 + 48); i = (_QWORD *)*i )
  {
    if ( (*(_DWORD *)(*(i - 1) + 1120LL) & 0x800LL) == 0 )
      goto LABEL_12;
  }
LABEL_13:
  KeReleaseSpinLock(&AcpiPowerLock, v12);
  if ( !v22 && !v13 && !v6 || (Pool2 = ExAllocatePool2(64LL, (unsigned __int16)*v8 + 96LL, 1366319937LL)) == 0 )
  {
    v10 = *(_DWORD *)(v2 + 48);
    goto LABEL_42;
  }
  ACPIInitReferenceDeviceExtension((__int64)v4);
  *(_QWORD *)(Pool2 + 8) = v4;
  *(_DWORD *)Pool2 = 1;
  if ( *v8 )
  {
    memmove((void *)(Pool2 + 96), v8, (unsigned __int16)*v8);
    *(_QWORD *)(Pool2 + 80) = Pool2 + 96;
    v2 = a2;
  }
  *(_BYTE *)(Pool2 + 17) = v22 != 0;
  *(_BYTE *)(Pool2 + 16) = v13;
  if ( v13 )
  {
    v18 = v4[56];
LABEL_30:
    *(_QWORD *)(Pool2 + 72) = *(_QWORD *)(v18 + 8);
    goto LABEL_31;
  }
  if ( v6 )
  {
    v18 = v4[55];
    goto LABEL_30;
  }
LABEL_31:
  *(_QWORD *)(Pool2 + 64) = Pool2;
  *(_QWORD *)(Pool2 + 56) = AcpiDeviceResetCompleteResetWorker;
  *(_QWORD *)(Pool2 + 40) = 0LL;
  if ( v5 > 1u )
  {
    *(_OWORD *)v8 = xmmword_140088A10;
    *((_OWORD *)v8 + 1) = xmmword_140088A20;
    *((_OWORD *)v8 + 2) = xmmword_140088A30;
    *((_OWORD *)v8 + 3) = xmmword_140088A40;
    if ( v5 == 2 )
    {
      *((_QWORD *)v8 + 8) = xmmword_140088A50;
      *(_DWORD *)v8 = 131144;
    }
    else
    {
      *((_OWORD *)v8 + 4) = xmmword_140088A50;
    }
  }
  else
  {
    *(_OWORD *)v8 = xmmword_140088A10;
    *((_OWORD *)v8 + 1) = xmmword_140088A20;
    *((_OWORD *)v8 + 2) = xmmword_140088A30;
    *((_QWORD *)v8 + 6) = xmmword_140088A40;
    *(_DWORD *)v8 = 65592;
  }
  *((_QWORD *)v8 + 1) = Pool2;
  v19 = *(_QWORD *)(Pool2 + 80);
  if ( v19 && *(_QWORD *)(v19 + 32) )
    *((_DWORD *)v8 + 10) = *(_DWORD *)(v19 + 40);
  v20 = (v22 != 0) | 2;
  if ( !*(_QWORD *)(Pool2 + 72) )
    v20 = v22 != 0;
  *((_DWORD *)v8 + 10) = v20;
LABEL_42:
  *(_DWORD *)(v2 + 48) = v10;
  return v10;
}
