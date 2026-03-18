/*
 * XREFs of MiUnloadApproved @ 0x1407E78AC
 * Callers:
 *     MiDereferenceImports @ 0x1407E73C0 (MiDereferenceImports.c)
 * Callees:
 *     RtlPcToFileHeader @ 0x140452CF0 (RtlPcToFileHeader.c)
 *     VfIsVerifierEnabled @ 0x1404BC290 (VfIsVerifierEnabled.c)
 *     MiGetBaseLoaderPortion @ 0x1404D0508 (MiGetBaseLoaderPortion.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     DifDllUnloadWrapper @ 0x1406A4310 (DifDllUnloadWrapper.c)
 *     RtlFindExportedRoutineByName @ 0x1408B0E30 (RtlFindExportedRoutineByName.c)
 */

__int64 __fastcall MiUnloadApproved(__int64 a1)
{
  __int16 v1; // ax
  unsigned int v4; // edx
  unsigned int v5; // ebx
  __int64 (*BugCheckParameter4)(void); // rsi
  unsigned __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_WORD *)(a1 + 108);
  if ( v1 != 1 )
  {
    *(_WORD *)(a1 + 108) = v1 - 1;
    return 0LL;
  }
  if ( (*(_DWORD *)(MiGetBaseLoaderPortion(a1) + 184) & 0x80u) != 0 )
    return v4;
  v5 = 0;
  BugCheckParameter4 = (__int64 (*)(void))RtlFindExportedRoutineByName(*(_QWORD *)(a1 + 48), "DllUnload");
  if ( !BugCheckParameter4 )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 48);
  v9 = 0LL;
  RtlPcToFileHeader(v7, &v9);
  if ( v9 != *(_QWORD *)(a1 + 48) )
    KeBugCheckEx(0x139u, 0xAuLL, 0LL, 0LL, (ULONG_PTR)BugCheckParameter4);
  if ( (unsigned int)VfIsVerifierEnabled() )
    v8 = DifDllUnloadWrapper((__int64)BugCheckParameter4);
  else
    v8 = BugCheckParameter4();
  LOBYTE(v5) = v8 >= 0;
  return v5;
}
