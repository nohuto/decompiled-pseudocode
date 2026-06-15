/*
 * XREFs of ?DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x18004EE30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1800C480C (WPP_SF_q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::DeleteSessionNotification(CAudioSession *this, struct ISessionInternalEvents *a2)
{
  char *v4; // rdi
  char *v5; // rbx
  bool v6; // zf
  char *i; // rsi
  __int64 v8; // r14
  char *v9; // rbp
  signed __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rsi
  char *v13; // rsi
  char *j; // rdi
  struct ISessionInternalEvents *v16; // [rsp+68h] [rbp+10h]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 69LL, &WPP_6681b08aa41435022487e8d1ae4eb6cc_Traceguids, a2);
  }
  v16 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct ISessionInternalEvents *))(*(_QWORD *)a2 + 8LL))(a2);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 432));
  v4 = (char *)*((_QWORD *)this + 60);
  v5 = (char *)*((_QWORD *)this + 59);
  if ( v5 != v4 )
  {
    do
    {
      if ( *(struct ISessionInternalEvents **)v5 == v16 )
      {
        v6 = (*((_DWORD *)v5 + 2))-- == 1;
        if ( v6 )
          break;
      }
      v5 += 16;
    }
    while ( v5 != v4 );
    if ( v5 != v4 )
    {
      for ( i = v5 + 16; i != v4; i += 16 )
      {
        if ( *(struct ISessionInternalEvents **)i == v16 )
        {
          v6 = (*((_DWORD *)i + 2))-- == 1;
          if ( v6 )
            continue;
        }
        v8 = *(_QWORD *)i;
        if ( *(_QWORD *)v5 != *(_QWORD *)i )
        {
          if ( v8 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*(_QWORD *)i);
          if ( *(_QWORD *)v5 )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 16LL))(*(_QWORD *)v5);
          *(_QWORD *)v5 = v8;
        }
        *((_DWORD *)v5 + 2) = *((_DWORD *)i + 2);
        v5 += 16;
      }
      if ( v5 != v4 )
      {
        v9 = (char *)*((_QWORD *)this + 60);
        if ( v4 != v9 )
        {
          v10 = v4 - v5;
          v11 = v5 - v4 + 8;
          do
          {
            v12 = *(_QWORD *)v4;
            if ( *(_QWORD *)v5 != *(_QWORD *)v4 )
            {
              if ( v12 )
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 8LL))(*(_QWORD *)v4);
              if ( *(_QWORD *)v5 )
                (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 16LL))(*(_QWORD *)v5);
              *(_QWORD *)v5 = v12;
            }
            *(_DWORD *)&v4[v11] = *(_DWORD *)&v4[v11 + v10];
            v5 += 16;
            v4 += 16;
          }
          while ( v4 != v9 );
        }
        v13 = (char *)*((_QWORD *)this + 60);
        for ( j = v5; j != v13; j += 16 )
        {
          if ( *(_QWORD *)j )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)j + 16LL))(*(_QWORD *)j);
        }
        *((_QWORD *)this + 60) = v5;
      }
    }
  }
  if ( this != (CAudioSession *)-432LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 432));
  if ( v16 )
    (*(void (__fastcall **)(struct ISessionInternalEvents *))(*(_QWORD *)v16 + 16LL))(v16);
  return 0LL;
}
