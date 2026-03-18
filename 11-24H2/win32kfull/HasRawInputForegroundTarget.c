/*
 * XREFs of HasRawInputForegroundTarget @ 0x14017206C
 * Callers:
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x140171ED8 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401A9A08 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     PtiKbdFromQ @ 0x1401534FC (PtiKbdFromQ.c)
 *     HasHidTable @ 0x140172640 (HasHidTable.c)
 */

__int64 __fastcall HasRawInputForegroundTarget(__int64 *a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rax

  v2 = 0;
  a1[2] = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18944);
  if ( v4 )
  {
    if ( (*(_DWORD *)(v4 + 436) & 0x2000000) != 0 )
    {
      v5 = *(_QWORD *)(v4 + 128);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 16);
        if ( v6 )
        {
          v7 = *(_QWORD *)(v6 + 1360);
          if ( (v7 & 0x40000) != 0 && (v7 & 0x80000) == 0 && (v7 & 0x100000) == 0 )
          {
            v8 = *(_QWORD *)(v6 + 1592);
            if ( v8 )
            {
              v9 = *(_QWORD *)(v4 + 120);
              if ( v9 )
              {
                v10 = *(_QWORD *)(v9 + 16);
                if ( v10 )
                {
                  if ( (*(_DWORD *)(v10 + 1360) & 0x200000) != 0 && v10 == *(_QWORD *)(v8 + 16) )
                  {
                    a1[1] = v10;
                    v2 = 1;
                    a1[2] = v8;
LABEL_19:
                    *a1 = v4;
                    return v2;
                  }
                }
              }
            }
          }
        }
      }
    }
    v11 = PtiKbdFromQ(v4);
    if ( (unsigned int)HasHidTable(v11) )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(v11 + 464) + 832LL);
      if ( (*(_DWORD *)(v12 + 100) & 0x10) != 0 )
      {
        v13 = *(_QWORD *)(v12 + 72);
        v2 = 1;
        a1[1] = v11;
        a1[2] = v13;
        if ( !v13 )
        {
          a1[2] = *(_QWORD *)(v4 + 120);
          goto LABEL_19;
        }
        *a1 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 472LL);
      }
    }
  }
  return v2;
}
