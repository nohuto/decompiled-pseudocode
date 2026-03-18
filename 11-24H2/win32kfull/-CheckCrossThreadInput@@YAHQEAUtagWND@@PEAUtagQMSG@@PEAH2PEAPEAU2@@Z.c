/*
 * XREFs of ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x14012E24C
 * Callers:
 *     xxxRetrievePointerInputMessage @ 0x1401B9D88 (xxxRetrievePointerInputMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x14008D9B8 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     CalcWakeMask @ 0x14012E6A0 (CalcWakeMask.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall CheckCrossThreadInput(
        struct tagTHREADINFO **a1,
        struct tagQMSG *a2,
        int *a3,
        int *a4,
        struct tagQMSG **a5)
{
  struct tagTHREADINFO **CurrentThreadNonPaged; // rax
  struct tagTHREADINFO *v10; // r11
  int v11; // esi
  int v12; // eax
  __int64 result; // rax

  CurrentThreadNonPaged = (struct tagTHREADINFO **)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v10 = *CurrentThreadNonPaged;
  else
    v10 = 0LL;
  if ( *((_QWORD *)v10 + 89) || *(struct tagQMSG **)(*((_QWORD *)v10 + 59) + 88LL) != a2 )
    goto LABEL_8;
  v11 = *((_DWORD *)a2 + 25);
  if ( (v11 & 0x20) != 0 )
  {
    *a3 = 0;
    *a5 = a2;
    return 0LL;
  }
  if ( (v11 & 0x40) != 0
    || (v12 = *((_DWORD *)a1 + 65)) == 0
    || (v12 & 2) == 0
    || (CalcWakeMask(*((unsigned int *)a2 + 6), *((unsigned int *)a2 + 6), 0LL) & 2) == 0
    || v10 == a1[33] )
  {
LABEL_8:
    *a3 = a1[2] != v10;
    *a5 = 0LL;
    return 0LL;
  }
  *((_DWORD *)a2 + 25) = v11 | 0x20;
  ReassignInputMessage(v10, a1[33], a2);
  *((_QWORD *)a2 + 2) = *a1;
  result = 1LL;
  *a4 = 0;
  *a3 = 0;
  return result;
}
