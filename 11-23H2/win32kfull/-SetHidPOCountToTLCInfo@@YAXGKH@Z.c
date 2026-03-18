/*
 * XREFs of ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C01A9310
 * Callers:
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C003846C (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 *     ?DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z @ 0x1C01A8DF4 (-DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z.c)
 * Callees:
 *     FreeHidTLCInfo @ 0x1C0037918 (FreeHidTLCInfo.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C0038760 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C0038810 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 */

void __fastcall SetHidPOCountToTLCInfo(__int64 a1, int a2, int a3)
{
  __int16 v5; // bp
  __int64 v6; // rax
  __int64 v7; // rcx
  _BOOL8 v8; // rdi
  _QWORD *v9; // rcx
  _QWORD *v10; // rbx
  char v11; // [rsp+48h] [rbp+20h] BYREF

  v5 = a1;
  v6 = SGDGetUserSessionState(a1);
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v11, (struct _KTHREAD **)(v6 + 288));
  v8 = a3 && !a2;
  v10 = *(_QWORD **)(SGDGetUserSessionState(v7) + 376);
  while ( v10 != (_QWORD *)(SGDGetUserSessionState(v9) + 376) )
  {
    v9 = v10;
    v10 = (_QWORD *)*v10;
    if ( *((_WORD *)v9 + 8) == v5 )
    {
      *((_DWORD *)v9 + 8) = a2;
      if ( v8 && !(a2 | *((_DWORD *)v9 + 5) | *((_DWORD *)v9 + 6) | *((_DWORD *)v9 + 9)) )
        FreeHidTLCInfo(v9);
    }
  }
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v11);
}
