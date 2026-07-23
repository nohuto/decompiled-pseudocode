/*
 * XREFs of KiInitializeIdt @ 0x140B5A760
 * Callers:
 *     KiInitializeBootStructures @ 0x140B5A140 (KiInitializeBootStructures.c)
 *     KiEnableKvaShadowing @ 0x140B5C8EC (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiInitializeIdt(__int64 a1, char a2)
{
  __int64 *v2; // r9
  unsigned __int64 v3; // r10
  __int64 v4; // r8
  __int64 v6; // rcx
  unsigned __int64 result; // rax
  void (*v8)(); // rcx
  unsigned __int64 v9; // rdx
  __int16 v10; // ax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r11
  __int16 v13; // dx
  __int16 v14; // cx
  int v15; // ecx
  __int16 v16; // ax

  KiDebugTrapIndex = 0;
  v2 = &KiInterruptInitTable;
  v3 = 0LL;
  v4 = a1 + 4;
  do
  {
    if ( KiBootDebuggerActive )
    {
      if ( (unsigned int)v3 <= 0x2D )
      {
        v6 = 0x30000000600ALL;
        if ( _bittest64(&v6, v3) )
        {
          result = *(unsigned __int8 *)v2;
          if ( (_DWORD)v3 != (_DWORD)result )
            goto LABEL_20;
          goto LABEL_6;
        }
      }
    }
    v8 = (void (*)())KiIsrThunkShadow;
    if ( !a2 )
      v8 = KxUnexpectedInterrupt0;
    v9 = (unsigned __int64)v8 + 8 * v3;
    if ( KiSystemCallSelector == 1 || (_DWORD)v3 != 46 )
    {
      if ( (_DWORD)v3 == *(unsigned __int8 *)v2 )
      {
        if ( a2 )
          v12 = v2[2];
        else
          v12 = v2[1];
        *(_WORD *)(v4 - 4) = v12;
        *(_WORD *)(v4 - 2) = 16;
        v13 = *(_WORD *)v4 & 0xEEF8 | *((_BYTE *)v2 + 2) & 7 | 0xE00;
        *(_WORD *)v4 = v13;
        v14 = v13 & 0x1FFF | ((*((_BYTE *)v2 + 1) & 3 | 4) << 13);
        *(_WORD *)(v4 + 2) = WORD1(v12);
        result = HIDWORD(v12);
        *(_DWORD *)(v4 + 4) = HIDWORD(v12);
        *(_WORD *)v4 = v14;
        if ( *((_BYTE *)v2 + 1) )
        {
          v15 = KiDebugTrapIndex;
          KiDebugTraps[KiDebugTrapIndex] = v12;
          KiDebugTrapIndex = v15 + 1;
        }
LABEL_6:
        v2 += 3;
        goto LABEL_20;
      }
      v16 = *(_WORD *)v4 & 0xF8;
      *(_WORD *)(v4 - 4) = v9;
      *(_WORD *)v4 = v16 | 0x8E00;
      result = v9 >> 16;
      v11 = HIDWORD(v9);
    }
    else
    {
      v10 = *(_WORD *)v4 & 0xF8;
      *(_WORD *)(v4 - 4) = v9;
      *(_WORD *)v4 = v10 | 0x8E00;
      result = v9 >> 16;
      v11 = HIDWORD(v9);
      v2 += 3;
    }
    *(_DWORD *)(v4 + 4) = v11;
    *(_WORD *)(v4 + 2) = result;
    *(_WORD *)(v4 - 2) = 16;
LABEL_20:
    v3 = (unsigned int)(v3 + 1);
    v4 += 16LL;
  }
  while ( (unsigned int)v3 <= 0xFF );
  return result;
}
