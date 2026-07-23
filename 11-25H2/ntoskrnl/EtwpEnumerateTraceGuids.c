/*
 * XREFs of EtwpEnumerateTraceGuids @ 0x140A475DC
 * Callers:
 *     NtTraceControl @ 0x140895400 (NtTraceControl.c)
 * Callees:
 *     EtwpGetNextGuidEntry @ 0x14089E1C0 (EtwpGetNextGuidEntry.c)
 */

__int64 __fastcall EtwpEnumerateTraceGuids(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // edi
  _QWORD *NextGuidEntry; // rdx
  __int64 i; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v14; // rdx
  unsigned int j; // r8d
  __int64 v16; // rax
  __int64 v17; // r10
  __int64 v18; // rcx

  v4 = 0;
  v6 = 0;
  NextGuidEntry = 0LL;
  for ( i = a1; ; a1 = i )
  {
    NextGuidEntry = EtwpGetNextGuidEntry(a1, NextGuidEntry, 0);
    v11 = v6;
    if ( !NextGuidEntry )
      break;
    if ( ++v6 > 0x71C71C7 )
    {
LABEL_7:
      v4 = -2147483643;
      *a4 = v6;
      return v4;
    }
    if ( v6 <= a3 )
    {
      v12 = 9 * v11;
      *(_OWORD *)(a2 + 4 * v12) = *(_OWORD *)(NextGuidEntry + 5);
      *(_DWORD *)(a2 + 4 * v12 + 28) = *((_DWORD *)NextGuidEntry + 20);
      *(_DWORD *)(a2 + 4 * v12 + 20) = *((unsigned __int16 *)NextGuidEntry + 44);
      *(_DWORD *)(a2 + 4 * v12 + 24) = *((unsigned __int8 *)NextGuidEntry + 90);
      *(_BYTE *)(a2 + 4 * v12 + 32) = *((_BYTE *)NextGuidEntry + 91) & 1;
    }
  }
  if ( i == EtwpHostSiloState )
    v14 = 2147353472LL;
  else
    v14 = *(_QWORD *)(*(_QWORD *)(i + 8) + 1288LL) + 550LL;
  for ( j = 0; ; ++j )
  {
    v16 = v6;
    if ( j >= 0xA )
      break;
    v17 = *((unsigned __int8 *)&(&EtwpUmglProviders)[2 * j] + 8);
    if ( *(_BYTE *)(v14 + 2 * v17) )
    {
      if ( ++v6 > 0x71C71C7 )
        goto LABEL_7;
      if ( v6 <= a3 )
      {
        v18 = 9 * v16;
        *(GUID *)(a2 + 4 * v18) = *(&EtwpUmglProviders)[2 * j];
        *(_DWORD *)(a2 + 4 * v18 + 20) = *(unsigned __int8 *)(v14 + 2 * v17);
        *(_DWORD *)(a2 + 4 * v18 + 28) = *(unsigned __int8 *)(v14 + 2 * v17 + 1);
        *(_DWORD *)(a2 + 4 * v18 + 24) = 0;
        *(_BYTE *)(a2 + 4 * v18 + 32) = 1;
      }
    }
  }
  *a4 = v6;
  if ( v6 > a3 )
    return (unsigned int)-1073741789;
  return v4;
}
