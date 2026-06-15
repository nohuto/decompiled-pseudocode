/*
 * XREFs of ?GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z @ 0x18005BCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180021540 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42AC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_S @ 0x1800C033C (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::GetDisplayName(struct _RTL_CRITICAL_SECTION *this, unsigned __int16 **a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  int v5; // ecx
  unsigned __int64 v6; // rdi
  unsigned __int16 *v7; // rax
  unsigned __int16 *v8; // rcx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int16 v12; // ax
  unsigned __int16 *v13; // rax
  signed int v14; // eax
  unsigned int v15; // esi

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      10LL,
      &WPP_ea93f1868512325b454513e390c361b8_Traceguids,
      *(_QWORD *)&this[6].LockCount);
  }
  v4 = this + 7;
  EnterCriticalSection(this + 7);
  v5 = *(_DWORD *)(*(_QWORD *)&this[6].LockCount - 16LL) + 1;
  v6 = 2LL * v5;
  if ( v6 > 0x40000 )
  {
    *a2 = 0LL;
  }
  else
  {
    v7 = (unsigned __int16 *)operator new[](2LL * v5, (const struct std::nothrow_t *)&std::nothrow);
    *a2 = v7;
    v8 = v7;
    if ( v7 )
    {
      v9 = v6 >> 1;
      if ( v9 - 1 > 0x7FFFFFFE )
      {
        v15 = -2147024809;
        v14 = -2147024809;
        if ( v9 )
        {
          *v8 = 0;
LABEL_23:
          operator delete(*a2);
          *a2 = 0LL;
          goto LABEL_24;
        }
      }
      else
      {
        v10 = 2147483646 - v9;
        v11 = *(_QWORD *)&this[6].LockCount - (_QWORD)v7;
        do
        {
          if ( !(v10 + v9) )
            break;
          v12 = *(unsigned __int16 *)((char *)v8 + v11);
          if ( !v12 )
            break;
          *v8++ = v12;
          --v9;
        }
        while ( v9 );
        v13 = v8 - 1;
        if ( v9 )
          v13 = v8;
        *v13 = 0;
        v14 = v9 == 0 ? 0x8007007A : 0;
      }
      v15 = v14;
      if ( v14 >= 0 )
        goto LABEL_13;
      goto LABEL_23;
    }
  }
  v15 = -2147024882;
LABEL_24:
  AudSrvTraceLoggingErrorHelper("CAudioSession::GetDisplayName", 86, v15);
LABEL_13:
  if ( v4 )
    LeaveCriticalSection(v4);
  return v15;
}
