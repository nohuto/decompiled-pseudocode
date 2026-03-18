/*
 * XREFs of NtUserfnIMECONTROL @ 0x14003CED0
 * Callers:
 *     <none>
 * Callees:
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x14003D210 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x14003E628 (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?ProbeAndCaptureSoftKbdData@@YAPEAUtagSOFTKBDDATA@@PEAU1@@Z @ 0x14027F9D4 (-ProbeAndCaptureSoftKbdData@@YAPEAUtagSOFTKBDDATA@@PEAU1@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall NtUserfnIMECONTROL(__int64 a1, int a2, unsigned __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  __int64 v10; // rdx
  ULONG64 v11; // rcx
  struct tagSOFTKBDDATA *v12; // rdi
  __int64 v13; // rbx
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v15; // rax
  __int128 *v16; // rax
  __int64 UserSessionState; // rax
  _OWORD *v19; // [rsp+30h] [rbp-108h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+38h] [rbp-100h] BYREF
  void (*v21)(void *); // [rsp+48h] [rbp-F0h]
  __int64 v22; // [rsp+50h] [rbp-E8h]
  __int128 v23; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v24; // [rsp+70h] [rbp-C8h]
  int v25; // [rsp+78h] [rbp-C0h]
  __int128 v26; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v27; // [rsp+90h] [rbp-A8h]
  _OWORD v28[5]; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v29; // [rsp+F0h] [rbp-48h]
  int v30; // [rsp+F8h] [rbp-40h]

  v26 = 0LL;
  v27 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0;
  memset_0(v28, 0, 0x5CuLL);
  v19 = (_OWORD *)a4;
  PtiCurrent();
  if ( a2 != 643 || a3 > 0x22 )
    return 0LL;
  tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
  switch ( a3 )
  {
    case 7uLL:
      v11 = MmUserProbeAddress;
      if ( a4 >= MmUserProbeAddress )
        a4 = MmUserProbeAddress;
      *(_BYTE *)a4 = *(_BYTE *)a4;
      *(_BYTE *)(a4 + 31) = *(_BYTE *)(a4 + 31);
      goto LABEL_35;
    case 8uLL:
      v11 = MmUserProbeAddress;
      if ( a4 >= MmUserProbeAddress )
        a4 = MmUserProbeAddress;
      v26 = *(_OWORD *)a4;
      v27 = *(_OWORD *)(a4 + 16);
      v16 = &v26;
      goto LABEL_31;
    case 9uLL:
LABEL_25:
      v11 = MmUserProbeAddress;
      if ( a4 >= MmUserProbeAddress )
        a4 = MmUserProbeAddress;
      *(_BYTE *)a4 = *(_BYTE *)a4;
      *(_BYTE *)(a4 + 91) = *(_BYTE *)(a4 + 91);
      goto LABEL_35;
    case 0xAuLL:
      v11 = MmUserProbeAddress;
      if ( a4 >= MmUserProbeAddress )
        a4 = MmUserProbeAddress;
      v28[0] = *(_OWORD *)a4;
      v28[1] = *(_OWORD *)(a4 + 16);
      v28[2] = *(_OWORD *)(a4 + 32);
      v28[3] = *(_OWORD *)(a4 + 48);
      v28[4] = *(_OWORD *)(a4 + 64);
      v29 = *(_QWORD *)(a4 + 80);
      v30 = *(_DWORD *)(a4 + 88);
      v16 = v28;
      goto LABEL_31;
    case 0xBuLL:
      v11 = MmUserProbeAddress;
      if ( a4 >= MmUserProbeAddress )
        a4 = MmUserProbeAddress;
      *(_BYTE *)a4 = *(_BYTE *)a4;
      *(_BYTE *)(a4 + 27) = *(_BYTE *)(a4 + 27);
      goto LABEL_35;
    case 0xCuLL:
      v11 = MmUserProbeAddress;
      if ( a4 >= MmUserProbeAddress )
        a4 = MmUserProbeAddress;
      v23 = *(_OWORD *)a4;
      v24 = *(_QWORD *)(a4 + 16);
      v25 = *(_DWORD *)(a4 + 24);
      v16 = &v23;
LABEL_31:
      v19 = v16;
      goto LABEL_35;
    case 0x11uLL:
      goto LABEL_25;
  }
  if ( a3 != 24 )
  {
LABEL_35:
    UserSessionState = W32GetUserSessionState(v11, v10);
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, _OWORD *, __int64))(UserSessionState
                                                                                           + 8LL * ((a6 + 6) & 0x1F)
                                                                                           + 71176))(
            a1,
            643LL,
            a3,
            v19,
            a5);
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>(BugCheckParameter2);
    return v13;
  }
  v12 = ProbeAndCaptureSoftKbdData((struct tagSOFTKBDDATA *)a4);
  v13 = 0LL;
  if ( v12 )
  {
    if ( v21 != (void (*)(void *))-1LL )
    {
      BugCheckParameter4 = PtiCurrent();
      KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v12, (ULONG_PTR)BugCheckParameter4);
    }
    v15 = PtiCurrent();
    BugCheckParameter2[0] = *((_QWORD *)v15 + 48);
    v11 = (ULONG64)BugCheckParameter2;
    *((_QWORD *)v15 + 48) = BugCheckParameter2;
    BugCheckParameter2[1] = (ULONG_PTR)v12;
    v21 = Win32FreePool;
    v19 = v12;
    goto LABEL_35;
  }
  v22 = 0LL;
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>(BugCheckParameter2);
  return v13;
}
