/*
 * XREFs of MiCreateCombineAnchor @ 0x1402945B4
 * Callers:
 *     MiConvertPrivateToProto @ 0x140294520 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x1403F0D74 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiReferenceCloneProto @ 0x140294790 (MiReferenceCloneProto.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

__int64 __fastcall MiCreateCombineAnchor(__int64 *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // esi
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  unsigned int v10; // r8d
  _QWORD *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rdi

  v3 = 0;
  v4 = *a1;
  v5 = a1[14];
  v8 = *a1 + 16LL * (*(_DWORD *)(a2 + 8) & 0xF);
  *a3 = 0LL;
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v8 + 104));
  v9 = *(_QWORD *)(a2 + 8);
  v10 = *(_DWORD *)(a2 + 32) & 0x1F;
  v11 = (_QWORD *)(a2 + 24);
  v12 = *(_QWORD *)(v4 + 16 * ((v9 & 0xF) + 6));
  while ( v12 )
  {
    if ( v9 > *(_QWORD *)(v12 + 24) )
      goto LABEL_11;
    if ( v9 < *(_QWORD *)(v12 + 24) )
      goto LABEL_4;
    if ( v10 > (*(_DWORD *)(v12 + 48) & 0x1Fu) )
      goto LABEL_11;
    if ( v10 < (*(_DWORD *)(v12 + 48) & 0x1Fu) )
      goto LABEL_4;
    if ( !v11 )
      break;
    if ( *v11 > *(_QWORD *)(v12 + 64) )
    {
LABEL_11:
      v12 = *(_QWORD *)(v12 + 8);
    }
    else
    {
      if ( *v11 >= *(_QWORD *)(v12 + 64) )
        break;
LABEL_4:
      v12 = *(_QWORD *)v12;
    }
  }
  if ( v12 && *(_QWORD *)(v12 + 56) )
  {
    v13 = *(_QWORD *)((v12 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
    if ( (unsigned int)MiReferenceCloneProto(v5, *(_QWORD *)v13, (int)v12 + 32, 0, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 392));
      v3 = -1073741302;
      *a3 = v12;
    }
    else
    {
      v3 = -1073741670;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v8 + 104));
  return v3;
}
