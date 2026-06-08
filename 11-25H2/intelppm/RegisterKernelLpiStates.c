/*
 * XREFs of RegisterKernelLpiStates @ 0x14003803C
 * Callers:
 *     RegisterKernelIdleStates @ 0x14003D3B0 (RegisterKernelIdleStates.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 *     DecodeAcpiIdleState @ 0x14003E3A0 (DecodeAcpiIdleState.c)
 */

__int64 __fastcall RegisterKernelLpiStates(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx
  __int64 v5; // r12
  void *v8; // rax
  unsigned int v9; // ebp
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // r12
  int v13; // eax
  int v14; // r8d
  int v15; // eax
  _QWORD v17[9]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int8 v18; // [rsp+90h] [rbp+8h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+18h]
  char v20; // [rsp+A8h] [rbp+20h] BYREF

  v19 = a3;
  v3 = *(_QWORD *)(a1 + 544);
  v4 = 0;
  v20 = 0;
  v5 = a3;
  v18 = 0;
  v17[0] = 0LL;
  if ( v3 && *(_DWORD *)(v3 + 16) )
  {
    *(_BYTE *)(a2 + 19) = 1;
    *(_QWORD *)(a2 + 40) = PepIdleAvailabilityCheck;
    *(_QWORD *)(a2 + 24) = PepIdlePreselect;
    *(_QWORD *)(a2 + 64) = LpiIdleExecute;
    if ( _bittest64((const signed __int64 *)(a1 + 280), 0x2Cu) )
    {
      *(_QWORD *)(a2 + 48) = PepNotifyLpiPreExecute;
      v8 = PepNotifyLpiComplete;
    }
    else
    {
      v8 = AcpiCStateIdleComplete;
    }
    *(_QWORD *)(a2 + 72) = v8;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_140019198,
      0LL);
    *(_BYTE *)(a1 + 1169) = 0;
    *(_QWORD *)(a2 + 80) = AcpiCStateIsHalted;
    v9 = 0;
    *(_BYTE *)(a2 + 16) = 1;
    *(_QWORD *)(a2 + 88) = AcpiCStateIsHalted;
    *(_QWORD *)(a2 + 56) = *(_QWORD *)(v3 + 8);
    if ( *(_DWORD *)(v3 + 16) )
    {
      while ( 1 )
      {
        v10 = 32LL * v9;
        v11 = 88LL * v9 + v5 + 48;
        v12 = 80LL * v9;
        *(_DWORD *)(v10 + a2 + 108) = 10 * *(_DWORD *)(v12 + v3 + 28);
        v13 = *(_DWORD *)(v12 + v3 + 24);
        *(_DWORD *)(v10 + a2 + 104) |= 0x81u;
        *(_DWORD *)(v10 + a2 + 112) = 10 * v13;
        *(_OWORD *)(v10 + a2 + 120) = *(_OWORD *)(v12 + v3 + 88);
        v14 = DecodeAcpiIdleState(
                a1,
                (int)v12 + (int)v3 + 48,
                -1,
                *(_DWORD *)(v12 + v3 + 36),
                (__int64)v17,
                (__int64)&v18,
                (__int64)&v20,
                v11);
        if ( v14 < 0 )
          break;
        *(_DWORD *)(v10 + a2 + 104) = (*(_DWORD *)(v10 + a2 + 104) & 0x7FFFFFFF | (v18 << 31)) ^ (*(_BYTE *)(v10 + a2 + 104) ^ (unsigned __int8)(2 * v20)) & 2 ^ (*(_BYTE *)(v10 + a2 + 104) ^ (*(_BYTE *)(v10 + a2 + 104) ^ (unsigned __int8)(2 * v20)) & 2 ^ (unsigned __int8)(4 * v20)) & 4;
        if ( HIBYTE(word_140019A91) )
        {
          v15 = v9 + 1;
          if ( v9 >= 3 )
            v15 = 3;
          *(_DWORD *)(v11 + 40) = v15;
LABEL_13:
          if ( HIBYTE(word_140019A91) )
            goto LABEL_15;
        }
        *(_QWORD *)(v11 + 56) = *(_QWORD *)(v12 + v3 + 52);
LABEL_15:
        if ( v14 < 0 || (*(_DWORD *)(v12 + v3 + 32) & 1) == 0 )
          *(_DWORD *)(v10 + a2 + 104) |= 0x40000000u;
        v5 = v19;
        if ( ++v9 >= *(_DWORD *)(v3 + 16) )
          goto LABEL_19;
      }
      _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x80000u);
      goto LABEL_13;
    }
LABEL_19:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_140019198);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v4;
}
