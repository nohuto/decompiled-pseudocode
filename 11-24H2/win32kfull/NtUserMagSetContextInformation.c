/*
 * XREFs of NtUserMagSetContextInformation @ 0x1402436C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     MagSetLensContextInformation @ 0x1401AD0BC (MagSetLensContextInformation.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x140274ECC (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall NtUserMagSetContextInformation(__int64 a1, int a2, char *a3, unsigned int a4)
{
  NTSTATUS v7; // ebx
  __int128 *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rsi
  ULONG v13; // eax
  char *v14; // rcx
  int v16; // r13d
  struct tagTHREADINFO *v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  UIPrivilegeIsolation *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // eax
  unsigned __int64 v25; // rcx
  __int128 *v26; // rax
  __int64 j; // r14
  __int64 v28; // xmm0_8
  unsigned int v29; // r12d
  unsigned __int64 v30; // rax
  __int128 *v31; // rax
  __int64 i; // r14
  struct tagTHREADINFO *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 UserSessionState; // rax
  int v37; // [rsp+38h] [rbp-1A0h] BYREF
  int v38; // [rsp+3Ch] [rbp-19Ch] BYREF
  __int128 *v39; // [rsp+40h] [rbp-198h]
  int v40; // [rsp+48h] [rbp-190h]
  int v41; // [rsp+4Ch] [rbp-18Ch]
  __int64 v42; // [rsp+58h] [rbp-180h]
  char *v43; // [rsp+60h] [rbp-178h]
  __int128 *v44; // [rsp+68h] [rbp-170h]
  char *v45; // [rsp+70h] [rbp-168h] BYREF
  __int128 v46; // [rsp+78h] [rbp-160h] BYREF
  __int128 v47; // [rsp+88h] [rbp-150h]
  int v48; // [rsp+98h] [rbp-140h]
  __int128 v49; // [rsp+A0h] [rbp-138h] BYREF
  unsigned __int64 v50; // [rsp+B0h] [rbp-128h]
  _OWORD v51[6]; // [rsp+C8h] [rbp-110h] BYREF
  int v52; // [rsp+128h] [rbp-B0h]
  __int128 v53; // [rsp+130h] [rbp-A8h] BYREF
  __int128 v54; // [rsp+140h] [rbp-98h]
  __int128 v55; // [rsp+150h] [rbp-88h]
  __int128 v56; // [rsp+160h] [rbp-78h]
  __int128 v57; // [rsp+170h] [rbp-68h]
  __int128 v58; // [rsp+180h] [rbp-58h]
  int v59; // [rsp+190h] [rbp-48h]

  v37 = a2;
  v7 = -1073741811;
  v8 = 0LL;
  v39 = 0LL;
  memset_0(&v53, 0, 0x68uLL);
  v44 = 0LL;
  v43 = 0LL;
  EnterCrit(1LL, 0LL);
  if ( a1 == -3 )
  {
    v42 = -1LL;
  }
  else if ( a1 )
  {
    v42 = ValidateHwnd(a1);
    if ( !v42 )
    {
LABEL_5:
      v11 = 0;
      v12 = 0LL;
      goto LABEL_6;
    }
  }
  else
  {
    v42 = 0LL;
  }
  v16 = v37;
  if ( v37 >= 11 )
  {
    v7 = -1073741821;
    goto LABEL_5;
  }
  if ( v37 == 4 )
  {
    v17 = PtiCurrent(v10, v9);
    v20 = *(_QWORD *)(W32GetUserSessionState(v19, v18) + 19200);
    if ( *((_QWORD *)v17 + 62) != v20 )
    {
      UserSetLastError(5);
LABEL_19:
      v11 = 1;
      goto LABEL_116;
    }
    if ( (unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline(v20) )
    {
      v22 = *((_QWORD *)v17 + 58);
      if ( *(int *)(v22 + 12) >= 0 )
      {
LABEL_22:
        EtwTraceUIPISystemError(v22, 0LL, 7LL);
        v7 = -1073741790;
        goto LABEL_5;
      }
    }
    else if ( UIPrivilegeIsolation::Enforced(v21) && *(int *)(*((_QWORD *)v17 + 58) + 12LL) >= 0 )
    {
      UserSetLastError(5);
      v22 = *((_QWORD *)v17 + 58);
      goto LABEL_22;
    }
    v16 = v37;
  }
  if ( v16 > 5 )
  {
    switch ( v16 )
    {
      case 6:
        if ( a3 )
        {
          if ( a4 >= 0x10 )
          {
            RtlCopyFromUser(&v53, a3, 0x10uLL);
            if ( DWORD1(v53) <= 0x19 )
            {
              if ( (unsigned int)v53 <= 0x19 )
              {
                v29 = v53 + DWORD1(v53);
                if ( (int)v53 + DWORD1(v53) < (unsigned int)v53 )
                {
                  v11 = 1;
                }
                else
                {
                  v38 = v53 + DWORD1(v53);
                  if ( v29 <= 0x19 )
                  {
                    v30 = 8LL * v29;
                    *(_QWORD *)&v49 = v30;
                    if ( v30 > 0xFFFFFFFF )
                    {
                      v11 = 1;
                    }
                    else
                    {
                      LODWORD(v50) = v30 + 8;
                      if ( (int)v30 + 8 >= (unsigned int)v30 )
                      {
                        v31 = (__int128 *)Win32AllocPoolZInit((unsigned int)(v30 + 8), 1735226197LL);
                        v8 = v31;
                        v39 = v31;
                        if ( v31 )
                        {
                          *(_QWORD *)&v49 = a3;
                          v44 = v31;
                          *(_QWORD *)v31 = v53;
                          for ( i = 0LL; ; i = (unsigned int)(i + 1) )
                          {
                            v41 = i;
                            if ( (unsigned int)i >= v29 )
                              break;
                            v45 = 0LL;
                            RtlCopyFromUser(&v45, &a3[8 * i + 8], 8uLL);
                            v23 = (__int64)v44;
                            *((_QWORD *)v44 + i + 1) = v45;
                          }
                          v16 = v37;
                          goto LABEL_113;
                        }
                        v7 = -1073741801;
                        v11 = 1;
                      }
                      else
                      {
                        v11 = 1;
                      }
                    }
                  }
                  else
                  {
                    v7 = -1073741306;
                    v11 = 1;
                  }
                }
              }
              else
              {
                v7 = -1073741306;
                v11 = 1;
              }
            }
            else
            {
              v7 = -1073741306;
              v11 = 1;
            }
          }
          else
          {
            v7 = -1073741306;
            v11 = 1;
          }
        }
        else
        {
          v11 = 1;
        }
        break;
      case 7:
        if ( a3 )
        {
          if ( a4 >= 0x10 )
          {
            RtlCopyFromUser(&v53, a3, 0x10uLL);
            if ( (unsigned int)v53 <= 6 )
            {
              v25 = 24LL * (unsigned int)v53;
              v50 = v25;
              if ( v25 > 0xFFFFFFFF )
              {
                v11 = 1;
              }
              else if ( (int)v25 + 16 < (unsigned int)v25 )
              {
                v11 = 1;
              }
              else
              {
                v38 = v25 + 16;
                v26 = (__int128 *)Win32AllocPoolZInit((unsigned int)(v25 + 16), 1735226197LL);
                v8 = v26;
                v39 = v26;
                if ( v26 )
                {
                  v45 = a3;
                  v23 = (__int64)v26;
                  v43 = (char *)v26;
                  *v26 = v53;
                  for ( j = 0LL; ; j = (unsigned int)(j + 1) )
                  {
                    v40 = j;
                    if ( (unsigned int)j >= *(_DWORD *)v23 )
                      break;
                    v46 = 0LL;
                    *(_QWORD *)&v47 = 0LL;
                    RtlCopyFromUser(&v46, &a3[24 * j + 16], 0x18uLL);
                    v28 = v47;
                    v23 = (__int64)v43;
                    *(_OWORD *)&v43[24 * j + 16] = v46;
                    *(_QWORD *)(v23 + 24 * j + 32) = v28;
                  }
                  goto LABEL_113;
                }
                v7 = -1073741801;
                v11 = 1;
              }
            }
            else
            {
              v7 = -1073741306;
              v11 = 1;
            }
          }
          else
          {
            v7 = -1073741306;
            v11 = 1;
          }
        }
        else
        {
          v11 = 1;
        }
        break;
      case 8:
        v11 = 1;
        break;
      default:
        v23 = (unsigned int)(v16 - 9);
        if ( v16 == 9 )
        {
          if ( !a3 )
          {
            v11 = 1;
            break;
          }
          if ( a4 < 4 )
          {
            v7 = -1073741306;
            v11 = 1;
            break;
          }
          v38 = 0;
          RtlCopyFromUser(&v38, a3, 4uLL);
          v24 = v38;
        }
        else
        {
          if ( v16 != 10 )
            goto LABEL_113;
          if ( !a3 )
          {
            v11 = 1;
            break;
          }
          if ( a4 < 4 )
          {
            v7 = -1073741306;
            v11 = 1;
            break;
          }
          v37 = 0;
          RtlCopyFromUser(&v37, a3, 4uLL);
          v24 = v37;
        }
        LODWORD(v53) = v24;
        v8 = &v53;
        goto LABEL_54;
    }
  }
  else if ( v16 == 5 )
  {
    if ( a3 )
    {
      if ( a4 >= 0x64 )
      {
        memset_0(v51, 0, 0x64uLL);
        RtlCopyFromUser(v51, a3, 0x64uLL);
        v53 = v51[0];
        v54 = v51[1];
        v55 = v51[2];
        v56 = v51[3];
        v57 = v51[4];
        v58 = v51[5];
        v59 = v52;
        goto LABEL_40;
      }
      v7 = -1073741306;
      v11 = 1;
    }
    else
    {
      v11 = 1;
    }
  }
  else
  {
    v23 = (unsigned int)v16;
    if ( !v16 || (v23 = (unsigned int)(v16 - 1), v16 == 1) )
    {
      if ( !a3 )
      {
        v8 = 0LL;
        goto LABEL_54;
      }
      v11 = 1;
    }
    else if ( v16 == 2 )
    {
      if ( a3 )
      {
        if ( a4 >= 0x10 )
        {
          v49 = 0LL;
          RtlCopyFromUser(&v49, a3, 0x10uLL);
          v53 = v49;
          v8 = &v53;
          goto LABEL_54;
        }
        v7 = -1073741306;
        v11 = 1;
      }
      else
      {
        v11 = 1;
      }
    }
    else
    {
      v23 = (unsigned int)(v16 - 3);
      if ( v16 != 3 )
      {
        if ( v16 != 4 )
        {
LABEL_113:
          v33 = PtiCurrent(v23, v9);
          UserSessionState = W32GetUserSessionState(v35, v34);
          v7 = MagSetLensContextInformation(
                 UserSessionState + 66080,
                 (__int64)v33,
                 (struct tagWND *)v42,
                 (unsigned int)v16,
                 v8);
          goto LABEL_19;
        }
        if ( !a3 )
        {
          v11 = 1;
          goto LABEL_116;
        }
        if ( a4 < 0x24 )
        {
          v7 = -1073741306;
          v11 = 1;
          goto LABEL_116;
        }
        v46 = 0LL;
        v47 = 0LL;
        v48 = 0;
        RtlCopyFromUser(&v46, a3, 0x24uLL);
        LODWORD(v55) = v48;
        goto LABEL_39;
      }
      if ( a3 )
      {
        if ( a4 >= 0x20 )
        {
          v46 = 0LL;
          v47 = 0LL;
          RtlCopyFromUser(&v46, a3, 0x20uLL);
LABEL_39:
          v54 = v47;
          v53 = v46;
LABEL_40:
          v8 = &v53;
LABEL_54:
          v39 = v8;
          goto LABEL_113;
        }
        v7 = -1073741306;
        v11 = 1;
      }
      else
      {
        v11 = 1;
      }
    }
  }
LABEL_116:
  if ( v7 < 0 )
    goto LABEL_5;
  v12 = 1LL;
LABEL_6:
  if ( !v11 )
  {
    v13 = RtlNtStatusToDosError(v7);
    UserSetLastError(v13);
  }
  v14 = v43;
  if ( v43 )
    Win32FreePool(v43);
  if ( v44 )
    Win32FreePool(v44);
  UserSessionSwitchLeaveCrit(v14);
  return v12;
}
