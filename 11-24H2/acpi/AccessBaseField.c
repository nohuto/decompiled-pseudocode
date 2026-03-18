/*
 * XREFs of AccessBaseField @ 0x14000C680
 * Callers:
 *     AccessFieldData @ 0x14000BEC0 (AccessFieldData.c)
 * Callees:
 *     FindRSAccess @ 0x140001910 (FindRSAccess.c)
 *     PushFrame @ 0x140009A30 (PushFrame.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     ReadSystemIO @ 0x140025950 (ReadSystemIO.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     memmove @ 0x140070C40 (memmove.c)
 */

__int64 __fastcall AccessBaseField(_QWORD *a1, __int64 a2, unsigned int *a3, __int64 *a4, char a5)
{
  __int64 v5; // rdi
  __int64 v6; // r11
  __int64 v7; // r10
  unsigned int v9; // edx
  unsigned __int64 v11; // r10
  __int64 v12; // r9
  int v13; // ecx
  unsigned int v14; // ecx
  __int64 v15; // r14
  __int64 v16; // rbx
  __int64 v17; // r14
  __int64 v18; // rbx
  __int64 v19; // rcx
  bool v20; // r13
  __int64 v21; // r8
  int v22; // ecx
  unsigned int v23; // esi
  char v24; // r15
  unsigned int i; // ebx
  __int64 v26; // rdi
  int v27; // ecx
  unsigned int v28; // eax
  int v29; // r9d
  int v30; // r9d
  int (__fastcall *v31)(_QWORD, unsigned __int64, unsigned __int64 *); // rax
  __int64 v32; // rdi
  const char *v33; // r9
  unsigned int v34; // r8d
  bool v35; // cc
  const char *v36; // rdx
  int v37; // ecx
  int v38; // ecx
  unsigned int v39; // edx
  char v41; // al
  __int64 (__fastcall *v42)(_QWORD, unsigned __int64, __int64 *); // rax
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // rax
  size_t v46; // rsi
  __int64 v47; // rdi
  int (__fastcall *v48)(_QWORD, unsigned __int64, __int64 *); // rax
  int *v49; // rcx
  __int64 RSAccess; // rax
  char v51; // r14
  unsigned int v52; // eax
  unsigned int SystemIO; // eax
  __int64 v54; // rcx
  __int64 v55; // rax
  unsigned int v56; // r8d
  void (__fastcall *v57)(_QWORD, _QWORD, _QWORD, __int64 *); // rax
  struct _DEVICE_OBJECT *v58; // rcx
  struct _IO_WORKITEM *WorkItem; // rdi
  _DWORD *Pool2; // rax
  signed __int32 v61[8]; // [rsp+0h] [rbp-E1h] BYREF
  int *v62; // [rsp+20h] [rbp-C1h]
  unsigned int v63; // [rsp+50h] [rbp-91h]
  unsigned int v64; // [rsp+54h] [rbp-8Dh]
  __int64 Src; // [rsp+58h] [rbp-89h] BYREF
  _DWORD *v66; // [rsp+60h] [rbp-81h]
  __int64 v67; // [rsp+68h] [rbp-79h] BYREF
  __int64 v68; // [rsp+70h] [rbp-71h]
  unsigned __int64 v69; // [rsp+78h] [rbp-69h] BYREF
  __int64 v70; // [rsp+80h] [rbp-61h] BYREF
  int v71; // [rsp+88h] [rbp-59h] BYREF
  int v72; // [rsp+8Ch] [rbp-55h] BYREF
  _QWORD v73[10]; // [rsp+90h] [rbp-51h] BYREF

  v5 = *(_QWORD *)(a2 + 96);
  v6 = 0LL;
  v7 = *a3;
  v9 = a3[3];
  v69 = (unsigned __int64)a1;
  v11 = *(_QWORD *)v5 + v7;
  v12 = 1LL;
  v13 = v9 & 0xF;
  v63 = 0;
  v66 = (_DWORD *)v11;
  if ( (unsigned int)(v13 - 1) <= 3 )
    v12 = (unsigned int)(1 << (v13 - 1));
  v14 = a3[2];
  v15 = 0LL;
  v16 = 0LL;
  v64 = v12;
  if ( v14 < 0x20 )
    v15 = 1LL << v14;
  v17 = (v15 - 1) << a3[1];
  if ( (unsigned int)(8 * v12) < 0x20 )
    v16 = 1LL << (8 * (unsigned __int8)v12);
  v18 = v16 - 1;
  Src = ~v17;
  v19 = *a4 & v17;
  v20 = (v9 & 0x60) == 0 && (~v17 & v18) != 0;
  *a4 = v19;
  v68 = v19;
  if ( a5 || (v41 = a3[3] & 0x60, v68 = v19, v41 != 32) )
  {
    v21 = v68;
  }
  else
  {
    v21 = v19 | Src;
    v68 = v19 | Src;
    *a4 = v19 | Src;
  }
  v22 = *(unsigned __int8 *)(v5 + 12);
  if ( !*(_BYTE *)(v5 + 12) )
  {
    if ( a5 )
    {
      LODWORD(v67) = 0;
      v69 = 0LL;
      if ( (unsigned int)v12 > 8 )
      {
        *a4 = -1LL;
        return v63;
      }
      if ( BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink) )
      {
        v31 = *(int (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64 *))(PmHalDispatchTable + 144);
        if ( v31 )
        {
          v62 = (int *)&v67;
          if ( v31(0LL, v11, &v69) >= 0 )
            goto LABEL_46;
          LODWORD(v12) = v64;
          v11 = (unsigned __int64)v66;
        }
      }
      if ( !(v11 % (unsigned int)v12) )
      {
        switch ( (_DWORD)v12 )
        {
          case 1:
            v32 = *(unsigned __int8 *)v11;
            break;
          case 4:
            *a4 = (unsigned int)v17 & *(_DWORD *)v11;
            return v63;
          case 2:
            *a4 = (unsigned __int16)(v17 & *(_WORD *)v11);
            return v63;
          case 8:
            *a4 = v17 & *(_QWORD *)v11;
            return v63;
          default:
            v32 = -1LL;
            break;
        }
        *a4 = v17 & v32;
        return v63;
      }
      memmove(&v69, (const void *)v11, (unsigned int)v12);
LABEL_46:
      *a4 = v17 & v69;
      return v63;
    }
    if ( v20 )
    {
      v72 = 0;
      v70 = 0LL;
      if ( (unsigned int)v12 > 8 )
      {
        v45 = -1LL;
      }
      else
      {
        if ( BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink)
          && (v42 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64 *))(PmHalDispatchTable + 144)) != 0LL
          && (v62 = &v72, v43 = v42(0LL, v11, &v70), v12 = v64, v11 = (unsigned __int64)v66, v43 >= 0) )
        {
          v44 = v70;
        }
        else if ( v11 % (unsigned int)v12 )
        {
          memmove(&v70, (const void *)v11, (unsigned int)v12);
          v44 = v70;
          v12 = v64;
          v11 = (unsigned __int64)v66;
        }
        else
        {
          switch ( (_DWORD)v12 )
          {
            case 1:
              v44 = *(unsigned __int8 *)v11;
              break;
            case 4:
              v44 = *(unsigned int *)v11;
              break;
            case 2:
              v44 = *(unsigned __int16 *)v11;
              break;
            case 8:
              v44 = *(_QWORD *)v11;
              break;
            default:
              v44 = -1LL;
              break;
          }
        }
        v45 = Src & v44;
        v70 = v45;
        v6 = 0LL;
      }
      *a4 |= v45;
      v21 = *a4;
      v68 = *a4;
    }
    v71 = 0;
    v73[4] = 0xFFFFFFFFLL;
    Src = 0LL;
    v73[0] = 0LL;
    v73[1] = 255LL;
    v73[2] = 0xFFFFLL;
    v73[3] = 0LL;
    memset(&v73[5], 0, 24);
    v73[8] = -1LL;
    if ( (unsigned int)v12 > 8 )
      return v63;
    v46 = (unsigned int)v12;
    v47 = v73[(unsigned int)v12];
    if ( !BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink)
      || (v48 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *))(PmHalDispatchTable + 144)) == 0LL )
    {
LABEL_67:
      if ( v11 % v46 )
      {
        if ( v18 != v47 )
        {
          memmove(&Src, (const void *)v11, v46);
          v6 = Src;
          v11 = (unsigned __int64)v66;
          v21 = v68;
        }
        Src = v21 | v6 & ~v18;
        memmove((void *)v11, &Src, v46);
      }
      else
      {
        switch ( (_DWORD)v12 )
        {
          case 1:
            if ( v18 != v47 )
              v6 = *(unsigned __int8 *)v11;
            Src = v21 | v6 & ~v18;
            *(_BYTE *)v11 = Src;
            _InterlockedOr(v61, 0);
            break;
          case 4:
            if ( v18 != v47 )
              v6 = *(unsigned int *)v11;
            Src = v21 | v6 & ~v18;
            *(_DWORD *)v11 = Src;
            _InterlockedOr(v61, 0);
            break;
          case 2:
            if ( v18 != v47 )
              v6 = *(unsigned __int16 *)v11;
            Src = v21 | v6 & ~v18;
            *(_WORD *)v11 = Src;
            _InterlockedOr(v61, 0);
            break;
          case 8:
            if ( v18 != v47 )
              v6 = *(_QWORD *)v11;
            Src = v21 | v6 & ~v18;
            *(_QWORD *)v11 = Src;
            KeFlushWriteBuffer();
            break;
        }
      }
      return v63;
    }
    if ( v18 != v47 )
    {
      v62 = &v71;
      if ( v48(0LL, v11, &Src) < 0 )
      {
LABEL_66:
        v6 = Src;
        LODWORD(v12) = v64;
        v11 = (unsigned __int64)v66;
        v21 = v68;
        goto LABEL_67;
      }
      v6 = Src;
      v12 = v64;
      v11 = (unsigned __int64)v66;
      v21 = v68;
    }
    v49 = &v71;
    LOBYTE(v49) = 1;
    Src = v21 | v6 & ~v18;
    if ( (*(int (__fastcall **)(int *, unsigned __int64, __int64 *, __int64, int *))(PmHalDispatchTable + 144))(
           v49,
           v11,
           &Src,
           v12,
           &v71) >= 0 )
      return v63;
    goto LABEL_66;
  }
  if ( v22 == 1 )
  {
    if ( a5 )
    {
      *a4 = (unsigned int)ReadSystemIO((unsigned int)v11, (unsigned int)v12, (unsigned int)v17);
    }
    else
    {
      if ( v20 )
      {
        SystemIO = ReadSystemIO((unsigned int)v11, (unsigned int)v12, (unsigned int)~(_DWORD)v17);
        LODWORD(v11) = (_DWORD)v66;
        LODWORD(v12) = v64;
        v21 = *a4 | SystemIO;
        *a4 = v21;
      }
      v23 = v11;
      LODWORD(v67) = v21;
      v24 = 1;
      if ( gpBadIOAddressList )
      {
        for ( i = 0; ; ++i )
        {
          v26 = 24LL * i;
          v27 = *(_DWORD *)((char *)gpBadIOAddressList + v26 + 4);
          if ( !v27 )
            goto LABEL_20;
          v28 = *(_DWORD *)((char *)gpBadIOAddressList + v26);
          if ( (unsigned int)v11 >= v28 && (unsigned int)v11 < v27 + v28 )
            break;
        }
        LODWORD(v33) = 0;
        v34 = 0;
        v35 = *(_DWORD *)((char *)gpBadIOAddressList + v26 + 8) <= (unsigned int)gdwHighestOSVerQueried;
        LODWORD(v36) = v11;
        v62 = 0LL;
        if ( v35 )
        {
          v24 = 0;
          v37 = 25;
        }
        else
        {
          PrintDebugMessage(24, v11, 0, 0, (__int64)v62);
          v57 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))((char *)gpBadIOAddressList + v26 + 16);
          if ( !v57 )
            goto LABEL_37;
          v24 = 0;
          v57(0LL, v23, v64, &v67);
          v33 = "Wrote";
          v62 = (int *)(unsigned int)v67;
          v36 = "write";
          v34 = v23;
          v37 = 23;
        }
        PrintDebugMessage(v37, (_DWORD)v36, v34, (_DWORD)v33, (__int64)v62);
LABEL_37:
        if ( RootDeviceExtension && (v58 = *(struct _DEVICE_OBJECT **)(RootDeviceExtension + 768)) != 0LL )
        {
          WorkItem = IoAllocateWorkItem(v58);
          if ( WorkItem )
          {
            Pool2 = (_DWORD *)ExAllocatePool2(64LL, 24LL, 1231842625LL);
            if ( Pool2 )
            {
              *(_BYTE *)Pool2 = 0;
              Pool2[1] = v23;
              Pool2[2] = i;
              *((_QWORD *)Pool2 + 2) = WorkItem;
              IoQueueWorkItem(WorkItem, DelayedLogInErrorLog, DelayedWorkQueue, Pool2);
            }
            else
            {
              PrintDebugMessage(20, 0, 0, 0, 0LL);
              IoFreeWorkItem(WorkItem);
            }
            goto LABEL_40;
          }
          v38 = 21;
        }
        else
        {
          v38 = 22;
        }
        PrintDebugMessage(v38, 0, 0, 0, 0LL);
LABEL_40:
        if ( !v24 )
          return v63;
        LODWORD(v21) = v67;
        LODWORD(v12) = v64;
        LOWORD(v11) = (_WORD)v66;
      }
