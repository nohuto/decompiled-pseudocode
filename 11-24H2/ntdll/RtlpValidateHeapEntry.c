/*
 * XREFs of RtlpValidateHeapEntry @ 0x1800203D0
 * Callers:
 *     RtlDebugSizeHeap @ 0x18001FFC0 (RtlDebugSizeHeap.c)
 *     RtlValidateHeap @ 0x180020100 (RtlValidateHeap.c)
 *     RtlDebugFreeHeap @ 0x180022020 (RtlDebugFreeHeap.c)
 *     RtlDebugReAllocateHeap @ 0x18005C7E8 (RtlDebugReAllocateHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800E66BC (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180108FCC (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x18010C554 (RtlDebugSetUserValueHeap.c)
 * Callees:
 *     RtlpBreakPointHeap @ 0x18000D5E4 (RtlpBreakPointHeap.c)
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 *     RtlpCheckBusyBlockTail @ 0x18002059C (RtlpCheckBusyBlockTail.c)
 */

char __fastcall RtlpValidateHeapEntry(unsigned __int64 a1, unsigned __int64 a2, const char *a3)
{
  unsigned __int64 v5; // rdi
  char v6; // al
  int v8; // edx
  __int64 v9; // rax
  int v10; // ecx
  _QWORD *i; // rax

  v5 = a1;
  if ( a2 )
  {
    if ( (a2 & 0xF) == 0 )
    {
      v6 = *(_BYTE *)(a2 + 15);
      if ( (v6 & 0x3F) != 0 )
      {
        if ( v6 >= 0 )
        {
          if ( !*(_DWORD *)(a1 + 124)
            || (v8 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(a2 + 8),
                HIBYTE(v8) == ((unsigned __int8)v8 ^ (unsigned __int8)(BYTE1(v8) ^ BYTE2(v8)))) )
          {
            if ( *(_BYTE *)(a2 + 15) == 4 )
            {
              if ( (a2 & 0xFFF) != 0x30 )
                goto LABEL_6;
            }
            else
            {
              v9 = *(unsigned __int8 *)(a2 + 14);
              if ( (_BYTE)v9 )
                a1 = (a2 & 0xFFFFFFFFFFFF0000uLL) - (v9 << 16) + 0x10000;
              if ( !a1 || *(_QWORD *)(a1 + 40) != v5 || a2 < *(_QWORD *)(a1 + 64) || a2 >= *(_QWORD *)(a1 + 72) )
                goto LABEL_6;
            }
            if ( *(_DWORD *)(v5 + 124) )
            {
              v10 = HIWORD(*(_DWORD *)(a2 + 8));
              if ( (*(_DWORD *)(a2 + 8) & *(_DWORD *)(v5 + 124)) != 0 )
                LOBYTE(v10) = *(_BYTE *)(v5 + 138) ^ v10;
            }
            else
            {
              LOBYTE(v10) = *(_BYTE *)(a2 + 10);
            }
            if ( (v10 & 4) == 0 || (unsigned __int8)RtlpCheckBusyBlockTail(v5, a2) )
            {
              if ( *(_BYTE *)(a2 + 15) == 4 )
                return 1;
              for ( i = *(_QWORD **)(v5 + 288); i != (_QWORD *)(v5 + 288); i = (_QWORD *)*i )
              {
                if ( a2 >= i[5] && a2 < i[6] )
                  return 1;
              }
            }
          }
        }
        else if ( *(_BYTE *)(a1 + 418) == 2 && *(_QWORD *)(a1 + 408) )
        {
          return 1;
        }
      }
    }
  }
LABEL_6:
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("Invalid address specified to %s( %p, %p )\n", a3, (const void *)v5, (const void *)(a2 + 16));
  RtlpBreakPointHeap();
  return 0;
}
