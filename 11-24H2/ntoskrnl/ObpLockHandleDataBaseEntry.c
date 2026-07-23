/*
 * XREFs of ObpLockHandleDataBaseEntry @ 0x14099B0D0
 * Callers:
 *     ObpIncrementHandleCountEx @ 0x14084BE20 (ObpIncrementHandleCountEx.c)
 * Callees:
 *     ObpInsertHandleCount @ 0x14099B270 (ObpInsertHandleCount.c)
 */

__int64 __fastcall ObpLockHandleDataBaseEntry(__int64 a1, int *a2, _DWORD *a3)
{
  int *v5; // rbx
  __int64 v6; // rax
  bool v7; // zf
  int *v8; // rcx
  int v10; // r9d
  _DWORD *v11; // r8
  __int64 inserted; // r11
  unsigned int v13; // r14d
  int v14; // ecx
  unsigned int v15; // esi
  __int64 v16; // rax

  v5 = a2;
  v6 = a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 7];
  v7 = (*(_BYTE *)(a1 + 27) & 0x40) == 0;
  v8 = *(int **)v6;
  if ( v7 )
  {
    v10 = *v8;
    v11 = v8 + 2;
    inserted = 0LL;
    v13 = 0;
    while ( v10 )
    {
      if ( *(int **)v11 == v5 )
      {
        v14 = *(unsigned __int8 *)(v6 + 11);
        if ( (_BYTE)v14 != 0xFF )
        {
          ++*((_BYTE *)v11 + 11);
          *a3 = v13 + HIBYTE(*(_DWORD *)(v6 + 8)) + (*(_DWORD *)(v6 + 8) & 0xFFFFFF);
          return 0LL;
        }
        a2 = (int *)(*(_DWORD *)(v6 + 8) & 0xFFFFFF);
        inserted = 0LL;
        v13 += (_DWORD)a2 + v14;
      }
      else if ( !*(_QWORD *)v11 )
      {
        inserted = (__int64)v11;
      }
      v11 += 4;
      --v10;
    }
    if ( inserted || v13 < 0xFFFF01 && (inserted = ObpInsertHandleCount(a1, a2, v11)) != 0 )
    {
      *(_DWORD *)(inserted + 8) &= 0xFF000000;
      *a3 = v13 + 1;
      *(_QWORD *)inserted = v5;
      *(_BYTE *)(inserted + 11) = 1;
      return 0LL;
    }
  }
  else
  {
    if ( !v8 )
    {
      *(_BYTE *)(v6 + 11) = 1;
      *(_DWORD *)(v6 + 8) &= 0xFF000000;
      *(_QWORD *)v6 = a2;
      *a3 = 1;
      return 0LL;
    }
    if ( v8 == a2 )
    {
      a2 = (int *)*(unsigned __int8 *)(v6 + 11);
      if ( (_BYTE)a2 != 0xFF )
      {
        *(_BYTE *)(v6 + 11) = (_BYTE)a2 + 1;
        *a3 = (*(_DWORD *)(v6 + 8) & 0xFFFFFF) + HIBYTE(*(_DWORD *)(v6 + 8));
        return 0LL;
      }
    }
    v15 = 0;
    if ( v8 != v5 || (v15 = (*(_DWORD *)(v6 + 8) & 0xFFFFFF) + HIBYTE(*(_DWORD *)(v6 + 8)), v15 < 0xFFFF01) )
    {
      v16 = ObpInsertHandleCount(a1, a2, a3);
      if ( v16 )
      {
        *(_DWORD *)(v16 + 8) &= 0xFF000000;
        *(_BYTE *)(v16 + 11) = 1;
        *(_QWORD *)v16 = v5;
        *a3 = v15 + 1;
        return 0LL;
      }
    }
  }
  return 3221225626LL;
}
