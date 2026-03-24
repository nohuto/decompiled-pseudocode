/*
 * XREFs of MouseClassServiceCallback @ 0x1C00018A0
 * Callers:
 *     <none>
 * Callees:
 *     MouseClassReadCopyData @ 0x1C0002230 (MouseClassReadCopyData.c)
 *     WPP_RECORDER_SF_qqiL @ 0x1C00024E0 (WPP_RECORDER_SF_qqiL.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002770 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqLLqq @ 0x1C0002850 (WPP_RECORDER_SF_qqLLqq.c)
 *     WPP_RECORDER_SF_qL @ 0x1C00029E0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0005F24 (WPP_RECORDER_SF_qLL.c)
 *     WPP_RECORDER_SF_qLqq @ 0x1C000601C (WPP_RECORDER_SF_qLqq.c)
 *     WPP_RECORDER_SF_qlqqd @ 0x1C0006208 (WPP_RECORDER_SF_qlqqd.c)
 *     memmove @ 0x1C0006C00 (memmove.c)
 */

__int64 **__fastcall MouseClassServiceCallback(__int64 a1, char *a2, int a3, _DWORD *a4)
{
  char *v6; // r12
  __int64 v8; // rsi
  unsigned int v9; // r15d
  unsigned int v10; // edi
  int v11; // r8d
  int v12; // r9d
  _QWORD **v13; // rdx
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // r14
  unsigned int v18; // r8d
  unsigned int v19; // edx
  __int64 ***v20; // rbx
  __int64 **v21; // rax
  char *v22; // r12
  unsigned int v23; // edi
  __int64 v24; // rdx
  __int64 *v25; // rbx
  __int64 **result; // rax
  __int64 *v27; // rax
  _QWORD **v28; // rbx
  _QWORD *v29; // rdi
  _QWORD *v30; // rcx
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  __int64 ***v33; // rdi
  unsigned int v34; // ecx
  unsigned int v35; // ebp
  int v36; // r8d
  int v37; // r9d
  char *v38; // r12
  __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rax
  size_t v42; // rbx
  __int64 *v43; // [rsp+60h] [rbp-38h] BYREF
  __int64 **v44; // [rsp+68h] [rbp-30h]

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 3LL);
  }
  v8 = *(_QWORD *)(a1 + 64);
  v9 = 0;
  v10 = a3 - (_DWORD)v6;
  *a4 = 0;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 144));
  v44 = &v43;
  v13 = (_QWORD **)(v8 + 152);
  v43 = (__int64 *)&v43;
