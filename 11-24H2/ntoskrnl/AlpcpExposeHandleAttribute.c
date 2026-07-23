/*
 * XREFs of AlpcpExposeHandleAttribute @ 0x1408A0E00
 * Callers:
 *     AlpcpExposeAttributes @ 0x1408A0770 (AlpcpExposeAttributes.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObCompleteObjectDuplication @ 0x1408948C8 (ObCompleteObjectDuplication.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReferenceConnectedPort @ 0x1408E89B0 (AlpcpReferenceConnectedPort.c)
 */

__int64 __fastcall AlpcpExposeHandleAttribute(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _QWORD *v6; // rbx
  _DWORD *v7; // rdi
  char PreviousMode; // r12
  int v10; // r13d
  void *v11; // r15
  int v12; // eax
  int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // rdx
  __int128 v16; // [rsp+58h] [rbp-40h] BYREF
  __int64 v17; // [rsp+68h] [rbp-30h] BYREF

  v6 = (_QWORD *)(a2 + 152);
  v7 = *(_DWORD **)(a2 + 152);
  if ( !v7 )
    return 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v10 = 0;
  v11 = 0LL;
  if ( (*(_DWORD *)(a1 + 416) & 6) == 2 )
  {
    v14 = AlpcpReferenceConnectedPort(*(_QWORD *)(a2 + 24));
    v11 = (void *)v14;
    if ( !v14 )
    {
      v13 = -1073741769;
      goto LABEL_8;
    }
    a1 = v14;
  }
  v12 = *(_DWORD *)(a1 + 256);
  if ( (v12 & 0x80000) == 0 )
    goto LABEL_16;
  v16 = 0LL;
  v17 = 0LL;
  if ( (v12 & 0x2000000) == 0 )
  {
    if ( v7[1] <= 1u )
    {
      if ( (*v7 & *(_DWORD *)(a1 + 320)) == 0 )
      {
        v13 = -1073741788;
        goto LABEL_8;
      }
      v15 = *(_QWORD *)(a1 + 24);
      if ( (v15 & 1) != 0 )
        v15 = 0LL;
      if ( v15 )
      {
        LODWORD(v17) = *v7 & *(_DWORD *)(a1 + 320);
        v13 = ObCompleteObjectDuplication(
                (__int64)(v7 + 2),
                v15,
                PreviousMode,
                (unsigned __int64 *)&v16 + 1,
                (int *)&v17 + 1);
        if ( v13 < 0 )
          goto LABEL_8;
        goto LABEL_7;
      }
    }
LABEL_16:
    v13 = -1073741790;
    goto LABEL_8;
  }
  LODWORD(v16) = 0x40000;
  LODWORD(v17) = v7[1];
  v10 = 1;
LABEL_7:
  v13 = 0;
  *(_OWORD *)a3 = v16;
  *(_QWORD *)(a3 + 16) = v17;
  *a4 |= 0x10000000u;
LABEL_8:
  if ( v11 )
    ObfDereferenceObject(v11);
  if ( !v10 )
  {
    AlpcpDereferenceBlobEx((ULONG_PTR)v7, 1);
    *v6 = 0LL;
  }
  return (unsigned int)v13;
}
