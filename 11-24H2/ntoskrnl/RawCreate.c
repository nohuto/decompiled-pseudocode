/*
 * XREFs of RawCreate @ 0x1408AD9DC
 * Callers:
 *     RawDispatch @ 0x1408AD4A0 (RawDispatch.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     RawInitiateDeleteVolume @ 0x14047F73C (RawInitiateDeleteVolume.c)
 *     IoSetLinkShareAccess @ 0x1408ADB90 (IoSetLinkShareAccess.c)
 *     IoCheckLinkShareAccess @ 0x1408ADD00 (IoCheckLinkShareAccess.c)
 */

__int64 __fastcall RawCreate(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, PIRP Irp, __int64 a3)
{
  __int64 v6; // r8
  int v7; // ecx
  int v8; // eax
  int v9; // r12d
  int v10; // r14d
  bool v11; // zf
  NTSTATUS v12; // esi

  ExAcquireFastMutex((PKGUARDED_MUTEX)&AdvancedHeader[2]);
  v6 = *(_QWORD *)(a3 + 48);
  if ( v6 && (*(_WORD *)(v6 + 88) || *(_QWORD *)(v6 + 64))
    || (v7 = *(_DWORD *)(a3 + 16), (v7 & 0xFF000000) != 0x1000000)
    || (v7 & 1) != 0 )
  {
    v12 = -1073741811;
    goto LABEL_19;
  }
  v8 = *(_DWORD *)&AdvancedHeader[1].NodeTypeCode;
  if ( (v8 & 1) != 0 )
  {
    v12 = -1073741790;
    goto LABEL_19;
  }
  if ( (v8 & 2) != 0 )
  {
    v12 = -1073741202;
    goto LABEL_19;
  }
  v9 = *(unsigned __int16 *)(a3 + 26);
  v10 = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 16LL);
  v11 = *(_DWORD *)&AdvancedHeader[1].Flags == 0;
  if ( *(_DWORD *)&AdvancedHeader[1].Flags )
  {
    v12 = IoCheckLinkShareAccess(v10, v9, v6, (int)AdvancedHeader + 132, 0LL, 1);
    if ( v12 >= 0 )
    {
      v11 = *(_DWORD *)&AdvancedHeader[1].Flags == 0;
      goto LABEL_11;
    }
LABEL_19:
    Irp->IoStatus.Information = 0LL;
    goto LABEL_14;
  }
LABEL_11:
  if ( v11 )
    IoSetLinkShareAccess(v10, v9, *(_QWORD *)(a3 + 48), (_DWORD)AdvancedHeader + 132, 0LL, 0);
  ++*(_DWORD *)&AdvancedHeader[1].Flags;
  v12 = 0;
  ++LODWORD(AdvancedHeader[1].Resource);
  *(_QWORD *)(*(_QWORD *)(a3 + 48) + 16LL) = AdvancedHeader[1].FileContextSupportPointer;
  Irp->IoStatus.Information = 1LL;
  *(_DWORD *)(*(_QWORD *)(a3 + 48) + 80LL) |= 8u;
  *(_QWORD *)(*(_QWORD *)(a3 + 48) + 24LL) = AdvancedHeader;
LABEL_14:
  if ( *(_DWORD *)&AdvancedHeader[1].Flags || !RawInitiateDeleteVolume(AdvancedHeader, 0, 1) )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&AdvancedHeader[2]);
  Irp->IoStatus.Status = v12;
  IofCompleteRequest(Irp, 1);
  return (unsigned int)v12;
}
