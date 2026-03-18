/*
 * XREFs of ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F9C5C
 * Callers:
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FA5B8 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0044D3C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01F8F78 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01F9BDC (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 */

__int64 __fastcall xxxExecute(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  unsigned int v4; // r8d
  unsigned int v7; // ebx
  char v8; // si
  unsigned int v9; // eax
  void *v10; // rax
  __int64 v11; // r9
  char v12; // dl
  void *v14; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+A0h] [rbp+18h] BYREF
  struct tagINTDDEINFO *v16; // [rsp+A8h] [rbp+20h] BYREF

  v16 = 0LL;
  v14 = 0LL;
  v4 = 2048;
  v15 = 2048;
  if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a3 + 5) + 40LL) + 18LL) & 8) == 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 40LL) + 18LL) & 8) == 0 )
      v4 = 67584;
    v15 = v4;
  }
  v7 = xxxCopyDdeIn(*a2, &v15, &v14, &v16);
  v8 = 1;
  if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 )
  {
    v7 = 3;
    if ( v16 )
      Win32FreePool(v16);
  }
  else if ( v7 == 2 )
  {
    v9 = v15;
    *a1 |= 0x80000000;
    v10 = AnticipatePost(*((struct tagDDECONV **)a3 + 4), xxxExecuteAck, v14, 0LL, v16, v9);
    *a2 = v10;
    if ( v10 )
    {
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL) + 488LL) |= 0x20u;
      v12 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_q(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v12,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          10LL,
          4u,
          2u,
          0xAu,
          (__int64)&WPP_a9050736bb6e32740e3a2edcc30d11fd_Traceguids,
          *(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL));
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL) + 488LL) |= 0x20u;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v8 = 0;
      }
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_q(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v8,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          v11,
          4u,
          2u,
          0xBu,
          (__int64)&WPP_a9050736bb6e32740e3a2edcc30d11fd_Traceguids,
          *(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL));
    }
    else
    {
      return 3;
    }
  }
  return v7;
}
