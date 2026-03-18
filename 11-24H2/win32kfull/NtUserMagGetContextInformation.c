/*
 * XREFs of NtUserMagGetContextInformation @ 0x1401D0B20
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     MagGetLensContextInformation @ 0x14022A370 (MagGetLensContextInformation.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall NtUserMagGetContextInformation(__int64 a1, int a2, void *a3, ULONG64 a4)
{
  _BYTE *v7; // rsi
  void *v8; // r12
  void *v9; // r13
  _OWORD *v10; // r15
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  NTSTATUS LensContextInformation; // edi
  int v14; // eax
  __int64 v15; // rbx
  ULONG v16; // eax
  _DWORD *v18; // rax
  unsigned int v19; // ebx
  __int64 v20; // rax
  struct tagTHREADINFO *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 UserSessionState; // rax
  int v25; // ebx
  _DWORD *v26; // rax
  size_t Size; // [rsp+30h] [rbp-148h] BYREF
  __int64 v28; // [rsp+38h] [rbp-140h]
  __int64 v29; // [rsp+40h] [rbp-138h]
  _OWORD *v30; // [rsp+48h] [rbp-130h]
  __int64 v31; // [rsp+60h] [rbp-118h]
  ULONG64 v32; // [rsp+68h] [rbp-110h]
  __int128 v33; // [rsp+78h] [rbp-100h] BYREF
  __int128 v34; // [rsp+88h] [rbp-F0h]
  __int128 v35; // [rsp+98h] [rbp-E0h]
  _BYTE v36[112]; // [rsp+C0h] [rbp-B8h] BYREF

  v32 = a4;
  v7 = 0LL;
  LODWORD(Size) = 0;
  memset_0(v36, 0, 0x68uLL);
  v8 = 0LL;
  v28 = 0LL;
  v9 = 0LL;
  v29 = 0LL;
  v10 = 0LL;
  v30 = 0LL;
  EnterCrit(1LL, 0LL);
  if ( a1 == -3 )
  {
    v31 = -1LL;
  }
  else if ( a1 )
  {
    v31 = ValidateHwnd(a1);
    if ( !v31 )
      goto LABEL_5;
  }
  else
  {
    v31 = 0LL;
  }
  if ( a2 >= 11 )
  {
    LensContextInformation = -1073741821;
    goto LABEL_6;
  }
  v18 = (_DWORD *)v32;
  if ( v32 >= MmUserProbeAddress )
    v18 = (_DWORD *)MmUserProbeAddress;
  v12 = (unsigned int)*v18;
  LODWORD(Size) = *v18;
  if ( a2 > 5 )
  {
    switch ( a2 )
    {
      case 6:
        if ( !a3 )
          goto LABEL_5;
        if ( (unsigned int)v12 < 8 )
          goto LABEL_29;
        v19 = 208;
        if ( (unsigned int)v12 <= 0xD0 )
          v19 = v12;
        v20 = Win32AllocPoolZInit(v19, 1735226197LL);
        v8 = (void *)v20;
        v28 = v20;
        break;
      case 7:
        if ( !a3 )
          goto LABEL_5;
        if ( (unsigned int)v12 < 0x10 )
          goto LABEL_29;
        v19 = 160;
        if ( (unsigned int)v12 <= 0xA0 )
          v19 = v12;
        v20 = Win32AllocPoolZInit(v19, 1735226197LL);
        v9 = (void *)v20;
        v29 = v20;
        break;
      case 8:
        if ( !a3 )
          goto LABEL_5;
        v19 = 48;
        if ( (unsigned int)v12 < 0x30 )
          goto LABEL_29;
        v10 = (_OWORD *)Win32AllocPoolZInit(48LL, 1735226197LL);
        v30 = v10;
        if ( !v10 )
        {
LABEL_50:
          LensContextInformation = -1073741801;
          goto LABEL_6;
        }
        v33 = 0LL;
        v34 = 0LL;
        v35 = 0LL;
        RtlCopyFromUser(&v33, a3, 0x30uLL);
        *v10 = v33;
        v10[1] = v34;
        v10[2] = v35;
        v7 = v10;
LABEL_64:
        LODWORD(Size) = v19;
        goto LABEL_65;
      default:
        v11 = (unsigned int)(a2 - 9);
        if ( (unsigned int)v11 > 1 )
          goto LABEL_65;
        if ( a3 )
        {
          if ( (unsigned int)v12 < 4 )
            goto LABEL_29;
          v7 = v36;
          LODWORD(Size) = 4;
          goto LABEL_65;
        }
        goto LABEL_5;
    }
    if ( !v20 )
      goto LABEL_50;
    v7 = (_BYTE *)v20;
    goto LABEL_64;
  }
  if ( a2 == 5 )
  {
    if ( a3 )
    {
      if ( (unsigned int)v12 < 0x64 )
        goto LABEL_29;
      v7 = v36;
      LODWORD(Size) = 100;
      goto LABEL_65;
    }
    goto LABEL_5;
  }
  if ( (unsigned int)a2 < 2 )
    goto LABEL_5;
  v11 = (unsigned int)(a2 - 2);
  if ( a2 == 2 )
  {
    if ( a3 )
    {
      if ( (unsigned int)v12 < 0x10 )
        goto LABEL_29;
      v7 = v36;
      LODWORD(Size) = 16;
      goto LABEL_65;
    }
    goto LABEL_5;
  }
  v11 = (unsigned int)(a2 - 3);
  if ( a2 == 3 )
  {
    if ( a3 )
    {
      if ( (unsigned int)v12 < 0x20 )
        goto LABEL_29;
      v7 = v36;
      LODWORD(Size) = 32;
      goto LABEL_65;
    }
LABEL_5:
    LensContextInformation = -1073741811;
LABEL_6:
    v14 = 0;
    v15 = 0LL;
    goto LABEL_7;
  }
  if ( a2 != 4 )
    goto LABEL_65;
  if ( !a3 )
    goto LABEL_5;
  if ( (unsigned int)v12 < 0x24 )
  {
LABEL_29:
    LensContextInformation = -1073741306;
    goto LABEL_6;
  }
  v7 = v36;
  LODWORD(Size) = 36;
LABEL_65:
  v21 = PtiCurrent(v12, v11);
  UserSessionState = W32GetUserSessionState(v23, v22);
  LensContextInformation = MagGetLensContextInformation(UserSessionState + 66080, v21, v31, (unsigned int)a2, v7, &Size);
  if ( LensContextInformation < 0 )
  {
    v14 = 1;
  }
  else
  {
    v25 = Size;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a3, v7, (unsigned int)Size);
    v12 = MmUserProbeAddress;
    v26 = (_DWORD *)v32;
    if ( v32 >= MmUserProbeAddress )
      v26 = (_DWORD *)MmUserProbeAddress;
    *v26 = v25;
    v14 = 1;
  }
  if ( LensContextInformation < 0 )
    goto LABEL_6;
  v15 = 1LL;
LABEL_7:
  if ( !v14 )
  {
    v16 = RtlNtStatusToDosError(LensContextInformation);
    UserSetLastError(v16);
  }
  if ( v10 )
    Win32FreePool(v10);
  if ( v9 )
    Win32FreePool(v9);
  if ( v8 )
    Win32FreePool(v8);
  UserSessionSwitchLeaveCrit(v12);
  return v15;
}
