/*
 * XREFs of ?ResolvePublicWindowAction@@YA_NPEAU_WINDOW_ACTION@@PEAVCWindowAction@AdvancedWindowPos@@PEAW4ApplyWindowActionError@3@@Z @ 0x1402CA664
 * Callers:
 *     ?xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z @ 0x1402CC61C (-xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x140032E18 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     PWInsertAfter @ 0x14008C888 (PWInsertAfter.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

char __fastcall ResolvePublicWindowAction(
        struct _WINDOW_ACTION *a1,
        struct AdvancedWindowPos::CWindowAction *a2,
        enum AdvancedWindowPos::ApplyWindowActionError *a3)
{
  int v3; // r10d
  int v5; // r8d
  struct AdvancedWindowPos::CWindowAction *v6; // rbx
  struct _WINDOW_ACTION *v7; // rsi
  char v8; // r15
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  __int128 v18; // xmm0
  __int64 v19; // rdx
  int v20; // r9d
  int v21; // ecx
  int v22; // eax
  int v23; // r11d
  __int64 v24; // rax
  __int128 *v25; // rcx
  char v26; // r12
  int v27; // edi
  int v28; // ebp
  int v29; // ebx
  int v30; // esi
  __int64 UserSessionState; // rax
  __int128 v32; // xmm0
  unsigned int v33; // ebp
  bool v34; // bl
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  unsigned int v38; // eax
  int v39; // edx
  int v40; // eax
  int v41; // ecx
  int v42; // eax

  v3 = 6;
  v5 = *((_DWORD *)a1 + 1);
  v6 = a2;
  v7 = a1;
  if ( (v5 & 0xE0) != 0 )
  {
    LODWORD(a1) = *(_DWORD *)a1;
    if ( ((unsigned __int8)a1 & 0x20) == 0 )
    {
      LODWORD(a1) = (unsigned int)a1 | 0x20;
      *((_DWORD *)v7 + 10) = 2;
      *(_DWORD *)v7 = (_DWORD)a1;
    }
  }
  else
  {
    a2 = (struct AdvancedWindowPos::CWindowAction *)*(unsigned int *)a1;
    LOBYTE(a1) = (_BYTE)a2;
    if ( ((unsigned __int8)a2 & 0x20) != 0
      && !*((_DWORD *)v7 + 10)
      && (((unsigned __int8)a2 & 0x40) != 0 || ((unsigned __int8)a2 & 6) == 6) )
    {
      LOBYTE(a1) = (_BYTE)a2;
      *((_DWORD *)v7 + 1) = v5 | 0x20;
    }
  }
  v8 = 1;
  if ( ((unsigned __int8)a1 & 0x20) != 0 )
  {
    v9 = *((_DWORD *)v7 + 10);
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 != 1 )
          {
            *(_DWORD *)a3 = 12;
            return 0;
          }
          v13 = 3;
        }
        else
        {
          v13 = 2;
        }
      }
      else
      {
        v13 = 1;
      }
    }
    else
    {
      v13 = 0;
    }
    *(_DWORD *)v6 |= 0x20u;
    *((_DWORD *)v6 + 10) = v13;
    LODWORD(a1) = *(_DWORD *)v7;
    if ( (*(_DWORD *)v7 & 6) != 0 )
    {
      if ( ((unsigned __int8)a1 & 0x80) != 0 && *((_DWORD *)v7 + 10) == 1 )
      {
        *(_DWORD *)a3 = 13;
        return 0;
      }
      if ( (*(_DWORD *)v7 & 6) != 6 )
      {
        *(_DWORD *)a3 = 15;
        return 0;
      }
    }
  }
  if ( ((unsigned __int8)a1 & 0x10) != 0 )
  {
    *(_DWORD *)v6 |= 0x10u;
    if ( (*((_DWORD *)v7 + 1) & 8) != 0 )
      *((_DWORD *)v6 + 1) |= 4u;
  }
  if ( (*(_DWORD *)v7 & 4) != 0 )
  {
    *(_DWORD *)v6 |= 4u;
    *(_QWORD *)((char *)v6 + 20) = *(_QWORD *)((char *)v7 + 20);
  }
  if ( (*(_DWORD *)v7 & 2) != 0 )
  {
    *(_DWORD *)v6 |= 2u;
    *(_QWORD *)((char *)v6 + 12) = *(_QWORD *)((char *)v7 + 12);
  }
  if ( (*((_DWORD *)v7 + 1) & 1) != 0 )
  {
    if ( (*(_BYTE *)v7 & 6) != 6 )
    {
      *(_DWORD *)a3 = 17;
      return 0;
    }
    *((_DWORD *)v6 + 1) |= 1u;
  }
  if ( (*(_DWORD *)v7 & 8) != 0 )
  {
    v14 = *((_QWORD *)v7 + 4);
    if ( v14 )
    {
      if ( !PWInsertAfter(v14, (__int64)a2) )
      {
        *(_DWORD *)a3 = 18;
        return 0;
      }
      v3 = 6;
    }
    v15 = *((_QWORD *)v7 + 4);
    *(_DWORD *)v6 |= 8u;
    *((_QWORD *)v6 + 4) = v15;
    if ( (*((_DWORD *)v7 + 1) & 0x10) != 0 )
      *((_DWORD *)v6 + 1) |= 8u;
  }
  if ( (*(_DWORD *)v7 & 1) != 0 )
  {
    v16 = *((_DWORD *)v7 + 2);
    *(_DWORD *)v6 |= 1u;
    *((_BYTE *)v6 + 8) = v16 != 0;
  }
  v17 = *(_DWORD *)v7;
  if ( (*(_DWORD *)v7 & 0x40) != 0 )
  {
    if ( (v17 & 0x20) == 0 )
    {
      *(_DWORD *)a3 = 19;
      return 0;
    }
    if ( !*((_DWORD *)v7 + 10) && (v17 & 6) != 0 )
    {
      *(_DWORD *)a3 = 20;
      return 0;
    }
    v18 = *(_OWORD *)((char *)v7 + 44);
    *(_DWORD *)v6 |= 0x40u;
    *(_OWORD *)((char *)v6 + 44) = v18;
  }
  v19 = *((unsigned int *)v7 + 1);
  v20 = 256;
  v21 = *(_DWORD *)v7;
  v22 = *((_DWORD *)v7 + 1) & 0x400;
  v23 = 512;
  if ( (*(_DWORD *)v7 & 0x80) != 0 )
  {
    if ( v22 )
    {
      *(_DWORD *)a3 = 21;
      return 0;
    }
  }
  else
  {
    if ( !v22 )
      goto LABEL_72;
    if ( (v21 & 6) != 6 )
    {
      *(_DWORD *)a3 = 22;
      return 0;
    }
    if ( (v21 & 0x20) != 0 && *((_DWORD *)v7 + 10) )
    {
      *(_DWORD *)a3 = 23;
      return 0;
    }
    if ( (v21 & 0x100) != 0 )
    {
      *(_DWORD *)a3 = 24;
      return 0;
    }
    if ( (v19 & 0x100) != 0 )
    {
      *(_DWORD *)a3 = 26;
      return 0;
    }
    if ( (v19 & 0x200) != 0 )
    {
      *(_DWORD *)a3 = 25;
      return 0;
    }
  }
  v24 = *((_QWORD *)v7 + 10);
  if ( (*(_DWORD *)v7 & 0x80) != 0 )
    *(_DWORD *)v6 |= 0x100u;
  else
    *((_DWORD *)v6 + 1) |= 0x200u;
  *(_QWORD *)((char *)v6 + 100) = v24;
LABEL_72:
  if ( (*((_DWORD *)v7 + 1) & 0x100) != 0 )
  {
    if ( IsRectEmptyInl((const struct tagRECT *)((char *)v7 + 60)) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v8 = 0;
      }
      v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v27 = *((_DWORD *)v7 + 18);
        v28 = *((_DWORD *)v7 + 16);
        v29 = *((_DWORD *)v7 + 17);
        v30 = *((_DWORD *)v7 + 15);
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v8,
          v26,
          *(_QWORD *)(UserSessionState + 69416),
          3u,
          4u,
          0xBu,
          (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
          v30,
          v28,
          v29,
          v27,
          v29 - v30,
          v27 - v28);
      }
      *(_DWORD *)a3 = 27;
      return 0;
    }
    v32 = *v25;
    *((_DWORD *)v6 + 1) |= 0x80u;
    *(_OWORD *)((char *)v6 + 60) = v32;
  }
  if ( (v23 & *((_DWORD *)v7 + 1)) != 0 )
  {
    v33 = *((_DWORD *)v7 + 19);
    if ( v33 < 0x60 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v8 = 0;
      }
      v34 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v35 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
        LOBYTE(v36) = v34;
        LOBYTE(v37) = v8;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v37,
          v36,
          *(_QWORD *)(v35 + 69416),
          3,
          4,
          12,
          (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
          v33);
      }
      *(_DWORD *)a3 = 28;
      return 0;
    }
    *((_DWORD *)v6 + 1) |= v20;
    *((_DWORD *)v6 + 24) = v33;
  }
  if ( (v20 & *(_DWORD *)v7) != 0 )
    *(_DWORD *)v6 |= 0x80u;
  v38 = *((_DWORD *)v7 + 1);
  if ( (v38 & 0xE0) != 0 )
  {
    if ( (*(_DWORD *)v7 & 0x20) != 0 )
    {
      v39 = *((_DWORD *)v7 + 10);
      if ( v39 != 2 )
      {
        if ( v39 )
        {
          *(_DWORD *)a3 = 29;
          return 0;
        }
        if ( (v38 & 0xC0) != 0 )
        {
          v40 = 30 - ((v38 & 0x40) != 0);
LABEL_103:
          *(_DWORD *)a3 = v40;
          return 0;
        }
      }
    }
    if ( (v38 & 0x80) != 0 )
    {
      v41 = v3 & *(_DWORD *)v7;
      if ( v41 )
      {
        if ( v41 != v3 )
        {
          *(_DWORD *)a3 = 31;
          return 0;
        }
      }
    }
    if ( (v38 & 0x40) != 0 )
    {
      if ( (v38 & 0xA0) != 0 )
      {
        v40 = (((v38 >> 5) & 1) == 0) | 0x20;
        goto LABEL_103;
      }
      *((_DWORD *)v6 + 1) |= 0x20u;
    }
    else
    {
      v42 = *((_DWORD *)v7 + 1) & 0x20;
      if ( (*((_DWORD *)v7 + 1) & 0x80) != 0 )
      {
        if ( v42 )
        {
          *(_DWORD *)a3 = 34;
          return 0;
        }
        *((_DWORD *)v6 + 1) |= 0x40u;
      }
      else if ( v42 )
      {
        *((_DWORD *)v6 + 1) |= 0x10u;
      }
    }
  }
  return 1;
}
