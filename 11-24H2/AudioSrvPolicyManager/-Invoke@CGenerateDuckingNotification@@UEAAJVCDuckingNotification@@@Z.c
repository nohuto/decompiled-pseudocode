/*
 * XREFs of ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x18002D770
 * Callers:
 *     <none>
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008660 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAPEBGXZ @ 0x180008B40 (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAPEBGXZ.c)
 *     ??1CDuckingNotification@@QEAA@XZ @ 0x18002867C (--1CDuckingNotification@@QEAA@XZ.c)
 *     WPP_SF_d @ 0x18002B464 (WPP_SF_d.c)
 *     WPP_SF_SSd @ 0x18002F2F8 (WPP_SF_SSd.c)
 *     WPP_SF_i @ 0x18002F4C4 (WPP_SF_i.c)
 *     WPP_SF_id @ 0x18002F50C (WPP_SF_id.c)
 */

__int64 __fastcall CGenerateDuckingNotification::Invoke(__int64 a1, CDuckingNotification *a2, __int64 a3)
{
  char v3; // al
  int MediaEvent; // esi
  __int64 v7; // rdx
  const wchar_t *v8; // rax
  const wchar_t *v9; // rdx
  _DWORD *v10; // r10
  __int64 v11; // rax
  __int64 v12; // r10
  bool v14; // di
  __int64 v15; // rcx
  int v16; // eax
  _UNKNOWN **v17; // rcx

  v3 = *(_BYTE *)(a1 + 25);
  MediaEvent = 0;
  if ( *(_BYTE *)(a1 + 24) )
  {
    v7 = *(_QWORD *)(a1 + 16);
    if ( v3 )
    {
      if ( v7 )
      {
        v8 = (const wchar_t *)std::_String_val<std::_Simple_types<unsigned short>>::_Myptr((__int64)a2 + 16);
        if ( !_wcsicoll(v8, v9) )
        {
          if ( *((_QWORD *)a2 + 4) )
          {
            ++*(_DWORD *)(*((_QWORD *)a2 + 6) + 16LL);
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_id(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                14LL,
                a3,
                *(_QWORD *)a2,
                *(_DWORD *)(*((_QWORD *)a2 + 6) + 16LL));
            }
          }
          goto LABEL_38;
        }
      }
      v10 = WPP_GLOBAL_Control;
    }
    else
    {
      v14 = !v7 && !*((_QWORD *)a2 + 4);
      v10 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_id(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, a3, *(_QWORD *)a2, *((_QWORD *)a2 + 4) == 0LL);
        v10 = WPP_GLOBAL_Control;
      }
      if ( v14 )
        goto LABEL_38;
    }
  }
  else if ( v3 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_id(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, a3, *(_QWORD *)a2, *(_DWORD *)(*((_QWORD *)a2 + 6) + 16LL));
      v10 = WPP_GLOBAL_Control;
    }
    v15 = *((_QWORD *)a2 + 6);
    v16 = *(_DWORD *)(v15 + 16);
    if ( v16 )
    {
      *(_DWORD *)(v15 + 16) = v16 - 1;
LABEL_38:
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL) = *(_QWORD *)a2;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, a3, *(_QWORD *)a2);
      }
      MediaEvent = GenerateMediaEvent(*(_QWORD *)(a1 + 8), *((unsigned int *)a2 + 2));
      if ( MediaEvent )
      {
        v17 = (_UNKNOWN **)WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x13u,
            &WPP_53f29f244fa932abd536e394721a76e7_Traceguids,
            *((_DWORD *)a2 + 2));
          v17 = (_UNKNOWN **)WPP_GLOBAL_Control;
        }
        if ( MediaEvent < 0 )
        {
          if ( v17 != &WPP_GLOBAL_Control && (*((_DWORD *)v17 + 7) & 0x8000000) != 0 && *((_BYTE *)v17 + 25) >= 2u )
            WPP_SF_d((TRACEHANDLE)v17[2], 0x16u, &WPP_53f29f244fa932abd536e394721a76e7_Traceguids, MediaEvent);
          AudPolicyLogError("CGenerateDuckingNotification::Invoke", 611, MediaEvent);
        }
      }
      else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x14u,
          &WPP_53f29f244fa932abd536e394721a76e7_Traceguids,
          *((_DWORD *)a2 + 2));
      }
      goto LABEL_15;
    }
  }
  else
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, a3, *(_QWORD *)a2);
      v10 = WPP_GLOBAL_Control;
    }
    if ( !*((_QWORD *)a2 + 4) )
      goto LABEL_38;
  }
  if ( v10 != (_DWORD *)&WPP_GLOBAL_Control && (v10[7] & 0x8000000) != 0 && *((_BYTE *)v10 + 25) >= 4u )
  {
    v11 = std::_String_val<std::_Simple_types<unsigned short>>::_Myptr((__int64)a2 + 16);
    WPP_SF_SSd(
      *(_QWORD *)(v12 + 16),
      21LL,
      &WPP_53f29f244fa932abd536e394721a76e7_Traceguids,
      *(_QWORD *)(a1 + 16),
      v11,
      *((_DWORD *)a2 + 2));
  }
LABEL_15:
  CDuckingNotification::~CDuckingNotification(a2);
  return (unsigned int)MediaEvent;
}
