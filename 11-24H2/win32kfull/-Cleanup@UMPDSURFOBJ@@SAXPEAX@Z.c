/*
 * XREFs of ?Cleanup@UMPDSURFOBJ@@SAXPEAX@Z @ 0x1400DC630
 * Callers:
 *     ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400DBEDC (--1UMPDSURFOBJ@@QEAA@XZ.c)
 *     NtGdiEngCheckAbort @ 0x1400DD2C0 (NtGdiEngCheckAbort.c)
 * Callees:
 *     <none>
 */

void __fastcall UMPDSURFOBJ::Cleanup(_QWORD *a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1[2];
  if ( v2 )
    PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v2);
  if ( *((_DWORD *)a1 + 2) )
    EngUnlockSurface((SURFOBJ *)*a1);
}
