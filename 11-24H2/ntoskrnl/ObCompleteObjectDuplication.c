/*
 * XREFs of ObCompleteObjectDuplication @ 0x1408948C8
 * Callers:
 *     AlpcpQueryHandleInformationMessage @ 0x1408945AC (AlpcpQueryHandleInformationMessage.c)
 *     AlpcpExposeHandleAttribute @ 0x1408A0E00 (AlpcpExposeHandleAttribute.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ObpFilterOperation @ 0x14041C760 (ObpFilterOperation.c)
 *     ObpDecrementHandleCount @ 0x14083D360 (ObpDecrementHandleCount.c)
 *     ExCreateHandleEx @ 0x1408490F0 (ExCreateHandleEx.c)
 *     ObpIncrementHandleCountEx @ 0x14084BE20 (ObpIncrementHandleCountEx.c)
 *     SeAuditHandleDuplication @ 0x140863C90 (SeAuditHandleDuplication.c)
 *     ObReferenceProcessHandleTable @ 0x140894BB0 (ObReferenceProcessHandleTable.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1408F2E10 (SeAuditingWithTokenForSubcategory.c)
 *     ObpPreInterceptHandleDuplicate @ 0x140977BF0 (ObpPreInterceptHandleDuplicate.c)
 *     ObpCallPostOperationCallbacks @ 0x1409780DC (ObpCallPostOperationCallbacks.c)
 *     EtwTraceDuplicateHandle @ 0x140A3C190 (EtwTraceDuplicateHandle.c)
 */

__int64 __fastcall ObCompleteObjectDuplication(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned __int64 *a4,
        int *a5)
{
  __int64 v9; // rax
  unsigned int *v10; // r15
  __int64 v11; // r9
  bool v12; // r12
  int v13; // esi
  __int64 v14; // r10
  __int64 v15; // r14
  __int64 v16; // rax
  int v17; // edx
  int v18; // r10d
  unsigned __int64 Handle; // r15
  unsigned __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rax
  int *v23; // rcx
  int v24; // eax
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // [rsp+48h] [rbp-21h] BYREF
  __int64 v32; // [rsp+50h] [rbp-19h]
  _QWORD v33[2]; // [rsp+58h] [rbp-11h] BYREF
  _DWORD v34[2]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v35; // [rsp+70h] [rbp+7h]
  __int64 v36; // [rsp+78h] [rbp+Fh]
  __int64 v37; // [rsp+80h] [rbp+17h]
  int v38; // [rsp+88h] [rbp+1Fh]
  int v39; // [rsp+8Ch] [rbp+23h]
  int *v40; // [rsp+90h] [rbp+27h]
  int v41; // [rsp+E0h] [rbp+77h] BYREF

  *a4 = 0LL;
  v9 = ObReferenceProcessHandleTable(a2);
  v10 = (unsigned int *)v9;
  if ( v9 )
  {
    v11 = *(_QWORD *)(a1 + 16);
    v12 = v9 == ObpKernelHandleTable;
    v41 = *(_DWORD *)(a1 + 24);
    v13 = ObpIncrementHandleCountEx(2u, (__int64)&v41, a2, v11, a3, *(_DWORD *)(a1 + 36), 0LL);
    if ( v13 >= 0 )
    {
      v14 = *(_QWORD *)(a1 + 16);
      v15 = v14 - 48;
      v16 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v14 - 48 + 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v14 - 48) >> 8)];
      v33[1] = v33;
      v33[0] = v33;
      v32 = v16;
      if ( !ObpFilterOperation(v16) )
      {
LABEL_4:
        ObfReferenceObjectWithTag(*(PVOID *)(a1 + 16), 0x6E48624Fu);
        Handle = ExCreateHandleEx(v10, v15, v41, *(_DWORD *)(a1 + 36), (_DWORD *)(a1 + 28));
        if ( Handle )
        {
          if ( (*(_DWORD *)(a1 + 36) & 4) != 0 && (unsigned __int8)SeAuditingWithTokenForSubcategory(124LL, 0LL) )
            SeAuditHandleDuplication(*(_QWORD *)(a1 + 8), Handle, *(_QWORD *)a1, a2);
        }
        else
        {
          ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 16), 0x6E48624Fu);
          ObpDecrementHandleCount((PRKPROCESS)a2, v15, v29, v30);
          v13 = -1073741670;
        }
        v20 = Handle | 0xFFFFFFFF80000000uLL;
        if ( !v12 )
          v20 = Handle;
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 488));
        if ( (_QWORD *)v33[0] != v33 )
        {
          v21 = *(_QWORD *)(a1 + 16);
          v37 = 0LL;
          v39 = 0;
          v40 = &v31;
          v35 = v21;
          v34[1] = v12;
          v22 = *(unsigned __int8 *)(v21 - 24);
          v34[0] = 2;
          v38 = v13;
          v36 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v22 ^ (unsigned __int8)((unsigned __int16)(v21 - 48) >> 8)];
          v31 = v41;
          ObpCallPostOperationCallbacks(v34, v33);
        }
        if ( v13 >= 0 )
        {
          v23 = a5;
          v24 = v41;
          *a4 = v20;
          *v23 = v24;
        }
        if ( (xmmword_140FC6B50 & 0x40) != 0 && v13 >= 0 )
          EtwTraceDuplicateHandle(
            *(_QWORD *)(a1 + 8),
            v20,
            *(_QWORD *)(a1 + 16),
            *(_DWORD *)(*(_QWORD *)a1 + 464LL),
            *(_DWORD *)(a2 + 464),
            v32);
        return (unsigned int)v13;
      }
      v26 = *(_QWORD *)a1;
      LOBYTE(v17) = v12;
      v31 = v41;
      v13 = ObpPreInterceptHandleDuplicate(v18, v17, (unsigned int)&v31, v26, a2, (__int64)v33);
      if ( v13 >= 0 )
      {
        if ( !v12 )
          v41 = v31;
        goto LABEL_4;
      }
      ObpDecrementHandleCount((PRKPROCESS)a2, v15, v27, v28);
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 488));
    return (unsigned int)v13;
  }
  return 3221225738LL;
}
