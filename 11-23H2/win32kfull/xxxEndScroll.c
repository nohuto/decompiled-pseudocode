/*
 * XREFs of xxxEndScroll @ 0x1C02298C0
 * Callers:
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C00115F4 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxTrackBox @ 0x1C022AB40 (xxxTrackBox.c)
 *     xxxTrackThumb @ 0x1C022ACB0 (xxxTrackThumb.c)
 * Callees:
 *     zzzShowCaret @ 0x1C00061F8 (zzzShowCaret.c)
 *     xxxReleaseCapture @ 0x1C0011678 (xxxReleaseCapture.c)
 *     FindTimer @ 0x1C003DA48 (FindTimer.c)
 *     _GetMessagePos @ 0x1C008CF14 (_GetMessagePos.c)
 *     PtInRect @ 0x1C00AF258 (PtInRect.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C00F0BC0 (xxxWindowEvent.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01BA8C0 (safe_cast_fnid_to_PSBWND.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0227ED0 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C0228410 (-DrawCtlThumb@@YAXPEAUtagSBWND@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0228B10 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0228BD4 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C022926C (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 */

unsigned __int8 **__fastcall xxxEndScroll(struct tagWND *a1, int a2)
{
  unsigned __int8 **result; // rax
  __int64 v5; // rbx
  unsigned int v6; // ebp
  __int64 (__fastcall *v7)(struct tagWND *); // rax
  struct tagSBCALC *v8; // rdx
  struct tagSBWND *v9; // rax
  int MessagePos; // eax
  __int64 v11; // r8
  struct tagWND *v12; // rdx
  struct tagWND **v13; // rsi
  struct tagWND *v14; // rdx
  unsigned int v15; // r8d
  unsigned __int64 v16; // [rsp+50h] [rbp+8h]

  result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
  v5 = (__int64)result[90];
  if ( !v5 )
    return result;
  result = *(unsigned __int8 ***)(gptiCurrent + 432LL);
  if ( result[14] != (unsigned __int8 *)a1 )
    return result;
  if ( !*(_QWORD *)(v5 + 48) )
    return result;
  v6 = *(_DWORD *)(v5 + 56);
  *(_DWORD *)(v5 + 56) = 0;
  xxxReleaseCapture();
  result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
  if ( (unsigned __int8 *)v5 != result[90] )
    return result;
  v7 = *(__int64 (__fastcall **)(struct tagWND *))(v5 + 48);
  if ( (char *)v7 != (char *)xxxTrackThumb )
  {
    if ( v7 == xxxTrackBox )
    {
      if ( *(_QWORD *)(v5 + 64) )
      {
        FindTimer((__int64)a1, 65534LL, 2u, 1, 0LL);
        *(_QWORD *)(v5 + 64) = 0LL;
      }
      MessagePos = GetMessagePos();
      v11 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v11 + 26) & 0x40) != 0 )
        LODWORD(v16) = *(_DWORD *)(v11 + 96) - (__int16)MessagePos;
      else
        LODWORD(v16) = (__int16)MessagePos - *(_DWORD *)(v11 + 88);
      HIDWORD(v16) = SHIWORD(MessagePos) - *(_DWORD *)(v11 + 92);
      if ( PtInRect((_DWORD *)(v5 + 32), v16) )
        zzzDrawInvertScrollArea(a1, (struct tagSBTRACK *)v5, 0, v6);
    }
    goto LABEL_22;
  }
  if ( a2 )
    *(_DWORD *)(v5 + 80) = *(_DWORD *)(*(_QWORD *)(v5 + 96) + 12LL);
  v8 = *(struct tagSBCALC **)(v5 + 24);
  if ( !v8
    || (xxxDoScroll(*(struct tagWND **)(v5 + 16), v8, 4LL, *(unsigned int *)(v5 + 80), (*(_DWORD *)v5 >> 1) & 1),
        result = (unsigned __int8 **)*((_QWORD *)a1 + 2),
        (unsigned __int8 *)v5 == result[90]) )
  {
    if ( (*(_DWORD *)v5 & 4) != 0 )
    {
      v9 = (struct tagSBWND *)safe_cast_fnid_to_PSBWND((__int64)a1);
      if ( v9 )
        DrawCtlThumb(v9);
    }
    else
    {
      xxxDrawThumb(a1, v8, (*(_DWORD *)v5 >> 1) & 1);
    }
LABEL_22:
    result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
    if ( (unsigned __int8 *)v5 == result[90] )
    {
      v12 = *(struct tagWND **)(v5 + 24);
      v13 = (struct tagWND **)(v5 + 16);
      if ( !v12
        || (xxxDoScroll(*v13, v12, 8LL, 0LL, (*(_DWORD *)v5 >> 1) & 1),
            result = (unsigned __int8 **)*((_QWORD *)a1 + 2),
            (unsigned __int8 *)v5 == result[90]) )
      {
        SetOrClrWF(0, (__int64 *)a1, 0x610u, 1);
        SetOrClrWF(0, (__int64 *)a1, 0x620u, 1);
        if ( gpqForeground )
        {
          v14 = *(struct tagWND **)(gpqForeground + 120LL);
          if ( v14 )
          {
            if ( gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
              xxxWindowEvent(0x80000005, v14, 0, 3u, 33);
          }
        }
        if ( (*(_DWORD *)v5 & 4) != 0 )
          v15 = -4;
        else
          v15 = ((*(_DWORD *)v5 & 2) != 0) | 0xFFFFFFFA;
        xxxWindowEvent(0x13u, a1, v15, 0, 0);
        result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
        if ( (unsigned __int8 *)v5 == result[90] )
        {
          if ( !*v13
            || (zzzShowCaret(*v13), result = (unsigned __int8 **)*((_QWORD *)a1 + 2),
                                    (unsigned __int8 *)v5 == result[90]) )
          {
            *(_QWORD *)(v5 + 48) = 0LL;
            *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL) = 0LL;
            HMAssignmentUnlock(v5 + 16);
            HMAssignmentUnlock(v5 + 24);
            HMAssignmentUnlock(v5 + 8);
            return UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<28672,112>>(v5);
          }
        }
      }
    }
  }
  return result;
}
