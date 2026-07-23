/*
 * XREFs of MiUnloadApproved @ 0x1407E7E7C
 * Callers:
 *     MiDereferenceImports @ 0x1407E7990 (MiDereferenceImports.c)
 * Callees:
 *     RtlPcToFileHeader @ 0x140447DA0 (RtlPcToFileHeader.c)
 *     VfIsVerifierEnabled @ 0x1404B71A0 (VfIsVerifierEnabled.c)
 *     MiGetBaseLoaderPortion @ 0x1404C96FC (MiGetBaseLoaderPortion.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     DifDllUnloadWrapper @ 0x1406A5310 (DifDllUnloadWrapper.c)
 *     RtlFindExportedRoutineByName @ 0x140907090 (RtlFindExportedRoutineByName.c)
 */

__int64 __fastcall MiUnloadApproved(__int64 a1)
{
  __int16 v1; // ax
  unsigned int v4; // edx
  unsigned int v5; // ebx
  __int64 (*BugCheckParameter4)(void); // rsi
  void *v7; // rcx
  int v8; // eax
  PVOID BaseOfImage; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_WORD *)(a1 + 108);
  if ( v1 != 1 )
  {
    *(_WORD *)(a1 + 108) = v1 - 1;
    return 0LL;
  }
  if ( (*(_DWORD *)(MiGetBaseLoaderPortion(a1) + 184) & 0x80u) != 0 )
    return v4;
  v5 = 0;
  BugCheckParameter4 = (__int64 (*)(void))RtlFindExportedRoutineByName(*(PVOID *)(a1 + 48), "DllUnload");
  if ( !BugCheckParameter4 )
    return 0LL;
  v7 = *(void **)(a1 + 48);
  BaseOfImage = 0LL;
  RtlPcToFileHeader(v7, &BaseOfImage);
  if ( BaseOfImage != *(PVOID *)(a1 + 48) )
    KeBugCheckEx(0x139u, 0xAuLL, 0LL, 0LL, (ULONG_PTR)BugCheckParameter4);
  if ( (unsigned int)VfIsVerifierEnabled() )
    v8 = DifDllUnloadWrapper((__int64)BugCheckParameter4);
  else
    v8 = BugCheckParameter4();
  LOBYTE(v5) = v8 >= 0;
  return v5;
}
