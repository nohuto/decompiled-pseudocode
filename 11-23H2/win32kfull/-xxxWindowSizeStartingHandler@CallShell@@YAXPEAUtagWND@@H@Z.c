/*
 * XREFs of ?xxxWindowSizeStartingHandler@CallShell@@YAXPEAUtagWND@@H@Z @ 0x1C021E958
 * Callers:
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C01F023C (-xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dq @ 0x1C01ADF38 (WPP_RECORDER_AND_TRACE_SF_Dq.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x1C021D95C (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 */

void __fastcall CallShell::xxxWindowSizeStartingHandler(CallShell *this, struct tagWND *a2)
{
  __int64 v2; // rdi
  int v3; // ebx
  char v5; // r8
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // ax
  __int64 v8; // rdx
  int v9; // r9d
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // [rsp+20h] [rbp-B8h]
  __int128 v13; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v14[16]; // [rsp+60h] [rbp-78h] BYREF
  int v15; // [rsp+70h] [rbp-68h]
  int v16; // [rsp+74h] [rbp-64h]
  int v17; // [rsp+78h] [rbp-60h]
  int v18; // [rsp+7Ch] [rbp-5Ch]

  v2 = *((_QWORD *)this + 2);
  v3 = (int)a2;
  memset_0(&v13, 0, 0x68uLL);
  *(_QWORD *)&v13 = *(_QWORD *)this;
  DWORD2(v13) = 2;
  v15 = v3;
  v5 = *(_BYTE *)(*(_QWORD *)(v2 + 432) + 240LL);
  v6 = (4 * (v5 & 1)) | 1;
  if ( (v5 & 0x10) == 0 )
    v6 = 4 * (v5 & 1);
  v7 = v6 | 2;
  if ( (v5 & 4) == 0 )
    v7 = v6;
  v8 = *((_QWORD *)this + 5) + 88LL;
  v16 = v7;
  TransformRectBetweenCoordinateSpaces(v14, v8, *(_QWORD *)(*(_QWORD *)(v2 + 456) + 328LL), this);
  if ( (unsigned int)anonymous_namespace_::xxxCallIAMWindowManagementHandler(&v13, 0) )
  {
    v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 672LL);
    if ( v10 )
    {
      v11 = v17;
      *(_DWORD *)(v10 + 324) = v18;
      *(_DWORD *)(v10 + 320) = v11;
      LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_Dq(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v9,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          v9,
          v12,
          1u,
          0x19u,
          (__int64)&WPP_8ba1c0058de53c07630bf97a274bc62e_Traceguids);
    }
  }
}
