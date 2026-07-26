/*
 * XREFs of ndisMPeriodicReceivesResources @ 0x1400452C0
 * Callers:
 *     ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140043970 (-ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     ndisFreePeriodicReceives @ 0x1400454A0 (ndisFreePeriodicReceives.c)
 *     ndisCopyPeriodicReceiveNbl @ 0x1400464B0 (ndisCopyPeriodicReceiveNbl.c)
 */

__int64 __fastcall ndisMPeriodicReceivesResources(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4, char a5)
{
  __int64 v5; // r15
  unsigned __int8 v6; // bp
  _QWORD *v8; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  struct _NET_BUFFER_LIST *v12; // rdi
  unsigned int v13; // r12d
  struct _NET_BUFFER_LIST **i; // r13
  KSPIN_LOCK *v15; // rcx
  char v16; // si
  struct _NET_BUFFER_LIST ***v17; // rcx
  KSPIN_LOCK *v18; // rcx
  KIRQL v20; // al
  __int64 v21; // rax
  KIRQL v22; // [rsp+68h] [rbp+20h]

  v5 = a4;
  v6 = 0;
  *(_DWORD *)(a1 + 3236) += a4;
  v8 = a2;
  v22 = 0;
  if ( *(_DWORD *)(a1 + 3168) == 1 )
  {
    v10 = ndisCopyPeriodicReceiveNbl(a1, a3, a2);
    v12 = (struct _NET_BUFFER_LIST *)v10;
    if ( v10 )
    {
      v13 = 1;
      for ( i = (struct _NET_BUFFER_LIST **)v10; ; i = (struct _NET_BUFFER_LIST **)v21 )
      {
        v8 = (_QWORD *)*v8;
        if ( !v8 )
          break;
        v21 = ndisCopyPeriodicReceiveNbl(v11, a3, v8);
        if ( !v21 )
        {
          ndisFreePeriodicReceives(v12);
          return v6;
        }
        *i = (struct _NET_BUFFER_LIST *)v21;
        ++v13;
      }
      v15 = (KSPIN_LOCK *)(a1 + 3176);
      if ( (a5 & 1) != 0 )
      {
        v16 = 1;
        KeAcquireSpinLockAtDpcLevel(v15);
        *(_QWORD *)(a1 + 3184) = KeGetCurrentThread();
      }
      else
      {
        v16 = 0;
        v20 = KeAcquireSpinLockRaiseToDpc(v15);
        *(_QWORD *)(a1 + 3184) = KeGetCurrentThread();
        v22 = v20;
      }
      if ( *(_DWORD *)(a1 + 3168) == 1 && (unsigned __int64)(v5 + *(int *)(a1 + 3192)) < 0x3E8 )
      {
        *(_DWORD *)(a1 + 3228) += v13;
        _InterlockedAdd((volatile signed __int32 *)(a1 + 3224), v13);
        v17 = (struct _NET_BUFFER_LIST ***)(a1 + 3208);
        if ( *(_QWORD *)(a1 + 3200) )
          **v17 = v12;
        else
          *(_QWORD *)(a1 + 3200) = v12;
        *(_DWORD *)(a1 + 3192) += v13;
        v6 = 1;
        *v17 = i;
      }
      else
      {
        ndisFreePeriodicReceives(v12);
      }
      *(_QWORD *)(a1 + 3184) = 0LL;
      v18 = (KSPIN_LOCK *)(a1 + 3176);
      if ( v16 )
        KeReleaseSpinLockFromDpcLevel(v18);
      else
        KeReleaseSpinLock(v18, v22);
    }
  }
  return v6;
}
