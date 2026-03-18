/*
 * XREFs of NtFlipObjectCreate @ 0x14009BBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJPEAV1@PEAXPEAPEAVIDxgkCompositionObject@@@Z3PEAPEAX@Z @ 0x140035FE0 (-Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJP.c)
 *     RtlCopyToUser @ 0x14018AE14 (RtlCopyToUser.c)
 */

__int64 __fastcall NtFlipObjectCreate(__int64 a1, void *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r9
  int v6; // ebx
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  Handle = 0LL;
  KeEnterCriticalRegion();
  if ( a2 )
  {
    LOBYTE(v4) = 1;
    v6 = DxgkCompositionObject::Create(
           v4,
           0LL,
           0xF0000u,
           v5,
           4,
           408,
           (__int64 (__fastcall *)(PVOID, __int64, char *))FlipManagerObject::ObjectInit,
           a1,
           &Handle);
    if ( v6 >= 0 )
    {
      RtlCopyToUser(a2, &Handle, 8uLL);
      Handle = 0LL;
    }
  }
  else
  {
    v6 = -1073741811;
  }
  if ( Handle )
    ObCloseHandle(Handle, 1);
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
