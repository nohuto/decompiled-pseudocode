/*
 * XREFs of VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140829C2C
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x14092B3C0 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsGetPermanentSiloContext @ 0x1403E3CE0 (PsGetPermanentSiloContext.c)
 *     PsIsThreadInSilo @ 0x1404070DC (PsIsThreadInSilo.c)
 *     PsGetJobSilo @ 0x140407170 (PsGetJobSilo.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     VrpDestroyNamespaceNode @ 0x14092B1C0 (VrpDestroyNamespaceNode.c)
 *     VRegEnabledInJob @ 0x14092B820 (VRegEnabledInJob.c)
 *     VrpUnlockJobContextExclusive @ 0x14092BC6C (VrpUnlockJobContextExclusive.c)
 *     VrpCreateNamespaceNode @ 0x14092BCA8 (VrpCreateNamespaceNode.c)
 *     VrpLockJobContextExclusive @ 0x14092C1A4 (VrpLockJobContextExclusive.c)
 *     VrpAddNamespaceNodeToList @ 0x14092C204 (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x14092C328 (VrpCreateNamespaceNodePlaceholderKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpHandleIoctlCreateMultipleNamespaceNodes(
        ULONG_PTR *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        PVOID Object)
{
  unsigned int v6; // r13d
  ULONG_PTR *v7; // r12
  _QWORD *v8; // rbx
  __int64 v9; // r14
  int v10; // r15d
  unsigned __int64 v11; // rsi
  int JobSilo; // edi
  int PermanentSiloContext; // eax
  unsigned __int64 v14; // rax
  char *v15; // r8
  __int64 v16; // rcx
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  int v19; // edi
  _QWORD *Pool2; // rax
  __int64 v21; // r8
  _QWORD *v22; // rsi
  _QWORD *i; // rsi
  _QWORD *j; // rsi
  __int64 v26; // [rsp+40h] [rbp-30h] BYREF
  __int128 v27; // [rsp+48h] [rbp-28h] BYREF
  __int128 v28; // [rsp+58h] [rbp-18h] BYREF
  int v31; // [rsp+C8h] [rbp+58h]

  v6 = 0;
  v7 = a1;
  v8 = 0LL;
  Object = 0LL;
  v9 = 0LL;
  a5 = 0LL;
  v10 = 0;
  v11 = 12LL;
  if ( a2 < 0xC )
    goto LABEL_2;
  ObpReferenceObjectByHandleWithTag(*a1, 0x52566D43u, (__int64)&Object, 0LL, 0LL);
  JobSilo = PsGetJobSilo((__int64)Object);
  if ( JobSilo < 0 )
    goto LABEL_33;
  if ( PsIsThreadInSilo((__int64)KeGetCurrentThread(), 0LL) )
  {
LABEL_2:
    JobSilo = -1073741811;
  }
  else
  {
    v26 = 0LL;
    VRegEnabledInJob(&v26);
    PermanentSiloContext = PsGetPermanentSiloContext(0LL, VrpSiloContextSlot, (unsigned __int64 *)&a5);
    v9 = a5;
    JobSilo = PermanentSiloContext;
    if ( PermanentSiloContext < 0 )
      goto LABEL_33;
    VrpLockJobContextExclusive(a5);
    v10 = 1;
    while ( 1 )
    {
      if ( v6 >= *((_DWORD *)v7 + 2) )
      {
        for ( i = v8; i; i = (_QWORD *)*i )
        {
          JobSilo = VrpAddNamespaceNodeToList(v9, i[1]);
          if ( JobSilo < 0 )
            goto LABEL_33;
        }
        for ( j = v8; j; j = (_QWORD *)*j )
        {
          JobSilo = VrpCreateNamespaceNodePlaceholderKey(j[1]);
          if ( JobSilo < 0 )
            goto LABEL_33;
        }
        JobSilo = 0;
        goto LABEL_33;
      }
      v14 = v11 + 12;
      a5 = 0LL;
      v15 = (char *)v7 + v11;
      v28 = 0LL;
      v27 = 0LL;
      if ( v11 >= v11 + 12 )
        goto LABEL_23;
      if ( a2 < v14 )
        goto LABEL_23;
      v16 = *((unsigned __int16 *)v15 + 2);
      if ( (v16 & 1) != 0 )
        goto LABEL_23;
      if ( !(_WORD)v16 )
        goto LABEL_23;
      v17 = v16 + v14;
      if ( v14 > v16 + v14 )
        goto LABEL_23;
      v18 = *((unsigned __int16 *)v15 + 3);
      if ( (v18 & 1) != 0 )
        goto LABEL_23;
      if ( !(_WORD)v18 )
        goto LABEL_23;
      v11 = v17 + v18;
      if ( v17 > v17 + v18 )
        goto LABEL_23;
      if ( a2 < v11 )
        goto LABEL_23;
      v19 = *((_DWORD *)v15 + 2);
      *((_QWORD *)&v28 + 1) = v15 + 12;
      WORD1(v28) = v16;
      LOWORD(v28) = v16;
      WORD1(v27) = v18;
      LOWORD(v27) = v18;
      *((_QWORD *)&v27 + 1) = &v15[2 * ((unsigned __int64)(unsigned int)v16 >> 1) + 12];
      v31 = *(_DWORD *)v15;
      if ( (v19 & 7) != v19 )
      {
LABEL_23:
        JobSilo = -1073741811;
        goto LABEL_33;
      }
      Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, 0x10uLL, 0x67655256u);
      if ( !Pool2 )
      {
        JobSilo = -1073741670;
        goto LABEL_33;
      }
      Pool2[1] = 0LL;
      v21 = v26;
      *Pool2 = v8;
      v8 = Pool2;
      JobSilo = VrpCreateNamespaceNode(v9, &v28, v21, &v27, v19, v31, &a5);
      if ( JobSilo < 0 )
        break;
      ++v6;
      v7 = a1;
      v8[1] = a5;
    }
    v22 = v8;
    do
    {
      v8 = (_QWORD *)*v8;
      if ( JobSilo < 0 && v22[1] )
        VrpDestroyNamespaceNode(v9);
      ExFreePoolWithTag(v22, 0x67655256u);
LABEL_33:
      v22 = v8;
    }
    while ( v8 );
    if ( v10 )
      VrpUnlockJobContextExclusive(v9);
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
