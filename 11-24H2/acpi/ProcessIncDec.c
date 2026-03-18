/*
 * XREFs of ProcessIncDec @ 0x140005D80
 * Callers:
 *     <none>
 * Callees:
 *     HeapFree @ 0x140004AB0 (HeapFree.c)
 *     WriteObject @ 0x140006BD0 (WriteObject.c)
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     GetObjectTypeName @ 0x14002F744 (GetObjectTypeName.c)
 */

__int64 __fastcall ProcessIncDec(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  int ObjectTypeName; // eax
  int v12; // r10d

  v3 = a3;
  if ( a3 )
    goto LABEL_8;
  if ( (*(_DWORD *)(a2 + 16) & 0xF) != 0 )
  {
    if ( (*(_DWORD *)(a2 + 16) & 0xF) != 1 )
      return v3;
    goto LABEL_8;
  }
  v6 = *(_QWORD *)(a2 + 48);
  ++*(_DWORD *)(a2 + 16);
  if ( *(_WORD *)(v6 + 2) != 1 )
  {
    FreeDataBuffs(v6, 1LL);
    v3 = -1072431095;
    LogError(3222536201LL);
    AcpiDiagTraceAmlError(a1, 3222536201LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(*(_QWORD *)(a2 + 48) + 2LL));
    PrintDebugMessage(147, v12, ObjectTypeName, 0, 0LL);
LABEL_8:
    v9 = *(_QWORD **)(a1 + 416);
    *(_QWORD *)(a1 + 416) = v9[1];
    HeapFree(v9);
    return v3;
  }
  v7 = *(_QWORD *)(v6 + 16);
  if ( *(_QWORD *)(a2 + 32) == 117LL )
    v8 = v7 + 1;
  else
    v8 = v7 - 1;
  *(_QWORD *)(v6 + 16) = v8;
  v3 = WriteObject(a1, *(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 48));
  if ( v3 != 32772 && a2 == *(_QWORD *)(a1 + 416) )
    goto LABEL_8;
  return v3;
}
