/*
 * XREFs of NtDesktopCaptureBits @ 0x140223AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14007493C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14007496C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     ?DesktopCaptureBits@CConnection@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x14022412C (-DesktopCaptureBits@CConnection@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z.c)
 */

__int64 __fastcall NtDesktopCaptureBits(
        void *Src,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        HANDLE Handle,
        HANDLE a8)
{
  NTSTATUS v9; // esi
  HANDLE v10; // r15
  PVOID v11; // r14
  HANDLE v12; // r12
  PVOID v13; // rbx
  __int64 v14; // rcx
  DirectComposition::CConnection *DefaultConnection; // r12
  unsigned int v16; // edx
  PVOID Object; // [rsp+50h] [rbp-48h] BYREF
  PVOID v19; // [rsp+58h] [rbp-40h]
  __int64 v20; // [rsp+60h] [rbp-38h]

  v9 = 0;
  v19 = 0LL;
  v10 = 0LL;
  v20 = 0LL;
  v11 = 0LL;
  v12 = Handle;
  if ( !Handle || !a8 )
    v9 = -1073741811;
  if ( v9 >= 0 )
  {
    if ( Src )
    {
      Object = 0LL;
      RtlCopyFromUser(&Object, Src, 8uLL);
      v13 = Object;
      v19 = Object;
    }
    else
    {
      Handle = (HANDLE)0xFFFFFFFE00000000LL;
      v13 = (PVOID)0xFFFFFFFE00000000LL;
    }
    Handle = 0LL;
    v9 = ObReferenceObjectByHandle(v12, 0x100002u, (POBJECT_TYPE)ExEventObjectType, 1, &Handle, 0LL);
    v10 = Handle;
    if ( v9 >= 0 )
    {
      Object = 0LL;
      v9 = ObReferenceObjectByHandle(a8, 6u, MmSectionObjectType, 1, &Object, 0LL);
      v11 = Object;
    }
    if ( v9 >= 0 )
    {
      KeEnterCriticalRegion();
      DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v14);
      if ( DefaultConnection )
      {
        v9 = DirectComposition::CConnection::DesktopCaptureBits(DefaultConnection, v13, a2, a3, a4, a5, a6, v10, v11);
        DirectComposition::CConnection::Release(DefaultConnection, v16);
      }
      else
      {
        v9 = -1073741790;
      }
      KeLeaveCriticalRegion();
    }
  }
  if ( v10 )
    ObfDereferenceObject(v10);
  if ( v11 )
    ObfDereferenceObject(v11);
  return (unsigned int)v9;
}
