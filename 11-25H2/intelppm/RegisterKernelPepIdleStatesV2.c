/*
 * XREFs of RegisterKernelPepIdleStatesV2 @ 0x14003DFE8
 * Callers:
 *     RegisterKernelIdleStates @ 0x14003D3B0 (RegisterKernelIdleStates.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140004BCC (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 *     DecodeAcpiIdleState @ 0x14003E3A0 (DecodeAcpiIdleState.c)
 */

__int64 __fastcall RegisterKernelPepIdleStatesV2(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int *v4; // r13
  __int64 v6; // rdi
  unsigned int v7; // esi
  bool v8; // zf
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  bool IsAnyHypervisorPresent; // al
  void *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r12
  unsigned __int8 v14; // r9
  __int64 v15; // r14
  __int64 v16; // rdi
  __int128 v17; // xmm0
  __int64 v18; // rdi
  __int128 *v19; // rsi
  unsigned int v20; // edx
  _BYTE *v21; // r10
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // edx
  _BYTE v29[4]; // [rsp+40h] [rbp-29h] BYREF
  int v30; // [rsp+44h] [rbp-25h]
  unsigned int v31; // [rsp+48h] [rbp-21h]
  __int64 v32; // [rsp+50h] [rbp-19h]
  unsigned int *v33; // [rsp+58h] [rbp-11h]
  __int64 v34; // [rsp+60h] [rbp-9h] BYREF
  __int64 v35; // [rsp+68h] [rbp-1h]
  __int128 v36; // [rsp+70h] [rbp+7h] BYREF
  int v37; // [rsp+80h] [rbp+17h]

  v3 = 0;
  v4 = *(unsigned int **)(a1 + 1144);
  v33 = *(unsigned int **)(a1 + 528);
  v6 = a2;
  v29[0] = 0;
  v34 = 0LL;
  v7 = *v4;
  *(_WORD *)(a2 + 18) = 257;
  v8 = (*(_DWORD *)(a1 + 280) & 0x7F277) == 0LL;
  v32 = a3;
  v9 = AcpiCStatePreselect;
  v35 = a2;
  if ( v8 )
    v9 = PepIdlePreselect;
  v31 = v7;
  *(_QWORD *)(a2 + 24) = v9;
  IsAnyHypervisorPresent = HviIsAnyHypervisorPresent();
  v11 = PepIdleVmTest;
  if ( !IsAnyHypervisorPresent )
    v11 = PepIdleTest;
  *(_QWORD *)(v6 + 32) = v11;
  *(_QWORD *)(v6 + 40) = PepIdleAvailabilityCheck;
  *(_QWORD *)(v6 + 48) = PepIdlePreExecuteV2;
  *(_QWORD *)(v6 + 64) = PepIdleExecute;
  *(_QWORD *)(v6 + 72) = PepIdleCompleteV2;
  *(_QWORD *)(v6 + 80) = PepIsHalted;
  *(_QWORD *)(v6 + 88) = PepInitiateWake;
  *(_BYTE *)(v6 + 16) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_140019198,
    0LL);
  *(_BYTE *)(a1 + 1169) = 0;
  v36 = 0LL;
  LOBYTE(v36) = 127;
  v12 = 0LL;
  BYTE12(v36) = 1;
  HIWORD(v36) = 0;
  v37 = 0;
  while ( 1 )
  {
    v30 = v12;
    if ( (unsigned int)v12 >= v7 )
      break;
    v13 = 3 * v12;
    v14 = 0;
    v15 = v6 + 32LL * (unsigned int)v12;
    v16 = v32 + 48;
    v17 = *(_OWORD *)(*(_QWORD *)(a1 + 1152) + 16LL * (unsigned int)v12);
    v29[0] = 0;
    *(_OWORD *)(v15 + 120) = v17;
    v18 = 88LL * (unsigned int)v12 + v16;
    if ( ((v4[3 * v12 + 1] >> 3) & 0xF) != 0 )
    {
      if ( !v33 || !*v33 )
        goto LABEL_27;
      v19 = &v36;
      v20 = 0;
      v21 = v33 + 4;
      do
      {
        if ( *v21 == ((v4[3 * v12 + 1] >> 3) & 0xF) )
          v19 = (__int128 *)&v33[4 * v20 + 1 + v20];
        ++v20;
        v21 += 20;
      }
      while ( v20 < *v33 );
      if ( v19 != &v36 )
        *(_QWORD *)v18 = v19;
      if ( (int)DecodeAcpiIdleState(
                  a1,
                  (_DWORD)v19,
                  *((unsigned __int8 *)v19 + 12),
                  0,
                  (__int64)&v34,
                  (__int64)v29,
                  0LL,
                  v18) < 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 8u);
LABEL_27:
        v3 = -1073741823;
        break;
      }
      if ( v18 )
        *(_BYTE *)(v18 + 82) = *((_BYTE *)v19 + 12);
      if ( !*(_QWORD *)v18 && (v4[v13 + 1] & 0x78) > 8 )
      {
        *(_DWORD *)(v15 + 104) |= 0x40000000u;
        *(_QWORD *)(v18 + 16) = 0LL;
        *(_QWORD *)(v18 + 24) = 0LL;
      }
      v22 = v4[v13 + 2];
      if ( v22 == -1 )
        v22 = 10 * *((unsigned __int16 *)v19 + 7);
      v14 = v29[0];
      v7 = v31;
    }
    else
    {
      v22 = v4[3 * v12 + 2];
    }
    *(_DWORD *)(v15 + 108) = v22;
    *(_BYTE *)(v18 + 81) = (v4[v13 + 1] & 0x200) != 0;
    v6 = v35;
    v23 = *(_DWORD *)(v15 + 104) ^ (v4[v13 + 1] ^ *(_DWORD *)(v15 + 104)) & 0x78;
    *(_DWORD *)(v15 + 104) = v23;
    *(_DWORD *)(v15 + 112) = v4[v13 + 3];
    v24 = v23 ^ (v4[v13 + 1] ^ v23) & 0x80;
    *(_DWORD *)(v15 + 104) = v24;
    v25 = v24 ^ (v4[v13 + 1] ^ v24) & 0x100;
    *(_DWORD *)(v15 + 104) = v25;
    v26 = v25 ^ (v4[v13 + 1] ^ v25) & 1;
    *(_DWORD *)(v15 + 104) = v26;
    v27 = v26 ^ (v4[v13 + 1] ^ v26) & 2;
    *(_DWORD *)(v15 + 104) = v27;
    v12 = (unsigned int)(v30 + 1);
    *(_DWORD *)(v15 + 104) = (v14 << 31) | (v27 ^ (v4[v13 + 1] ^ v27) & 4) & 0x7FFFFFFF;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_140019198);
  return v3;
}
