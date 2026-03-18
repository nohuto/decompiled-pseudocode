/*
 * XREFs of Buffer @ 0x14003E650
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x140007F70 (ValidateArgTypes.c)
 *     HeapAlloc @ 0x140008CA0 (HeapAlloc.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     PrintBuffData @ 0x14006E578 (PrintBuffData.c)
 *     memmove @ 0x140070C40 (memmove.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall Buffer(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned int v5; // edi
  __int64 v6; // rax
  unsigned int v7; // r8d
  __int64 v8; // rax

  v2 = *(_DWORD *)(a2 + 40) - *(_DWORD *)(a1 + 120);
  v5 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "I");
  if ( !v5 )
  {
    if ( (gDebugger & 0xD0) != 0 )
      PrintBuffData(*(_QWORD *)(a1 + 120), v2);
    v6 = *(_QWORD *)(a2 + 80);
    v7 = *(_DWORD *)(v6 + 16);
    if ( v7 < v2 )
    {
      v5 = -1073741789;
      LogError(-1073741789);
      AcpiDiagTraceAmlError(a1, -1073741789);
      PrintDebugMessage(0x13u, *(const void **)(*(_QWORD *)(a2 + 80) + 16LL), (const void *)v2, 0LL, 0LL);
    }
    else
    {
      if ( *(_QWORD *)(v6 + 16) )
      {
        v8 = HeapAlloc(gpheapGlobal, 1179992648, v7);
        *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v8;
        if ( !v8 )
        {
          v5 = -1073741670;
          LogError(-1073741670);
          AcpiDiagTraceAmlError(a1, -1073741670);
          PrintDebugMessage(0x11u, *(const void **)(*(_QWORD *)(a2 + 80) + 16LL), 0LL, 0LL, 0LL);
          return v5;
        }
        *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 3;
        *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 16LL);
        memset(*(void **)(*(_QWORD *)(a2 + 88) + 32LL), 0, *(unsigned int *)(*(_QWORD *)(a2 + 88) + 24LL));
        memmove(*(void **)(*(_QWORD *)(a2 + 88) + 32LL), *(const void **)(a1 + 120), v2);
      }
      else
      {
        *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 3;
        *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = 0;
        *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = 0LL;
      }
      *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 40);
    }
  }
  return v5;
}
