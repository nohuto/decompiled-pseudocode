/*
 * XREFs of ?GrantAccessHandle@Win32JobObject@@YA_NKPEAX_N@Z @ 0x1401A9F80
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     UserReAllocPool @ 0x14001B940 (UserReAllocPool.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     Win32JobObject::_anonymous_namespace_::FindW32Job @ 0x1401A9D28 (Win32JobObject--_anonymous_namespace_--FindW32Job.c)
 *     Win32JobObject::_anonymous_namespace_::GetW32Job @ 0x1401A9E50 (Win32JobObject--_anonymous_namespace_--GetW32Job.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

char __fastcall Win32JobObject::GrantAccessHandle(Win32JobObject *this, __int64 a2, void *a3)
{
  unsigned int v3; // edi
  char v4; // bp
  __int64 *W32Job; // rax
  __int64 v7; // rcx
  __int64 *v8; // rsi
  __int64 UserSessionState; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r10
  unsigned int v15; // ecx
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // r9

  v3 = 0;
  v4 = (char)a3;
  if ( (_BYTE)a3 )
    W32Job = Win32JobObject::_anonymous_namespace_::GetW32Job((__int64)this);
  else
    W32Job = Win32JobObject::_anonymous_namespace_::FindW32Job((__int64)this);
  v8 = W32Job;
  if ( W32Job )
  {
    UserSessionState = W32GetUserSessionState(v7);
    v12 = W32GetUserSessionState(v11);
    v13 = *(_QWORD *)(UserSessionState + 19944);
    v14 = v8[8];
    v15 = *((_DWORD *)v8 + 14);
    v16 = *(_DWORD *)(v12 + 19952) * (unsigned int)(unsigned __int16)a2;
    if ( v4 )
    {
      v17 = *((unsigned int *)v8 + 15);
      if ( v15 == (_DWORD)v17 )
      {
        if ( v15 )
        {
          v19 = 8 * v17;
          if ( v19 > 0xFFFFFFFF || (int)v19 + 64 < (unsigned int)v19 )
            goto LABEL_6;
          v18 = UserReAllocPool((char *)v8[8], (unsigned int)v19, (unsigned int)(v19 + 64), 0x68677355u);
        }
        else
        {
          v18 = Win32AllocPoolZInitImpl(256LL, 0x40uLL, 0x68677355u);
        }
        v14 = v18;
        if ( !v18 )
        {
LABEL_6:
          UserSetLastError(8);
          return 0;
        }
        *((_DWORD *)v8 + 15) += 8;
        v8[8] = v18;
      }
      v20 = *((unsigned int *)v8 + 14);
      if ( (_DWORD)v20 )
      {
        while ( *(_QWORD *)(v14 + 8LL * v3) != a2 )
        {
          if ( ++v3 >= (unsigned int)v20 )
            goto LABEL_19;
        }
      }
      else
      {
LABEL_19:
        *(_QWORD *)(v14 + 8 * v20) = a2;
        ++*((_DWORD *)v8 + 14);
        *(_BYTE *)(v16 + v13 + 25) |= 0x20u;
      }
    }
    else if ( v15 )
    {
      while ( 1 )
      {
        v21 = (_QWORD *)(v14 + 8LL * v3);
        if ( *v21 == a2 )
          break;
        if ( ++v3 >= v15 )
          return 1;
      }
      memmove((void *)(v14 + 8LL * v3), v21 + 1, 8LL * (v15 - v3 - 1));
      --*((_DWORD *)v8 + 14);
    }
  }
  else if ( v4 )
  {
    goto LABEL_6;
  }
  return 1;
}
