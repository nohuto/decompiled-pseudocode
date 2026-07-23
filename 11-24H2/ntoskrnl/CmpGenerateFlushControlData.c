/*
 * XREFs of CmpGenerateFlushControlData @ 0x1409668D0
 * Callers:
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 * Callees:
 *     CmpIsWriteQueueActive @ 0x14047CD10 (CmpIsWriteQueueActive.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x140967424 (HvGetEffectiveLogSizeCapForHive.c)
 *     HvGetHiveLogFileStatus @ 0x1409678E0 (HvGetHiveLogFileStatus.c)
 *     HvIsCurrentLogSwappable @ 0x140A699F8 (HvIsCurrentLogSwappable.c)
 */

char __fastcall CmpGenerateFlushControlData(__int64 a1, char a2, __int64 a3)
{
  char v6; // al
  char v7; // si
  int v8; // r10d
  _BYTE *v9; // r11
  int v10; // edx
  _BYTE *v11; // rcx
  int v12; // eax
  _BYTE *v13; // r8
  int v14; // r10d
  int v15; // ecx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  char v20; // r8
  int v21; // edx
  int v22; // edx
  int v23; // edx

  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_DWORD *)(a3 + 20) = 0;
  v6 = *(_BYTE *)(a1 + 195);
  if ( !v6 && !*(_DWORD *)(a1 + 104) && !*(_DWORD *)(a1 + 128) )
  {
    v7 = 0;
    v8 = 0;
LABEL_7:
    v9 = (_BYTE *)(a1 + 194);
    goto LABEL_8;
  }
  v7 = 1;
  if ( !*(_DWORD *)(a1 + 104) )
  {
    v8 = 0;
    if ( !v6 )
      goto LABEL_7;
  }
  v14 = 9;
  *(_DWORD *)a3 = 9;
  if ( *(_BYTE *)(a1 + 194) )
  {
    v14 = 27;
    *(_DWORD *)a3 = 27;
  }
  if ( *(_DWORD *)(a1 + 4228) )
    *(_DWORD *)a3 = v14 | 0x82;
  *(_DWORD *)(a3 + 24) = HvGetEffectiveLogSizeCapForHive(a1);
LABEL_8:
  v10 = v8;
  v11 = v9;
  if ( v7 && (a2 & 4) != 0 )
  {
    v10 = v8 | 0x42;
    v11 = (_BYTE *)(a1 + 194);
    *(_DWORD *)a3 = v8 | 0x42;
  }
  v12 = *(_DWORD *)(a1 + 160);
  v13 = v9;
  if ( (v12 & 2) != 0
    || (v13 = v11,
        LOBYTE(v12) = (CmpGlobalFlushControlFlags & 1) == 0,
        (((*(_DWORD *)(a1 + 4112) & 0x800) == 0) & (unsigned __int8)v12) == 0) )
  {
    if ( *(_DWORD *)(a1 + 104) || (v9 = v13, *(_BYTE *)(a1 + 195)) )
    {
      v17 = v10 | 0x46;
      *(_DWORD *)a3 = v17;
      if ( *v9 )
        v17 |= 0x10u;
      v16 = v17 | 0x500;
      goto LABEL_39;
    }
    v12 = *(_DWORD *)(a1 + 4224);
    if ( (v12 & 1) != 0 || (a2 & 0x20) == 0 )
      return v12;
LABEL_38:
    v16 = v10 | 0x202;
LABEL_39:
    *(_DWORD *)a3 = v16;
    return v12;
  }
  if ( (a2 & 8) != 0 && (!*v9 || (v10 & 0x10) != 0) )
  {
    v21 = v10 | 0x107;
    *(_DWORD *)a3 = v21;
    if ( (v21 & 8) != 0 )
    {
      HvGetHiveLogFileStatus(a1, *(unsigned int *)(a3 + 24), a3 + 8);
      v12 = *(_DWORD *)(a3 + 8);
      if ( (v12 & 0xC) != 0 )
        *(_DWORD *)a3 |= 0x400u;
    }
    return v12;
  }
  if ( (v10 & 0x48) == 8 )
  {
    HvGetHiveLogFileStatus(a1, *(unsigned int *)(a3 + 24), a3 + 8);
    v12 = *(_DWORD *)(a3 + 8);
    if ( (v12 & 1) != 0 )
    {
      *(_DWORD *)a3 |= 2u;
      return v12;
    }
    if ( (v12 & 0xA) != 0 )
    {
      *(_DWORD *)a3 |= 0x42u;
    }
    else if ( (v12 & 4) != 0 )
    {
      *(_DWORD *)a3 |= 2u;
      if ( (unsigned __int8)HvIsCurrentLogSwappable(a1) )
        v23 = v22 | 0x22;
      else
        v23 = v22 | 0x42;
      *(_DWORD *)a3 = v23;
    }
  }
  v10 = *(_DWORD *)a3;
  if ( (*(_DWORD *)a3 & 0x40) != 0 )
  {
    LOBYTE(v12) = CmpIsWriteQueueActive((_QWORD *)(a1 + 4208));
    if ( (_BYTE)v12 )
      return v12;
    if ( (*(_DWORD *)(a3 + 8) & 8) != 0 )
    {
      v10 = v18 | 0x504;
    }
    else
    {
      *(_DWORD *)a3 = v18 | 1;
      if ( (unsigned __int8)HvIsCurrentLogSwappable(a1) )
      {
        v10 = v19 | 0x21;
      }
      else
      {
        v10 = v19 | 5;
        *(_DWORD *)a3 = v10;
        if ( (v20 & 4) == 0 )
          goto LABEL_17;
        v10 |= 0x400u;
      }
    }
    *(_DWORD *)a3 = v10;
  }
LABEL_17:
  if ( (v10 & 0x48) == 8 )
  {
    v15 = v10;
    if ( !*(_DWORD *)(a1 + 128) )
    {
      v15 = v10 | 0x800;
      *(_DWORD *)a3 = v10 | 0x800;
    }
    v10 = v15;
    if ( (*(_DWORD *)(a3 + 8) & 0x14) != 0 )
    {
      v10 = v15 | 0x1000;
      *(_DWORD *)a3 = v15 | 0x1000;
    }
  }
  v12 = *(_DWORD *)(a1 + 4224);
  if ( (v12 & 1) == 0 )
  {
    if ( *(_QWORD *)(a1 + 1544) )
    {
      LOBYTE(v12) = (a2 & 0x20) == 0;
      if ( (((v10 & 8) == 0) & (unsigned __int8)v12) == 0 )
        goto LABEL_38;
    }
  }
  return v12;
}
