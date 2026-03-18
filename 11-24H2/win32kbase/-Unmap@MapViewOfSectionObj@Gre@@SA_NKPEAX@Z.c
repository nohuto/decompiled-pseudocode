/*
 * XREFs of ?Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z @ 0x1400B7FF4
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x140037010 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x140038F80 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bUnMapImmediate@SURFACE@@QEAAHXZ @ 0x1400B788C (-bUnMapImmediate@SURFACE@@QEAAHXZ.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@XZ @ 0x1400B7AD0 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@XZ.c)
 *     ?Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ @ 0x1400B8230 (-Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall Gre::MapViewOfSectionObj::Unmap(int a1, void *a2)
{
  NTSTATUS v2; // ebx
  PEPROCESS Process; // [rsp+40h] [rbp+18h] BYREF

  Process = 0LL;
  v2 = PsLookupProcessByProcessId((HANDLE)a1, &Process);
  if ( v2 >= 0 )
  {
    v2 = MmUnmapViewOfSection(Process);
    ObfDereferenceObject(Process);
  }
  return v2 >= 0;
}
