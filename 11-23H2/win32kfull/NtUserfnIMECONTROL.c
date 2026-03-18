/*
 * XREFs of NtUserfnIMECONTROL @ 0x1C01E0140
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00E0550 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     ?ProbeAndCaptureSoftKbdData@@YAPEAUtagSOFTKBDDATA@@PEAU1@@Z @ 0x1C01B71B8 (-ProbeAndCaptureSoftKbdData@@YAPEAUtagSOFTKBDDATA@@PEAU1@@Z.c)
 */

__int64 __fastcall NtUserfnIMECONTROL(__int64 a1, int a2, unsigned __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  struct tagSOFTKBDDATA *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagSOFTKBDDATA *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int128 *v18; // rax
  ULONG64 v20; // [rsp+30h] [rbp-128h]
  __int128 v21; // [rsp+48h] [rbp-110h] BYREF
  __int64 v22; // [rsp+58h] [rbp-100h]
  __int128 v23; // [rsp+68h] [rbp-F0h] BYREF
  __int64 v24; // [rsp+78h] [rbp-E0h]
  int v25; // [rsp+80h] [rbp-D8h]
  __int128 v26; // [rsp+88h] [rbp-D0h] BYREF
  __int128 v27; // [rsp+98h] [rbp-C0h]
  _OWORD v28[5]; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+100h] [rbp-58h]
  int v30; // [rsp+108h] [rbp-50h]

  v26 = 0LL;
  v27 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0;
  memset_0(v28, 0, 0x5CuLL);
  v20 = a4;
  v21 = 0LL;
  v22 = 0LL;
  v10 = 0LL;
  PtiCurrentShared(v12, v11, v13, v14);
  if ( a2 != 643 || a3 > 0x22 )
    return 0LL;
  if ( a3 > 0x18 )
    goto LABEL_35;
  switch ( (_DWORD)a3 )
  {
    case 7:
      if ( a4 >= MmUserProbeAddress )
        a4 = MmUserProbeAddress;
      *(_BYTE *)a4 = *(_BYTE *)a4;
      *(_BYTE *)(a4 + 31) = *(_BYTE *)(a4 + 31);
      goto LABEL_34;
    case 8:
      if ( a4 >= MmUserProbeAddress )
        a4 = MmUserProbeAddress;
      v26 = *(_OWORD *)a4;
      v27 = *(_OWORD *)(a4 + 16);
      v18 = &v26;
      goto LABEL_30;
    case 9:
LABEL_24:
      if ( a4 >= MmUserProbeAddress )
        a4 = MmUserProbeAddress;
      *(_BYTE *)a4 = *(_BYTE *)a4;
      *(_BYTE *)(a4 + 91) = *(_BYTE *)(a4 + 91);
LABEL_34:
      v10 = 0LL;
      goto LABEL_35;
    case 0xA:
      if ( a4 >= MmUserProbeAddress )
        a4 = MmUserProbeAddress;
      v28[0] = *(_OWORD *)a4;
      v28[1] = *(_OWORD *)(a4 + 16);
      v28[2] = *(_OWORD *)(a4 + 32);
      v28[3] = *(_OWORD *)(a4 + 48);
      v28[4] = *(_OWORD *)(a4 + 64);
      v29 = *(_QWORD *)(a4 + 80);
      v30 = *(_DWORD *)(a4 + 88);
      v18 = v28;
      goto LABEL_30;
    case 0xB:
      if ( a4 >= MmUserProbeAddress )
        a4 = MmUserProbeAddress;
      *(_BYTE *)a4 = *(_BYTE *)a4;
      *(_BYTE *)(a4 + 27) = *(_BYTE *)(a4 + 27);
      goto LABEL_34;
    case 0xC:
      if ( a4 >= MmUserProbeAddress )
        a4 = MmUserProbeAddress;
      v23 = *(_OWORD *)a4;
      v24 = *(_QWORD *)(a4 + 16);
      v25 = *(_DWORD *)(a4 + 24);
      v18 = &v23;
LABEL_30:
      v17 = (*((__int64 (__fastcall **)(__int64, __int64, unsigned __int64, __int128 *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
             + ((a6 + 6) & 0x1F)))(
              a1,
              643LL,
              a3,
              v18,
              a5);
      goto LABEL_36;
    case 0x11:
      goto LABEL_24;
  }
  if ( (_DWORD)a3 != 24 )
  {
LABEL_35:
    v17 = (*((__int64 (__fastcall **)(__int64, __int64, unsigned __int64, ULONG64, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
           + ((a6 + 6) & 0x1F)))(
            a1,
            643LL,
            a3,
            v20,
            a5);
    goto LABEL_36;
  }
  v15 = ProbeAndCaptureSoftKbdData((struct tagSOFTKBDDATA *)a4);
  v10 = v15;
  if ( !v15 )
    return 0LL;
  PushW32ThreadLock((__int64)v15, &v21, (__int64)Win32FreePool);
  v17 = (*((__int64 (__fastcall **)(__int64, __int64, unsigned __int64, struct tagSOFTKBDDATA *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
         + ((a6 + 6) & 0x1F)))(
          a1,
          643LL,
          a3,
          v10,
          a5);
LABEL_36:
  v16 = v17;
  if ( v10 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v21);
  return v16;
}
