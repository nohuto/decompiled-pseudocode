/*
 * XREFs of ?xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z @ 0x1C01B7354
 * Callers:
 *     ?xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z @ 0x1C01B7354 (-xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z.c)
 *     EditionImmActivateAndUnloadThreadsLayout @ 0x1C01E83B0 (EditionImmActivateAndUnloadThreadsLayout.c)
 * Callees:
 *     ?xxxImmActivateLayout@@YAXPEAUtagTHREADINFO@@PEAUtagKL@@@Z @ 0x1C009F498 (-xxxImmActivateLayout@@YAXPEAUtagTHREADINFO@@PEAUtagKL@@@Z.c)
 *     LockW32Thread @ 0x1C00ACAAC (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00AD580 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     ?xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z @ 0x1C01B7354 (-xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z.c)
 *     ?xxxImmUnloadLayout@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01B79FC (-xxxImmUnloadLayout@@YAXPEAUtagTHREADINFO@@K@Z.c)
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
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // edi
  int v13; // r13d
  int v14; // r14d
  __int64 *v15; // r12
  __int64 v16; // rcx
  char v17; // bl
  PRKPROCESS *v18; // rcx
  __int64 v19; // rax
  int v20; // edi
  int v21; // ebx
  struct tagTLBLOCK **v22; // r15
  __int64 v23; // rax
  __int64 v24; // r12
  _DWORD *v25; // r14
  struct tagTHREADINFO *v26; // rcx
  struct tagTLBLOCK **v27; // rbx
  int v28; // edi
  struct tagTLBLOCK **v29; // r14
  struct tagTHREADINFO *v33; // [rsp+60h] [rbp-318h]
  _QWORD v34[4]; // [rsp+80h] [rbp-2F8h] BYREF
  struct tagTLBLOCK *v35; // [rsp+A0h] [rbp-2D8h] BYREF
  _QWORD v36[81]; // [rsp+A8h] [rbp-2D0h] BYREF

  v7 = a1;
  memset_0(v36, 0, 0x280uLL);
  v33 = PtiCurrentShared(v9, v8, v10, v11);
  v35 = a3;
  v12 = 0;
  v13 = 0;
  while ( v12 < a2 )
  {
    v14 = 0;
    v15 = (__int64 *)&v7[v12];
    v16 = *v15;
    if ( (*(_DWORD *)(*v15 + 488) & 1) != 0 )
    {
      v14 = -65536;
    }
    else if ( *(struct tagKL **)(v16 + 440) != a4 )
    {
      if ( *(_QWORD *)(v16 + 784) )
      {
        v14 = 1;
      }
      else
      {
        v17 = 0;
        v34[0] = v16 + 440;
        v34[1] = a4;
        HMAssignmentLock(v34, 0LL);
        if ( *(_QWORD *)(*v15 + 480) != *((_QWORD *)v33 + 60) )
        {
          v18 = *(PRKPROCESS **)(*v15 + 424);
          if ( v18 != *((PRKPROCESS **)v33 + 53) )
          {
            KeAttachProcess(*v18);
            v17 = 1;
          }
        }
        *(_WORD *)(*(_QWORD *)(*v15 + 480) + 152LL) = *((_WORD *)a4 + 36);
        *(_QWORD *)(*(_QWORD *)(*v15 + 480) + 144LL) = *((_QWORD *)a4 + 5);
        if ( v17 )
          KeDetachProcess();
      }
    }
    if ( *(_QWORD *)(*v15 + 784) )
    {
      v19 = *(_QWORD *)(*v15 + 440);
      if ( v19 )
      {
        if ( (a5 != 1 || (*(_WORD *)(v19 + 42) & 0xF000) == 0xE000 || (*gpsi & 4) != 0) && v14 != -65536 )
          v14 |= 2u;
      }
    }
    if ( ((v14 + 0x10000) & 0xFFFEFFFF) != 0 )
    {
      LockW32Thread(*v15, &v36[5 * v13 + 1]);
      v36[5 * v13] = *v15;
      LODWORD(v36[5 * v13++ + 4]) = v14;
      if ( v13 == 16 )
      {
        v20 = v12 + 1;
        if ( v20 < a2 )
        {
          xxxImmActivateAndUnloadThreadsLayout(&a1[v20], a2 - v20, (struct tagTLBLOCK *)&v35, a4, a5);
          return;
        }
        break;
      }
    }
    ++v12;
    v7 = a1;
  }
  v21 = v13 - 1;
  v22 = &v35;
  v23 = v13 - 1;
  v24 = v23;
  while ( v22 )
  {
    v25 = &v22[5 * v23 + 5];
    while ( v21 >= 0 )
    {
      if ( (*v25 & 1) != 0 )
      {
        v26 = (struct tagTHREADINFO *)*((_QWORD *)v25 - 4);
        if ( (*((_DWORD *)v26 + 122) & 1) == 0 )
          xxxImmActivateLayout(v26, a4);
      }
      if ( (*v25 & 3) == 1 )
        PopAndFreeW32ThreadLock((__int64)(&v22[4 * v21 + 2] + v21));
      --v21;
      v25 -= 10;
    }
    v21 = 15;
    v23 = 15LL;
    v22 = (struct tagTLBLOCK **)*v22;
  }
  v27 = &v35;
  v28 = v13 - 1;
  while ( v27 )
  {
    v29 = &v27[4 * v24 + 1] + v24;
    while ( v28 >= 0 )
    {
      if ( ((_DWORD)v29[4] & 2) != 0 )
      {
        if ( (*((_DWORD *)*v29 + 122) & 1) == 0 )
          xxxImmUnloadLayout(*v29, a5);
        PopAndFreeW32ThreadLock((__int64)(&v27[4 * v28 + 2] + v28));
      }
      --v28;
      v29 -= 5;
    }
    v28 = 15;
    v24 = 15LL;
    v27 = (struct tagTLBLOCK **)*v27;
  }
}
