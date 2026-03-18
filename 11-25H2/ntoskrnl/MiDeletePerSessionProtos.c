/*
 * XREFs of MiDeletePerSessionProtos @ 0x1404967DC
 * Callers:
 *     MiDereferencePerSessionProtos @ 0x140A1D1D8 (MiDereferencePerSessionProtos.c)
 *     MiFreeSubsectionProtos @ 0x140A85348 (MiFreeSubsectionProtos.c)
 * Callees:
 *     MiLockProtoPoolPageForce @ 0x140231620 (MiLockProtoPoolPageForce.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402A87DC (MiUpdateSystemProtoPtesTree.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     MiLockLeafPage @ 0x14033B770 (MiLockLeafPage.c)
 *     MiDeleteTransitionPte @ 0x140340900 (MiDeleteTransitionPte.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiReleasePageFileSpace @ 0x1403E1160 (MiReleasePageFileSpace.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeletePerSessionProtos(PVOID P, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int *v4; // r8
  ULONG_PTR v5; // rdi
  ULONG_PTR v6; // rbx
  __int64 v8; // rbp
  ULONG_PTR v9; // r14
  __int64 v10; // r15
  unsigned __int8 v11; // dl
  ULONG_PTR v12; // rax
  unsigned __int64 v13; // rdx
  int v15; // eax
  __int64 v16; // rcx
  __int64 DemandZeroPte; // rax
  unsigned __int64 v18; // rdx
  unsigned __int8 v19; // [rsp+40h] [rbp+8h] BYREF

  v4 = (unsigned int *)*((_QWORD *)P + 8);
  v5 = 0LL;
  v6 = *((_QWORD *)P + 9);
  v8 = v4[11];
  v9 = v6 + 8 * v8;
  v10 = *((_QWORD *)qword_140E2FD48 + (*(_WORD *)(*(_QWORD *)v4 + 60LL) & 0x3FF));
  v11 = 17;
  v19 = 17;
  if ( v6 < v9 )
  {
    while ( 1 )
    {
      if ( (v6 & 0xFFF) == 0 || !v5 )
      {
        if ( v5 )
          MiUnlockProtoPoolPage(v5, v11, (__int64)v4, a4);
        v5 = MiLockProtoPoolPageForce(v6, &v19);
      }
      v12 = MiLockLeafPage((unsigned __int64 *)v6, 0);
      v13 = *(_QWORD *)v6;
      if ( v12 )
      {
        v15 = MiDeleteTransitionPte((__int64 *)v6, v12, 0x11u, 0);
        v16 = v8 - 1;
        if ( v15 != 3 )
          v16 = v8;
        v8 = v16;
      }
      else
      {
        if ( !v13 )
          break;
        if ( (v13 & 0x400) == 0 )
        {
          DemandZeroPte = MiMakeDemandZeroPte(24);
          if ( v18 != DemandZeroPte )
            MiReleasePageFileSpace(v10, v18, 1);
        }
      }
      v6 += 8LL;
      if ( v6 >= v9 )
        break;
      v11 = v19;
    }
    if ( v5 )
      MiUnlockProtoPoolPage(v5, v19, (__int64)v4, a4);
  }
  MiReturnCommit(v10, v8, 0);
  MiUpdateSystemProtoPtesTree((__int64)P + 24, 0);
  ExFreePoolWithTag(*((PVOID *)P + 9), 0);
  ExFreePoolWithTag(P, 0);
  return v8;
}
