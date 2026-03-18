/*
 * XREFs of ?bExpandScanline@STACKOBJ@@QEAAHKK@Z @ 0x14015C704
 * Callers:
 *     ?bSearchAllSpans@FLOODBM@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z @ 0x14015AC34 (-bSearchAllSpans@FLOODBM@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z.c)
 *     ?bMergeScanline@STACKMEMOBJ@@QEAA_NAEAVRGNOBJ@@@Z @ 0x14015BF84 (-bMergeScanline@STACKMEMOBJ@@QEAA_NAEAVRGNOBJ@@@Z.c)
 *     ?bPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x14015C304 (-bPushMergeScrScan@STACKOBJ@@QEAAHXZ.c)
 * Callees:
 *     PALLOCNOZ @ 0x140125A4C (PALLOCNOZ.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall STACKOBJ::bExpandScanline(STACKOBJ *this, unsigned int a2, int a3)
{
  unsigned int *v5; // rsi
  unsigned int v6; // ebp
  unsigned int *v7; // rax
  unsigned int *v8; // rbx

  if ( a3 == 1 )
    v5 = (unsigned int *)*((_QWORD *)this + 3);
  else
    v5 = (unsigned int *)*((_QWORD *)this + 2);
  v6 = a2 + 160;
  if ( a2 + 160 < a2 )
    return 0LL;
  v7 = (unsigned int *)PALLOCNOZ(v6, 1684817479LL);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  memmove(v7, v5, *v5);
  *v8 = v6;
  Win32FreePool(v5);
  if ( a3 == 1 )
    *((_QWORD *)this + 3) = v8;
  else
    *((_QWORD *)this + 2) = v8;
  return 1LL;
}
