/*
 * XREFs of VfBuildMdlFromScatterGatherList @ 0x140B87950
 * Callers:
 *     <none>
 * Callees:
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     VF_MARK_SCATTER_GATHER_LIST @ 0x140B87150 (VF_MARK_SCATTER_GATHER_LIST.c)
 *     VF_UNMARK_SCATTER_GATHER_LIST @ 0x140B87170 (VF_UNMARK_SCATTER_GATHER_LIST.c)
 *     ViGetAdapterInformationInternal @ 0x140B8AE98 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140B8B0EC (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfBuildMdlFromScatterGatherList(int a1, __int64 a2, struct _MDL *a3, PMDL *a4)
{
  __int64 v8; // rsi
  __int64 RealDmaAdapter; // r13
  __int64 AdapterInformationInternal; // rax
  _QWORD *v11; // rbx
  KSPIN_LOCK *v12; // rdi
  KIRQL v13; // al
  _QWORD *i; // rcx
  _QWORD *v15; // rcx
  int v16; // edi
  __int64 v17; // rbp
  PMDL Mdl; // rax
  PMDL v19; // rbx

  v8 = 0LL;
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( AdapterInformationInternal )
  {
    if ( *(_QWORD *)(a2 + 8) == -559026163LL )
    {
      v11 = (_QWORD *)(AdapterInformationInternal + 88);
      if ( (_QWORD *)*v11 != v11 )
      {
        v12 = (KSPIN_LOCK *)(AdapterInformationInternal + 104);
        v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(AdapterInformationInternal + 104));
        for ( i = (_QWORD *)*v11; ; i = (_QWORD *)v15[9] )
        {
          v15 = i - 9;
          if ( v11 == v15 + 9 )
            break;
          if ( v15[8] == a2 )
          {
            v8 = v15[12];
            break;
          }
        }
        KeReleaseSpinLock(v12, v13);
      }
    }
  }
  VF_UNMARK_SCATTER_GATHER_LIST(a2, v8);
  v16 = guard_dispatch_icall_no_overrides(RealDmaAdapter, a2);
  VF_MARK_SCATTER_GATHER_LIST(a2, v8);
  if ( v16 >= 0 && *a4 == a3 && v8 )
  {
    if ( *(_QWORD *)(v8 + 40) )
    {
      return (unsigned int)-1073741709;
    }
    else
    {
      v17 = *(_QWORD *)(v8 + 56);
      Mdl = IoAllocateMdl(0LL, *(_DWORD *)(v17 + 40), 0, 0, 0LL);
      v19 = Mdl;
      if ( Mdl )
      {
        *(_QWORD *)(v8 + 40) = Mdl;
        memmove(&Mdl[1], (const void *)(v17 + 48), 8 * ((unsigned __int64)*(unsigned int *)(v17 + 40) >> 12));
        v19->ByteOffset += a3->ByteOffset;
        v19->ByteCount -= v19->ByteOffset;
        v19->MdlFlags |= 2u;
        *a4 = v19;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return (unsigned int)v16;
}
