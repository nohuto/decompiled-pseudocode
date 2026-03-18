/*
 * XREFs of ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400B30C8
 * Callers:
 *     ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400B2D48 (-UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z @ 0x1400B339C (-UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z.c)
 *     ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1401601C0 (-Create@UmfdTls@@CAPEAV1@XZ.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall UmfdEscSendCompleteWaitReceive(volatile void **a1, __int64 a2)
{
  unsigned __int64 *CurrentThreadNonPaged; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int128 v7; // rcx
  struct UmfdTls *v8; // rax
  _QWORD *v9; // r12
  _QWORD *v10; // r13
  int *v11; // r15
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rbx
  struct UmfdTls *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // esi
  __int64 v20; // rbx
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rsi
  struct UmfdTls *v26; // rdx
  __int64 v27; // rsi
  int v28; // eax
  __int64 v29; // [rsp+20h] [rbp-68h]
  char v30; // [rsp+98h] [rbp+10h]
  int v31; // [rsp+A0h] [rbp+18h]
  __int64 v32; // [rsp+A8h] [rbp+20h] BYREF

  CurrentThreadNonPaged = (unsigned __int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v5 = *CurrentThreadNonPaged;
  else
    v5 = 0LL;
  v6 = v5 + 8;
  v7 = -(__int128)v5;
  *((_QWORD *)&v7 + 1) &= v6;
  if ( *((_QWORD *)&v7 + 1) )
  {
    v8 = *(struct UmfdTls **)(*((_QWORD *)&v7 + 1) + 312LL);
    if ( v8 || (v8 = UmfdTls::Create(), (*(_QWORD *)(*((_QWORD *)&v7 + 1) + 312LL) = v8) != 0LL) )
    {
      v9 = (_QWORD *)((char *)v8 + 48);
      *((_QWORD *)v8 + 6) = 0LL;
      v10 = (_QWORD *)((char *)v8 + 40);
      *((_QWORD *)v8 + 5) = 0LL;
      v11 = (int *)((char *)v8 + 32);
      if ( *((int *)v8 + 8) >= 0 )
      {
        v12 = (unsigned __int64 *)W32GetCurrentThreadNonPaged(v7, v4);
        if ( v12 )
          v13 = *v12;
        else
          v13 = 0LL;
        v14 = (v13 + 8) & ((unsigned __int128)-(__int128)v13 >> 64);
        if ( !v14 )
          goto LABEL_30;
        v15 = *(struct UmfdTls **)(((v13 + 8) & ((unsigned __int128)-(__int128)v13 >> 64)) + 0x138);
        if ( !v15 )
        {
          v15 = UmfdTls::Create();
          *(_QWORD *)(v14 + 312) = v15;
          if ( !v15 )
            goto LABEL_30;
        }
        v16 = *((_QWORD *)v15 + 3);
        if ( v16 && **(_QWORD **)v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 40LL))(v16);
      }
      v19 = UmfdHostSendCompleteWaitReceive(*((unsigned int *)a1 + 10));
      if ( v19 >= 0 )
      {
        v29 = 0LL;
        v31 = 0;
        v20 = 0LL;
        v30 = 0;
        v21 = (__int64 *)W32GetCurrentThreadNonPaged(v18, v17);
        if ( v21 )
          v22 = *v21;
        else
          v22 = 0LL;
        v23 = v22 + 8;
        v24 = -v22;
        v25 = v23 & -(__int64)(v24 != 0);
        if ( !v25
          || (v26 = *(struct UmfdTls **)((v23 & -(__int64)(v24 != 0)) + 0x138)) == 0LL
          && (v26 = UmfdTls::Create(), (*(_QWORD *)(v25 + 312) = v26) == 0LL) )
        {
LABEL_30:
          v19 = -1073741801;
          goto LABEL_31;
        }
        v27 = *((_QWORD *)v26 + 3);
        if ( !v27 )
        {
          v19 = -1073740032;
          goto LABEL_31;
        }
        v32 = 0LL;
        v28 = (*(__int64 (__fastcall **)(__int64, struct UmfdTls *, __int64 *))(*(_QWORD *)v27 + 32LL))(v27, v26, &v32);
        if ( v28 >= 0 )
        {
          v29 = v32;
          v31 = *(_DWORD *)(v27 + 8);
          v20 = *(_QWORD *)(v27 + 24);
          v30 = *(_BYTE *)(v27 + 32);
        }
        v19 = v28;
        if ( v28 >= 0 )
        {
          ProbeForWrite(a1[1], 8uLL, 4u);
          ProbeForWrite(a1[2], 4uLL, 4u);
          ProbeForWrite(a1[4], 1uLL, 1u);
          *(_QWORD *)a1[1] = v29;
          *(_DWORD *)a1[2] = v31;
          *(_BYTE *)a1[4] = v30;
          if ( v30 )
          {
            ProbeForWrite(a1[3], 8uLL, 4u);
            *(_QWORD *)a1[3] = v20;
          }
        }
      }
      if ( v19 >= 0 )
      {
LABEL_25:
        *((_DWORD *)a1 + 2) = v19;
        *v11 = v19;
        return;
      }
LABEL_31:
      *v9 = 0LL;
      *v10 = 0LL;
      goto LABEL_25;
    }
  }
  *((_DWORD *)a1 + 2) = -1073741801;
}
