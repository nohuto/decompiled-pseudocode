/*
 * XREFs of MiTrimThisWsle @ 0x140242F50
 * Callers:
 *     MiTrimPteWorker @ 0x140242AA4 (MiTrimPteWorker.c)
 *     MiTrimPte @ 0x140242BA0 (MiTrimPte.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1402141E0 (MiGetPfnPriority.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPagePrivilege @ 0x14021CE30 (MiGetPagePrivilege.c)
 *     MiLocateCloneAddress @ 0x1403E3608 (MiLocateCloneAddress.c)
 */

__int64 __fastcall MiTrimThisWsle(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int *a4,
        unsigned __int8 a5,
        unsigned int *a6)
{
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rsi
  int v12; // ebx
  unsigned int v13; // edi
  __int64 v14; // r8
  unsigned int v15; // r10d
  unsigned int v16; // ebx
  unsigned __int64 v17; // r11
  int v18; // ebx
  int v19; // eax
  __int64 v20; // rax
  char PagePrivilege; // al
  __int64 v23; // r10
  int *v24; // rdx
  unsigned __int64 v25; // rcx
  int v26; // eax

  v10 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = MI_READ_PTE_LOCK_FREE(v10);
  if ( a6 )
    *a6 = 0;
  v12 = *a4;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    v13 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v10) >> 56) & 0xF;
  else
    v13 = (*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v10) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) >> 42) & 7;
  v15 = 1;
  if ( (v12 & 0x600) != 0 )
  {
    if ( *(__int64 *)(a3 + 40) >= 0
      || ((v12 & 0x200) == 0
       || (*(_DWORD *)(a3 + 16) & 0x400LL) != 0
       || ((*(_QWORD *)(a3 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(a3 + 8) <= 0)
       && !MiLocateCloneAddress(a1 - 1024, *(_QWORD *)(a3 + 8) | 0x8000000000000000uLL, v14))
      && ((v12 & 0x400) == 0 || (*(_DWORD *)(a3 + 16) & 0x400LL) == 0) )
    {
      goto LABEL_9;
    }
  }
  else
  {
    v16 = v12 & 0xF;
    if ( v16 && (unsigned int)MiGetPfnPriority(a3) >= 5 )
    {
      if ( v13 < v16 )
        goto LABEL_9;
      if ( ((unsigned __int8)v15 & a5) != 0 )
      {
        if ( !*((_QWORD *)a4 + 10) )
          goto LABEL_9;
        if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
        {
          PagePrivilege = MiGetPagePrivilege(48 * ((v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 2, 0LL);
          v15 = 1;
          if ( (PagePrivilege & 0x41) == 0 )
          {
            v18 = 2;
            goto LABEL_10;
          }
        }
        else if ( a2 > v17 )
        {
          goto LABEL_9;
        }
        if ( a6 )
        {
          *a6 = v15;
          return 0LL;
        }
LABEL_9:
        v18 = 2;
        if ( ((unsigned __int8)v15 & a5) == 0 )
        {
LABEL_27:
          if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && (unsigned __int16)*(_DWORD *)(a3 + 32) != (_WORD)v15
            || v13 >= 6
            || (unsigned int)MiGetPfnPriority(a3) >= 5 )
          {
            return 0LL;
          }
          v20 = v23;
          goto LABEL_34;
        }
LABEL_10:
        if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
        {
          if ( !_bittest64(&MiFlags, 0x24u) )
            goto LABEL_13;
          v19 = v15 & (*(_DWORD *)(a1 + 184) >> 11);
        }
        else
        {
          v19 = *(_QWORD *)(a1 + 624) != 0LL;
        }
        if ( !v19 )
          goto LABEL_13;
        if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
        {
          if ( (MiGetPagePrivilege(48 * ((v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 2, 0LL) & 0x41) == 0 )
            goto LABEL_13;
        }
        else if ( a2 > 0x7FFFFFFEFFFFLL )
        {
          goto LABEL_13;
        }
        if ( a6 )
        {
          LOWORD(v15) = 1;
          goto LABEL_27;
        }
LABEL_13:
        v20 = 2LL;
        if ( v13 && v13 < 7 )
        {
          v18 = 0;
          v20 = 0LL;
        }
        if ( v18 == 2 )
          return 0LL;
        LOBYTE(v23) = 1;
LABEL_34:
        v24 = &a4[20 * v20];
        if ( !*((_BYTE *)v24 + 160) )
        {
          *((_BYTE *)v24 + 160) = v23;
          *((_QWORD *)v24 + 19) = a2;
        }
        v25 = (unsigned __int64)(((unsigned int)v10 >> 3) & 0x1FF) >> 3;
        v26 = *((char *)v24 + v25 + 88);
        _bittestandset(&v26, ((unsigned int)v10 >> 3) & 7);
        *((_BYTE *)v24 + v25 + 88) = v26;
        return 0LL;
      }
    }
  }
  return v15;
}
