/*
 * XREFs of NtDCompositionConfirmFrame @ 0x1400B6650
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x14007C364 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z @ 0x1400BC420 (-ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z.c)
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1400E1B98 (--1CConnection@DirectComposition@@AEAA@XZ.c)
 *     ?ConfirmFrame@CConnection@DirectComposition@@QEAAJPEAUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z @ 0x140194600 (-ConfirmFrame@CConnection@DirectComposition@@QEAAJPEAUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtDCompositionConfirmFrame(struct HDCOMPOSITIONCONNECTION__ *a1, void *Src)
{
  _BYTE *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // rax
  int v12; // ebx
  volatile signed __int32 *v13; // rbx
  char *v14; // rbx
  int v15; // [rsp+20h] [rbp-298h]
  PVOID Buffer; // [rsp+30h] [rbp-288h] BYREF
  __int128 v17; // [rsp+40h] [rbp-278h] BYREF
  __int128 v18; // [rsp+50h] [rbp-268h]
  __int128 v19; // [rsp+60h] [rbp-258h]
  void *v20; // [rsp+70h] [rbp-248h]
  __int128 v21; // [rsp+78h] [rbp-240h] BYREF
  __int128 v22; // [rsp+88h] [rbp-230h]
  __int128 v23; // [rsp+98h] [rbp-220h]
  void *Srca; // [rsp+A8h] [rbp-210h]
  _BYTE v25[480]; // [rsp+B0h] [rbp-208h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  Srca = 0LL;
  v4 = 0LL;
  Buffer = 0LL;
  v5 = *(_QWORD *)(W32GetUserSessionState(a1) + 70808);
  if ( PsGetCurrentProcess(v7, v6, v8, v9) != v5 )
    return 3221225506LL;
  if ( Src )
  {
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    RtlCopyFromUser(&v17, Src, 0x38uLL);
    v21 = v17;
    v22 = v18;
    v23 = v19;
    Srca = v20;
    if ( (_QWORD)v17 )
    {
      if ( DWORD2(v19) <= 0x100 )
      {
        if ( DWORD2(v19) <= 4 )
        {
          v4 = v25;
LABEL_11:
          v12 = 0;
          RtlCopyFromUser(v4, Srca, 120LL * DWORD2(v23));
          Srca = v4;
          goto LABEL_14;
        }
        v11 = DWORD2(v23);
      }
      else
      {
        v11 = 256LL;
        DWORD2(v23) = 256;
      }
      v4 = (_BYTE *)Win32AllocPoolImpl(256LL, 120 * v11, 0x61644344u);
      if ( v4 )
        goto LABEL_11;
      v12 = -1073741801;
    }
    else
    {
      v12 = -1073741811;
    }
LABEL_14:
    if ( v12 >= 0 )
    {
      KeEnterCriticalRegion();
      v12 = DirectComposition::CConnection::ReferenceHandle(a1, (struct DirectComposition::CConnection **)&Buffer);
      if ( v12 >= 0 )
      {
        v13 = (volatile signed __int32 *)Buffer;
        v15 = DirectComposition::CConnection::ConfirmFrame(
                (DirectComposition::CConnection *)Buffer,
                (struct tagCOMPOSITION_CONFIRM_FRAME_INFO *)&v21);
        if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
        {
          v14 = (char *)Buffer;
          if ( Buffer )
          {
            DirectComposition::CConnection::~CConnection((DirectComposition::CConnection *)Buffer);
            GreDeleteFastMutex(v14);
          }
        }
        v4 = 0LL;
        v12 = v15;
      }
      KeLeaveCriticalRegion();
    }
    goto LABEL_22;
  }
  v12 = -1073741811;
LABEL_22:
  if ( v4 )
  {
    if ( v4 != v25 )
      GreDeleteFastMutex(v4);
  }
  return (unsigned int)v12;
}
