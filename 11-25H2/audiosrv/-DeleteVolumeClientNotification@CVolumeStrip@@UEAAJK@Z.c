/*
 * XREFs of ?DeleteVolumeClientNotification@CVolumeStrip@@UEAAJK@Z @ 0x18006C230
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x1800C49A0 (WPP_SF_qD.c)
 *     memmove_0 @ 0x18015E888 (memmove_0.c)
 */

__int64 __fastcall CVolumeStrip::DeleteVolumeClientNotification(CVolumeStrip *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  _DWORD *v5; // rdx
  _DWORD *i; // rdi
  bool v7; // zf
  _DWORD *j; // rcx
  size_t v9; // rbx

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      17LL,
      &WPP_ffca69456fc43fc517c726147dcc355b_Traceguids,
      (char *)this - 8,
      a2);
  }
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection(v4);
  v5 = *(_DWORD **)&v4[1].LockCount;
  for ( i = &v4[1].DebugInfo->Type; i != v5; i += 2 )
  {
    if ( *i == a2 )
    {
      v7 = i[1]-- == 1;
      if ( v7 )
        break;
    }
  }
  if ( i != v5 )
  {
    for ( j = i + 2; j != v5; j += 2 )
    {
      if ( *j == a2 )
      {
        v7 = j[1]-- == 1;
        if ( v7 )
          continue;
      }
      *(_QWORD *)i = *(_QWORD *)j;
      i += 2;
    }
    if ( i != v5 )
    {
      v9 = *(_QWORD *)&v4[1].LockCount - (_QWORD)v5;
      memmove_0(i, v5, v9);
      *(_QWORD *)&v4[1].LockCount = (char *)i + v9;
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
