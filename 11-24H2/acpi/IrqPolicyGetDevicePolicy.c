/*
 * XREFs of IrqPolicyGetDevicePolicy @ 0x1400B3440
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1400C1580 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     memset @ 0x140070F40 (memset.c)
 *     IrqPolicyGetSubKey @ 0x1400B397C (IrqPolicyGetSubKey.c)
 *     OSGetRegistryValue @ 0x1400B3AFC (OSGetRegistryValue.c)
 *     IrqTraceAffinityPolicy @ 0x1400BEF1C (IrqTraceAffinityPolicy.c)
 */

__int64 __fastcall IrqPolicyGetDevicePolicy(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        __int64 a3,
        int *a4,
        __int16 *a5,
        __int64 a6)
{
  __int16 v9; // di
  unsigned __int64 v10; // r12
  int v11; // ebx
  unsigned __int64 v12; // rsi
  __int64 result; // rax
  _DWORD *v14; // r8
  __int64 v15; // rdx
  int RegistryValues; // r15d
  int v17; // edx
  int *v18; // rcx
  bool v19; // zf
  _BYTE *v20; // rcx
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  BOOL v22; // [rsp+34h] [rbp-CCh] BYREF
  int v23; // [rsp+38h] [rbp-C8h] BYREF
  int v24; // [rsp+3Ch] [rbp-C4h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h]
  PDEVICE_OBJECT Pdo; // [rsp+50h] [rbp-B0h]
  __int16 *v28; // [rsp+58h] [rbp-A8h]
  int *v29; // [rsp+60h] [rbp-A0h]
  __int64 v30; // [rsp+68h] [rbp-98h]
  _QWORD v31[36]; // [rsp+70h] [rbp-90h] BYREF

  v28 = a5;
  Pdo = a1;
  v30 = a6;
  v29 = a4;
  memset(v31, 0, 0x118uLL);
  v9 = IrqMachinePolicy;
  v24 = (unsigned __int16)IrqMachinePolicy;
  v23 = 2;
  v21 = 0;
  v10 = 0LL;
  v22 = 0;
  LOWORD(v11) = 0;
  Handle = 0LL;
  v12 = 0LL;
  result = IrqPolicyGetSubKey(a1, L"Affinity Policy", 0LL, &Handle);
  if ( (int)result < 0 )
    return result;
  P = 0LL;
  if ( (int)OSGetRegistryValue(Handle) >= 0 )
  {
    v14 = P;
    switch ( *(_DWORD *)P )
    {
      case 3:
        LODWORD(v15) = *((_DWORD *)P + 1);
        if ( (unsigned int)(v15 - 1) <= 7 )
        {
          do
          {
            v15 = (unsigned int)(v15 - 1);
            v14[1] = v15;
            v12 = *((unsigned __int8 *)v14 + v15 + 8) | (v12 << 8);
          }
          while ( (_DWORD)v15 );
        }
        break;
      case 4:
        v12 = *((unsigned int *)P + 2);
        break;
      case 0xB:
        v12 = *((_QWORD *)P + 1);
        break;
    }
    ExFreePoolWithTag(v14, 0);
  }
  LODWORD(v31[6]) = 0;
  LODWORD(v31[4]) = 67108868;
  LODWORD(v31[1]) = 288;
  v31[2] = L"GroupOverride";
  LODWORD(v31[8]) = 288;
  v31[3] = &v21;
  LODWORD(v31[11]) = 67108868;
  v31[5] = &v21;
  v31[9] = L"DevicePolicy";
  v31[10] = &v24;
  v31[12] = &v24;
  v31[16] = L"DevicePriority";
  v31[17] = &v23;
  v31[19] = &v23;
  v31[23] = L"GroupPolicy";
  v31[24] = &v22;
  LODWORD(v31[15]) = 288;
  LODWORD(v31[18]) = 67108868;
  LODWORD(v31[22]) = 288;
  LODWORD(v31[25]) = 67108868;
  v31[26] = &v22;
  LODWORD(v31[13]) = 0;
  LODWORD(v31[20]) = 0;
  LODWORD(v31[27]) = 0;
  RegistryValues = RtlQueryRegistryValuesEx(0x40000000LL, Handle, v31, 0LL, 0LL);
  if ( RegistryValues >= 0 )
  {
    v9 = v24;
    if ( (unsigned __int16)(v24 - 5) <= 1u )
      v9 = 0;
    if ( a2 && (*(_BYTE *)(a2 + 4) & 4) != 0 )
    {
      v17 = *(unsigned __int16 *)(a2 + 18);
      v9 = *(_WORD *)(a2 + 16);
      v11 = v17;
      v12 = *(_QWORD *)(a2 + 24);
      v23 = *(_DWORD *)(a2 + 20);
      v21 = v17;
      if ( v9 != 4 )
      {
        LOWORD(v11) = 0;
        v12 = 0LL;
        v21 = 0;
        v22 = (_WORD)v17 == 0xFFFF;
LABEL_18:
        if ( v9 == 2 )
        {
          IrqTraceAffinityPolicy(Pdo);
          LOWORD(v11) = v21;
LABEL_29:
          v10 = v12;
          RegistryValues = 0;
          goto LABEL_30;
        }
        if ( v9 )
          goto LABEL_29;
LABEL_28:
        v9 = IrqMachinePolicy;
        goto LABEL_29;
      }
      if ( v17 == 0xFFFF )
      {
        v11 = 0;
        v21 = 0;
      }
    }
    else
    {
      v11 = v21;
      if ( v9 != 4 )
        goto LABEL_18;
    }
    if ( InitSafeBootMode || v11 == 0xFFFF || !v12 )
      goto LABEL_28;
    v22 = 0;
    v10 = v12;
    IrqTraceAffinityPolicy(Pdo);
  }
LABEL_30:
  if ( Handle )
    ZwClose(Handle);
  if ( RegistryValues >= 0 )
  {
    v18 = v29;
    v19 = !v22;
    *v28 = v9;
    *v18 = v23;
    v20 = (_BYTE *)v30;
    *(_OWORD *)a3 = 0LL;
    *(_WORD *)(a3 + 8) = v11;
    *(_QWORD *)a3 = v10;
    *v20 = !v19;
  }
  return (unsigned int)RegistryValues;
}
