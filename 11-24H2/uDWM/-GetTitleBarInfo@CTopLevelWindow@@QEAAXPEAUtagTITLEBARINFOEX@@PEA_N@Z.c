/*
 * XREFs of ?GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z @ 0x180018BC4
 * Callers:
 *     ?GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z @ 0x180093848 (-GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z.c)
 * Callees:
 *     ?NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z @ 0x180018E88 (-NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z.c)
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x18002B8B0 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     floor @ 0x18009C468 (floor.c)
 *     memset_0 @ 0x18009C4E0 (memset_0.c)
 */

void __fastcall CTopLevelWindow::GetTitleBarInfo(CTopLevelWindow *this, struct tagTITLEBARINFOEX *a2, bool *a3)
{
  DWORD v6; // ecx
  int SystemMetrics; // eax
  LONG v8; // ecx
  __int64 v9; // rax
  RECT *v10; // r14
  DWORD *v11; // rdi
  int i; // ebp
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // rcx
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  _BYTE v21[20]; // [rsp+20h] [rbp-48h] BYREF

  if ( CTopLevelWindow::HasRenderedBorder(*((_DWORD *)this + 146)) )
  {
    *a3 = 1;
    *(_OWORD *)a2->rgstate = 0LL;
    *(_QWORD *)&a2->rgstate[4] = 0LL;
    memset_0(a2->rgrect, 0, sizeof(a2->rgrect));
    v6 = a2->rgstate[0] | 0x100000;
    a2->rgstate[0] = v6;
    if ( (*(_DWORD *)(*((_QWORD *)this + 89) + 116LL) & 0xC00000) != 0 )
    {
      a2->rcTitleBar.left = *((_DWORD *)this + 147);
      SystemMetrics = GetSystemMetrics(8);
      a2->rcTitleBar.top = (int)floor((float)((float)SystemMetrics * *(float *)(*((_QWORD *)this + 89) + 332LL)) + 0.5);
      v8 = *((_DWORD *)this + 18) - *((_DWORD *)this + 148);
      a2->rcTitleBar.right = v8;
      a2->rcTitleBar.bottom = *((_DWORD *)this + 149);
      v9 = *((_QWORD *)this + 67);
      if ( v9 )
      {
        v19 = *((_DWORD *)this + 146);
        if ( (v19 & 0x10000) != 0 )
        {
          v20 = *(_DWORD *)(v9 + 72);
          if ( (v19 & 0x20000) != 0 )
            a2->rcTitleBar.right = v8 - v20;
          else
            a2->rcTitleBar.left += v20;
        }
      }
      OffsetRect(
        &a2->rcTitleBar,
        *(_DWORD *)(*((_QWORD *)this + 89) + 48LL),
        *(_DWORD *)(*((_QWORD *)this + 89) + 52LL));
      v10 = &a2->rgrect[2];
      a2->rgstate[1] = 0x8000;
      v11 = &a2->rgstate[2];
      for ( i = 2; i <= 5; ++i )
      {
        v13 = 1LL;
        memset(v21, 0, sizeof(v21));
        switch ( i )
        {
          case 2:
            *(_DWORD *)v21 = 1;
            break;
          case 3:
            *(_DWORD *)v21 = 2;
            v13 = 2LL;
            break;
          case 4:
            v13 = 0LL;
            break;
          case 5:
            *(_DWORD *)v21 = 3;
            v13 = 3LL;
            break;
        }
        v14 = *((_DWORD *)this + 146);
        if ( (v14 & dword_1801056D0[2 * v13]) != 0 )
        {
          if ( (v14 & dword_1801056D0[2 * v13 + 1]) != 0 )
          {
            v15 = *((_QWORD *)this + v13 + 61);
            if ( v15 && *(_DWORD *)(v15 + 328) == 2 )
              *v11 |= 8u;
          }
          else
          {
            *v11 |= 1u;
          }
        }
        else
        {
          *v11 |= 0x8000u;
        }
        if ( (*v11 & 0x8000) == 0 )
        {
          CTopLevelWindow::NcAdornmentInfoQuery(this, (struct NCADORNMENT_INFO *)v21);
          v16 = *((_DWORD *)this + 146);
          if ( (v16 & 0x20) != 0 )
          {
            v17 = *((_QWORD *)this + 89);
            *(_DWORD *)&v21[8] = *((_DWORD *)this + 161) + *(_DWORD *)(v17 + 52);
            if ( i == 5 )
            {
              v18 = *(_DWORD *)(v17 + 48);
              if ( (v16 & 0x20000) != 0 )
                *(_DWORD *)&v21[4] = *((_DWORD *)this + 159) + v18;
              else
                *(_DWORD *)&v21[12] = v18 + *((_DWORD *)this + 18) - *((_DWORD *)this + 160);
            }
          }
          *v10 = *(RECT *)&v21[4];
        }
        ++v11;
        ++v10;
      }
    }
    else
    {
      a2->rgstate[0] = v6 | 0x8000;
    }
  }
  else
  {
    *a3 = 0;
  }
}
