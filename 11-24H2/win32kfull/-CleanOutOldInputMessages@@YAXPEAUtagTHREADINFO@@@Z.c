/*
 * XREFs of ?CleanOutOldInputMessages@@YAXPEAUtagTHREADINFO@@@Z @ 0x14018D594
 * Callers:
 *     ?GetRawInputBuffer_NoUserCrit@@YAIPEAUtagTHREADINFO@@PEAUtagRAWINPUT@@PEAII@Z @ 0x1401C5C24 (-GetRawInputBuffer_NoUserCrit@@YAIPEAUtagTHREADINFO@@PEAUtagRAWINPUT@@PEAII@Z.c)
 * Callees:
 *     DelQEntry @ 0x14008E870 (DelQEntry.c)
 *     ?DeleteHidDataIfAlreadyHandledByGRIB@@YA_NPEAUtagTHREADINFO@@_J@Z @ 0x14018D704 (-DeleteHidDataIfAlreadyHandledByGRIB@@YA_NPEAUtagTHREADINFO@@_J@Z.c)
 */

void __fastcall CleanOutOldInputMessages(struct tagTHREADINFO *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rsi
  __int64 v4; // r14
  __int64 i; // rdi
  __int64 v6; // rbp
  __int64 v7; // rsi
  char *v8; // rbx

  EnterCrit(1LL, 0LL);
  v3 = (_QWORD *)*((_QWORD *)a1 + 59);
  v4 = (__int64)(v3 + 3);
  for ( i = v3[3]; i; i = v6 )
  {
    if ( *((int *)a1 + 296) <= 0 )
      goto LABEL_11;
    v6 = *(_QWORD *)i;
    if ( *(_DWORD *)(i + 24) == 255 )
    {
      if ( !DeleteHidDataIfAlreadyHandledByGRIB(a1, *(_QWORD *)(i + 40)) )
      {
        EtwTraceInputProcessDelay(a1);
        *(_DWORD *)(*((_QWORD *)a1 + 59) + 456LL) = (MEMORY[0xFFFFF78000000320]
                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        goto LABEL_11;
      }
      *((_DWORD *)a1 + 152) = *(_DWORD *)(i + 48);
      if ( v3[11] == i )
        v3[11] = 0LL;
      DelQEntry((__int64)(v3 + 3), (__int64 *)i, 1);
    }
  }
  i = v3[4];
  if ( !i )
    goto LABEL_15;
LABEL_11:
  while ( 1 )
  {
    v2 = *(_QWORD *)(i + 8);
    if ( !v2 )
      break;
    v7 = i;
    i = *(_QWORD *)(i + 8);
    if ( *(_DWORD *)(v7 + 96) == 4 && *(_DWORD *)(v2 + 96) == 4 )
    {
      v8 = *(char **)(v7 + 32);
      CoalesceUpdateKeyStateEventMsg(v2, v8, v8 + 64);
      Win32FreePool(v8);
      DelQEntry(v4, (__int64 *)v7, 1);
    }
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v2);
}
