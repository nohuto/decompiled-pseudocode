/*
 * XREFs of NtUserMagGetContextInformation @ 0x1C01D6030
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     MagGetLensContextInformation @ 0x1C01A29B0 (MagGetLensContextInformation.c)
 */

__int64 __fastcall NtUserMagGetContextInformation(__int64 a1, int a2, char *a3, ULONG64 a4)
{
  _BYTE *v7; // r14
  void *v8; // r12
  void *v9; // r13
  _OWORD *v10; // r15
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  NTSTATUS LensContextInformation; // edi
  int v16; // eax
  __int64 v17; // rbx
  ULONG v18; // eax
  _DWORD *v20; // rax
  unsigned int v21; // ebx
  __int128 *v22; // rcx
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int64 v25; // rax
  int v26; // ebx
  _DWORD *v27; // rax
  size_t Size; // [rsp+30h] [rbp-148h] BYREF
  __int64 v29; // [rsp+38h] [rbp-140h]
  __int64 v30; // [rsp+40h] [rbp-138h]
  _OWORD *v31; // [rsp+48h] [rbp-130h]
  __int64 v32; // [rsp+60h] [rbp-118h]
  ULONG64 v33; // [rsp+68h] [rbp-110h]
  __int128 v34; // [rsp+90h] [rbp-E8h]
  __int128 v35; // [rsp+A0h] [rbp-D8h]
  __int128 v36; // [rsp+B0h] [rbp-C8h]
  _BYTE v37[112]; // [rsp+C0h] [rbp-B8h] BYREF

  v33 = a4;
  v7 = 0LL;
  LODWORD(Size) = 0;
  memset_0(v37, 0, 0x68uLL);
  v8 = 0LL;
  v29 = 0LL;
  v9 = 0LL;
  v30 = 0LL;
  v10 = 0LL;
  v31 = 0LL;
  EnterCrit(1LL, 0LL);
  if ( a1 == -3 )
  {
    v32 = -1LL;
  }
  else if ( a1 )
  {
    v32 = ValidateHwnd(a1);
    if ( !v32 )
      goto LABEL_5;
  }
  else
  {
    v32 = 0LL;
  }
  if ( a2 >= 11 )
  {
    LensContextInformation = -1073741821;
    goto LABEL_6;
  }
  v20 = (_DWORD *)v33;
  if ( v33 >= MmUserProbeAddress )
    v20 = (_DWORD *)MmUserProbeAddress;
  v12 = (unsigned int)*v20;
  LODWORD(Size) = *v20;
  if ( a2 > 5 )
  {
    v11 = (unsigned int)(a2 - 6);
    if ( a2 == 6 )
    {
      if ( !a3 )
        goto LABEL_5;
      if ( (unsigned int)v12 < 8 )
        goto LABEL_30;
      v21 = 208;
      if ( (unsigned int)v12 <= 0xD0 )
        v21 = v12;
      v25 = Win32AllocPoolZInit(v21, 1735226197LL);
      v8 = (void *)v25;
      v29 = v25;
    }
    else
    {
      v11 = (unsigned int)(a2 - 7);
      if ( a2 != 7 )
      {
        v11 = (unsigned int)(a2 - 8);
        if ( a2 != 8 )
        {
          v11 = (unsigned int)(a2 - 9);
          if ( (unsigned int)v11 > 1 )
            goto LABEL_69;
          if ( a3 )
          {
            if ( (unsigned int)v12 < 4 )
              goto LABEL_30;
            v7 = v37;
            LODWORD(Size) = 4;
            goto LABEL_69;
          }
          goto LABEL_5;
        }
        if ( !a3 )
          goto LABEL_5;
        v21 = 48;
        if ( (unsigned int)v12 < 0x30 )
          goto LABEL_30;
        v10 = (_OWORD *)Win32AllocPoolZInit(48LL, 1735226197LL);
        v31 = v10;
        if ( !v10 )
        {
LABEL_51:
          LensContextInformation = -1073741801;
          goto LABEL_6;
        }
        v22 = (__int128 *)a3;
        if ( a3 + 48 < a3 || (unsigned __int64)(a3 + 48) > MmUserProbeAddress )
          v22 = (__int128 *)MmUserProbeAddress;
        v34 = *v22;
        v35 = v22[1];
        v23 = v35;
        v36 = v22[2];
        v24 = v36;
        *v10 = v34;
        v10[1] = v23;
        v10[2] = v24;
        v7 = v10;
LABEL_68:
        LODWORD(Size) = v21;
        goto LABEL_69;
      }
      if ( !a3 )
        goto LABEL_5;
      if ( (unsigned int)v12 < 0x10 )
        goto LABEL_30;
      v21 = 160;
      if ( (unsigned int)v12 <= 0xA0 )
        v21 = v12;
      v25 = Win32AllocPoolZInit(v21, 1735226197LL);
      v9 = (void *)v25;
      v30 = v25;
    }
    if ( !v25 )
      goto LABEL_51;
    v7 = (_BYTE *)v25;
    goto LABEL_68;
  }
  if ( a2 == 5 )
  {
    if ( a3 )
    {
      if ( (unsigned int)v12 < 0x64 )
        goto LABEL_30;
      v7 = v37;
      LODWORD(Size) = 100;
      goto LABEL_69;
    }
    goto LABEL_5;
  }
  v11 = (unsigned int)a2;
  if ( !a2 )
    goto LABEL_5;
  v11 = (unsigned int)(a2 - 1);
  if ( a2 == 1 )
    goto LABEL_5;
  v11 = (unsigned int)(a2 - 2);
  if ( a2 == 2 )
  {
    if ( a3 )
    {
      if ( (unsigned int)v12 < 0x10 )
        goto LABEL_30;
      v7 = v37;
      LODWORD(Size) = 16;
      goto LABEL_69;
    }
    goto LABEL_5;
  }
  v11 = (unsigned int)(a2 - 3);
  if ( a2 == 3 )
  {
    if ( a3 )
    {
      if ( (unsigned int)v12 < 0x20 )
        goto LABEL_30;
      v7 = v37;
      LODWORD(Size) = 32;
      goto LABEL_69;
    }
LABEL_5:
    LensContextInformation = -1073741811;
LABEL_6:
    v16 = 0;
    v17 = 0LL;
    goto LABEL_7;
  }
  if ( a2 != 4 )
    goto LABEL_69;
  if ( !a3 )
    goto LABEL_5;
  if ( (unsigned int)v12 < 0x24 )
  {
LABEL_30:
    LensContextInformation = -1073741306;
    goto LABEL_6;
  }
  v7 = v37;
  LODWORD(Size) = 36;
LABEL_69:
  LensContextInformation = MagGetLensContextInformation(
                             gMagnContext,
                             gptiCurrent,
                             (struct tagWND *)v32,
                             (unsigned int)a2,
                             (__int64)v7,
                             (int *)&Size);
  if ( LensContextInformation < 0 )
  {
    v16 = 1;
  }
  else
  {
    v26 = Size;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (char *)MmUserProbeAddress;
    memmove(a3, v7, (unsigned int)Size);
    v12 = MmUserProbeAddress;
    v27 = (_DWORD *)v33;
    if ( v33 >= MmUserProbeAddress )
      v27 = (_DWORD *)MmUserProbeAddress;
    *v27 = v26;
    v16 = 1;
  }
  if ( LensContextInformation < 0 )
    goto LABEL_6;
  v17 = 1LL;
LABEL_7:
  if ( !v16 )
  {
    v18 = RtlNtStatusToDosError(LensContextInformation);
    UserSetLastError(v18);
  }
  if ( v10 )
    Win32FreePool(v10);
  if ( v9 )
    Win32FreePool(v9);
  if ( v8 )
    Win32FreePool(v8);
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v17;
}
