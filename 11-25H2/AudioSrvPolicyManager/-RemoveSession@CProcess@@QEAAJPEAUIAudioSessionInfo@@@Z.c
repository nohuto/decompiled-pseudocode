/*
 * XREFs of ?RemoveSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18001C1B4
 * Callers:
 *     ?UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x180018A10 (-UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001765C (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800205CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CProcess::RemoveSession(CProcess *this, struct IAudioSessionInfo *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v5; // r8
  unsigned __int64 i; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  struct IAudioSessionInfo *v14; // [rsp+30h] [rbp+8h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v5 = 0xCBF29CE484222325uLL;
  v14 = a2;
  for ( i = 0LL; i < 8; ++i )
  {
    v7 = *((unsigned __int8 *)&v14 + i);
    v5 = 0x100000001B3LL * (v7 ^ v5);
  }
  v8 = *((_QWORD *)this + 11);
  v9 = (_QWORD *)*((_QWORD *)this + 9);
  v10 = 2 * (v5 & *((_QWORD *)this + 14));
  v11 = *(_QWORD **)(v8 + 16 * (v5 & *((_QWORD *)this + 14)) + 8);
  if ( v11 == v9 )
  {
LABEL_7:
    v11 = 0LL;
  }
  else
  {
    while ( a2 != (struct IAudioSessionInfo *)v11[2] )
    {
      if ( v11 == *(_QWORD **)(v8 + 16 * (v5 & *((_QWORD *)this + 14))) )
        goto LABEL_7;
      v11 = (_QWORD *)v11[1];
    }
  }
  if ( v11 )
  {
    if ( *(_QWORD **)(v8 + 16 * (v5 & *((_QWORD *)this + 14)) + 8) == v11 )
    {
      if ( *(_QWORD **)(v8 + 16 * (v5 & *((_QWORD *)this + 14))) == v11 )
        *(_QWORD *)(v8 + 16 * (v5 & *((_QWORD *)this + 14))) = v9;
      else
        v9 = (_QWORD *)v11[1];
      *(_QWORD *)(v8 + 8 * v10 + 8) = v9;
    }
    else if ( *(_QWORD **)(v8 + 16 * (v5 & *((_QWORD *)this + 14))) == v11 )
    {
      *(_QWORD *)(v8 + 16 * (v5 & *((_QWORD *)this + 14))) = *v11;
    }
    v12 = *v11;
    --*((_QWORD *)this + 10);
    *(_QWORD *)v11[1] = v12;
    *(_QWORD *)(v12 + 8) = v11[1];
    wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(v11 + 3);
    operator delete(v11, (const struct std::nothrow_t *)0x20);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
