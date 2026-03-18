/*
 * XREFs of Index @ 0x140008710
 * Callers:
 *     <none>
 * Callees:
 *     WriteObject @ 0x140006BD0 (WriteObject.c)
 *     ValidateArgTypes @ 0x140007F70 (ValidateArgTypes.c)
 *     HeapAlloc @ 0x140008CA0 (HeapAlloc.c)
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     GetObjectTypeName @ 0x14002F744 (GetObjectTypeName.c)
 */

__int64 __fastcall Index(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  unsigned int v6; // eax
  int v7; // ecx
  int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rdx
  int *v12; // r14
  __int64 v13; // rcx
  int v14; // r8d
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // rdx
  int ObjectTypeName; // eax
  int v19; // ecx
  int v20; // r10d

  v4 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 1, "CI");
  if ( !v4 )
  {
    v5 = *(_QWORD *)(a2 + 80) + 80LL;
    v6 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 80) + 82LL);
    if ( (_WORD)v6 == 128 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 96LL) + 64LL;
      v19 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 80) + 96LL) + 66LL);
      if ( v19 == 133
        || v19 == 1
        || v19 == 2
        || v19 == 3
        || v19 == 4
        || v19 != 5 && v19 != 14 && !*(_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 80) + 96LL) + 66LL) )
      {
        goto LABEL_14;
      }
      v4 = -1072431094;
      LogError(3222536202LL);
      AcpiDiagTraceAmlError(a1, 3222536202LL);
      GetObjectTypeName(133LL);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v5 + 2));
      v14 = v20;
      v16 = 207;
    }
    else
    {
      if ( (_WORD)v6 == 129 )
      {
        v5 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 96LL);
        goto LABEL_6;
      }
      if ( v6 <= 0x10 )
      {
        v7 = 81921;
        if ( _bittest(&v7, v6) )
        {
LABEL_6:
          v8 = *(unsigned __int16 *)(v5 + 2);
          if ( v8 == 133 || v8 == 1 || v8 == 2 || v8 == 3 || v8 == 4 || v8 != 5 && v8 != 14 && !*(_WORD *)(v5 + 2) )
            FreeDataBuffs(v5, 1LL);
LABEL_14:
          v9 = *(_QWORD *)(a2 + 80);
          if ( *(_WORD *)(v9 + 2) == 3 )
          {
            if ( *(_DWORD *)(v9 + 56) < *(_DWORD *)(v9 + 24) )
            {
              *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 14;
              *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = 48;
              *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = HeapAlloc(
                                                           *(_QWORD *)(a1 + 320),
                                                           1145455176LL,
                                                           *(unsigned int *)(*(_QWORD *)(a2 + 88) + 24LL));
              v10 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL);
              if ( v10 )
              {
                *(_DWORD *)(v10 + 16) = 0;
                *(_DWORD *)(v10 + 20) = 8;
                *(_QWORD *)v10 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL);
                *(_DWORD *)(v10 + 8) = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 24LL);
                *(_DWORD *)(v10 + 12) = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 56LL);
                return (unsigned int)WriteObject(a1, v5, *(_QWORD *)(a2 + 88));
              }
              v4 = -1073741670;
              LogError(3221225626LL);
              AcpiDiagTraceAmlError(a1, 3221225626LL);
              v14 = 0;
              LODWORD(v15) = 0;
              v16 = 60;
LABEL_24:
              PrintDebugMessage(v16, v15, v14, 0, 0LL);
              return v4;
            }
            v4 = -1072431100;
            LogError(3222536196LL);
            AcpiDiagTraceAmlError(a1, 3222536196LL);
            v17 = *(_QWORD *)(a2 + 80);
            v14 = *(_DWORD *)(v17 + 24);
          }
          else
          {
            if ( *(_WORD *)(v9 + 2) != 4 )
              return v4;
            v12 = *(int **)(v9 + 32);
            if ( *(_DWORD *)(v9 + 56) < (unsigned int)*v12 )
            {
              *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 129;
              v13 = *(unsigned int *)(*(_QWORD *)(a2 + 80) + 56LL);
              *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = &v12[8 * v13 + 2 + 2 * v13];
              return (unsigned int)WriteObject(a1, v5, *(_QWORD *)(a2 + 88));
            }
            v4 = -1072431100;
            LogError(3222536196LL);
            AcpiDiagTraceAmlError(a1, 3222536196LL);
            v14 = *v12;
            v17 = *(_QWORD *)(a2 + 80);
          }
          v15 = *(_QWORD *)(v17 + 56);
          v16 = 61;
          goto LABEL_24;
        }
      }
      v4 = -1072431094;
      LogError(3222536202LL);
      AcpiDiagTraceAmlError(a1, 3222536202LL);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v5 + 2));
      v14 = 0;
      v16 = 208;
    }
    LODWORD(v15) = ObjectTypeName;
    goto LABEL_24;
  }
  return v4;
}
