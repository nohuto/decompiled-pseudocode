/*
 * XREFs of Isoch_Transfer_CompleteStaleStages @ 0x140015EC0
 * Callers:
 *     Isoch_ProcessTransferEventWithED0 @ 0x140016760 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     StageQueue_ForwardScanGetNextStage @ 0x1400164C0 (StageQueue_ForwardScanGetNextStage.c)
 *     Isoch_Stage_CompleteTD @ 0x140018460 (Isoch_Stage_CompleteTD.c)
 */

__int64 __fastcall Isoch_Transfer_CompleteStaleStages(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3)
{
  __int64 result; // rax
  unsigned __int8 *v4; // rbx
  int v5; // ecx
  int v7; // edx
  __int64 v8; // r10
  unsigned int v9; // ecx
  unsigned __int8 *v10; // r10
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v11 = a1;
  result = a2[130];
  v4 = a2 + 128;
  v5 = a2[132];
  v12 = 0;
  LOBYTE(v11) = 0;
  a2[133] = v5;
  a2[134] = result;
  if ( (_BYTE)result )
  {
    v7 = v5;
    v8 = v5 * (unsigned int)*v4;
    v9 = v4[1];
    v4[6] = result - 1;
    result = (v7 + 1) / v9;
    v4[5] = (v7 + 1) % v9;
    v10 = &v4[v8 + 16];
    if ( v10 )
    {
      do
      {
        if ( v10 == a3 )
          break;
        *((_DWORD *)v10 + 12) = *((_DWORD *)v10 + 11) + 1;
        Isoch_Stage_CompleteTD((_DWORD)v10, 23, 0, 1, (__int64)&v11, (__int64)&v12);
        result = StageQueue_ForwardScanGetNextStage(v4);
        v10 = (unsigned __int8 *)result;
      }
      while ( result );
    }
  }
  return result;
}
