/*
 * XREFs of ?Create@CPoolBufferResource@@SAJPEAVCFlipManager@@_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAVCPoolBufferResourceState@@@Z @ 0x140050CFC
 * Callers:
 *     ?AddPoolBuffer@CFlipManager@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z @ 0x140050BE0 (-AddPoolBuffer@CFlipManager@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x14000A0E0 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0HDGCEDEG@@@SAPEAX_K@Z @ 0x140050F8C (--2-$DXGQUOTAALLOCATOR@$0BAA@$0HDGCEDEG@@@SAPEAX_K@Z.c)
 *     ??0CFlipResource@@QEAA@_KPEAVCFlipPropertySet@@@Z @ 0x140050FB8 (--0CFlipResource@@QEAA@_KPEAVCFlipPropertySet@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     DxgkGetSharedAllocationObjectType @ 0x1403D0EF0 (DxgkGetSharedAllocationObjectType.c)
 */

__int64 __fastcall CPoolBufferResource::Create(
        struct CFlipManager *a1,
        unsigned __int64 a2,
        void *a3,
        const struct _LUID *a4,
        struct CFlipPropertySet *a5,
        struct CPoolBufferResourceState **a6)
{
  CFlipResource *v7; // rdi
  PVOID v8; // r14
  struct _OBJECT_TYPE *SharedAllocationObjectType; // rax
  NTSTATUS v13; // eax
  PVOID v14; // rsi
  NTSTATUS v15; // ebx
  NTSTATUS v17; // eax
  __int64 v18; // r9
  CFlipResource *Pool2; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  char v22; // cl
  HANDLE Handle; // [rsp+30h] [rbp-50h] BYREF
  PVOID Object; // [rsp+38h] [rbp-48h] BYREF
  PVOID v25; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF

  v7 = 0LL;
  Handle = 0LL;
  v8 = 0LL;
  SharedAllocationObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedAllocationObjectType();
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(a3, 0xF0000u, SharedAllocationObjectType, 1, &Object, 0LL);
  v14 = Object;
  v15 = v13;
  if ( v13 >= 0 )
  {
    memset(&ObjectAttributes.Length + 1, 0, 20);
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    v15 = ZwCreateEvent(&Handle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 1u);
    if ( v15 >= 0 )
    {
      v25 = 0LL;
      v17 = ObReferenceObjectByHandle(Handle, 0x100002u, (POBJECT_TYPE)ExEventObjectType, 0, &v25, 0LL);
      v8 = v25;
      v15 = v17;
      if ( v17 >= 0 )
      {
        Pool2 = (CFlipResource *)ExAllocatePool2(257LL, 96LL, 1919042374LL, v18);
        v7 = Pool2;
        if ( Pool2 )
        {
          CFlipResource::CFlipResource(Pool2, a2, a5);
          v20 = (__int64)*a4;
          *((_DWORD *)v7 + 20) = 0;
          *((_QWORD *)v7 + 9) = v20;
          *(_QWORD *)v7 = &CPoolBufferResource::`vftable';
          *((_QWORD *)v7 + 6) = a1;
          *((_QWORD *)v7 + 7) = v14;
          *((_QWORD *)v7 + 8) = v8;
          *((_QWORD *)v7 + 11) = _InterlockedIncrement64(&CPoolBufferResource::s_nextUniqueId);
          v21 = DXGQUOTAALLOCATOR<256,1935819590>::operator new();
          if ( v21 )
          {
            v22 = *(_BYTE *)(v21 + 32);
            *(_QWORD *)v21 = &CFlipResourceState::`vftable';
            *(_QWORD *)(v21 + 24) = v7;
            *(_BYTE *)(v21 + 32) = v22 & 0xF0 | 1;
            *(_QWORD *)(v21 + 16) = v21 + 8;
            *(_QWORD *)(v21 + 8) = v21 + 8;
            ++*(_DWORD *)(*(_QWORD *)(v21 + 24) + 24LL);
            *(_QWORD *)v21 = &CPoolBufferResourceState::`vftable';
            *a6 = (struct CPoolBufferResourceState *)v21;
          }
          else
          {
            v15 = -1073741801;
          }
          goto LABEL_6;
        }
        v7 = 0LL;
        v15 = -1073741801;
      }
    }
  }
  if ( v14 )
    ObfDereferenceObject(v14);
  if ( v8 )
    ObfDereferenceObject(v8);
LABEL_6:
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( v7 )
    CFlipResource::Release(v7);
  return (unsigned int)v15;
}
