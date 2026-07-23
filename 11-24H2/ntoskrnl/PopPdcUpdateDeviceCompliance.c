/*
 * XREFs of PopPdcUpdateDeviceCompliance @ 0x140A85F24
 * Callers:
 *     PopPdcCsDeviceNotification @ 0x140A85D68 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     PopDiagTraceDeviceComplianceUpdate @ 0x1405D23CC (PopDiagTraceDeviceComplianceUpdate.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopPdcUpdateDeviceCompliance(__int64 a1, __int64 a2)
{
  _BYTE *v2; // r8
  unsigned int v3; // ebx
  unsigned int v4; // edi
  int v5; // ebp
  __int64 v6; // r9
  int *v7; // rsi
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rdx
  bool v12; // zf
  __int64 v13; // [rsp+20h] [rbp-8h]

  v2 = PopPdcDeviceList;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  while ( v2 != (_BYTE *)&PopPdcDeviceList )
  {
    a1 = *((unsigned int *)v2 + 6);
    a2 = v4;
    v5 |= 1 << a1;
    v4 |= 1 << a1;
    v12 = v2[32] == 0;
    v2 = *(_BYTE **)v2;
    if ( v12 )
      v4 = a2;
  }
  PopAcquirePolicyLock(a1, a2);
  v7 = PopCsDeviceCompliance;
  do
  {
    v8 = (unsigned int)*v7;
    v9 = v3;
    if ( ((1 << v3) & v4) != 0 )
      v10 = 1LL;
    else
      v10 = (unsigned int)-((v5 & (1 << v3)) != 0);
    if ( (_DWORD)v10 != (_DWORD)v8 )
    {
      *v7 = v10;
      PopDiagTraceDeviceComplianceUpdate(v3, v10);
    }
    ++v3;
    ++v7;
  }
  while ( v3 < 5 );
  return PopReleasePolicyLock(v9, v10, v8, v6, v13);
}
