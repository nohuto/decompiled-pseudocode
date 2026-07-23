/*
 * XREFs of CmpDoAccessCheckOnLayeredSubtree @ 0x1409090E8
 * Callers:
 *     CmSaveKey @ 0x1407CE0EC (CmSaveKey.c)
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpCheckKcbStackAccess @ 0x1406F6094 (CmpCheckKcbStackAccess.c)
 *     CmpSubtreeEnumeratorBeginForKeyNodeStack @ 0x1407E1B0C (CmpSubtreeEnumeratorBeginForKeyNodeStack.c)
 *     CmpSubtreeEnumeratorStartForKcbStack @ 0x1409077A0 (CmpSubtreeEnumeratorStartForKcbStack.c)
 *     CmpSubtreeEnumeratorStart @ 0x140908DB0 (CmpSubtreeEnumeratorStart.c)
 *     CmpCheckKeyNodeStackAccess @ 0x140909618 (CmpCheckKeyNodeStackAccess.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140909A04 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x14090A1FC (CmpSubtreeEnumeratorAdvance.c)
 *     CmpInitializeKeyNodeStack @ 0x14090A470 (CmpInitializeKeyNodeStack.c)
 */

__int64 __fastcall CmpDoAccessCheckOnLayeredSubtree(
        __int64 a1,
        __int64 a2,
        __int16 *a3,
        char a4,
        unsigned int a5,
        char a6)
{
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // ebx
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int16 v18; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v19[14]; // [rsp+32h] [rbp-A6h] BYREF
  _BYTE v20[80]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v21; // [rsp+90h] [rbp-48h]

  memset_0(v19, 0, 0x66uLL);
  v18 = -2;
  CmpInitializeKeyNodeStack(v20);
  if ( (a6 & 1) != 0 )
  {
    if ( a1 )
    {
      v11 = CmpCheckKcbStackAccess(a1, 0LL);
      if ( v11 < 0 )
        goto LABEL_4;
      goto LABEL_7;
    }
    LOBYTE(v10) = (a6 & 2) != 0;
    LOBYTE(v9) = a4;
    v11 = CmpCheckKeyNodeStackAccess(a3, v9, a5, v10);
    if ( v11 < 0 )
      goto LABEL_4;
  }
  if ( a1 )
  {
LABEL_7:
    v11 = CmpSubtreeEnumeratorStartForKcbStack((__int64)&v18, a1);
    if ( v11 >= 0 )
      goto LABEL_8;
    goto LABEL_4;
  }
  v11 = CmpSubtreeEnumeratorStart((__int64)&v18, *a3);
  if ( v11 >= 0 )
  {
    CmpSubtreeEnumeratorBeginForKeyNodeStack((__int64)&v18, a3);
LABEL_8:
    while ( (unsigned int)CmpSubtreeEnumeratorAdvance(&v18) != -2147483622 )
    {
      v14 = v21 + 408LL * v18;
      v15 = *(_QWORD *)(v14 + 8);
      v16 = *(_QWORD *)(v14 + 16);
      if ( v15 )
      {
        v17 = CmpCheckKcbStackAccess(v15, 0LL);
      }
      else
      {
        LOBYTE(v13) = (a6 & 2) != 0;
        LOBYTE(v14) = a4;
        v17 = CmpCheckKeyNodeStackAccess(v16, v14, a5, v13);
      }
      v11 = v17;
      if ( v17 < 0 )
        goto LABEL_4;
    }
    v11 = 0;
  }
LABEL_4:
  CmpSubtreeEnumeratorCleanup(&v18);
  return (unsigned int)v11;
}
