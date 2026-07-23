/*
 * XREFs of IopMcFindNextTableEntryForUnlock @ 0x1404315E0
 * Callers:
 *     IoTryReleasePages @ 0x140431500 (IoTryReleasePages.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     IopMcReferenceBufferEntry @ 0x14059FBEC (IopMcReferenceBufferEntry.c)
 */

ULONG_PTR __fastcall IopMcFindNextTableEntryForUnlock(__int64 *a1, _QWORD *a2)
{
  ULONG_PTR v2; // rbx
  KIRQL v6; // al
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r10
  __int64 v11; // rdx
  unsigned __int64 v12; // r11
  __int64 v13; // rax
  unsigned __int64 i; // r8
  unsigned __int64 v15; // rbx
  _QWORD *v16; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0LL;
  *a2 = 0LL;
  if ( *((_BYTE *)a1 + 16) )
    return 0LL;
  v6 = ExAcquireSpinLockShared(&dword_140F8C4E4);
  v7 = qword_140F8C4E8;
  v8 = 0LL;
  v9 = v6;
  if ( qword_140F8C4E8 )
  {
    v10 = *a1;
    do
    {
      v11 = *(unsigned int *)(v7 + 24);
      v12 = v7 - (unsigned int)(32 * (v11 + 3));
      v13 = *(_QWORD *)(v12 + 88);
      if ( v10 < *(_QWORD *)(v13 + 8 * v11) )
      {
        v7 = *(_QWORD *)v7;
      }
      else if ( v10 > *(_QWORD *)(v13 + 8 * v11) || a1[1] >= v12 )
      {
        v7 = *(_QWORD *)(v7 + 8);
      }
      else
      {
        v8 = v7;
        v7 = *(_QWORD *)v7;
      }
    }
    while ( v7 );
    if ( v8 )
    {
      i = *(_QWORD *)(v8 + 8);
      v15 = v8;
      if ( i )
      {
        v16 = *(_QWORD **)i;
        if ( *(_QWORD *)i )
        {
          do
          {
            i = (unsigned __int64)v16;
            v16 = (_QWORD *)*v16;
          }
          while ( v16 );
        }
      }
      else
      {
        for ( i = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)i == v8 )
            break;
          v8 = i;
        }
      }
      if ( !i
        || *(_QWORD *)(*(_QWORD *)(i - (unsigned int)(32 * (*(_DWORD *)(i + 24) + 3)) + 88)
                     + 8LL * *(unsigned int *)(i + 24)) != v10 )
      {
        *((_BYTE *)a1 + 16) = 1;
      }
      v2 = v15 - (unsigned int)(32 * (*(_DWORD *)(v15 + 24) + 3));
      a1[1] = v2;
      IopMcReferenceBufferEntry(v2);
      if ( (*(_DWORD *)(v2 + 12) & 1) == 0 )
        _InterlockedOr((volatile signed __int32 *)(v2 + 12), 1u);
      *a2 = *(_QWORD *)(v2 + 56);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd(&dword_140F8C4E4, 0xBFFFFFFF);
    _InterlockedDecrement(&dword_140F8C4E4);
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_140F8C4E4, retaddr);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v9);
  __writecr8(v9);
  return v2;
}
