/*
 * XREFs of ?xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z @ 0x1C0090BA8
 * Callers:
 *     EditionFreeIMEKeyboardLayouts @ 0x1C0090B40 (EditionFreeIMEKeyboardLayouts.c)
 *     ?xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z @ 0x1C0090BA8 (-xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z.c)
 * Callees:
 *     ?xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z @ 0x1C0090BA8 (-xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z.c)
 *     LockW32Thread @ 0x1C00ACAAC (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00AD580 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     ?xxxImmUnloadLayout@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01B79FC (-xxxImmUnloadLayout@@YAXPEAUtagTHREADINFO@@K@Z.c)
 */

void __fastcall xxxImmUnloadThreadsLayout(struct tagTHREADINFO **a1, int a2, struct tagTLBLOCK *a3, unsigned int a4)
{
  int v8; // esi
  int v9; // ebx
  struct tagTHREADINFO **v10; // r15
  struct tagTHREADINFO **v11; // r14
  struct tagTHREADINFO *v12; // r8
  int v13; // eax
  __int64 v14; // r13
  unsigned int v15; // esi
  int v16; // r12d
  bool v17; // r14
  __int64 v18; // rax
  int v19; // edi
  struct tagTLBLOCK **v20; // rbx
  __int64 v21; // rdx
  struct tagTHREADINFO **v22; // r15
  struct tagTLBLOCK **v23; // rbp
  struct tagTLBLOCK *v24; // [rsp+30h] [rbp-2E8h] BYREF
  _BYTE v25[648]; // [rsp+38h] [rbp-2E0h] BYREF

  memset_0(v25, 0, 0x280uLL);
  PtiCurrentShared();
  v24 = a3;
  v8 = 0;
  v9 = 0;
  if ( a2 > 0 )
  {
    v10 = (struct tagTHREADINFO **)v25;
    v11 = a1;
    do
    {
      if ( v9 >= 16 )
        break;
      v12 = *v11;
      if ( (*((_DWORD *)*v11 + 122) & 1) == 0 )
      {
        if ( *((_QWORD *)v12 + 98) )
        {
          v21 = *((_QWORD *)v12 + 55);
          if ( v21 )
          {
            if ( a4 != 1 || (*gpsi & 4) != 0 || (*(_WORD *)(v21 + 42) & 0xF000) == 0xE000 )
            {
              LockW32Thread(*v11, &v25[40 * v9++ + 8]);
              *v10 = *v11;
              v10 += 5;
            }
          }
        }
      }
      ++v8;
      ++v11;
    }
    while ( v8 < a2 );
  }
  v13 = v8 + 1;
  if ( v9 != 16 )
    v13 = v8;
  if ( v13 >= a2 )
  {
    v14 = v9;
    v15 = 1;
    v16 = v9 - 1;
    v17 = a4 != 2;
    if ( a4 != 2 )
      v15 = a4;
    while ( 1 )
    {
      v18 = v14 - 1;
      v19 = v16;
      v20 = &v24;
      if ( v16 >= 0 )
      {
LABEL_23:
        v22 = &v20[5 * v18 + 1];
        v23 = &v20[4 * (unsigned int)v19 + 2] + (unsigned int)v19;
        do
        {
          if ( (*((_DWORD *)*v22 + 122) & 1) == 0 )
            xxxImmUnloadLayout(*v22, v15);
          if ( v17 )
            PopAndFreeW32ThreadLock(v23);
          v23 -= 5;
          v22 -= 5;
          --v19;
        }
        while ( v19 >= 0 );
      }
      v20 = (struct tagTLBLOCK **)*v20;
      v19 = 15;
      v18 = 15LL;
      if ( v20 )
        goto LABEL_23;
      if ( v17 )
        return;
      v17 = 1;
      v15 = 2;
    }
  }
  xxxImmUnloadThreadsLayout(&a1[v13], a2 - v13, (struct tagTLBLOCK *)&v24, a4);
}
