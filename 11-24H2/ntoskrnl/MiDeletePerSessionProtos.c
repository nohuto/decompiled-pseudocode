/*
 * XREFs of MiDeletePerSessionProtos @ 0x140495AB0
 * Callers:
 *     MiDereferencePerSessionProtos @ 0x140A24458 (MiDereferencePerSessionProtos.c)
 *     MiFreeSubsectionProtos @ 0x140A89E54 (MiFreeSubsectionProtos.c)
 * Callees:
 *     MiLockProtoPoolPageForce @ 0x140215A80 (MiLockProtoPoolPageForce.c)
 *     MiDeleteTransitionPte @ 0x14023D260 (MiDeleteTransitionPte.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14026047C (MiUpdateSystemProtoPtesTree.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiLockLeafPage @ 0x1402E8100 (MiLockLeafPage.c)
 *     MiReleasePageFileSpace @ 0x1403E4F90 (MiReleasePageFileSpace.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeletePerSessionProtos(PVOID P)
{
  unsigned int *v1; // r8
  ULONG_PTR v2; // rdi
  ULONG_PTR v3; // rbx
  __int64 v5; // rbp
  ULONG_PTR v6; // r14
  __int64 v7; // r15
  unsigned __int64 v8; // rdx
  ULONG_PTR v9; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 DemandZeroPte; // rax
  unsigned __int8 v14; // [rsp+40h] [rbp+8h] BYREF

  v1 = (unsigned int *)*((_QWORD *)P + 8);
  v2 = 0LL;
  v3 = *((_QWORD *)P + 9);
  v5 = v1[11];
  v6 = v3 + 8 * v5;
  v8 = *(_WORD *)(*(_QWORD *)v1 + 60LL) & 0x3FF;
  v7 = *((_QWORD *)qword_140E2FF88 + v8);
  LOBYTE(v8) = 17;
  v14 = 17;
  if ( v3 < v6 )
  {
    while ( 1 )
    {
      if ( (v3 & 0xFFF) == 0 || !v2 )
      {
        if ( v2 )
          MiUnlockProtoPoolPage(v2, v8, (__int64)v1);
        v2 = MiLockProtoPoolPageForce(v3, &v14);
      }
      v9 = MiLockLeafPage((unsigned __int64 *)v3, 0);
      v8 = *(_QWORD *)v3;
      if ( v9 )
      {
        v11 = MiDeleteTransitionPte((__int64 *)v3, v9, 0x11u, 0);
        v12 = v5 - 1;
        if ( v11 != 3 )
          v12 = v5;
        v5 = v12;
      }
      else
      {
        if ( !v8 )
          break;
        if ( (v8 & 0x400) == 0 )
        {
          DemandZeroPte = MiMakeDemandZeroPte(24);
          if ( v8 != DemandZeroPte )
            MiReleasePageFileSpace(v7, v8, 1);
        }
      }
      v3 += 8LL;
      if ( v3 >= v6 )
        break;
      LOBYTE(v8) = v14;
    }
    if ( v2 )
    {
      LOBYTE(v8) = v14;
      MiUnlockProtoPoolPage(v2, v8, (__int64)v1);
    }
  }
  MiReturnCommit(v7, v5, 0);
  MiUpdateSystemProtoPtesTree((__int64)P + 24, 0);
  ExFreePoolWithTag(*((PVOID *)P + 9), 0);
  ExFreePoolWithTag(P, 0);
  return v5;
}