LABEL_20:
      v29 = v12 - 1;
      if ( v29 )
      {
        v30 = v29 - 1;
        if ( v30 )
        {
          if ( v30 == 2 )
            __outdword(v11, v21);
        }
        else
        {
          __outword(v11, v21);
        }
      }
      else
      {
        __outbyte(v11, v21);
      }
    }
    return v63;
  }
  RSAccess = FindRSAccess(v22);
  v70 = RSAccess;
  if ( RSAccess && *(_QWORD *)(RSAccess + 16) )
  {
    if ( a5 )
    {
      v51 = 0;
      if ( (gDebugger & 0x100) != 0 )
      {
        _m_prefetchw(&gDebugger);
        v51 = _InterlockedAnd(&gDebugger, 0xFFFFFFEF);
      }
      v52 = (*(__int64 (__fastcall **)(_QWORD, __int64, _DWORD *, _QWORD, __int64 *, _QWORD, __int64 (__fastcall *)(), unsigned __int64))(RSAccess + 16))(
              0LL,
              a2 + 120,
              v66,
              v64,
              a4,
              *(_QWORD *)(RSAccess + 24),
              RestartCtxtCallback,
              v69 + 328);
      v63 = v52;
      v39 = v52;
      if ( (v51 & 0x10) != 0 )
        _InterlockedOr(&gDebugger, 0x10u);
      if ( v52 == 259 )
      {
        return 32772;
      }
      else if ( v52 )
      {
        LogError(3222536216LL);
        AcpiDiagTraceAmlError(v69, 3222536216LL);
        PrintDebugMessage(2, *(unsigned __int8 *)(v5 + 12), v63, 0, 0LL);
        return (unsigned int)-1072431080;
      }
    }
    else
    {
      v67 = 0LL;
      v39 = PushFrame((_QWORD *)v69, 1094931031, 0x60u, (__int64)WriteCookAccess, &v67);
      if ( !v39 )
      {
        v54 = v67;
        v55 = v70;
        v56 = v64;
        *(_QWORD *)(v67 + 32) = a2;
        *(_QWORD *)(v54 + 40) = v55;
        *(_QWORD *)(v54 + 48) = v66;
        *(_DWORD *)(v54 + 56) = v56;
        *(_QWORD *)(v54 + 64) = *a4;
        *(_QWORD *)(v54 + 72) = v17;
        *(_BYTE *)(v54 + 88) = v20;
      }
    }
  }
  else
  {
    LogError(3222536208LL);
    AcpiDiagTraceAmlError(v69, 3222536208LL);
    PrintDebugMessage(1, *(unsigned __int8 *)(v5 + 12), 0, 0, 0LL);
    return (unsigned int)-1072431088;
  }
  return v39;
}
