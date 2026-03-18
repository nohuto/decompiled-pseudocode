/*
 * XREFs of TelemetryData_InsertTriageDataBlock @ 0x1400575B8
 * Callers:
 *     Controller_TelemetryReport @ 0x1400427C4 (Controller_TelemetryReport.c)
 *     Controller_TelemetryAddControllerData @ 0x140078F88 (Controller_TelemetryAddControllerData.c)
 * Callees:
 *     memmove @ 0x1400597C0 (memmove.c)
 */

__int64 __fastcall TelemetryData_InsertTriageDataBlock(__int64 *a1, const void *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  size_t v4; // rbp
  __int64 v6; // rdi
  unsigned int v7; // edx
  __int64 v8; // rcx
  unsigned int v9; // r9d
  _DWORD *v10; // r10
  unsigned int v11; // esi
  unsigned int v12; // r11d
  unsigned int v13; // r8d
  int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // esi

  v3 = 0;
  v4 = a3;
  if ( !a2 || !a3 )
    return 3221225485LL;
  v6 = *a1;
  if ( (*(_DWORD *)(*a1 + 4152) & 0x800) != 0
    && (v7 = *(_DWORD *)(v6 + 8316)) != 0
    && (v8 = *(unsigned int *)(v6 + 8312), v8 + 16 * (unsigned __int64)v7 <= 0x40000) )
  {
    v9 = 0x40000;
    v10 = (_DWORD *)(v8 + v6 + 12);
    v11 = 0;
    v12 = 0;
    while ( v12 < v7 )
    {
      v13 = *(v10 - 1);
      if ( v13 != ((v13 + 7) & 0xFFFFFFF8) )
        return (unsigned int)-1073741811;
      ++v12;
      v14 = *v10 + 7;
      v10 += 4;
      v15 = (v13 + v14) & 0xFFFFFFF8;
      if ( v13 >= v9 )
        v13 = v9;
      v9 = v13;
      if ( v15 <= v11 )
        v15 = v11;
      v11 = v15;
    }
    if ( 262140 - v11 >= 0x40000 || (((_DWORD)v4 + 7) & 0xFFFFFFF8) + 16 > 262140 - v11 )
    {
      return (unsigned int)-1073741789;
    }
    else
    {
      memmove((void *)(v6 + v9 + 16), (const void *)(v6 + v9), v11 - v9);
      v16 = 0;
      v17 = *(_DWORD *)(v6 + 8316);
      v18 = v6 + *(unsigned int *)(v6 + 8312);
      if ( v17 )
      {
        do
        {
          *(_DWORD *)(v18 + 8) += 16;
          ++v16;
          v17 = *(_DWORD *)(v6 + 8316);
          v18 += 16LL;
        }
        while ( v16 < v17 );
      }
      v19 = v11 + 16;
      *(_DWORD *)(v6 + 8316) = v17 + 1;
      *(_QWORD *)v18 = a2;
      *(_DWORD *)(v18 + 8) = v19;
      *(_DWORD *)(v18 + 12) = v4;
      memmove((void *)(v6 + v19), a2, v4);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
