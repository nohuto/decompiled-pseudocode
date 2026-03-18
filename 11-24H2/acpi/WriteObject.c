/*
 * XREFs of WriteObject @ 0x140006BD0
 * Callers:
 *     ProcessIncDec @ 0x140005D80 (ProcessIncDec.c)
 *     Index @ 0x140008710 (Index.c)
 *     ExprOp1_32 @ 0x14002DB10 (ExprOp1_32.c)
 *     ToDecStr @ 0x14002DC70 (ToDecStr.c)
 *     ToBuffer @ 0x14002E060 (ToBuffer.c)
 *     CopyObject @ 0x14002E220 (CopyObject.c)
 *     ExprOp1_64 @ 0x14002E690 (ExprOp1_64.c)
 *     ExprOp2_32 @ 0x14002E874 (ExprOp2_32.c)
 *     MidString @ 0x14002EA20 (MidString.c)
 *     ToInteger @ 0x14002ED80 (ToInteger.c)
 *     CondRefOf @ 0x14002EE00 (CondRefOf.c)
 *     ToHexStr @ 0x14002EEC0 (ToHexStr.c)
 *     Concat @ 0x14002F1F0 (Concat.c)
 *     ProcessDivide @ 0x140040570 (ProcessDivide.c)
 *     ConcatenateResTemplate @ 0x140052C10 (ConcatenateResTemplate.c)
 * Callees:
 *     RawFieldAccess @ 0x140001978 (RawFieldAccess.c)
 *     DupObjData @ 0x140006F90 (DupObjData.c)
 *     IsCompatableDSDTRevision @ 0x140008AC0 (IsCompatableDSDTRevision.c)
 *     PushFrame @ 0x140009A30 (PushFrame.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     SupportsOnlyRawAccess @ 0x140011EA8 (SupportsOnlyRawAccess.c)
 *     GetObjectTypeName @ 0x14002F744 (GetObjectTypeName.c)
 *     CopyObjBuffer @ 0x14003AC48 (CopyObjBuffer.c)
 *     DumpObject @ 0x14006BA88 (DumpObject.c)
 *     memmove @ 0x140070C40 (memmove.c)
 */

