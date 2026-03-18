/*
 * XREFs of ObCompleteObjectDuplication @ 0x1408AD954
 * Callers:
 *     AlpcpExposeHandleAttribute @ 0x1408A8710 (AlpcpExposeHandleAttribute.c)
 *     AlpcpQueryHandleInformationMessage @ 0x1408AD638 (AlpcpQueryHandleInformationMessage.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ObpFilterOperation @ 0x14042F940 (ObpFilterOperation.c)
 *     ObpDecrementHandleCount @ 0x140844E00 (ObpDecrementHandleCount.c)
 *     ExCreateHandleEx @ 0x140851070 (ExCreateHandleEx.c)
 *     ObpIncrementHandleCountEx @ 0x1408539A0 (ObpIncrementHandleCountEx.c)
 *     ObReferenceProcessHandleTable @ 0x1408ADC40 (ObReferenceProcessHandleTable.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140936F00 (SeAuditingWithTokenForSubcategory.c)
 *     SeAuditHandleDuplication @ 0x140985E58 (SeAuditHandleDuplication.c)
 *     ObpPreInterceptHandleDuplicate @ 0x14099B8E8 (ObpPreInterceptHandleDuplicate.c)
 *     ObpCallPostOperationCallbacks @ 0x14099BDC0 (ObpCallPostOperationCallbacks.c)
 *     EtwTraceDuplicateHandle @ 0x140A422FC (EtwTraceDuplicateHandle.c)
 */

__int64 __fastcall ObCompleteObjectDuplication(
        __int64 *a1,
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
  __int64 Handle; // r15
  unsigned __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rax
  int *v23; // rcx
  int v24; // eax
  __int64 v26; // r9
  int v27; // [rsp+48h] [rbp-21h] BYREF
  __int64 v28; // [rsp+50h] [rbp-19h]
  _QWORD v29[2]; // [rsp+58h] [rbp-11h] BYREF
  _DWORD v30[2]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v31; // [rsp+70h] [rbp+7h]
  __int64 v32; // [rsp+78h] [rbp+Fh]
  __int64 v33; // [rsp+80h] [rbp+17h]
  int v34; // [rsp+88h] [rbp+1Fh]
  int v35; // [rsp+8Ch] [rbp+23h]
  int *v36; // [rsp+90h] [rbp+27h]
  int v37; // [rsp+E0h] [rbp+77h] BYREF

  *a4 = 0LL;
  v9 = ObReferenceProcessHandleTable(a2);
  v10 = (unsigned int *)v9;
  if ( v9 )
  {
    v11 = a1[2];
    v12 = v9 == ObpKernelHandleTable;
    v37 = *((_DWORD *)a1 + 6);
    v13 = ObpIncrementHandleCountEx(2u, (__int64)&v37, a2, v11, a3, *((_DWORD *)a1 + 9), 0LL);
    if ( v13 >= 0 )
    {
      v14 = a1[2];
      v15 = v14 - 48;
      v16 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v14 - 48 + 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v14 - 48) >> 8)];
      v29[1] = v29;
      v29[0] = v29;
      v28 = v16;
      if ( !ObpFilterOperation(v16) )
      {
LABEL_4:
        ObfReferenceObjectWithTag((PVOID)a1[2], 0x6E48624Fu);
        Handle = ExCreateHandleEx(v10, v15, v37, *((_DWORD *)a1 + 9), (__int64)a1 + 28);
        if ( Handle )
        {
          if ( (*((_DWORD *)a1 + 9) & 4) != 0 && (unsigned __int8)SeAuditingWithTokenForSubcategory(124LL, 0LL) )
            SeAuditHandleDuplication(a1[1], Handle, *a1, a2);
        }
        else
        {
          ObfDereferenceObjectWithTag((PVOID)a1[2], 0x6E48624Fu);
          ObpDecrementHandleCount((PRKPROCESS)a2, v15);
          v13 = -1073741670;
        }
        v20 = Handle | 0xFFFFFFFF80000000uLL;
        if ( !v12 )
          v20 = Handle;
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 488));
        if ( (_QWORD *)v29[0] != v29 )
        {
          v21 = a1[2];
          v33 = 0LL;
          v35 = 0;
          v36 = &v27;
          v31 = v21;
          v30[1] = v12;
          v22 = *(unsigned __int8 *)(v21 - 24);
          v30[0] = 2;
          v34 = v13;
          v32 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v22 ^ (unsigned __int8)((unsigned __int16)(v21 - 48) >> 8)];
          v27 = v37;
          ObpCallPostOperationCallbacks(v30, v29);
        }
        if ( v13 >= 0 )
        {
          v23 = a5;
          v24 = v37;
          *a4 = v20;
          *v23 = v24;
        }
        if ( (xmmword_140FC5B10 & 0x40) != 0 && v13 >= 0 )
          EtwTraceDuplicateHandle(a1[1], v20, a1[2], *(_DWORD *)(*a1 + 464), *(_DWORD *)(a2 + 464), v28);
        return (unsigned int)v13;
      }
      v26 = *a1;
      LOBYTE(v17) = v12;
      v27 = v37;
      v13 = ObpPreInterceptHandleDuplicate(v18, v17, (unsigned int)&v27, v26, a2, (__int64)v29);
      if ( v13 >= 0 )
      {
        if ( !v12 )
          v37 = v27;
        goto LABEL_4;
      }
      ObpDecrementHandleCount((PRKPROCESS)a2, v15);
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 488));
    return (unsigned int)v13;
  }
  return 3221225738LL;
}
