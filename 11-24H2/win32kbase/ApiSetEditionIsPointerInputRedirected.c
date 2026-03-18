/*
 * XREFs of ApiSetEditionIsPointerInputRedirected @ 0x1401922E0
 * Callers:
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x1402096B8 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 * Callees:
 *     EditionIsPointerInputRedirected @ 0x1401297C8 (EditionIsPointerInputRedirected.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionIsPointerInputRedirected(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  unsigned int v6; // ebx
  int (*v7)(void); // rax

  v4 = a2;
  v6 = 0;
  v7 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 6160LL);
  if ( v7 && v7() >= 0 )
    return (unsigned int)EditionIsPointerInputRedirected(a1, v4, a3);
  return v6;
}
