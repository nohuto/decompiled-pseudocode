/*
 * XREFs of EtwpGetSchematizedFilterSize @ 0x1409E9380
 * Callers:
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140837F48 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpRegisterKMProvider @ 0x1409EA1C4 (EtwpRegisterKMProvider.c)
 *     EtwpAddRegEntryToGroup @ 0x140AD9390 (EtwpAddRegEntryToGroup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetSchematizedFilterSize(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // r10
  unsigned int v3; // r11d
  int v4; // ebx
  unsigned int v6; // r8d
  _DWORD *v7; // r9
  __int64 v8; // r10

  v2 = *(_QWORD *)(a1 + 640);
  v3 = 0;
  v4 = a2;
  if ( v2 )
  {
    v6 = 0;
    v7 = (_DWORD *)(a1 + 128);
    v8 = v2 + 88;
    do
    {
      if ( *v7 && *(_QWORD *)v8 && _bittest(&v4, (unsigned __int8)v6) )
        v3 += (*(_DWORD *)(*(_QWORD *)v8 + 16LL) + 7) & 0xFFFFFFF8;
      ++v6;
      v7 += 8;
      v8 += 104LL;
    }
    while ( v6 < 0x10 );
  }
  return v3;
}
