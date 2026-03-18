/*
 * XREFs of ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x140034140
 * Callers:
 *     ?InFrame@CCompositionToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x140034020 (-InFrame@CCompositionToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 *     ?Discard@CCompositionToken@@UEAAXXZ @ 0x140037DB0 (-Discard@CCompositionToken@@UEAAXXZ.c)
 * Callees:
 *     ?AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z @ 0x14003227C (-AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CCompositionToken::UpdateDirtyRegions(CCompositionToken *this)
{
  int v1; // edi
  unsigned int i; // ebp
  _QWORD *v4; // rax
  __int64 v5; // r12
  __int64 v6; // r13
  int v7; // esi
  _QWORD *j; // rax
  unsigned __int64 v9; // r14
  char v10; // al
  __int64 v11; // rbx
  HANDLE CurrentThreadId; // rax
  __int64 v13; // rcx
  __int64 v15; // [rsp+50h] [rbp+8h]

  v1 = 0;
  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
  {
    v4 = (_QWORD *)(*((_QWORD *)this + 9) + 32LL * i);
    v5 = v4[3];
    v6 = v4[1];
    if ( v5 )
    {
      v15 = v4[2];
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v6 + 48, 0LL);
      *(_QWORD *)(v6 + 56) = PsGetCurrentThreadId();
      v7 = -1073741275;
      if ( *(_DWORD *)(v6 + 176) )
      {
        for ( j = *(_QWORD **)(v6 + 160); j != (_QWORD *)(v6 + 160); j = (_QWORD *)*j )
        {
          v9 = (unsigned __int64)(j - 3);
          if ( *(j - 1) == v15 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*(_QWORD *)v9 + 88LL))(j - 3, v15) )
            {
              v10 = -(*(char (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 88LL))(v9);
              v11 = v9 & -(__int64)(v10 != 0);
              if ( *(_DWORD *)(v11 + 0x18C) == -1 )
                *(_DWORD *)((v9 & -(__int64)(v10 != 0)) + 0x18C) = 0;
              *(_DWORD *)((v9 & -(__int64)(v10 != 0)) + 0x30) = 1;
              if ( *(_DWORD *)((v9 & -(__int64)(v10 != 0)) + 0x130) )
              {
                CCompositionBuffer::AddScrollAsDirty(
                  (CCompositionBuffer *)(v9 & -(__int64)(v10 != 0)),
                  (const struct ScrollOptimization *)(v11 + 304));
                *(_DWORD *)(v11 + 304) = 0;
                *(_BYTE *)(v11 + 43) = 1;
              }
              if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5) )
              {
                (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v11 + 296) + 48LL))(
                  *(_QWORD *)(v11 + 296),
                  v5,
                  2LL);
                *(_BYTE *)(v11 + 43) = 1;
              }
              v7 = 0;
            }
            else
            {
              v7 = -1073741811;
            }
            break;
          }
        }
      }
      CurrentThreadId = PsGetCurrentThreadId();
      v13 = v6 + 48;
      if ( CurrentThreadId == *(HANDLE *)(v6 + 56) )
      {
        *(_QWORD *)(v6 + 56) = 0LL;
        ExReleasePushLockExclusiveEx(v13, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v13, 0LL);
      }
      KeLeaveCriticalRegion();
      if ( v1 >= 0 && v7 < 0 )
        v1 = v7;
    }
  }
  return (unsigned int)v1;
}
