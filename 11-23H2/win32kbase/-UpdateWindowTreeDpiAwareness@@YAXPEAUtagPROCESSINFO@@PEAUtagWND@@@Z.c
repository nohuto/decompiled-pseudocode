/*
 * XREFs of ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C008C630
 * Callers:
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C008C4A0 (NtUserSetProcessDpiAwarenessContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     HMValidateSharedHandleNoRip @ 0x1C02084E8 (HMValidateSharedHandleNoRip.c)
 */

void __fastcall UpdateWindowTreeDpiAwareness(struct tagPROCESSINFO *a1, struct tagWND *a2)
{
  __int64 v4; // r15
  __int64 v5; // rbx
  __int64 i; // rsi
  unsigned int v7; // edx
  char *v8; // rdi
  __int64 *v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rdx

  if ( qword_1C0296070 && (int)qword_1C0296070() >= 0 )
  {
    v4 = qword_1C0296078 ? qword_1C0296078(a2, 1LL, 0LL) : 0LL;
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 32);
      for ( i = v4 + 32; v5 != 1; i += 8LL )
      {
        PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( (unsigned __int64)(unsigned __int16)v5 < *((_QWORD *)gpsi + 1) )
        {
          v7 = dword_1C028FE70 * (unsigned __int16)v5;
          LOWORD(v5) = WORD1(v5) & 0x7FFF;
          v8 = (char *)qword_1C028FE68 + v7;
          v9 = (__int64 *)((char *)gpKernelHandleTable + 24 * ((__int64)v7 >> 5));
          if ( ((WORD1(v5) & 0x7FFF) == *((_WORD *)v8 + 13)
             || (_WORD)v5 == 0x7FFF
             || !(_WORD)v5 && PsGetCurrentProcessWow64Process())
            && (v8[25] & 1) == 0
            && v8[24] == 1 )
          {
            v10 = *v9;
            if ( *v9 )
            {
              if ( qword_1C0296080 )
              {
                if ( (int)qword_1C0296080() >= 0 && *(struct tagPROCESSINFO **)(*(_QWORD *)(v10 + 16) + 424LL) == a1 )
                {
                  *(_DWORD *)(*(_QWORD *)(v10 + 40) + 288LL) = *((_DWORD *)a1 + 70);
                  v11 = HMValidateSharedHandleNoRip(*(_QWORD *)(*(_QWORD *)(v10 + 40) + 256LL));
                  if ( qword_1C0296088 )
                    qword_1C0296088(v10, v11);
                }
              }
            }
          }
        }
        v5 = *(_QWORD *)(i + 8);
      }
      if ( qword_1C0295768 )
        qword_1C0295768(v4);
    }
  }
}
