/*
 * XREFs of VidMmSelectReadyQueue @ 0x1400E8710
 * Callers:
 *     VidMmSelectPagingOperation @ 0x1400E7AF0 (VidMmSelectPagingOperation.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall VidMmSelectReadyQueue(__int64 *a1, _QWORD *a2)
{
  _QWORD *v2; // r14
  _QWORD *v5; // rbx
  char v6; // bp
  __int64 v7; // rdi
  __int64 v8; // r12
  int v9; // r15d
  char v10; // dl
  _QWORD *v11; // r8
  __int64 v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // rcx

  v2 = (_QWORD *)*a2;
  if ( (_QWORD *)*a2 == a2 )
    return 0LL;
  v5 = (_QWORD *)*a2;
  v6 = 1;
  v7 = *a1;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v7 + 41144, 0LL);
  *(_QWORD *)(v7 + 41152) = KeGetCurrentThread();
  v8 = 0LL;
  v9 = *(_DWORD *)(v7 + 41184);
  *(_QWORD *)(v7 + 41152) = 0LL;
  ExReleasePushLockExclusiveEx(v7 + 41144, 0LL);
  KeLeaveCriticalRegion();
  v10 = 0;
  do
  {
    v11 = v5;
    if ( !v9
      || (v12 = v5[4], !*(_BYTE *)(v12 + 24))
      || *(_DWORD *)(v12 + 48) != 203
      || (**(_DWORD **)(*(_QWORD *)(v12 + 64) + 96LL) & 0x20000) == 0 )
    {
      v10 = 1;
      v6 = 0;
    }
    v13 = (_QWORD *)*v5;
    if ( (_QWORD *)*v5 == a2 )
      break;
    if ( (_QWORD *)v13[1] == v5 )
    {
      v14 = (_QWORD *)v5[1];
      if ( (_QWORD *)*v14 == v5 )
      {
        *v14 = v13;
        v13[1] = v14;
        v15 = (_QWORD *)a2[1];
        if ( (_QWORD *)*v15 == a2 )
          goto LABEL_21;
      }
    }
    __fastfail(3u);
LABEL_21:
    *v5 = a2;
    v5[1] = v15;
    *v15 = v5;
    a2[1] = v5;
    if ( v13 == v2 )
      break;
    v5 = v13;
  }
  while ( v6 );
  if ( v10 )
    return v11;
  return (_QWORD *)v8;
}
