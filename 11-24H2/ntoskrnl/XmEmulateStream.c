/*
 * XREFs of XmEmulateStream @ 0x1404690B4
 * Callers:
 *     XmEmulateInterrupt @ 0x14055EA70 (XmEmulateInterrupt.c)
 * Callees:
 *     XmGetCodeByte @ 0x140469218 (XmGetCodeByte.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     _setjmp @ 0x1406B5000 (_setjmp.c)
 */

__int64 __fastcall XmEmulateStream(__int64 a1, __int16 a2, unsigned __int16 a3, __int64 a4)
{
  unsigned int v4; // edx
  unsigned __int8 CodeByte; // al
  __int16 v7; // cx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9

  dword_140E11718 = *(_DWORD *)a4;
  dword_140E1171C = *(_DWORD *)(a4 + 4);
  dword_140E11720 = *(_DWORD *)(a4 + 8);
  dword_140E11724 = *(_DWORD *)(a4 + 12);
  dword_140E1172C = *(_DWORD *)(a4 + 16);
  dword_140E11730 = *(_DWORD *)(a4 + 20);
  dword_140E11734 = *(_DWORD *)(a4 + 24);
  word_140E1173E = *(_WORD *)(a4 + 28);
  word_140E11738 = *(_WORD *)(a4 + 30);
  word_140E1173A = a2;
  dword_140E11714 = a3;
  v4 = setjmp(Buf);
  for ( XmStatus = v4; !XmStatus; v4 = XmStatus )
  {
    *((_DWORD *)&XmContext + 29) = 3;
    *((_QWORD *)&XmContext + 17) = 0LL;
    XmContext = XmOpcodeControlTable1;
    do
    {
      CodeByte = XmGetCodeByte(&XmContext);
      *((_DWORD *)&XmContext + 28) = CodeByte;
      v7 = *(_WORD *)(XmContext + 2LL * CodeByte);
      *((_WORD *)&XmContext + 40) = v7;
      *((_DWORD *)&XmContext + 31) = (unsigned __int8)v7;
    }
    while ( !(unsigned int)guard_dispatch_icall_no_overrides(&XmContext, v8, v9, v10) );
    guard_dispatch_icall_no_overrides(&XmContext, v11, v12, v13);
  }
  *(_DWORD *)a4 = *((_DWORD *)&XmContext + 6);
  *(_DWORD *)(a4 + 4) = *((_DWORD *)&XmContext + 7);
  *(_DWORD *)(a4 + 8) = *((_DWORD *)&XmContext + 8);
  *(_DWORD *)(a4 + 12) = *((_DWORD *)&XmContext + 9);
  *(_DWORD *)(a4 + 16) = *((_DWORD *)&XmContext + 11);
  *(_DWORD *)(a4 + 20) = *((_DWORD *)&XmContext + 12);
  *(_DWORD *)(a4 + 24) = *((_DWORD *)&XmContext + 13);
  return v4;
}