__int64 __fastcall WriteObject(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  unsigned int v8; // edi
  __int64 v10; // r15
  unsigned int v11; // r14d
  int v12; // ecx
  int v13; // ebp
  __int64 v14; // r12
  __int64 v15; // rax
  _QWORD *v16; // rbx
  int v17; // ecx
  _QWORD *v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // ecx
  int v22; // ecx
  int v23; // edx
  int v24; // edx
  int v25; // ecx
  int ObjectTypeName; // eax
  int v27; // eax
  __int64 v28; // [rsp+68h] [rbp+10h] BYREF

  v28 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = *(unsigned __int16 *)(a2 + 2);
      if ( (_WORD)v6 != 128 )
        break;
      a2 = *(_QWORD *)(a2 + 16) + 64LL;
    }
    if ( (_WORD)v6 != 129 )
      break;
    a2 = *(_QWORD *)(a2 + 16);
  }
  if ( *(_WORD *)(a2 + 2) )
  {
    switch ( *(_WORD *)(a2 + 2) )
    {
      case 1:
        v16 = (_QWORD *)(a2 + 16);
        if ( !(unsigned __int8)IsCompatableDSDTRevision() )
          return (unsigned int)CopyObjBuffer(v16, 4uLL);
        v17 = *(unsigned __int16 *)(a3 + 2);
        v8 = 0;
        if ( v17 == 1 )
        {
          v18 = (_QWORD *)(a3 + 16);
          v19 = 8;
        }
        else
        {
          v22 = v17 - 2;
          if ( v22 )
          {
            if ( v22 != 1 )
            {
              v8 = -1072431095;
              LogError(3222536201LL);
              AcpiDiagTraceAmlError(0LL, 3222536201LL);
              ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a3 + 2));
              PrintDebugMessage(30, ObjectTypeName, 0, 0, 0LL);
              return v8;
            }
            v18 = *(_QWORD **)(a3 + 32);
            v19 = *(_DWORD *)(a3 + 24);
          }
          else
          {
            v18 = *(_QWORD **)(a3 + 32);
            v19 = *(_DWORD *)(a3 + 24) - 1;
          }
        }
        if ( v16 != v18 )
        {
          *v16 = 0LL;
          if ( v19 >= 8 )
            v19 = 8;
          memmove(v16, v18, v19);
        }
        return v8;
      case 2:
        v23 = *(_DWORD *)(a2 + 24);
        if ( v23 )
          return (unsigned int)CopyObjBuffer(*(void **)(a2 + 32), (unsigned int)(v23 - 1));
        return (unsigned int)-1073741811;
      case 3:
        return (unsigned int)CopyObjBuffer(*(void **)(a2 + 32), *(unsigned int *)(a2 + 24));
      case 5:
        v8 = PushFrame(a1, 1430668097, 48, (unsigned int)AccFieldUnit, (__int64)&v28);
        if ( !v8 )
        {
          v20 = v28;
          *(_QWORD *)(v28 + 32) = a2;
          *(_QWORD *)(v20 + 40) = a3;
        }
        return v8;
      case 0xE:
        v10 = *(_QWORD *)(a2 + 32) + 12LL;
        v11 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 32) + 20LL) + 7) >> 3;
        if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 24LL) & 0xFu) > 4 )
        {
          if ( v6 == 5 )
            return (unsigned int)RawFieldAccess(a1, 1u, a2, a3);
          v8 = -1072431087;
          LogError(3222536209LL);
          AcpiDiagTraceAmlError(a1, 3222536209LL);
          v24 = *(_DWORD *)(v10 + 12);
          v25 = 213;
        }
        else
        {
          v12 = *(unsigned __int16 *)(a3 + 2);
          v28 = 0LL;
          if ( v12 == 1 )
          {
            v13 = 8;
            v14 = a3 + 16;
            if ( v11 < 8 )
              v13 = v11;
LABEL_14:
            if ( !(unsigned __int8)SupportsOnlyRawAccess(a2) )
            {
              v8 = PushFrame(a1, 1279677015, 64, (unsigned int)WriteFieldLoop, (__int64)&v28);
              if ( !v8 )
              {
                v15 = v28;
                *(_QWORD *)(v28 + 32) = a2;
                *(_QWORD *)(v15 + 40) = v10;
                *(_QWORD *)(v15 + 48) = v14;
                *(_DWORD *)(v15 + 56) = v13;
                *(_DWORD *)(v15 + 60) = v11;
              }
              return v8;
            }
            return (unsigned int)RawFieldAccess(a1, 1u, a2, a3);
          }
          v21 = v12 - 2;
          if ( !v21 )
          {
            v14 = *(_QWORD *)(a3 + 32);
            v13 = *(_DWORD *)(a3 + 24) - 1;
            goto LABEL_14;
          }
          if ( v21 == 1 )
          {
            v13 = *(_DWORD *)(a3 + 24);
            v14 = *(_QWORD *)(a3 + 32);
            goto LABEL_14;
          }
          v8 = -1072431095;
          LogError(3222536201LL);
          AcpiDiagTraceAmlError(a1, 3222536201LL);
          v24 = GetObjectTypeName(*(unsigned __int16 *)(a3 + 2));
          v25 = 214;
        }
        PrintDebugMessage(v25, v24, 0, 0, 0LL);
        return v8;
      case 0x10:
        if ( (gDebugger & 0x20000) != 0 )
          DumpObject(a3, 128LL, 0LL);
        return 0;
      default:
        v8 = -1072431095;
        LogError(3222536201LL);
        AcpiDiagTraceAmlError(a1, 3222536201LL);
        v27 = GetObjectTypeName(*(unsigned __int16 *)(a2 + 2));
        PrintDebugMessage(215, v27, 0, 0, 0LL);
        return v8;
    }
  }
  return (unsigned int)DupObjData(gpheapGlobal, a2, a3);
}
