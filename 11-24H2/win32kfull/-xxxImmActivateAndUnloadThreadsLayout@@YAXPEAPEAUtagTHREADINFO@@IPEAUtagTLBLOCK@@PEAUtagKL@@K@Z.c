/*
 * XREFs of ?xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z @ 0x14027FC08
 * Callers:
 *     ?xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z @ 0x14027FC08 (-xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z.c)
 *     EditionImmActivateAndUnloadThreadsLayout @ 0x1402A4F70 (EditionImmActivateAndUnloadThreadsLayout.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x140154180 (-UnlockWorker@-$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     ??0tagTLBLOCK@@QEAA@XZ @ 0x1401960B0 (--0tagTLBLOCK@@QEAA@XZ.c)
 *     ?ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z @ 0x1401D3C2C (-ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z.c)
 *     ?xxxImmActivateLayout@@YAXPEAUtagTHREADINFO@@PEAUtagKL@@@Z @ 0x14020BAE8 (-xxxImmActivateLayout@@YAXPEAUtagTHREADINFO@@PEAUtagKL@@@Z.c)
 *     ??1tagTLBLOCK@@QEAA@XZ @ 0x14026CA7C (--1tagTLBLOCK@@QEAA@XZ.c)
 *     ?xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z @ 0x14027FC08 (-xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z.c)
 *     ?xxxImmUnloadLayout@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1402803B0 (-xxxImmUnloadLayout@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall xxxImmActivateAndUnloadThreadsLayout(
        struct tagTHREADINFO **a1,
        int a2,
        struct tagTLBLOCK *a3,
        struct tagKL *a4,
        unsigned int a5)
{
  struct tagTHREADINFO **v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagKL *v10; // rdx
  int v11; // esi
  int v12; // ebx
  int v13; // r15d
  __int64 *v14; // r12
  char v15; // bl
  PRKPROCESS *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbx
  int v19; // esi
  int v20; // esi
  _QWORD *v21; // r12
  __int64 v22; // rbx
  _DWORD *v23; // rbx
  ULONG_PTR v24; // r15
  _QWORD *v25; // rsi
  int v26; // r15d
  __int64 v27; // r13
  _QWORD *v28; // rbx
  ULONG_PTR v29; // r12
  int v30; // [rsp+34h] [rbp-2C4h]
  int v31; // [rsp+38h] [rbp-2C0h]
  _QWORD *v33; // [rsp+40h] [rbp-2B8h]
  __int64 v35; // [rsp+58h] [rbp-2A0h]
  struct tagTHREADINFO *v37; // [rsp+68h] [rbp-290h]
  _QWORD v38[4]; // [rsp+80h] [rbp-278h] BYREF
  _QWORD v39[66]; // [rsp+A0h] [rbp-258h] BYREF

  v7 = a1;
  tagTLBLOCK::tagTLBLOCK((tagTLBLOCK *)v39);
  v37 = PtiCurrent(v9, v8);
  v39[0] = a3;
  v11 = 0;
  v12 = 0;
  v30 = 0;
  while ( v11 < a2 )
  {
    v13 = 0;
    v14 = (__int64 *)&v7[v11];
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*v14 + 528), 0, 0) & 1) != 0 )
    {
      v13 = -65536;
    }
    else
    {
      v10 = a4;
      if ( *(struct tagKL **)(*v14 + 480) != a4 )
      {
        if ( *(_QWORD *)(*v14 + 824) )
        {
          v13 = 1;
        }
        else
        {
          v15 = 0;
          v38[0] = *v14 + 480;
          v38[1] = a4;
          HMAssignmentLock(v38, 0LL);
          if ( *(_QWORD *)(*v14 + 520) != *((_QWORD *)v37 + 65) )
          {
            v16 = *(PRKPROCESS **)(*v14 + 464);
            if ( v16 != *((PRKPROCESS **)v37 + 58) )
            {
              KeAttachProcess(*v16);
              v15 = 1;
            }
          }
          *(_WORD *)(*(_QWORD *)(*v14 + 520) + 152LL) = *((_WORD *)a4 + 36);
          v10 = (struct tagKL *)*((_QWORD *)a4 + 5);
          *(_QWORD *)(*(_QWORD *)(*v14 + 520) + 144LL) = v10;
          if ( v15 )
            KeDetachProcess();
          v12 = v30;
        }
      }
    }
    if ( *(_QWORD *)(*v14 + 824) )
    {
      v17 = *(_QWORD *)(*v14 + 480);
      if ( v17 )
      {
        if ( (a5 != 1
           || (*(_WORD *)(v17 + 42) & 0xF000) == 0xE000
           || (**(_DWORD **)(W32GetUserSessionState(57344LL, v10) + 19928) & 4) != 0)
          && v13 != -65536 )
        {
          v13 |= 2u;
        }
      }
    }
    if ( ((v13 + 0x10000) & 0xFFFEFFFF) != 0 )
    {
      v18 = 4LL * v12;
      Win32RawLockedW32Thread::ManualLock(&v39[v18 + 1], *v14);
      LODWORD(v39[v18 + 4]) = v13;
      v12 = v30 + 1;
      v30 = v12;
      if ( v12 == 16 )
      {
        v19 = v11 + 1;
        if ( v19 < a2 )
        {
          xxxImmActivateAndUnloadThreadsLayout(&a1[v19], a2 - v19, (struct tagTLBLOCK *)v39, a4, a5);
          goto LABEL_46;
        }
        break;
      }
    }
    ++v11;
    v7 = a1;
  }
  v31 = v12 - 1;
  v20 = v12 - 1;
  v21 = v39;
  v35 = v12 - 1;
  v22 = v35;
  do
  {
    if ( v20 >= 0 )
    {
      v23 = &v21[4 * v22 + 4];
      v24 = (ULONG_PTR)&v21[4 * v20 + 1];
      do
      {
        if ( (*v23 & 1) != 0
          && (_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)v23 - 2) + 528LL), 0, 0) & 1) == 0 )
        {
          xxxImmActivateLayout(*((struct tagTHREADINFO **)v23 - 2), a4);
        }
        if ( (*v23 & 3) == 1 )
          Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker(v24, 0LL);
        v24 -= 32LL;
        v23 -= 8;
        --v20;
      }
      while ( v20 >= 0 );
    }
    v20 = 15;
    v22 = 15LL;
    v21 = (_QWORD *)*v21;
  }
  while ( v21 );
  v25 = v39;
  v33 = v39;
  v26 = v31;
  v27 = v35;
  do
  {
    if ( v26 >= 0 )
    {
      v28 = &v25[4 * v27 + 2];
      v29 = (ULONG_PTR)&v25[4 * v26 + 1];
      do
      {
        if ( (v28[2] & 2) != 0 )
        {
          if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*v28 + 528LL), 0, 0) & 1) == 0 )
            xxxImmUnloadLayout((struct tagTHREADINFO *)*v28, a5);
          Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker(v29, 0LL);
        }
        v29 -= 32LL;
        v28 -= 4;
        --v26;
      }
      while ( v26 >= 0 );
      v25 = v33;
    }
    v26 = 15;
    v27 = 15LL;
    v25 = (_QWORD *)*v25;
    v33 = v25;
  }
  while ( v25 );
LABEL_46:
  tagTLBLOCK::~tagTLBLOCK((tagTLBLOCK *)v39);
}
