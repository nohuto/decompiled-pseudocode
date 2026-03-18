/*
 * XREFs of AcpiIrqLibSetupSciInterrupt @ 0x1400A878C
 * Callers:
 *     OSInterruptVector @ 0x1400C6D78 (OSInterruptVector.c)
 * Callees:
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     IcAddPossibleReference @ 0x140096BAC (IcAddPossibleReference.c)
 *     IcSetPossibleInput @ 0x1400B12E8 (IcSetPossibleInput.c)
 *     IrqArbGetDeviceIrql @ 0x1400B1664 (IrqArbGetDeviceIrql.c)
 *     IcCopyData @ 0x1400B1A64 (IcCopyData.c)
 *     ProcessorCopyData @ 0x1400B22E8 (ProcessorCopyData.c)
 *     IcClearPossibleData @ 0x1400B27A4 (IcClearPossibleData.c)
 *     IcRemapInputs @ 0x1400B2A48 (IcRemapInputs.c)
 *     IcCopyInputStateToDeviceState @ 0x1400B2C30 (IcCopyInputStateToDeviceState.c)
 *     IrqLibpSetSciConnectionData @ 0x1400C87D0 (IrqLibpSetSciConnectionData.c)
 *     IrqPolicyGetDistributionDisposition @ 0x1400C8D54 (IrqPolicyGetDistributionDisposition.c)
 */

__int64 __fastcall AcpiIrqLibSetupSciInterrupt(unsigned __int16 a1, void *a2)
{
  ULONGLONG v2; // rdi
  _DWORD *Pool2; // rax
  _DWORD *UserData; // rbx
  __int64 result; // rax
  _DWORD *v7; // rsi
  char v8; // bp
  ULONGLONG v9; // rdx
  char v10; // al
  __int64 v11; // r8
  __int128 v12; // [rsp+50h] [rbp-78h] BYREF
  __int128 v13; // [rsp+60h] [rbp-68h]
  _OWORD v14[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v15; // [rsp+90h] [rbp-38h]

  v2 = a1;
  memset(v14, 0, sizeof(v14));
  v15 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 120LL, 1232102209LL);
  UserData = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  Pool2[12] = 0;
  v7 = Pool2 + 8;
  Pool2[8] = 0;
  *Pool2 = 1;
  v8 = 3;
  Pool2[2] = 1;
  v9 = v2;
  Pool2[11] = 2;
  if ( (unsigned int)v2 < 0x10 )
  {
    LODWORD(v2) = *((_DWORD *)&IsaVectorOverrides + 2 * v2);
    v10 = *((_BYTE *)&IsaVectorOverrides + 8 * v9 + 4);
    if ( v10 != -1 )
    {
      v8 = *((_BYTE *)&IsaVectorOverrides + 8 * v9 + 4);
      if ( (v10 & 1) == 0 )
        UserData[11] = 1;
    }
  }
  UserData[22] = v2;
  IrqLibSciGsiv = v2;
  RtlAddRange(RangeList, v9, v9, 0, 0x12u, UserData, a2);
  result = ((__int64 (__fastcall *)(void *, _QWORD, _QWORD, _OWORD *, int, _DWORD, int, int, __int128 *))ProcessorReserveIdtEntries)(
             a2,
             0LL,
             (unsigned int)IrqLibSciGsiv,
             v14,
             1,
             0,
             1,
             1,
             &v12);
  if ( (int)result >= 0 )
  {
    *(_OWORD *)(UserData + 14) = v12;
    UserData[9] = DWORD1(v13);
    result = IrqArbGetDeviceIrql(v7, UserData + 10);
    if ( (int)result >= 0 )
    {
      IcClearPossibleData();
      LOBYTE(v11) = v8;
      result = IcSetPossibleInput((unsigned int)v2, &v12, v11, 0LL);
      if ( (int)result >= 0 )
      {
        IcAddPossibleReference(v2, 0);
        result = ProcessorCopyData(0LL);
        if ( (int)result >= 0 )
        {
          result = IcRemapInputs();
          if ( (int)result >= 0 )
          {
            IcCopyInputStateToDeviceState(&IrqLibArbiterInstance, 0LL);
            result = IcCopyData(0LL);
            if ( (int)result >= 0 )
            {
              result = IrqLibpSetSciConnectionData(v7, a2);
              if ( (int)result >= 0 )
              {
                IrqPolicyGetDistributionDisposition();
                return 0LL;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
