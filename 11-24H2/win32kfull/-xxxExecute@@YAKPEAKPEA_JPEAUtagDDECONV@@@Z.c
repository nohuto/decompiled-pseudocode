/*
 * XREFs of ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402B06AC
 * Callers:
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402B0F08 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1402AF9BC (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1402B0624 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 */

__int64 __fastcall xxxExecute(unsigned int *a1, __int64 *a2, struct tagDDECONV *a3)
{
  unsigned int v4; // r8d
  unsigned int v7; // ebx
  unsigned int v8; // eax
  void *v9; // rax
  void *v11; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+70h] [rbp+18h] BYREF
  struct tagINTDDEINFO *v13; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0LL;
  v11 = 0LL;
  v4 = 2048;
  v12 = 2048;
  if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a3 + 5) + 40LL) + 18LL) & 8) == 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 40LL) + 18LL) & 8) == 0 )
      v4 = 67584;
    v12 = v4;
  }
  v7 = xxxCopyDdeIn(*a2, &v12, &v11, &v13);
  if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 )
  {
    v7 = 3;
    if ( v13 )
      Win32FreePool(v13);
  }
  else if ( v7 == 2 )
  {
    v8 = v12;
    *a1 |= 0x80000000;
    v9 = AnticipatePost(*((struct tagDDECONV **)a3 + 4), xxxExecuteAck, v11, 0LL, v13, v8);
    *a2 = (__int64)v9;
    if ( v9 )
    {
      tagTHREADINFO::SetForegroundActivate(*(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL), 2LL);
      tagTHREADINFO::SetForegroundActivate(*(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL), 2LL);
    }
    else
    {
      return 3;
    }
  }
  return v7;
}
