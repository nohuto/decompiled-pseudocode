/*
 * XREFs of ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x140032060
 * Callers:
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x140021A94 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x140022A58 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgRemoveObject @ 0x140031C10 (HmgRemoveObject.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x140037010 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1400C6030 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     HmgShareUnlockRemoveObject @ 0x1400F6340 (HmgShareUnlockRemoveObject.c)
 *     HmgFreeFast @ 0x1401C2310 (HmgFreeFast.c)
 * Callees:
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x140032B8C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1400645C0 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1400B72F8 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 *     HmgDecProcessHandleCountFastOpt @ 0x1401C4E28 (HmgDecProcessHandleCountFastOpt.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall HANDLELOCK::vUnlockAndRelease(HANDLELOCK *this)
{
  int v2; // ebx
  int v3; // eax
  char v4; // bp
  unsigned __int64 v5; // rdx
  __int64 v6; // r9
  unsigned int v7; // r8d
  __int64 v8; // r10
  unsigned int v9; // r11d
  __int64 v10; // r10
  __int64 v11; // rax
  __int64 v12; // r9
  unsigned int v13; // r8d
  __int64 v14; // r10
  __int64 *v15; // rsi
  __int64 v16; // rsi
  __int64 CurrentProcess; // rax
  char ProcessSessionId; // al
  int v19; // ecx
  int v20; // r8d
  __int64 v21; // rcx
  int (*v22)(void); // rax
  unsigned __int64 v23; // rdx
  unsigned __int8 v24; // si
  __int64 v25; // r9
  unsigned int v26; // r8d
  __int64 v27; // r10
  unsigned int v28; // r11d
  __int64 v29; // r10
  __int64 v30; // rax
  __int64 v31; // r9
  unsigned int v32; // r8d
  __int64 v33; // r10
  __int64 *v34; // rbx
  __int64 v35; // rbx
  void (__fastcall *v36)(__int64, _QWORD); // rax
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v38; // rdx
  bool v39; // zf
  __int64 v40; // rax
  __int64 v41; // r8
  __int64 v42; // rsi
  unsigned __int64 v43; // rdx
  unsigned int v44; // r8d
  __int64 v45; // r9
  unsigned int v46; // r10d
  __int64 v47; // r11
  __int64 v48; // rax
  __int64 v49; // r9
  unsigned int v50; // r8d
  __int64 v51; // r10
  _DWORD *v52; // r15
  unsigned int v53; // ebx
  __int64 v54; // rdx
  __int64 v55; // r8
  unsigned int v56; // r9d
  __int64 v57; // r10
  __int64 v58; // rax
  __int64 v59; // r8
  __int64 v60; // r14
  unsigned int v61; // edx
  __int64 *v62; // r10
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // r10
  unsigned __int64 v66; // rdx
  unsigned int v67; // r9d
  __int64 v68; // r11
  unsigned int v69; // ebx
  __int64 v70; // r11
  __int64 v71; // rax
  __int64 v72; // r10
  unsigned int v73; // r9d
  __int64 v74; // r11
  _DWORD *v75; // rsi
  __int64 v76; // r10
  unsigned __int64 v77; // rdx
  unsigned int v78; // r9d
  __int64 v79; // r11
  unsigned int v80; // ebx
  __int64 v81; // r11
  __int64 v82; // rax
  __int64 v83; // r10
  unsigned int v84; // r9d
  __int64 v85; // r11
  _DWORD *v86; // rdx
  int v87; // edx
  unsigned __int64 v88; // r10
  unsigned __int64 i; // rax
  __int64 v90; // rcx
  unsigned int v91; // ebp

  v2 = *(_DWORD *)(*(_QWORD *)this + 8LL);
  HmgDecProcessHandleCountFastOpt(*((_QWORD *)this + 2), v2 & 0xFFFFFFFE);
  v3 = *(unsigned __int8 *)(*(_QWORD *)this + 14LL);
  switch ( v3 )
  {
    case 4:
      v4 = 4;
      break;
    case 5:
      v4 = 5;
      break;
    case 1:
      v4 = 1;
      break;
    default:
      switch ( *(_BYTE *)(*(_QWORD *)this + 14LL) )
      {
        case 0:
          v4 = 0;
          break;
        case 2:
          v4 = 2;
          break;
        case 3:
          v4 = 3;
          break;
        case 6:
          v4 = 6;
          break;
        case 7:
          v4 = 7;
          break;
        case 8:
          v4 = 8;
          break;
        case 9:
          v4 = 9;
          break;
        case 0xA:
          v4 = 10;
          break;
        case 0xB:
          v4 = 11;
          break;
        case 0xC:
          v4 = 12;
          break;
        case 0xD:
          v4 = 13;
          break;
        case 0xE:
          v4 = 14;
          break;
        case 0xF:
          v4 = 15;
          break;
        case 0x10:
          v4 = 16;
          break;
        case 0x11:
          v4 = 17;
          break;
        case 0x12:
          v4 = 18;
          break;
        case 0x13:
          v4 = 19;
          break;
        case 0x14:
          v4 = 20;
          break;
        case 0x15:
          v4 = 21;
          break;
        case 0x16:
          v4 = 22;
          break;
        case 0x17:
          v4 = 23;
          break;
        case 0x18:
          v4 = 24;
          break;
        case 0x19:
          v4 = 25;
          break;
        case 0x1A:
          v4 = 26;
          break;
        case 0x1B:
          v4 = 27;
          break;
        case 0x1C:
          v4 = 28;
          break;
        case 0x1D:
          v4 = 29;
          break;
        case 0x1E:
          v4 = 30;
          break;
        default:
          v4 = -1;
          break;
      }
      break;
  }
  v5 = **(unsigned int **)this;
  v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 5672LL);
  if ( (unsigned int)v5 >= 0x10000 )
  {
    v7 = (unsigned __int16)v5;
    if ( *(_DWORD *)v6 <= 0x10000u )
    {
      v5 = (unsigned __int16)v5;
    }
    else
    {
      v8 = *(_QWORD *)(v6 + 16);
      v9 = *(_DWORD *)(v8 + 2056);
      if ( (unsigned __int16)v5 >= v9 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
      {
        v11 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)v5 >= v9 )
        {
          v10 = *(_QWORD *)(v8 + 8LL * ((((unsigned __int16)v5 - v9) >> 16) + 1) + 8);
          v7 = -65536 * (((unsigned __int16)v5 - v9) >> 16) - v9 + (unsigned __int16)v5;
        }
        else
        {
          v10 = *(_QWORD *)(v8 + 8);
        }
        v11 = 0LL;
        if ( v7 < *(_DWORD *)(v10 + 20) )
          v11 = *(_QWORD *)v10 + 24LL * v7;
      }
      if ( *(unsigned __int8 *)(v11 + 13) == WORD1(v5) )
        v5 = (unsigned __int16)v5;
    }
  }
  v12 = *(_QWORD *)(v6 + 16);
  v13 = *(_DWORD *)(v12 + 2056);
  if ( (unsigned int)v5 >= v13 + ((*(unsigned __int16 *)(v12 + 2) + 0xFFFF) << 16)
    || ((unsigned int)v5 >= v13
      ? (v14 = *(_QWORD *)(v12 + 8LL * ((((unsigned int)v5 - v13) >> 16) + 1) + 8),
         v5 = -65536 * (((unsigned int)v5 - v13) >> 16) - v13 + (unsigned int)v5)
      : (v14 = *(_QWORD *)(v12 + 8)),
        (unsigned int)v5 >= *(_DWORD *)(v14 + 20)) )
  {
    v15 = 0LL;
  }
  else
  {
    v15 = *(__int64 **)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * (v5 >> 8)) + 16LL * (unsigned __int8)v5 + 8);
  }
  v16 = *v15;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000000LL) != 0 )
  {
    CurrentProcess = PsGetCurrentProcess();
    ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
    McTemplateK0pqqq_EtwWriteTransfer(v19, (unsigned int)&GdiDestroyHandle, v20, v16, v4, ProcessSessionId, v2 & 0xFE);
  }
  v21 = *(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24);
  v22 = *(int (**)(void))(v21 + 2664);
  if ( v22 && v22() >= 0 )
  {
    v23 = **(unsigned int **)this;
    v24 = *(_BYTE *)(*(_QWORD *)this + 14LL);
    v25 = *(_QWORD *)(*((_QWORD *)this + 2) + 5672LL);
    if ( (unsigned int)v23 >= 0x10000 )
    {
      v26 = (unsigned __int16)v23;
      if ( *(_DWORD *)v25 <= 0x10000u )
      {
        v23 = (unsigned __int16)v23;
      }
      else
      {
        v27 = *(_QWORD *)(v25 + 16);
        v28 = *(_DWORD *)(v27 + 2056);
        if ( (unsigned __int16)v23 >= v28 + ((*(unsigned __int16 *)(v27 + 2) + 0xFFFF) << 16) )
        {
          v30 = 0LL;
        }
        else
        {
          if ( (unsigned __int16)v23 >= v28 )
          {
            v29 = *(_QWORD *)(v27 + 8LL * ((((unsigned __int16)v23 - v28) >> 16) + 1) + 8);
            v26 = -65536 * (((unsigned __int16)v23 - v28) >> 16) - v28 + (unsigned __int16)v23;
          }
          else
          {
            v29 = *(_QWORD *)(v27 + 8);
          }
          v30 = 0LL;
          if ( v26 < *(_DWORD *)(v29 + 20) )
            v30 = *(_QWORD *)v29 + 24LL * v26;
        }
        if ( *(unsigned __int8 *)(v30 + 13) == WORD1(v23) )
          v23 = (unsigned __int16)v23;
      }
    }
    v31 = *(_QWORD *)(v25 + 16);
    v32 = *(_DWORD *)(v31 + 2056);
    if ( (unsigned int)v23 >= v32 + ((*(unsigned __int16 *)(v31 + 2) + 0xFFFF) << 16)
      || ((unsigned int)v23 >= v32
        ? (v33 = *(_QWORD *)(v31 + 8LL * ((((unsigned int)v23 - v32) >> 16) + 1) + 8),
           v23 = -65536 * (((unsigned int)v23 - v32) >> 16) - v32 + (unsigned int)v23)
        : (v33 = *(_QWORD *)(v31 + 8)),
          (unsigned int)v23 >= *(_DWORD *)(v33 + 20)) )
    {
      v34 = 0LL;
    }
    else
    {
      v34 = *(__int64 **)(*(_QWORD *)(**(_QWORD **)(v33 + 24) + 8 * (v23 >> 8)) + 16LL * (unsigned __int8)v23 + 8);
    }
    v35 = *v34;
    v36 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2672LL);
    if ( v36 )
      v36(v35, v24);
  }
  CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(v21);
  if ( CurrentThreadNonPaged )
  {
    v38 = 0LL;
    v39 = *CurrentThreadNonPaged == 0LL;
    v40 = *CurrentThreadNonPaged + 8LL;
    if ( !v39 )
      v38 = v40;
    if ( v38 )
    {
      v41 = *(_QWORD *)(v38 + 336);
      if ( v41 )
      {
        v65 = *(_QWORD *)(*((_QWORD *)this + 2) + 5672LL);
        v66 = **(unsigned int **)this;
        if ( (unsigned int)v66 >= 0x10000 )
        {
          v67 = (unsigned __int16)v66;
          if ( *(_DWORD *)v65 <= 0x10000u )
          {
            v66 = (unsigned __int16)v66;
          }
          else
          {
            v68 = *(_QWORD *)(v65 + 16);
            v69 = *(_DWORD *)(v68 + 2056);
            if ( (unsigned __int16)v66 >= v69 + ((*(unsigned __int16 *)(v68 + 2) + 0xFFFF) << 16) )
            {
              v71 = 0LL;
            }
            else
            {
              if ( (unsigned __int16)v66 >= v69 )
              {
                v70 = *(_QWORD *)(v68 + 8LL * ((((unsigned __int16)v66 - v69) >> 16) + 1) + 8);
                v67 = -65536 * (((unsigned __int16)v66 - v69) >> 16) - v69 + (unsigned __int16)v66;
              }
              else
              {
                v70 = *(_QWORD *)(v68 + 8);
              }
              v71 = 0LL;
              if ( v67 < *(_DWORD *)(v70 + 20) )
                v71 = *(_QWORD *)v70 + 24LL * v67;
            }
            if ( *(unsigned __int8 *)(v71 + 13) == WORD1(v66) )
              v66 = (unsigned __int16)v66;
          }
        }
        v72 = *(_QWORD *)(v65 + 16);
        v73 = *(_DWORD *)(v72 + 2056);
        if ( (unsigned int)v66 >= v73 + ((*(unsigned __int16 *)(v72 + 2) + 0xFFFF) << 16)
          || ((unsigned int)v66 >= v73
            ? (v74 = *(_QWORD *)(v72 + 8LL * ((((unsigned int)v66 - v73) >> 16) + 1) + 8),
               v66 = -65536 * (((unsigned int)v66 - v73) >> 16) - v73 + (unsigned int)v66)
            : (v74 = *(_QWORD *)(v72 + 8)),
              (unsigned int)v66 >= *(_DWORD *)(v74 + 20)) )
        {
          v75 = 0LL;
        }
        else
        {
          v75 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v74 + 24) + 8 * (v66 >> 8)) + 16LL * (unsigned __int8)v66 + 8);
        }
        v76 = *(_QWORD *)(*((_QWORD *)this + 2) + 5672LL);
        v77 = **(unsigned int **)this;
        if ( (unsigned int)v77 >= 0x10000 )
        {
          v78 = (unsigned __int16)v77;
          if ( *(_DWORD *)v76 <= 0x10000u )
          {
            v77 = (unsigned __int16)v77;
          }
          else
          {
            v79 = *(_QWORD *)(v76 + 16);
            v80 = *(_DWORD *)(v79 + 2056);
            if ( (unsigned __int16)v77 >= v80 + ((*(unsigned __int16 *)(v79 + 2) + 0xFFFF) << 16) )
            {
              v82 = 0LL;
            }
            else
            {
              if ( (unsigned __int16)v77 >= v80 )
              {
                v81 = *(_QWORD *)(v79 + 8LL * ((((unsigned __int16)v77 - v80) >> 16) + 1) + 8);
                v78 = -65536 * (((unsigned __int16)v77 - v80) >> 16) - v80 + (unsigned __int16)v77;
              }
              else
              {
                v81 = *(_QWORD *)(v79 + 8);
              }
              v82 = 0LL;
              if ( v78 < *(_DWORD *)(v81 + 20) )
                v82 = *(_QWORD *)v81 + 24LL * v78;
            }
            if ( *(unsigned __int8 *)(v82 + 13) == WORD1(v77) )
              v77 = (unsigned __int16)v77;
          }
        }
        v83 = *(_QWORD *)(v76 + 16);
        v84 = *(_DWORD *)(v83 + 2056);
        if ( (unsigned int)v77 >= v84 + ((*(unsigned __int16 *)(v83 + 2) + 0xFFFF) << 16)
          || ((unsigned int)v77 >= v84
            ? (v85 = *(_QWORD *)(v83 + 8LL * ((((unsigned int)v77 - v84) >> 16) + 1) + 8),
               v77 = -65536 * (((unsigned int)v77 - v84) >> 16) - v84 + (unsigned int)v77)
            : (v85 = *(_QWORD *)(v83 + 8)),
              (unsigned int)v77 >= *(_DWORD *)(v85 + 20)) )
        {
          v86 = 0LL;
        }
        else
        {
          v86 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v85 + 24) + 8 * (v77 >> 8)) + 16LL * (unsigned __int8)v77 + 8);
        }
        v87 = (unsigned __int16)*v75 | (*v86 >> 8) & 0xFF0000;
        v88 = *(_QWORD *)(v41 + 24);
        for ( i = 0LL; i < v88; ++i )
        {
          v90 = *(_QWORD *)(v41 + 40);
          if ( *(_DWORD *)(v90 + 4 * i) == v87 )
          {
            *(_DWORD *)(v90 + 4 * i) = *(_DWORD *)(v90 + 4 * v88 - 4);
            *(_DWORD *)(*(_QWORD *)(v41 + 40) + 4LL * (*(_QWORD *)(v41 + 24))-- - 4) = 0;
            break;
          }
        }
      }
    }
  }
  *(_BYTE *)(*(_QWORD *)this + 14LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 16LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 8LL) = 0;
  v42 = *(_QWORD *)(*((_QWORD *)this + 2) + 5672LL);
  v43 = **(unsigned int **)this;
  if ( (unsigned int)v43 >= 0x10000 )
  {
    v44 = (unsigned __int16)v43;
    if ( *(_DWORD *)v42 <= 0x10000u )
    {
      v43 = (unsigned __int16)v43;
    }
    else
    {
      v45 = *(_QWORD *)(v42 + 16);
      v46 = *(_DWORD *)(v45 + 2056);
      if ( (unsigned __int16)v43 >= v46 + ((*(unsigned __int16 *)(v45 + 2) + 0xFFFF) << 16) )
      {
        v48 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)v43 >= v46 )
        {
          v47 = *(_QWORD *)(v45 + 8LL * ((((unsigned __int16)v43 - v46) >> 16) + 1) + 8);
          v44 = -65536 * (((unsigned __int16)v43 - v46) >> 16) - v46 + (unsigned __int16)v43;
        }
        else
        {
          v47 = *(_QWORD *)(v45 + 8);
        }
        v48 = 0LL;
        if ( v44 < *(_DWORD *)(v47 + 20) )
          v48 = *(_QWORD *)v47 + 24LL * v44;
      }
      if ( *(unsigned __int8 *)(v48 + 13) == WORD1(v43) )
        v43 = (unsigned __int16)v43;
    }
  }
  v49 = *(_QWORD *)(v42 + 16);
  v50 = *(_DWORD *)(v49 + 2056);
  if ( (unsigned int)v43 >= v50 + ((*(unsigned __int16 *)(v49 + 2) + 0xFFFF) << 16)
    || ((unsigned int)v43 >= v50
      ? (v51 = *(_QWORD *)(v49 + 8LL * ((((unsigned int)v43 - v50) >> 16) + 1) + 8),
         v43 = -65536 * (((unsigned int)v43 - v50) >> 16) - v50 + (unsigned int)v43)
      : (v51 = *(_QWORD *)(v49 + 8)),
        (unsigned int)v43 >= *(_DWORD *)(v51 + 20)) )
  {
    v52 = 0LL;
  }
  else
  {
    v52 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v51 + 24) + 8 * (v43 >> 8)) + 16LL * (unsigned __int8)v43 + 8);
  }
  v53 = (unsigned __int16)*v52 | (*v52 >> 8) & 0xFF0000;
  if ( v53 >= 0x10000 )
  {
    v54 = (unsigned __int16)*v52;
    if ( *(_DWORD *)v42 <= 0x10000u )
    {
      v53 = (unsigned __int16)*v52;
    }
    else
    {
      v55 = *(_QWORD *)(v42 + 16);
      v56 = *(_DWORD *)(v49 + 2056);
      if ( (unsigned __int16)*v52 >= v56 + ((*(unsigned __int16 *)(v55 + 2) + 0xFFFF) << 16) )
      {
        v58 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)*v52 >= v56 )
        {
          v57 = *(_QWORD *)(v55 + 8LL * ((((unsigned __int16)*v52 - v56) >> 16) + 1) + 8);
          v54 = -65536 * (((unsigned __int16)v53 - v56) >> 16) - v56 + (unsigned __int16)v53;
        }
        else
        {
          v57 = *(_QWORD *)(v55 + 8);
        }
        v58 = 0LL;
        if ( (unsigned int)v54 < *(_DWORD *)(v57 + 20) )
          v58 = *(_QWORD *)v57 + 24 * v54;
      }
      if ( *(unsigned __int8 *)(v58 + 13) == HIWORD(v53) )
        v53 = (unsigned __int16)*v52;
    }
  }
  v59 = *(_QWORD *)(v42 + 24);
  if ( v59 )
  {
    v91 = *(_DWORD *)(v59 + 4LL * (unsigned __int16)v53);
    if ( v91 )
    {
      if ( GdiHandleEntryDirectory::AcquireEntryLock(*(GdiHandleEntryDirectory **)(v42 + 16), v91, 1) )
        GdiHandleEntryDirectory::ReleaseLockAndEntry(*(GdiHandleEntryDirectory **)(v42 + 16), v91, 1);
      *(_DWORD *)(4LL * (unsigned __int16)v53 + *(_QWORD *)(v42 + 24)) = 0;
      --*(_DWORD *)(v42 + 4);
    }
  }
  v60 = *(_QWORD *)(v42 + 16);
  v61 = *(_DWORD *)(v60 + 2056);
  if ( v53 < v61 + ((*(unsigned __int16 *)(v60 + 2) + 0xFFFF) << 16) )
  {
    if ( v53 >= v61 )
    {
      v62 = *(__int64 **)(v60 + 8LL * (((v53 - v61) >> 16) + 1) + 8);
      v53 += -65536 * ((v53 - v61) >> 16) - v61;
    }
    else
    {
      v62 = *(__int64 **)(v60 + 8);
    }
    if ( v53 < *((_DWORD *)v62 + 5) )
    {
      v63 = *(_QWORD *)(*(_QWORD *)v62[3] + 8 * ((unsigned __int64)v53 >> 8));
      if ( *(_QWORD *)(v63 + 16LL * (unsigned __int8)v53 + 8) )
      {
        *(_QWORD *)(v63 + 16LL * (unsigned __int8)v53 + 8) = 0LL;
        v64 = *v62;
        *(_WORD *)(v64 + 24LL * v53 + 6) = 0;
        *(_DWORD *)(v64 + 24LL * v53) = *((_DWORD *)v62 + 3);
        --*((_DWORD *)v62 + 4);
        *((_DWORD *)v62 + 3) = v53;
      }
    }
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(*(_QWORD *)v62[3] + 8 * ((unsigned __int64)v53 >> 8)) + 16LL * (unsigned __int8)v53,
      0LL);
    KeLeaveCriticalRegion();
    *(_BYTE *)v60 = 0;
  }
  *(_QWORD *)v52 = 0LL;
  --*(_DWORD *)(v42 + 4);
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = 0LL;
  KeLeaveCriticalRegion();
}
