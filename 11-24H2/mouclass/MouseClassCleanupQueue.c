/*
 * XREFs of MouseClassCleanupQueue @ 0x1C0003330
 * Callers:
 *     MouseClassRemoveDevice @ 0x1C0003050 (MouseClassRemoveDevice.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall MouseClassCleanupQueue(__int64 a1, __int64 a2, __int64 *a3)
{
  KIRQL v5; // r9
  __int64 ***v6; // rcx
  __int64 **v7; // rdx
  __int64 *v8; // rbx
  __int64 **result; // rax
  __int64 *v10; // rax
  __int64 ****v11; // rax
  _QWORD *v12; // rax
  __int64 *v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 **v14; // [rsp+28h] [rbp-10h]

  v14 = &v13;
  v13 = (__int64 *)&v13;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 144));
  v6 = *(__int64 ****)(a2 + 152);
  if ( v6 != (__int64 ***)(a2 + 152) )
  {
    do
    {
      v7 = *v6;
      if ( !a3 || v6[2][6] == a3 )
      {
        if ( v7[1] != (__int64 *)v6 || (v11 = (__int64 ****)v6[1], *v11 != v6) )
LABEL_16:
          __fastfail(3u);
        *v11 = (__int64 ***)v7;
        v7[1] = (__int64 *)v11;
        if ( _InterlockedExchange64((volatile __int64 *)v6 - 8, 0LL) )
        {
          *((_DWORD *)v6 - 30) = -1073741536;
          *(v6 - 14) = 0LL;
          v12 = v14;
          if ( *v14 != (__int64 *)&v13 )
            goto LABEL_16;
          v6[1] = v14;
          *v6 = &v13;
          *v12 = v6;
          v14 = (__int64 **)v6;
        }
        else
        {
          v6[1] = (__int64 **)v6;
          *v6 = (__int64 **)v6;
        }
      }
      v6 = (__int64 ***)v7;
    }
    while ( v7 != (__int64 **)(a2 + 152) );
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 144), v5);
  while ( 1 )
  {
    v8 = v13;
    result = &v13;
    if ( v13 == (__int64 *)&v13 )
      return result;
    if ( (__int64 **)v13[1] != &v13 )
      goto LABEL_16;
    v10 = (__int64 *)*v13;
    if ( *(__int64 **)(*v13 + 8) != v13 )
      goto LABEL_16;
    v13 = (__int64 *)*v13;
    v10[1] = (__int64)&v13;
    IofCompleteRequest((PIRP)(v8 - 21), 0);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a2 + 32), v8 - 21, 0x20u);
  }
}
