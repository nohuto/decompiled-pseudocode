/*
 * XREFs of ?Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJPEAV1@PEAXPEAPEAVIDxgkCompositionObject@@@Z3PEAPEAX@Z @ 0x140035F74
 * Callers:
 *     ?Create@CompositionSurfaceObject@@SAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAPEAX@Z @ 0x140035F30 (-Create@CompositionSurfaceObject@@SAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAPEAX@Z.c)
 *     NtTokenManagerCreateFlipObjectReturnTokenHandle @ 0x140049D20 (NtTokenManagerCreateFlipObjectReturnTokenHandle.c)
 *     NtTokenManagerCreateCompositionTokenHandle @ 0x140052780 (NtTokenManagerCreateCompositionTokenHandle.c)
 *     NtTokenManagerCreateFlipObjectTokenHandle @ 0x140099730 (NtTokenManagerCreateFlipObjectTokenHandle.c)
 *     NtFlipObjectCreate @ 0x14009DF20 (NtFlipObjectCreate.c)
 *     ?Create@DXGVAILOBJECT@@SAJPEAPEAV1@@Z @ 0x1402063EC (-Create@DXGVAILOBJECT@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkCompositionObject::Create(
        __int64 a1,
        __int64 a2,
        ACCESS_MASK a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 (__fastcall *a7)(PVOID, __int64, char *),
        __int64 a8,
        void **Handle)
{
  int v10; // ebx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // eax
  NTSTATUS LocallyUniqueId; // eax
  PVOID v15; // rcx
  int v16; // eax
  PVOID Object[3]; // [rsp+50h] [rbp-18h] BYREF

  Object[0] = 0LL;
  if ( (unsigned int)(a5 - 1) <= 4 )
  {
    LOBYTE(a4) = 1;
    v10 = ObCreateObject(a1, g_pDxgkCompositionObjectType, a2, a4, 0LL, a6, 0, 0, Object);
    if ( v10 >= 0 )
    {
      CurrentProcess = PsGetCurrentProcess();
      ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
      *((_DWORD *)Object[0] + 2) = ProcessSessionId;
      LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)Object[0] + 3);
      v15 = Object[0];
      v10 = LocallyUniqueId;
      if ( LocallyUniqueId < 0 || (v16 = a7(Object[0], a8, (char *)Object[0] + 16), v15 = Object[0], v10 = v16, v16 < 0) )
        ObfDereferenceObject(v15);
      else
        return (unsigned int)ObInsertObject(Object[0], 0LL, a3, 0, 0LL, Handle);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v10;
}
