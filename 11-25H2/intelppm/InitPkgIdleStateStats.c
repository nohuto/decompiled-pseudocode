/*
 * XREFs of InitPkgIdleStateStats @ 0x140046520
 * Callers:
 *     InitMeasRegisters @ 0x14002B700 (InitMeasRegisters.c)
 * Callees:
 *     ReadMSRValue @ 0x140002C60 (ReadMSRValue.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 *     memset @ 0x140010340 (memset.c)
 *     QueryPEPForRegisterList @ 0x1400298E4 (QueryPEPForRegisterList.c)
 *     QueryPPMForRegisterList @ 0x140046788 (QueryPPMForRegisterList.c)
 */

__int64 __fastcall InitPkgIdleStateStats(__int64 a1, char a2)
{
  _DWORD *v2; // rdi
  int v3; // ebx
  __int64 Pool2; // rax
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  int v9; // eax
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  __int64 v13; // r11
  __int64 v14; // r10
  __int64 v15; // rax
  unsigned __int64 MSRValue; // rax
  int v17; // r11d
  __int64 v18; // r10
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v23[18]; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v24; // [rsp+F0h] [rbp+77h] BYREF
  _DWORD *v25; // [rsp+F8h] [rbp+7Fh] BYREF

  v24 = 0;
  v2 = 0LL;
  v22 = 0LL;
  v3 = 0;
  v25 = 0LL;
  if ( (qword_140019AB8 & 0x100000000LL) != 0 )
    return (unsigned int)v3;
  Pool2 = ExAllocatePool2(64LL, 56LL, 1919119952LL);
  v7 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  *(_DWORD *)(Pool2 + 24) = 1;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2520))(
         WdfDriverGlobals,
         0LL,
         Pool2 + 16);
  if ( v3 >= 0 )
  {
    v9 = a2 ? QueryPEPForRegisterList(a1, v8, &v25) : QueryPPMForRegisterList(&v25);
    v2 = v25;
    v3 = v9;
    if ( v9 >= 0 )
    {
      v10 = (_QWORD *)ExAllocatePool2(64LL, (unsigned int)(40 * v25[2] + 32), 1919119952LL);
      v7[6] = v10;
      v11 = v10;
      if ( v10 )
      {
        *v10 = KeQueryInterruptTimePrecise(&v22);
        v13 = 0LL;
        for ( *((_DWORD *)v11 + 6) = v2[2]; (unsigned int)v13 < v2[2]; v11[v18 + 8] = MSRValue )
        {
          v14 = 5 * v13;
          v15 = 8LL * (unsigned int)v13;
          *(_OWORD *)&v11[v14 + 4] = *(_OWORD *)&v2[v15 + 4];
          *(_OWORD *)&v11[v14 + 6] = *(_OWORD *)&v2[v15 + 8];
          MSRValue = ReadMSRValue(0LL, v11[5 * v13 + 5], v11[5 * v13 + 6], HIDWORD(v11[5 * v13 + 6]));
          v13 = (unsigned int)(v17 + 1);
        }
        v19 = *(_QWORD *)v2;
        if ( !*(_QWORD *)v2 )
        {
          memset(v23, 0, 0x70uLL);
          v23[2] = L"~MHz";
          LODWORD(v23[1]) = 292;
          v23[3] = &v24;
          LODWORD(v23[4]) = 0x4000000;
          if ( (int)RtlQueryRegistryValuesEx(
                      0LL,
                      L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                      v23,
                      0LL,
                      0LL) >= 0 )
          {
            v20 = v24;
          }
          else
          {
            v20 = 0LL;
            v24 = 0;
          }
          v19 = 1000000 * v20;
        }
        v11[2] = v19;
        v7[4] = RefreshPkgIdleStateMSRValues;
        v7[5] = QueryPkgIdleStateMSRValues;
        v21 = (_QWORD *)qword_140019AC8;
        if ( *(__int64 **)qword_140019AC8 != &qword_140019AC0 )
          __fastfail(3u);
        *v7 = &qword_140019AC0;
        v7[1] = v21;
        *v21 = v7;
        HIDWORD(qword_140019AB8) |= 1u;
        v3 = 0;
        qword_140019AC8 = (__int64)v7;
        goto LABEL_12;
      }
      v3 = -1073741670;
    }
  }
  ExFreePoolWithTag(v7, (ULONG)1919119952);
LABEL_12:
  if ( v2 )
    ExFreePoolWithTag(v2, (ULONG)1919119952);
  return (unsigned int)v3;
}
