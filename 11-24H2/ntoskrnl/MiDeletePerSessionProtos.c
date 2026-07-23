/*
 * XREFs of MiDeletePerSessionProtos @ 0x140490370
 * Callers:
 *     MiDereferencePerSessionProtos @ 0x140A18828 (MiDereferencePerSessionProtos.c)
 *     MiFreeSubsectionProtos @ 0x140A86254 (MiFreeSubsectionProtos.c)
 * Callees:
 *     MiDeleteTransitionPte @ 0x140204FF0 (MiDeleteTransitionPte.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140290A8C (MiUpdateSystemProtoPtesTree.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiLockProtoPoolPageForce @ 0x140333E20 (MiLockProtoPoolPageForce.c)
 *     MiLockLeafPage @ 0x140349740 (MiLockLeafPage.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiReleasePageFileSpace @ 0x1403D2B30 (MiReleasePageFileSpace.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeletePerSessionProtos(PVOID P, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r8
  __int64 v5; // rdi
  ULONG_PTR v6; // rbx
  __int64 v8; // rbp
  ULONG_PTR v9; // r14
  __int64 v10; // r15
  unsigned __int64 v11; // rdx
  ULONG_PTR v12; // rax
  int v14; // eax
  __int64 v15; // rcx
  __int64 DemandZeroPte; // rax
  unsigned __int8 v17; // [rsp+40h] [rbp+8h] BYREF

  v4 = (unsigned int *)*((_QWORD *)P + 8);
  v5 = 0LL;
  v6 = *((_QWORD *)P + 9);
  v8 = v4[11];
  v9 = v6 + 8 * v8;
  v11 = *(_WORD *)(*(_QWORD *)v4 + 60LL) & 0x3FF;
  v10 = *((_QWORD *)qword_140E300C8 + v11);
  LOBYTE(v11) = 17;
  v17 = 17;
  if ( v6 < v9 )
  {
    while ( 1 )
    {
      if ( (v6 & 0xFFF) == 0 || !v5 )
      {
        if ( v5 )
          MiUnlockProtoPoolPage(v5, v11, (__int64)v4, a4);
        v5 = MiLockProtoPoolPageForce(v6, &v17);
      }
      v12 = MiLockLeafPage((unsigned __int64 *)v6, 0);
      v11 = *(_QWORD *)v6;
      if ( v12 )
      {
        LOBYTE(v4) = 17;
        v14 = MiDeleteTransitionPte((__int64 *)v6, v12, (__int64)v4, 0);
        v15 = v8 - 1;
        if ( v14 != 3 )
          v15 = v8;
        v8 = v15;
      }
      else
      {
        if ( !v11 )
          break;
        if ( (v11 & 0x400) == 0 )
        {
          DemandZeroPte = MiMakeDemandZeroPte(24);
          if ( v11 != DemandZeroPte )
            MiReleasePageFileSpace(v10, v11, 1);
        }
      }
      v6 += 8LL;
      if ( v6 >= v9 )
        break;
      LOBYTE(v11) = v17;
    }
    if ( v5 )
    {
      LOBYTE(v11) = v17;
      MiUnlockProtoPoolPage(v5, v11, (__int64)v4, a4);
    }
  }
  MiReturnCommit(v10, v8, 0);
  MiUpdateSystemProtoPtesTree((__int64)P + 24, 0);
  ExFreePoolWithTag(*((PVOID *)P + 9), 0);
  ExFreePoolWithTag(P, 0);
  return v8;
}
