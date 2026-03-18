/*
 * XREFs of ?ComputeDominantState@tagWND@@QEAAXXZ @ 0x140161EC0
 * Callers:
 *     <none>
 * Callees:
 *     _HMPheFromObject @ 0x140042A90 (_HMPheFromObject.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x140047EB8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x1400D60E0 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     ?OnDwsChanged@tagPROCESSINFO@@QEAAXW4_DOMINANT_WINDOW_STATE@@0@Z @ 0x140162268 (-OnDwsChanged@tagPROCESSINFO@@QEAAXW4_DOMINANT_WINDOW_STATE@@0@Z.c)
 */

void __fastcall tagWND::ComputeDominantState(tagWND *this)
{
  unsigned int v2; // edi
  char v3; // bp
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  char v10; // r8
  int v11; // r15d
  char v12; // r14
  __int64 v13; // rbx
  __int64 UserSessionState; // rax
  tagWND *i; // rbx

  v2 = 5;
  v3 = 1;
  if ( (*(_BYTE *)(HMPheFromObject((int *)this) + 25) & 1) == 0 )
  {
    v4 = *((_QWORD *)this + 13);
    if ( v4 )
    {
      v5 = *((_QWORD *)this + 3);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 8);
        if ( v6 )
        {
          if ( v4 == *(_QWORD *)(v6 + 24) )
          {
            if ( *(_QWORD *)(W32GetUserSessionState(v4) + 18944)
              && *(tagWND **)(*(_QWORD *)(W32GetUserSessionState(v7) + 18944) + 128LL) == this )
            {
              v2 = 0;
            }
            else
            {
              v8 = *((_QWORD *)this + 5);
              if ( (*(_BYTE *)(v8 + 31) & 0x10) != 0 && !IsRectEmptyInl((const struct tagRECT *)(v8 + 88)) )
              {
                if ( (v10 & 0x20) != 0 )
                {
                  v2 = 3;
                }
                else if ( (*(_BYTE *)(v9 + 233) & 0x60) != 0 )
                {
                  v2 = 4;
                }
                else
                {
                  v2 = (*((_DWORD *)this + 98) == 2) + 1;
                }
              }
            }
          }
        }
      }
    }
  }
  v11 = *((_DWORD *)this + 99);
  if ( v11 != v2 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
      || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v12 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v3 = 0;
    if ( v12 || v3 )
    {
      v13 = *(_QWORD *)this;
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_qdd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v3,
        *(_QWORD *)(UserSessionState + 69400),
        5u,
        0xEu,
        0xEu,
        (__int64)&WPP_383e00c9a6733678f2e50c59db551300_Traceguids,
        v13,
        v11,
        v2);
    }
    tagPROCESSINFO::OnDwsChanged(*(_QWORD *)(*((_QWORD *)this + 2) + 464LL), *((unsigned int *)this + 99), v2);
    for ( i = (tagWND *)*((_QWORD *)this + 50); i != (tagWND *)((char *)this + 400); i = *(tagWND **)i )
      tagPROCESSINFO::OnDwsChanged(*((_QWORD *)i - 2), *((unsigned int *)this + 99), v2);
    *((_DWORD *)this + 99) = v2;
  }
}
