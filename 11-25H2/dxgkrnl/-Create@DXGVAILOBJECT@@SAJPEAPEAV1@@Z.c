/*
 * XREFs of ?Create@DXGVAILOBJECT@@SAJPEAPEAV1@@Z @ 0x1401FFCDC
 * Callers:
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1401E7624 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x14002F690 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 *     ?Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJPEAV1@PEAXPEAPEAVIDxgkCompositionObject@@@Z3PEAPEAX@Z @ 0x140035FE0 (-Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJP.c)
 *     ?AllocateDefaultSecurityDescriptor@DXGVAILOBJECT@@SAJKPEAPEAX@Z @ 0x1401FF2A4 (-AllocateDefaultSecurityDescriptor@DXGVAILOBJECT@@SAJKPEAPEAX@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::Create(struct DXGVAILOBJECT **a1)
{
  int DefaultSecurityDescriptor; // eax
  __int64 v3; // r9
  void *v4; // r14
  __int64 v5; // rdi
  int v6; // eax
  HANDLE v7; // rcx
  NTSTATUS v8; // eax
  _QWORD v10[6]; // [rsp+50h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF
  void *v12; // [rsp+B8h] [rbp+38h] BYREF
  struct DXGVAILOBJECT *v13; // [rsp+C0h] [rbp+40h] BYREF

  *a1 = 0LL;
  v12 = 0LL;
  Handle = 0LL;
  DefaultSecurityDescriptor = DXGVAILOBJECT::AllocateDefaultSecurityDescriptor(0xC0060000, (struct _ACL **)&v12);
  v4 = v12;
  LODWORD(v5) = DefaultSecurityDescriptor;
  if ( DefaultSecurityDescriptor >= 0 )
  {
    v10[0] = 48LL;
    memset(&v10[1], 0, 24);
    v10[4] = v12;
    v10[5] = 0LL;
    v6 = DxgkCompositionObject::Create(
           0LL,
           (__int64)v10,
           0xC0060000,
           v3,
           3,
           144,
           (__int64 (__fastcall *)(PVOID, __int64, char *))DXGVAILOBJECT::ObjectInit,
           0LL,
           &Handle);
    LODWORD(v5) = v6;
    if ( v6 >= 0 )
    {
      v7 = Handle;
      v13 = 0LL;
      *a1 = 0LL;
      v8 = DxgkCompositionObject::ResolveHandle(v7, 0x60000u, 1, 3, &v13);
      v5 = v8;
      if ( v8 < 0 )
      {
        WdLogSingleEntry1(3LL, v8);
        WdLogGlobalForLineNumber = 697;
        WdLogSingleEntry1(3LL, v5);
        WdLogGlobalForLineNumber = 173;
      }
      else
      {
        *a1 = v13;
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, v6);
      WdLogGlobalForLineNumber = 160;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, DefaultSecurityDescriptor);
    WdLogGlobalForLineNumber = 134;
  }
  if ( Handle )
    ObCloseHandle(Handle, 1);
  if ( v4 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
  return (unsigned int)v5;
}
