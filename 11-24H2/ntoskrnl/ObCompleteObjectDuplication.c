/*
 * XREFs of ObCompleteObjectDuplication @ 0x140940288
 * Callers:
 *     AlpcpExposeHandleAttribute @ 0x140898760 (AlpcpExposeHandleAttribute.c)
 *     AlpcpQueryHandleInformationMessage @ 0x14093FF6C (AlpcpQueryHandleInformationMessage.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ObpFilterOperation @ 0x1404287E0 (ObpFilterOperation.c)
 *     ObpDecrementHandleCount @ 0x1408410A0 (ObpDecrementHandleCount.c)
 *     ExCreateHandleEx @ 0x14084CE30 (ExCreateHandleEx.c)
 *     ObpIncrementHandleCountEx @ 0x14084FB60 (ObpIncrementHandleCountEx.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140938740 (SeAuditingWithTokenForSubcategory.c)
 *     ObReferenceProcessHandleTable @ 0x140940570 (ObReferenceProcessHandleTable.c)
 *     ObpCallPostOperationCallbacks @ 0x140940A78 (ObpCallPostOperationCallbacks.c)
 *     ObpPreInterceptHandleDuplicate @ 0x1409A651C (ObpPreInterceptHandleDuplicate.c)
 *     EtwTraceDuplicateHandle @ 0x140A463D0 (EtwTraceDuplicateHandle.c)
 *     SeAuditHandleDuplication @ 0x140AAE150 (SeAuditHandleDuplication.c)
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
        Handle = ExCreateHandleEx(v10, v15, v37, *((_DWORD *)a1 + 9), (_DWORD *)a1 + 7);
        if ( Handle )
        {
          if ( (*((_DWORD *)a1 + 9) & 4) != 0 && SeAuditingWithTokenForSubcategory(124, 0LL) )
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
