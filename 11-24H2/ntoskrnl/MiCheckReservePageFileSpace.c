/*
 * XREFs of MiCheckReservePageFileSpace @ 0x140201420
 * Callers:
 *     MiWsleFlush @ 0x140201004 (MiWsleFlush.c)
 * Callees:
 *     MiReservePageFileSpace @ 0x140202948 (MiReservePageFileSpace.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 */

char __fastcall MiCheckReservePageFileSpace(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // r9
  __int64 v7; // rdi
  __int64 *v8; // rax

  LOBYTE(v5) = (*(_QWORD *)(a1 + 40) >> 60) & 7;
  if ( (_BYTE)v5 != 4 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    if ( (v6 & 1) == 0 )
    {
      if ( !v6 || (LOBYTE(v5) = qword_140E2DCC0, !qword_140E2DCC0) || (qword_140E2DCC0 & v6) != 0 )
      {
        v7 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
        LODWORD(v5) = *(_DWORD *)(v7 + 1084);
        if ( (_DWORD)v5 )
        {
          LOBYTE(v5) = (unsigned __int8)v6 >> 1;
          if ( (v6 & 2) == 0 )
          {
            if ( (*(_DWORD *)(a3 + 184) & 0xF) != 0
              || ((*(_DWORD *)(a3 + 184) & 0xF) != 1 ? (v8 = (__int64 *)(a3 + 216)) : (v8 = (__int64 *)&unk_140E38898),
                  (v5 = *v8) == 0) )
            {
              if ( (v6 & 0x400) != 0 || (v6 & 0x800) != 0 || (v6 & 4) != 0 )
                goto LABEL_23;
              if ( qword_140E2DCC0 )
              {
                if ( (v6 & 0x10) != 0 )
                  v6 &= ~0x10uLL;
                else
                  v6 &= ~qword_140E2DCC0;
              }
              if ( HIDWORD(v6) != 1
                || (*(_BYTE *)(a1 + 34) & 0x10) != 0
                || (LOBYTE(v5) = MI_READ_PTE_LOCK_FREE(a2, qword_140E300C8, a3), (v5 & 0x42) != 0) )
              {
LABEL_23:
                LOBYTE(v5) = 120;
                if ( a2 <= 0xFFFFF6BFFFFFFF78uLL )
                {
                  LOBYTE(v5) = 0;
                  if ( a2 >= 0xFFFFF68000000000uLL )
                    LOBYTE(v5) = MiReservePageFileSpace(v7, a2, a3);
                }
              }
            }
          }
        }
      }
    }
  }
  return v5;
}
