/*
 * XREFs of ?Run@CRunnableTask@@UEAAJXZ @ 0x1802021A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAbort@CRunnableTask@@IEAAXJ@Z @ 0x180602284 (-SetAbort@CRunnableTask@@IEAAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRunnableTask::Run(CRunnableTask *this)
{
  unsigned int v2; // edi
  char v3; // si
  int v4; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = -2147467259;
  v3 = (*(__int64 (__fastcall **)(CRunnableTask *))(*(_QWORD *)this + 104LL))(this);
  v4 = *((_DWORD *)this + 11);
  if ( v4 != 1 )
  {
    if ( v4 )
      return v2;
    if ( _InterlockedExchange((volatile __int32 *)this + 11, 1) == 3 )
    {
      *((_DWORD *)this + 11) = 4;
      return 0LL;
    }
    if ( *((_DWORD *)this + 11) == 1 )
    {
      v6 = 0LL;
      if ( v3 )
        (*(void (__fastcall **)(CRunnableTask *, __int64 *))(*(_QWORD *)this + 112LL))(this, &v6);
      v2 = (*(__int64 (__fastcall **)(CRunnableTask *))(*(_QWORD *)this + 64LL))(this);
      if ( v3 )
        (*(void (__fastcall **)(CRunnableTask *, __int64))(*(_QWORD *)this + 120LL))(this, v6);
      if ( (v2 & 0x80000000) == 0 )
      {
        if ( *((_DWORD *)this + 11) == 1 )
        {
          v6 = 0LL;
          if ( v3 )
            (*(void (__fastcall **)(CRunnableTask *, __int64 *))(*(_QWORD *)this + 112LL))(this, &v6);
          v2 = (*(__int64 (__fastcall **)(CRunnableTask *))(*(_QWORD *)this + 96LL))(this);
          if ( v3 )
            (*(void (__fastcall **)(CRunnableTask *, __int64))(*(_QWORD *)this + 120LL))(this, v6);
        }
        else
        {
          if ( *((_DWORD *)this + 11) != 2 )
          {
LABEL_21:
            *((_DWORD *)this + 11) = 4;
            return v2;
          }
          CRunnableTask::SetAbort(this, 0);
          v2 = -2147483638;
        }
      }
    }
    if ( *((_DWORD *)this + 11) == 2 && v2 == -2147483638 )
      return v2;
    goto LABEL_21;
  }
  return 1;
}
