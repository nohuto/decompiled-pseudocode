/*
 * XREFs of HalpMceRecovery @ 0x1405522D0
 * Callers:
 *     <none>
 * Callees:
 *     HalpMceRecoveryNotRequiredIntel @ 0x1405527A0 (HalpMceRecoveryNotRequiredIntel.c)
 *     HalpMceRecoveryRequired @ 0x14055287C (HalpMceRecoveryRequired.c)
 *     HalpShouldRecoveryBeAttempted @ 0x14055294C (HalpShouldRecoveryBeAttempted.c)
 *     WheaGetErrPacketFromErrRecord @ 0x140552990 (WheaGetErrPacketFromErrRecord.c)
 *     HalpMemoryErrorDeferredRecovery @ 0x140552E18 (HalpMemoryErrorDeferredRecovery.c)
 */

__int64 __fastcall HalpMceRecovery(struct _WHEA_ERROR_RECORD *a1, _DWORD *a2)
{
  unsigned int v4; // edi
  PWHEA_ERROR_PACKET ErrPacketFromErrRecord; // rax
  unsigned __int64 Context; // rbx
  __int64 v7; // r8
  unsigned int v8; // r9d
  int v9; // r10d
  __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // eax
  char v14; // al
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  v4 = -1073741637;
  ErrPacketFromErrRecord = WheaGetErrPacketFromErrRecord(a1);
  if ( !ErrPacketFromErrRecord || ErrPacketFromErrRecord->ErrorSourceType > (unsigned int)WheaErrSrcTypeSei )
    return v4;
  Context = ErrPacketFromErrRecord->Context;
  v15 = *(_QWORD *)(Context + 40);
  if ( !HalpMcaRecoverySupported || !HalpMcaRecoveryPolicy )
    goto LABEL_14;
  if ( *(_DWORD *)Context >= 3u )
    *(_DWORD *)(Context + 276) |= 1u;
  if ( !(unsigned __int8)HalpShouldRecoveryBeAttempted(*(unsigned int *)(Context + 4), &v15) )
  {
    if ( v8 >= 3 )
      *(_BYTE *)(Context + 280) = 0;
    if ( v9 == 1 )
    {
      HalpMceRecoveryNotRequiredIntel(Context);
    }
    else if ( ((v7 & 0x4000000000000000LL) == 0 || HalpMcaOverflowRecoverySupported) && (v7 & 0x400000000000000LL) != 0 )
    {
      v14 = 0;
      if ( HalpMcaScalableRasSupported )
        v14 = (v7 & 0x100000000000LL) != 0;
      HalpMemoryErrorDeferredRecovery(*(_QWORD *)(Context + 48), 0, 0, 0, v7, 0, 1, v14);
    }
    v4 = 0;
    goto LABEL_54;
  }
  if ( v8 >= 3 )
    *(_BYTE *)(Context + 280) = 1;
  if ( (v7 & 0x4000000000000000LL) != 0 && !HalpMcaOverflowRecoverySupported )
  {
    if ( v8 >= 3 )
      *(_DWORD *)(Context + 272) |= 2u;
    goto LABEL_14;
  }
  if ( (v7 & 0x200000000000000LL) != 0 )
  {
    if ( v8 >= 3 )
      *(_DWORD *)(Context + 272) |= 4u;
    goto LABEL_14;
  }
  v4 = HalpMceRecoveryRequired(Context);
  if ( (v4 & 0x80000000) != 0 )
    goto LABEL_14;
  v11 = *(_QWORD *)&KeGetPcr()->HalReserved[6];
  v12 = *(_QWORD *)(v11 + 32);
  if ( (*(_DWORD *)v12 & 0x10) != 0 && *(_DWORD *)Context >= 3u )
    *(_BYTE *)(Context + 282) = 1;
  if ( (*(_DWORD *)v12 & 1) == 0 )
    goto LABEL_27;
  v13 = *(_DWORD *)(v11 + 40);
  if ( v13 )
  {
    switch ( v13 )
    {
      case 12:
        if ( *(_DWORD *)Context >= 3u )
          *(_DWORD *)(Context + 272) |= 0x100u;
        break;
      case 10:
        if ( *(_DWORD *)Context >= 3u )
          *(_DWORD *)(Context + 272) |= 0x80u;
        break;
      case 13:
        if ( *(_DWORD *)Context >= 3u )
          *(_DWORD *)(Context + 272) |= 0x200u;
        break;
      case 14:
        if ( *(_DWORD *)Context >= 3u )
          *(_DWORD *)(Context + 272) |= 0x400u;
        v4 = -1073741571;
        goto LABEL_14;
      default:
        goto LABEL_27;
    }
    v4 = -1073741637;
LABEL_14:
    if ( *(_DWORD *)Context >= 3u )
      *(_BYTE *)(Context + 281) = 0;
    return v4;
  }
  a1->Header.Flags.AsULONG |= 0x80u;
LABEL_27:
  if ( (*(_DWORD *)v12 & 4) != 0 )
    *(_QWORD *)(v12 + 8) = a1;
LABEL_54:
  if ( *(_DWORD *)Context >= 3u )
    *(_BYTE *)(Context + 281) = 1;
  *a2 = 2;
  return v4;
}
