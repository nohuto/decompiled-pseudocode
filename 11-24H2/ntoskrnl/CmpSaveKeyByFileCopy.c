/*
 * XREFs of CmpSaveKeyByFileCopy @ 0x1407CF4D0
 * Callers:
 *     CmSaveKey @ 0x1407CE0EC (CmSaveKey.c)
 * Callees:
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407D8440 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x1407D84D0 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpFileFlush @ 0x14096B41C (CmpFileFlush.c)
 *     CmpFileWrite @ 0x140A46660 (CmpFileWrite.c)
 *     CmpFileRead @ 0x140A4E030 (CmpFileRead.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpSaveKeyByFileCopy(__int64 a1, __int64 a2)
{
  _DWORD *Pool2; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // r15d
  unsigned int i; // ebx
  ULONG v10; // r14d
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  _DWORD v16[2]; // [rsp+30h] [rbp-20h] BYREF
  _DWORD *v17; // [rsp+38h] [rbp-18h]
  int v18; // [rsp+40h] [rbp-10h]

  v16[1] = 0;
  Pool2 = (_DWORD *)ExAllocatePool2(0x109uLL, 0x10000uLL, 0x20204D43u);
  if ( Pool2 )
  {
    CmpBecomeActiveFlusherAndReconciler(a1);
    v6 = a1;
    if ( (*(_DWORD *)(a1 + 4224) & 2) != 0 )
    {
      v5 = -1073741670;
LABEL_22:
      *(_QWORD *)(v6 + 1560) = 0LL;
      CmpFinishBeingActiveFlusherAndReconciler(a1);
      ExFreePoolWithTag(Pool2, 0);
      return v5;
    }
    *(_QWORD *)(a1 + 1560) = a2;
    v7 = CmpFileRead(a1, 0, 0, (int)Pool2, 0x1000u);
    v6 = a1;
    if ( v7 < 0 )
    {
LABEL_6:
      v5 = -1073741491;
      goto LABEL_22;
    }
    v8 = Pool2[10];
    v16[0] = 0;
    ++Pool2[1];
    v17 = Pool2;
    v18 = 4096;
    if ( (int)CmpFileWrite(a1, 2, (unsigned int)v16, 1, 0) < 0 )
      goto LABEL_8;
    for ( i = 0; i < v8; i += v10 )
    {
      v10 = v8 - i;
      if ( v8 - i > 0x10000 )
        v10 = 0x10000;
      v11 = CmpFileRead(a1, 0, i + 4096, (int)Pool2, v10);
      v6 = a1;
      if ( v11 < 0 )
        goto LABEL_6;
      v16[0] = i + 4096;
      v17 = Pool2;
      v18 = v10;
      if ( (int)CmpFileWrite(a1, 2, (unsigned int)v16, 1, 0) < 0 )
        goto LABEL_8;
    }
    v12 = CmpFileFlush(a1, 2LL);
    v6 = a1;
    if ( v12 < 0 )
      goto LABEL_6;
    v13 = CmpFileRead(a1, 0, 0, (int)Pool2, 0x1000u);
    v6 = a1;
    if ( v13 < 0 )
      goto LABEL_6;
    ++Pool2[1];
    ++Pool2[2];
    v16[0] = 0;
    v17 = Pool2;
    v18 = 4096;
    v14 = CmpFileWrite(a1, 2, (unsigned int)v16, 1, 0);
    v6 = a1;
    if ( v14 < 0 )
      goto LABEL_6;
    if ( (int)CmpFileFlush(a1, 2LL) < 0 )
LABEL_8:
      v5 = -1073741491;
    else
      v5 = 0;
    v6 = a1;
    goto LABEL_22;
  }
  return (unsigned int)-1073741670;
}
