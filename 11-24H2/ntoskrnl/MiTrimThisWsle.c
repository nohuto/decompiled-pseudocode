/*
 * XREFs of MiTrimThisWsle @ 0x140213460
 * Callers:
 *     MiTrimPteWorker @ 0x140212FB0 (MiTrimPteWorker.c)
 *     MiTrimPte @ 0x1402130B0 (MiTrimPte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     MiGetPfnPriority @ 0x140335630 (MiGetPfnPriority.c)
 *     MiLocateCloneAddress @ 0x1403C9CE8 (MiLocateCloneAddress.c)
 */

__int64 __fastcall MiTrimThisWsle(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        int *a4,
        unsigned __int8 a5,
        unsigned int *a6)
{
  __int64 v10; // rbp
  __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  __int64 v13; // r8
  int v14; // ebx
  unsigned int v15; // edi
  unsigned int v16; // r10d
  unsigned int v17; // ebx
  unsigned __int64 v18; // r11
  int v19; // ebx
  int v20; // eax
  __int64 v21; // rax
  char PagePrivilege; // al
  __int64 v24; // r10
  int *v25; // rdx
  unsigned __int64 v26; // rcx
  int v27; // eax

  v10 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = MI_READ_PTE_LOCK_FREE(v10, a2, a3);
  if ( a6 )
    *a6 = 0;
  v14 = *a4;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    v15 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v10, v11, v13) >> 56) & 0xF;
  else
    v15 = (*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v10, v11, v13) >> 12) & 0xFFFFFFFFFFLL)
                     - 0x220000000000LL) >> 42) & 7;
  v16 = 1;
  if ( (v14 & 0x600) != 0 )
  {
    if ( *(__int64 *)(a3 + 40) >= 0
      || ((v14 & 0x200) == 0
       || (*(_DWORD *)(a3 + 16) & 0x400LL) != 0
       || ((*(_QWORD *)(a3 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(a3 + 8) <= 0)
       && !MiLocateCloneAddress(a1 - 1024, *(_QWORD *)(a3 + 8) | 0x8000000000000000uLL))
      && ((v14 & 0x400) == 0 || (*(_DWORD *)(a3 + 16) & 0x400LL) == 0) )
    {
      goto LABEL_9;
    }
  }
  else
  {
    v17 = v14 & 0xF;
    if ( v17 && (unsigned int)MiGetPfnPriority(a3) >= 5 )
    {
      if ( v15 < v17 )
        goto LABEL_9;
      if ( ((unsigned __int8)v16 & a5) != 0 )
      {
        if ( !*((_QWORD *)a4 + 10) )
          goto LABEL_9;
        if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
        {
          PagePrivilege = MiGetPagePrivilege(48 * ((v12 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
          v16 = 1;
          if ( (PagePrivilege & 0x41) == 0 )
          {
            v19 = 2;
            goto LABEL_10;
          }
        }
        else if ( a2 > v18 )
        {
          goto LABEL_9;
        }
        if ( a6 )
        {
          *a6 = v16;
          return 0LL;
        }
LABEL_9:
        v19 = 2;
        if ( ((unsigned __int8)v16 & a5) == 0 )
        {
LABEL_27:
          if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && (unsigned __int16)*(_DWORD *)(a3 + 32) != (_WORD)v16
            || v15 >= 6
            || (unsigned int)MiGetPfnPriority(a3) >= 5 )
          {
            return 0LL;
          }
          v21 = v24;
          goto LABEL_34;
        }
LABEL_10:
        if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
        {
          if ( !_bittest64(&MiFlags, 0x24u) )
            goto LABEL_13;
          v20 = v16 & (*(_DWORD *)(a1 + 184) >> 11);
        }
        else
        {
          v20 = *(_QWORD *)(a1 + 624) != 0LL;
        }
        if ( !v20 )
          goto LABEL_13;
        if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
        {
          if ( (MiGetPagePrivilege(48 * ((v12 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) & 0x41) == 0 )
            goto LABEL_13;
        }
        else if ( a2 > 0x7FFFFFFEFFFFLL )
        {
          goto LABEL_13;
        }
        if ( a6 )
        {
          LOWORD(v16) = 1;
          goto LABEL_27;
        }
LABEL_13:
        v21 = 2LL;
        if ( v15 && v15 < 7 )
        {
          v19 = 0;
          v21 = 0LL;
        }
        if ( v19 == 2 )
          return 0LL;
        LOBYTE(v24) = 1;
LABEL_34:
        v25 = &a4[20 * v21];
        if ( !*((_BYTE *)v25 + 160) )
        {
          *((_BYTE *)v25 + 160) = v24;
          *((_QWORD *)v25 + 19) = a2;
        }
        v26 = (unsigned __int64)(((unsigned int)v10 >> 3) & 0x1FF) >> 3;
        v27 = *((char *)v25 + v26 + 88);
        _bittestandset(&v27, ((unsigned int)v10 >> 3) & 7);
        *((_BYTE *)v25 + v26 + 88) = v27;
        return 0LL;
      }
    }
  }
  return v16;
}
