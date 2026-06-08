/*
 * XREFs of InitMeasRegisters @ 0x14002B700
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 *     IsPackageThermStatusSupported @ 0x140029DD0 (IsPackageThermStatusSupported.c)
 *     InitPkgThermalStats @ 0x14002BA60 (InitPkgThermalStats.c)
 *     InitPkgIdleStateStats @ 0x140046520 (InitPkgIdleStateStats.c)
 *     QueryPPMForRegisterList @ 0x140046788 (QueryPPMForRegisterList.c)
 */

__int64 __fastcall InitMeasRegisters(__int64 a1)
{
  __int64 v1; // rbp
  int v2; // ebx
  char v4; // r14
  int v5; // esi
  int PPMForRegisterList; // eax
  __int64 v7; // rdx
  unsigned int v8; // edi
  __int64 (__fastcall *v9)(); // rax
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0;
  v1 = 0LL;
  v2 = 0;
  if ( !(_DWORD)qword_140019AB8 )
  {
    v4 = 1;
    v2 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1120), 45LL, &v11);
    if ( v2 < 0 )
    {
      PPMForRegisterList = QueryPPMForRegisterList(0LL);
      v2 = PPMForRegisterList;
      if ( PPMForRegisterList < 0 )
      {
        if ( PPMForRegisterList != -1073741637 )
          return (unsigned int)v2;
        v5 = 0;
      }
      else
      {
        v5 = 1;
      }
      v4 = 0;
    }
    else
    {
      v5 = v11;
    }
    v8 = v5 | 2;
    if ( !IsPackageThermStatusSupported() )
      v8 = v5;
    for ( LODWORD(qword_140019AB8) = v8; v8; v8 >>= 1 )
    {
      if ( (v8 & 1) != 0 )
      {
        v9 = ProcInitRoutines[v1];
        if ( v9 )
        {
          LOBYTE(v7) = v4;
          v2 = ((__int64 (__fastcall *)(__int64, __int64))v9)(a1, v7);
          if ( v2 < 0 )
            break;
        }
      }
      v1 = (unsigned int)(v1 + 1);
    }
  }
  return (unsigned int)v2;
}