LABEL_5:
  v14 = 0LL;
  do
  {
    v15 = *v13;
    if ( *v13 == v13 )
      break;
    if ( (_QWORD **)v15[1] != v13 )
      goto LABEL_59;
    v16 = (_QWORD *)*v15;
    if ( *(_QWORD **)(*v15 + 8LL) != v15 )
      goto LABEL_59;
    *v13 = v16;
    v14 = v15 - 21;
    v16[1] = v13;
    if ( !_InterlockedExchange64(v15 - 8, 0LL) )
    {
      v15[1] = v15;
      *v15 = v15;
      goto LABEL_5;
    }
  }
  while ( v15 == (_QWORD *)168 );
  if ( v14 )
  {
    v17 = v14[23];
    v18 = *(_DWORD *)(v17 + 8);
    v9 = v18;
    if ( v10 < v18 )
      v9 = v10;
    v19 = v9 / 0x18;
    *a4 += v9 / 0x18;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qqLLqq(WPP_GLOBAL_Control->DeviceExtension, v19, v18, v12);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqiL(WPP_GLOBAL_Control->DeviceExtension, v19, v18, v12);
    memmove((void *)v14[3], v6, v9);
    *((_DWORD *)v14 + 12) = 0;
    v14[7] = v9;
    v20 = (__int64 ***)(v14 + 21);
    *(_DWORD *)(v17 + 8) = v9;
    v21 = v44;
    if ( *v44 != (__int64 *)&v43 )
LABEL_59:
      __fastfail(3u);
    *v20 = &v43;
    v20[1] = v21;
    *v21 = (__int64 *)v20;
    v44 = (__int64 **)v20;
  }
  v22 = &v6[v9];
  v23 = v10 - v9;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qL(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v13, v11, v12);
  if ( v23 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qLL(WPP_GLOBAL_Control->DeviceExtension, 24 * *(_DWORD *)(v8 + 84), v11, 54);
    v34 = *(_DWORD *)(v8 + 136);
    if ( v34 < v23 )
      v23 = *(_DWORD *)(v8 + 136);
    v35 = v34 + *(_DWORD *)(v8 + 104) - *(_DWORD *)(v8 + 112);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qLL(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v13, v11, 56);
    if ( v23 < v35 )
      v35 = v23;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qLqq(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v13, v11, 57);
    memmove(*(void **)(v8 + 112), v22, v35);
    v38 = &v22[v35];
    v39 = *(_QWORD *)(v8 + 104);
    v40 = v35 + *(_QWORD *)(v8 + 112);
    v41 = v39 + *(unsigned int *)(v8 + 136);
    *(_QWORD *)(v8 + 112) = v40;
    if ( v40 >= v41 )
      *(_QWORD *)(v8 + 112) = v39;
    v42 = v23 - v35;
    if ( v23 != v35 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_qLqq(WPP_GLOBAL_Control->DeviceExtension, v39, v36, 58);
      memmove(*(void **)(v8 + 112), v38, v42);
      *(_QWORD *)(v8 + 112) += v42;
    }
    *(_DWORD *)(v8 + 84) += v23 / 0x18;
    *a4 += v23 / 0x18;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qlqqd(WPP_GLOBAL_Control->DeviceExtension, v23 / 0x18, v36, v37);
  }
  if ( *(_DWORD *)(v8 + 84) )
  {
    v28 = (_QWORD **)(v8 + 152);
    do
    {
LABEL_36:
      v29 = 0LL;
      do
      {
        v30 = *v28;
        if ( *v28 == v28 )
          break;
        if ( (_QWORD **)v30[1] != v28 )
          goto LABEL_59;
        v31 = (_QWORD *)*v30;
        if ( *(_QWORD **)(*v30 + 8LL) != v30 )
          goto LABEL_59;
        *v28 = v31;
        v29 = v30 - 21;
        v31[1] = v28;
        if ( !_InterlockedExchange64(v30 - 8, 0LL) )
        {
          v30[1] = v30;
          *v30 = v30;
          goto LABEL_36;
        }
      }
      while ( v30 == (_QWORD *)168 );
      if ( !v29 )
        break;
      *((_DWORD *)v29 + 12) = MouseClassReadCopyData(v8, v29);
      v32 = v44;
      v33 = (__int64 ***)(v29 + 21);
      if ( *v44 != (__int64 *)&v43 )
        goto LABEL_59;
      v33[1] = v44;
      *v33 = &v43;
      *v32 = v33;
      v44 = (__int64 **)v33;
    }
    while ( *(_DWORD *)(v8 + 84) );
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v8 + 144));
  while ( 1 )
  {
    v25 = v43;
    result = &v43;
    if ( v43 == (__int64 *)&v43 )
      break;
    if ( (__int64 **)v43[1] != &v43 )
      goto LABEL_59;
    v27 = (__int64 *)*v43;
    if ( *(__int64 **)(*v43 + 8) != v43 )
      goto LABEL_59;
    v43 = (__int64 *)*v43;
    v27[1] = (__int64)&v43;
    IofCompleteRequest((PIRP)(v25 - 21), 6);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 32), v25 - 21, 0x20u);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v24) = 5;
      return (__int64 **)WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v24, 3LL);
    }
  }
  return result;
}
